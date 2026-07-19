
DWORD FUN_006d4ba0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  DWORD extraout_EAX;
  uint uVar2;
  DWORD exceptionCode;
  
  if ((*(uint *)(param_1 + 8) & 0x100000) != 0) {
    RaiseInternalException(-0x30,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x1ec);
    return extraout_EAX;
  }
  exceptionCode = 0xffffffaf;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_006d4c30:
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x203);
    return exceptionCode;
  }
  if ((*(uint *)(param_1 + 8) & 0x800000) != 0) {
    uVar1 = param_2 + 4;
    if (*(uint *)(param_1 + 0x38) < uVar1) {
      uVar2 = (param_2 - *(uint *)(param_1 + 0x38)) + 4;
      if (uVar2 < *(uint *)(param_1 + 0x3c)) {
        uVar2 = *(uint *)(param_1 + 0x3c);
      }
      exceptionCode = FUN_006d4740(param_1,uVar2);
      if (exceptionCode != 0) goto LAB_006d4c30;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x34) + param_2) = param_3;
    if (*(uint *)(param_1 + 0x18) < uVar1) {
      *(uint *)(param_1 + 0x18) = uVar1;
    }
  }
  return 0;
}

