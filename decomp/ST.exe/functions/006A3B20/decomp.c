
undefined * FUN_006a3b20(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *lp;
  undefined4 *lp_00;
  int iVar3;

  lp = (undefined4 *)&stack0xfffffffc;
  iVar3 = 0;
  DAT_00854970 = 0;
  lp_00 = (undefined4 *)&stack0xfffffffc;
  if (0 < param_1) {
    do {
      BVar1 = IsBadReadPtr(lp,4);
      if (BVar1 != 0) {
        return &DAT_00854970;
      }
      lp = (undefined4 *)*lp;
      iVar3 = iVar3 + 1;
      lp_00 = lp;
    } while (iVar3 < param_1);
  }
  DAT_008549f0 = &DAT_00854970;
  iVar3 = 0;
  do {
    BVar1 = IsBadReadPtr(lp_00,8);
    if (BVar1 != 0) {
      return &DAT_00854970;
    }
    iVar2 = Library::MSVCRT::FUN_00730c40(DAT_008549f0,0x7ec1c8);
    DAT_008549f0 = DAT_008549f0 + iVar2;
    iVar3 = iVar3 + 1;
    lp_00 = (undefined4 *)*lp_00;
  } while (iVar3 < 4);
  return &DAT_00854970;
}

