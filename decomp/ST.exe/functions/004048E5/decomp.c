
void thunk_FUN_00683590(void)

{
  int iVar1;
  
  thunk_FUN_006834a0();
  iVar1 = thunk_FUN_006834f0(DAT_007d2d18);
  while (iVar1 != 0) {
    if (DAT_007d2d18 == 0x34) {
      thunk_FUN_00683520();
    }
    else if (DAT_007d2d18 == 0x43) {
      thunk_FUN_00683560();
    }
    iVar1 = thunk_FUN_006834f0(DAT_007d2d18);
  }
  return;
}

