
void FUN_00682df0(void)

{
  int iVar1;

  switch(DAT_007d2d18) {
  case 0x22:
    thunk_FUN_006829b0();
    return;
  case 0x25:
    thunk_FUN_00682cf0();
    return;
  case 0x29:
    thunk_FUN_00682810(0x29);
    thunk_FUN_00683600();
    thunk_FUN_00682810(0x39);
    return;
  case 0x37:
    thunk_FUN_00682d30();
    return;
  case 0x3c:
    thunk_FUN_00682d70();
    return;
  }
  iVar1 = thunk_FUN_006686f0(DAT_007d2d18);
  if (-1 < iVar1) {
    thunk_FUN_00682850();
    return;
  }
  thunk_FUN_006826a0(DAT_007d2d18);
  return;
}

