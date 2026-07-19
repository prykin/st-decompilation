
DWORD FUN_006d4860(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  DWORD extraout_EAX;
  uint uVar2;
  DWORD exceptionCode;
  undefined4 *puVar3;
  
  if ((*(uint *)(param_1 + 8) & 0x100000) != 0) {
    RaiseInternalException(-0x30,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x14b);
    return extraout_EAX;
  }
  exceptionCode = 0xffffffaf;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_006d4904:
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x15f);
    return exceptionCode;
  }
  if ((*(uint *)(param_1 + 8) & 0x800000) != 0) {
    uVar1 = param_2 + param_4;
    if (*(uint *)(param_1 + 0x38) < uVar1) {
      uVar2 = (param_2 - *(uint *)(param_1 + 0x38)) + param_4;
      if (uVar2 < *(uint *)(param_1 + 0x3c)) {
        uVar2 = *(uint *)(param_1 + 0x3c);
      }
      exceptionCode = FUN_006d4740(param_1,uVar2);
      if (exceptionCode != 0) goto LAB_006d4904;
    }
    if (param_3 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x34) + param_2);
      for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    if (*(uint *)(param_1 + 0x18) < uVar1) {
      *(uint *)(param_1 + 0x18) = uVar1;
    }
  }
  return 0;
}

