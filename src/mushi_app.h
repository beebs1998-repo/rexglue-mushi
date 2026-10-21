// mushi - ReXGlue Recompiled Project
//
// Customize your app by overriding virtual hooks from rex::ReXApp.

#pragma once

#include <rex/rex_app.h>
#include <rex/chrono/clock.h>
#include <rex/ui/keybinds.h>
#include <chrono>

class MushiApp : public rex::ReXApp {
 public:
  using rex::ReXApp::ReXApp;

  static std::unique_ptr<rex::ui::WindowedApp> Create(
      rex::ui::WindowedAppContext& ctx) {
    return std::unique_ptr<MushiApp>(new MushiApp(ctx, "mushi",
        PPCImageConfig));
  }

  void OnPostSetup() override {
    // Set up frame stats provider for debug overlay (F3 to toggle)
    SetGuestFrameStats([this]() {
      return GetFrameStats();
    });

    // F11 toggles the fullscreen cvar; ReXApp's change callback on
    // "fullscreen" applies it to the window. The value is persisted to
    // mushi.toml by OnShutdown / OnWindowCloseRequested (see OnConfigurePaths
    // for the path capture; no save-on-exit exists in the SDK - dfkbl
    // iterations 32-34).
    rex::ui::RegisterBind("bind_fullscreen", "F11", "Toggle fullscreen", [] {
      rex::cvar::SetFlagByName("fullscreen",
                               REXCVAR_GET(fullscreen) ? "false" : "true");
    });
  }

  void OnConfigurePaths(rex::PathConfig& paths) override {
    // Capture the config file path so the cvar state can be saved on exit
    // (the SDK only persists cvars via the F4 "Save to config" button).
    config_path_ = paths.config_path;
  }

  bool OnWindowCloseRequested() override {
    // The close path ends in ReXApp::OnClosing hard-exiting the process
    // (std::_Exit after TerminateTitle) without running OnDestroy /
    // OnShutdown, so save the cvar state here - the last app-side hook
    // before that exit (Alt-F4, X button).
    if (!config_path_.empty()) {
      rex::cvar::SaveConfig(config_path_);
    }
    return true;
  }

  void OnShutdown() override {
    rex::ui::UnregisterBind("bind_fullscreen");
    if (!config_path_.empty()) {
      rex::cvar::SaveConfig(config_path_);
    }
  }

 private:
  std::filesystem::path config_path_;
  rex::ui::FrameStats GetFrameStats() {
    auto now = std::chrono::steady_clock::now();
    static auto last_frame = now;
    static uint64_t frame_count = 0;
    static double fps = 0.0;
    static double frame_time_ms = 0.0;

    auto elapsed = std::chrono::duration<double, std::milli>(now - last_frame).count();
    frame_time_ms = elapsed;
    last_frame = now;
    frame_count++;

    // Calculate FPS over 1 second windows
    static auto fps_window_start = now;
    static uint64_t frames_in_window = 0;
    static uint64_t frames_in_window_count = 0;
    frames_in_window_count++;

    auto window_elapsed = std::chrono::duration<double>(now - fps_window_start).count();
    if (window_elapsed >= 1.0) {
      fps = frames_in_window_count / window_elapsed;
      frames_in_window_count = 0;
    }

    rex::ui::FrameStats stats;
    stats.frame_time_ms = frame_time_ms;
    stats.fps = fps;
    stats.frame_count = frame_count;
    return stats;
  }

  // Override virtual hooks for customization:
  // void OnPostInitLogging() override {}
  // void OnPreSetup(rex::RuntimeConfig& config) override {}
  // void OnLoadXexImage(std::string& xex_image) override {}
  // void OnPostLoadXexImage() override {}
  // void OnCreateDialogs(rex::ui::ImGuiDrawer* drawer) override {}
  // std::unique_ptr<rex::ui::ImGuiDialog> CreateAchievementsOverlay() override;
  // std::unique_ptr<rex::ui::AchievementNotificationDialog>
  // CreateAchievementNotificationDialog() override;
  // void OnConfigurePaths(rex::PathConfig& paths) override;  // used for config_path capture
};
