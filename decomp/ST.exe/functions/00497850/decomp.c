
undefined4
FUN_00497850(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7,
            int *param_8,int *param_9,int *param_10)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;

  if (-1 < (int)param_7) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(g_dArray_007FB270, param_7) (runtime stride) */
    if ((((int)param_7 < (int)g_dArray_007FB270->count) && (param_7 < g_dArray_007FB270->count)) &&
       (pvVar3 = (void *)(g_dArray_007FB270->elementSize * param_7 + (int)g_dArray_007FB270->data),
       pvVar3 != (void *)0x0)) {
      iVar1 = *(int *)((int)pvVar3 + 0x14);
      uVar2 = thunk_FUN_0060e470(param_1,param_2,param_3,param_4,param_5,param_6,
                                 *(int *)(iVar1 + 0x1e9) + 100,*(int *)(iVar1 + 0x1ed) + 100,
                                 *(undefined4 *)(iVar1 + 0x1f1),param_8,param_9,param_10);
      return uVar2;
    }
  }
  *param_8 = param_4;
  *param_9 = param_5;
  *param_10 = param_6;
  return 0;
}

