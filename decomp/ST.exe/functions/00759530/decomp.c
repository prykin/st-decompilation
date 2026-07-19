
int FUN_00759530(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *param_1;
  uVar1 = (uint)(0x3b9ac9f4 / (ulonglong)(uint)(param_3 * 0x100));
  if (uVar1 == 0) {
    RaiseInternalException(0x45,DAT_007ed77c,s_E__DKW_JPG_C_jmemmgr_c_007f2dc8,0x1c5);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x4c) = uVar1;
  iVar2 = FUN_00759290(param_1,param_2,param_4 * 4);
  uVar6 = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - uVar6 <= uVar1) {
        uVar1 = param_4 - uVar6;
      }
      puVar3 = FUN_007593e0(param_1,param_2,uVar1 * param_3 * 0x100);
      if (uVar1 != 0) {
        puVar4 = (undefined4 *)(iVar2 + uVar6 * 4);
        uVar6 = uVar6 + uVar1;
        uVar5 = uVar1;
        do {
          *puVar4 = puVar3;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + param_3 * 0x40;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    } while (uVar6 < param_4);
  }
  return iVar2;
}

