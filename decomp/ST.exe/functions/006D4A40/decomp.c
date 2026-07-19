
undefined4 FUN_006d4a40(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 extraout_EAX;
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x100000) != 0) {
    RaiseInternalException(-0x30,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x19a);
    return extraout_EAX;
  }
  uVar1 = 0xffffffaf;
  if (*(int *)(param_1 + 0x34) != 0) {
    if (param_2 + 4U <= *(uint *)(param_1 + 0x38)) {
      *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x34) + param_2);
      return 0;
    }
    uVar1 = 0xfffffff2;
  }
  return uVar1;
}

