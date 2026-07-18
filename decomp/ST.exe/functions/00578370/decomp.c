
void FUN_00578370(void)

{
  if (DAT_00811644 != (int *)0x0) {
    if (DAT_00811644[8] == 1) {
      FUN_006e4b80(DAT_00806728,(int)DAT_00811644);
      FUN_006e4d20(DAT_00806728,(int)DAT_00811644);
    }
    (**(code **)(*DAT_00811644 + 4))();
    FUN_0072e2b0(DAT_00811644);
    DAT_00811644 = (int *)0x0;
  }
  return;
}

