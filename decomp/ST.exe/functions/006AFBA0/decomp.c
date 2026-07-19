
short * FUN_006afba0(int param_1,int param_2,short *param_3,short *param_4,short *param_5,
                    short *param_6,short *param_7,short *param_8,short *param_9,short *param_10,
                    int *param_11,byte param_12)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_8;
  
  *param_11 = 0;
  local_8 = 0;
  if (((((((int)param_5 < 0) || (param_2 <= (int)param_5)) || ((int)param_6 < 0)) ||
       ((((int)param_3 <= (int)param_6 || ((int)param_7 < 0)) ||
        (((int)param_4 <= (int)param_7 || (((int)param_8 < 0 || (param_2 <= (int)param_8)))))))) ||
      ((int)param_9 < 0)) ||
     ((((int)param_3 <= (int)param_9 || ((int)param_10 < 0)) || ((int)param_4 <= (int)param_10)))) {
    return (short *)0x0;
  }
  iVar7 = param_2 * (int)param_3;
  iVar5 = (int)param_8 + param_2 * (int)param_9 + iVar7 * (int)param_10;
  if (*(short *)(param_1 + iVar5 * 2) == -3) {
    *(undefined2 *)(param_1 + iVar5 * 2) = 0;
  }
  if (((param_12 & 2) == 0) ||
     (psVar2 = FUN_006ae7d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            param_10,&local_8,(undefined4 *)0x0,(short *)0x0),
     psVar2 == (short *)0x0)) {
    iVar5 = FUN_006c8ec0(param_1,param_2,(uint)param_3,(undefined4 *)param_4,(int)param_5,
                         (int)param_6,(int)param_7,param_8,(int)param_9,(int)param_10);
    if (iVar5 != 0) {
      RaiseInternalException(-2,DAT_007ed77c,s_E__DKW_WAY_C_sway3d_cpp_007eda5c,0x2af);
      return (short *)0x0;
    }
    sVar1 = *(short *)(param_1 + ((int)param_8 + param_2 * (int)param_9 + iVar7 * (int)param_10) * 2
                      );
    if (sVar1 < 0) {
      uVar6 = (int)param_8 - (int)param_5 >> 0x1f;
      iVar4 = ((int)param_8 - (int)param_5 ^ uVar6) - uVar6;
      uVar6 = (int)param_9 - (int)param_6 >> 0x1f;
      iVar3 = ((int)param_9 - (int)param_6 ^ uVar6) - uVar6;
      uVar6 = (int)param_10 - (int)param_7 >> 0x1f;
      iVar5 = ((int)param_10 - (int)param_7 ^ uVar6) - uVar6;
      if (iVar4 < iVar3) {
        if (iVar5 <= iVar3) {
          iVar5 = iVar3;
        }
      }
      else if (iVar5 <= iVar4) {
        iVar5 = iVar4;
      }
      iVar5 = FUN_006a76d0(param_1,param_2,(int)param_3,(int)param_4,(int)param_8,(int)param_9,
                           (int)param_10,0,iVar5,(int *)&param_8,(int *)&param_9,(int *)&param_10);
      if (iVar5 == 0) {
        return (short *)0x0;
      }
    }
    else if (sVar1 == 0) {
      return (short *)0x0;
    }
    iVar5 = (((int)*(short *)(param_1 +
                             ((int)param_8 + param_2 * (int)param_9 + iVar7 * (int)param_10) * 2) -
             (int)*(short *)(param_1 +
                            ((int)param_5 + param_2 * (int)param_6 + iVar7 * (int)param_7) * 2)) + 2
            ) / 3;
    local_8 = iVar5 + 3 + iVar5 / 2;
    psVar2 = (short *)FUN_006aac70(local_8 * 8);
    if (psVar2 != (short *)0x0) {
      iVar5 = FUN_006ae3b0(param_1,param_2,(int)param_3,(int)param_4,(int)param_5,(int)param_6,
                           (int)param_7,(uint)param_8,(int)param_9,(int)param_10,
                           (undefined4 *)psVar2,local_8);
      *param_11 = iVar5 + 1;
      return psVar2;
    }
    psVar2 = (short *)0x0;
  }
  *param_11 = local_8;
  return psVar2;
}

