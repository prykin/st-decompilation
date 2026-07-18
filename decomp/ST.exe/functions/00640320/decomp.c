
void FUN_00640320(void *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (*(int *)((int)param_1 + 0x380) * *(int *)(param_4 + 0xc)) / 0xc9;
  thunk_FUN_00427f20(param_1,*(float *)(param_4 + 4),*(float *)(param_4 + 8),49.829998,iVar1,
                     iVar1 - *(int *)(param_4 + 0x10),param_3);
  return;
}

