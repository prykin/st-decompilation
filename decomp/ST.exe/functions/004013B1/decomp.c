
void thunk_FUN_005782d0(void)

{
  void *this;
  int iVar1;
  
  this = (void *)FUN_0072e530(0x24);
  if (this == (void *)0x0) {
    DAT_00811644 = (int *)0x0;
  }
  else {
    DAT_00811644 = thunk_FUN_005781c0(this,DAT_00806728);
  }
  DAT_00811644[8] = 0;
  iVar1 = (**(code **)*DAT_00811644)();
  if (iVar1 != 0) {
    thunk_FUN_00578370();
  }
  iVar1 = FUN_006e4650(DAT_00811644,0);
  if (iVar1 != 0) {
    thunk_FUN_00578370();
    DAT_00811644[8] = 1;
    return;
  }
  DAT_00811644[8] = 1;
  return;
}

