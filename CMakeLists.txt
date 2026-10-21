# mushi - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(mushi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use the bundled ReXGlue SDK (git submodule at thirdparty/rexglue-sdk).
# Override with -DREXSDK_DIR=<path> to build against another SDK tree.
set(REXSDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/rexglue-sdk"
    CACHE PATH "Path to the bundled ReXGlue SDK")

include(generated/rexglue.cmake)

# Sources
set(MUSHI_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(mushi WIN32 ${MUSHI_SOURCES})
else()
    add_executable(mushi ${MUSHI_SOURCES})
endif()

# Recompiled entrypoint is built as an OBJECT library and linked into the host.
# Auto-codegen is intentionally disabled (see generated/rexglue.cmake): the four
# game-mode modules share guest base 0x88000000, so a single combined codegen run
# is rejected by the overlap check. Code is generated per target and committed.
if(REXGLUE_ENTRYPOINT_GENERATED_SOURCES)
    add_library(mushi_recomp OBJECT
        ${REXGLUE_ENTRYPOINT_GENERATED_SOURCES})
    target_include_directories(mushi_recomp PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${REXGLUE_ENTRYPOINT_INCLUDE_DIR}
    )
    target_link_libraries(mushi_recomp PRIVATE rex::runtime)
    rexglue_apply_target_settings(mushi_recomp)
    rexglue_apply_recomp_settings(mushi_recomp
        "${REXGLUE_ENTRYPOINT_INCLUDE_DIR}/mushi_pch.h")
    target_link_libraries(mushi PRIVATE
        mushi_recomp)
endif()

target_include_directories(mushi PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${REXGLUE_ENTRYPOINT_INCLUDE_DIR}
)
target_link_libraries(mushi PRIVATE rex::runtime imgui::imgui)
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/metadata/icons")
    rexglue_embed_metadata(mushi
        DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/metadata/icons"
        PREFIX "icons")
endif()
rexglue_configure_target(mushi GPU_PLUGINS xenos)

# Stage the settings template next to the executable: exe_dir/mushi.toml is the
# live config the game reads/writes, and a missing file means the game runs on
# compiled-in defaults (no keybinds/mnk, no log rotation, no pinned cvars).
# Copy-if-missing only - the live file is never overwritten (F4 saves and local
# edits survive every build). launch.bat applies the same rule.
add_custom_command(TARGET mushi POST_BUILD
    COMMAND ${CMAKE_COMMAND}
        -DTEMPLATE=${CMAKE_CURRENT_SOURCE_DIR}/mushi.toml
        -DDIR=$<TARGET_FILE_DIR:mushi>
        -P ${CMAKE_CURRENT_SOURCE_DIR}/scripts/stage_config.cmake
    COMMENT "Staging mushi.toml (if missing)"
    VERBATIM)
