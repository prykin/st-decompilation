
int FUN_00759860(undefined4 param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_3 + param_4;
  if ((((uint)param_2[1] < uVar1) || ((uint)param_2[3] < param_4)) || (*param_2 == 0)) {
    RaiseInternalException(0x14,DAT_007ed77c,s_E__DKW_JPG_C_jmemmgr_c_007f2dc8,0x2fd);
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[4] + param_2[6]) < uVar1)) {
    if (param_2[10] == 0) {
      RaiseInternalException(0x44,DAT_007ed77c,s_E__DKW_JPG_C_jmemmgr_c_007f2dc8,0x303);
    }
    if (param_2[9] != 0) {
      FUN_007599d0(param_1,param_2,1);
      param_2[9] = 0;
    }
    uVar4 = param_3;
    if ((param_3 <= (uint)param_2[6]) && (uVar4 = uVar1 - param_2[4], (int)uVar4 < 0)) {
      uVar4 = 0;
    }
    param_2[6] = uVar4;
    FUN_007599d0(param_1,param_2,0);
  }
  uVar4 = param_2[7];
  if (uVar4 < uVar1) {
    if ((uVar4 < param_3) && (uVar4 = param_3, param_5 != 0)) {
      RaiseInternalException(0x14,DAT_007ed77c,s_E__DKW_JPG_C_jmemmgr_c_007f2dc8,0x328);
    }
    if (param_5 != 0) {
      param_2[7] = uVar1;
    }
    if (param_2[8] != 0) {
      iVar2 = param_2[6];
      uVar3 = param_2[2];
      for (uVar4 = uVar4 - iVar2; uVar4 < uVar1 - iVar2; uVar4 = uVar4 + 1) {
        FUN_00759f30(*(undefined4 **)(*param_2 + uVar4 * 4),uVar3);
      }
      goto LAB_0075996d;
    }
    if (param_5 == 0) {
      RaiseInternalException(0x14,DAT_007ed77c,s_E__DKW_JPG_C_jmemmgr_c_007f2dc8,0x339);
      return *param_2 + (param_3 - param_2[6]) * 4;
    }
  }
  else {
LAB_0075996d:
    if (param_5 == 0) goto LAB_007599b0;
  }
  param_2[9] = 1;
LAB_007599b0:
  return *param_2 + (param_3 - param_2[6]) * 4;
}

