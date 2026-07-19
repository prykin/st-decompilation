
int __fastcall FUN_006afe40(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  int extraout_EAX;
  int exceptionCode;
  int extraout_EAX_00;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if ((param_1 != (int *)0x0) && (param_2 != (uint *)0x0)) {
    puVar2 = (uint *)*param_1;
    if (puVar2 == (uint *)0x0) {
      if ((*param_2 & 0x100) == 0) {
        puVar2 = FUN_006ae290((uint *)0x0,param_2[3],param_2[2],param_2[5]);
      }
      else {
        puVar2 = FUN_006ae310((uint *)0x0,param_2[3],param_2[2],param_2[5],param_2[6]);
      }
      *param_1 = (int)puVar2;
    }
    else {
      if (puVar2[2] != param_2[2]) {
        RaiseInternalException(-0x32,DAT_007ed77c,s_E__DKW_TBL_C_darrcpy_c_007eda74,0x17);
        return extraout_EAX;
      }
      if (puVar2[4] < param_2[3]) {
        do {
          exceptionCode = FUN_006ae230(puVar2);
          if (exceptionCode != 0) {
            RaiseInternalException
                      (exceptionCode,DAT_007ed77c,s_E__DKW_TBL_C_darrcpy_c_007eda74,0x1a);
            return exceptionCode;
          }
          puVar2 = (uint *)*param_1;
        } while (puVar2[4] < param_2[3]);
      }
    }
    uVar4 = param_2[2];
    uVar1 = param_2[3];
    puVar5 = (undefined4 *)param_2[7];
    puVar6 = *(undefined4 **)(*param_1 + 0x1c);
    for (uVar3 = uVar4 * uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 * uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(*param_1 + 0xc) = param_2[3];
    return 0;
  }
  RaiseInternalException(-0x34,DAT_007ed77c,s_E__DKW_TBL_C_darrcpy_c_007eda74,0x22);
  return extraout_EAX_00;
}

