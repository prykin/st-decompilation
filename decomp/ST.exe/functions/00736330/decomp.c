
undefined4 __cdecl FUN_00736330(UINT param_1)

{
  UINT CodePage;
  undefined4 uVar1;
  BOOL BVar2;
  BYTE *local_2c;
  uint local_28;
  _cpinfo local_24;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_0085a2e0) {
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_00736790();
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(UINT *)(&DAT_007f1670 + local_8 * 0x30) == CodePage) {
        for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
          (&DAT_0085a480)[local_28] = 0;
        }
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          for (local_c = &DAT_007f1680 + local_10 * 8 + local_8 * 0x30;
              (*local_c != 0 && (local_c[1] != 0)); local_c = local_c + 2) {
            for (local_28 = (uint)*local_c; local_28 <= local_c[1]; local_28 = local_28 + 1) {
              (&DAT_0085a481)[local_28] = (&DAT_0085a481)[local_28] | (&DAT_007f1668)[local_10];
            }
          }
        }
        DAT_0085a36c = 1;
        DAT_0085a2e0 = CodePage;
        DAT_0085a584 = FUN_00736690(CodePage);
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          *(undefined2 *)(&DAT_0085a360 + local_10 * 2) =
               *(undefined2 *)(&DAT_007f1674 + local_10 * 2 + local_8 * 0x30);
        }
        FUN_00736790();
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&local_24);
    if (BVar2 == 1) {
      for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
        (&DAT_0085a480)[local_28] = 0;
      }
      DAT_0085a584 = 0;
      if (local_24.MaxCharSize < 2) {
        DAT_0085a36c = 0;
        DAT_0085a2e0 = CodePage;
      }
      else {
        DAT_0085a2e0 = CodePage;
        for (local_2c = local_24.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (local_28 = (uint)*local_2c; local_28 <= local_2c[1]; local_28 = local_28 + 1) {
            (&DAT_0085a481)[local_28] = (&DAT_0085a481)[local_28] | 4;
          }
        }
        for (local_28 = 1; local_28 < 0xff; local_28 = local_28 + 1) {
          (&DAT_0085a481)[local_28] = (&DAT_0085a481)[local_28] | 8;
        }
        DAT_0085a584 = FUN_00736690(DAT_0085a2e0);
        DAT_0085a36c = 1;
      }
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(undefined2 *)(&DAT_0085a360 + local_10 * 2) = 0;
      }
      FUN_00736790();
      uVar1 = 0;
    }
    else if (DAT_00857228 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_00736790();
      uVar1 = 0;
    }
  }
  return uVar1;
}

