
void thunk_FUN_00683600(void)

{
  if (DAT_007d2d18 == 0x1d) {
    thunk_FUN_006827a0();
  }
  thunk_FUN_00683590();
  if (DAT_007d2d18 == 0x13) {
    thunk_FUN_00682810(0x13);
    thunk_FUN_00683600();
    thunk_FUN_00682810(0xf);
    thunk_FUN_00683600();
    thunk_FUN_006823e0(0x13,(float *)0x3);
  }
  return;
}

