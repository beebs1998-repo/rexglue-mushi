//=============================================================================
// ReXGlue Generated - mushi Module Registry
//
// HAND-MERGED: codegen (--target <name>) rewrites this file for the LAST
// target only; the committed version registers all four module DLLs.
// scripts/codegen_all.ps1 restores it (git checkout --) after each run.
//=============================================================================

#include <rex/system/kernel_state.h>

void RegisterRecompiledModules(rex::system::KernelState* kernel_state) {

  kernel_state->RegisterRecompiledModule(
      "dat12.bin",
      "dat12.bin",
      "mushi_dat12");

  kernel_state->RegisterRecompiledModule(
      "dat112.bin",
      "dat112.bin",
      "mushi_dat112");

  kernel_state->RegisterRecompiledModule(
      "dat163.bin",
      "dat163.bin",
      "mushi_dat163");

  kernel_state->RegisterRecompiledModule(
      "dat111.bin",
      "dat111.bin",
      "mushi_dat111");

}
