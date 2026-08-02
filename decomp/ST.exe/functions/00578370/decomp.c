
void FUN_00578370(void)

{
  if (g_debugSystem_00811644 != nullptr) {
    if (g_debugSystem_00811644->field_0020 == 1) {
      FUN_006e4b80(g_appClass_00806728,(int)g_debugSystem_00811644);
      FUN_006e4d20(g_appClass_00806728,g_debugSystem_00811644);
    }
    g_debugSystem_00811644->vfunc_04();
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)g_debugSystem_00811644);
    g_debugSystem_00811644 = nullptr;
  }
  return;
}

