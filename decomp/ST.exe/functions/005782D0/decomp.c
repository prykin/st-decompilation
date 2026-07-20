
void FUN_005782d0(void)

{
  DebugSystemC *this;
  int iVar1;
  
  this = (DebugSystemC *)Library::MSVCRT::FUN_0072e530(0x24);
  if (this == (DebugSystemC *)0x0) {
    DAT_00811644 = (DebugSystemC *)0x0;
  }
  else {
    DAT_00811644 = DebugSystemC::DebugSystemC(this,g_appClass_00806728);
  }
  DAT_00811644[8].vtable = (DebugSystemCVTable *)0x0;
  iVar1 = (*DAT_00811644->vtable->InitSystem)((SystemClassTy *)DAT_00811644);
  if (iVar1 != 0) {
    thunk_FUN_00578370();
  }
  iVar1 = AppClassTy::AddSystem(g_appClass_00806728,(int *)DAT_00811644,0);
  if (iVar1 != 0) {
    thunk_FUN_00578370();
    DAT_00811644[8].vtable = (DebugSystemCVTable *)0x1;
    return;
  }
  DAT_00811644[8].vtable = (DebugSystemCVTable *)0x1;
  return;
}

