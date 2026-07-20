
void FUN_00578370(void)

{
  if (DAT_00811644 != (HoloTy *)0x0) {
    if (*(int *)((int)&DAT_00811644->field_001F + 1) == 1) {
      FUN_006e4b80(g_appClass_00806728,(int)DAT_00811644);
      FUN_006e4d20(g_appClass_00806728,(int)DAT_00811644);
    }
    (**(code **)(*(int *)DAT_00811644 + 4))();
    Library::MSVCRT::FUN_0072e2b0(DAT_00811644);
    DAT_00811644 = (HoloTy *)0x0;
  }
  return;
}

