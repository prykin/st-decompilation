
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_006e83f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  DAT_00856d8c = (uint)*(ushort *)(param_1 + 0xe) * *(int *)(param_1 + 4) + 0x1f >> 3 & 0x1ffffffc;
  iVar1 = FUN_006b4fa0(param_1);
  DAT_00856da0 = param_4;
  _DAT_00856d80 = _DAT_0079dfd0 / (float)param_5;
  DAT_00856d88 = ((*(int *)(param_1 + 8) - param_3) + -1) * DAT_00856d8c + param_2 + iVar1;
  DAT_00856d84 = param_4 / 2;
  return;
}

