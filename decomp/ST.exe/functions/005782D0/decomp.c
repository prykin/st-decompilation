
void FUN_005782d0(void)

{
  DebugSystemC *this;
  int iVar2;
  int iVar1;

  this = (DebugSystemC *)Library::MSVCRT::FUN_0072e530(0x24);
  if (this == nullptr) {
    g_debugSystem_00811644 = nullptr;
  }
  else {
    g_debugSystem_00811644 = DebugSystemC::DebugSystemC(this,g_app_00806728);
  }
  g_debugSystem_00811644->field_0020 = 0;
  iVar2 = (*g_debugSystem_00811644->vtable->InitSystem)((SystemClassTy *)g_debugSystem_00811644);
  if (iVar2 != 0) {
    thunk_FUN_00578370();
  }
  iVar1 = AppClassTy::AddSystem(g_app_00806728,(int *)g_debugSystem_00811644,0);
  if (iVar1 != 0) {
    thunk_FUN_00578370();
    g_debugSystem_00811644->field_0020 = 1;
    return;
  }
  g_debugSystem_00811644->field_0020 = 1;
  return;
}

