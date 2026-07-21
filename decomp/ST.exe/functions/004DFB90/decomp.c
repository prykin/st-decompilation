
int FUN_004dfb90(uint param_1,int param_2,int param_3)

{
  int iVar1;
  STPlayerRuntimeRecord *pSVar2;
  int iVar3;
  int iVar4;
  DArrayTy *array;
  int iVar5;
  
  iVar3 = param_3;
  iVar5 = 0;
  pSVar2 = g_playerRuntime + param_1;
  array = pSVar2->field2165_0x9d2;
  if ((array != (DArrayTy *)0x0) && (param_1 = 0, 0 < (int)array->count)) {
    do {
      DArrayGetElement(array,param_1,&param_3);
      iVar1 = *(int *)(param_3 + 0x4d0);
      if (iVar1 != 0) {
        if ((param_2 - iVar5) * iVar3 <= iVar1) {
          *(int *)(param_3 + 0x4d0) = *(int *)(param_3 + 0x4d0) - (param_2 - iVar5) * iVar3;
          return param_2;
        }
        iVar4 = (iVar1 / iVar3) * iVar3;
        if (iVar4 != 0) {
          iVar5 = iVar5 + iVar1;
          *(int *)(param_3 + 0x4d0) = iVar1 - iVar4;
        }
      }
      param_1 = param_1 + 1;
      array = pSVar2->field2165_0x9d2;
    } while ((int)param_1 < (int)array->count);
  }
  return iVar5;
}

