
void FUN_00683070(void)

{
  int iVar1;

  thunk_FUN_00682ec0();
  iVar1 = thunk_FUN_00682fb0(DAT_007d2d18);
  while (iVar1 != 0) {
    if (DAT_007d2d18 == 0x16) {
      thunk_FUN_00683010();
    }
    else if (DAT_007d2d18 == 0x2c) {
      thunk_FUN_00683040();
    }
    else if (DAT_007d2d18 == 0x30) {
      thunk_FUN_00682fe0();
    }
    iVar1 = thunk_FUN_00682fb0(DAT_007d2d18);
  }
  return;
}

