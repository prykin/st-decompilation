
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_006a47f0(int param_1)

{
  BOOL BVar1;
  
  if (*(LPCSTR *)(param_1 + 8) == (LPCSTR)0x0) {
    _DAT_008549f4 = DAT_007ec4a4;
    _DAT_008549f8 = CONCAT12(DAT_007ec4aa,DAT_007ec4a8);
    DAT_00854a43 = 0;
    return &DAT_008549f4;
  }
  BVar1 = IsBadStringPtrA(*(LPCSTR *)(param_1 + 8),0x4f);
  if (BVar1 != 0) {
    DAT_008549f4 = s_<damaged_name>_007ec490[0];
    DAT_008549f4_1._0_1_ = s_<damaged_name>_007ec490[1];
    DAT_008549f4_1._1_1_ = s_<damaged_name>_007ec490[2];
    DAT_008549f4_1._2_1_ = s_<damaged_name>_007ec490[3];
    DAT_008549f8 = s_<damaged_name>_007ec490[4];
    DAT_008549f8_1._0_1_ = s_<damaged_name>_007ec490[5];
    DAT_008549fa = s_<damaged_name>_007ec490[6];
    DAT_008549f8_1._2_1_ = s_<damaged_name>_007ec490[7];
    DAT_00854a00 = s_<damaged_name>_007ec490[0xc];
    DAT_00854a00_1 = s_<damaged_name>_007ec490[0xd];
    DAT_008549fc = s_<damaged_name>_007ec490[8];
    DAT_008549fc_1._0_1_ = s_<damaged_name>_007ec490[9];
    DAT_008549fc_1._1_1_ = s_<damaged_name>_007ec490[10];
    DAT_008549fc_1._2_1_ = s_<damaged_name>_007ec490[0xb];
    DAT_00854a02 = s_<damaged_name>_007ec490[0xe];
    DAT_00854a43 = 0;
    return &DAT_008549f4;
  }
  _strncpy(&DAT_008549f4,*(char **)(param_1 + 8),0x4f);
  DAT_00854a43 = 0;
  return &DAT_008549f4;
}

