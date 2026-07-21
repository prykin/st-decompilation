
int FUN_004de410(void *param_1,int param_2,int param_3)

{
  STPlayerRuntimeRecord *pSVar1;
  int iVar2;
  int iVar3;
  DArrayTy *array;
  uint index;
  int local_8;
  
  iVar2 = param_2;
  local_8 = 0;
  pSVar1 = g_playerRuntime + (int)param_1;
  array = pSVar1->field2164_0x9ce;
  if ((array != (DArrayTy *)0x0) && (index = 0, 0 < (int)array->count)) {
    do {
      DArrayGetElement(array,index,&param_1);
      iVar3 = thunk_FUN_004ddb30(param_1,iVar2);
      if (iVar3 != 0) {
        if (param_3 - local_8 <= iVar3) {
          thunk_FUN_004ddc30(param_1,iVar2,param_3 - local_8);
          return param_3;
        }
        thunk_FUN_004ddc30(param_1,iVar2,iVar3);
        local_8 = local_8 + iVar3;
      }
      index = index + 1;
      array = pSVar1->field2164_0x9ce;
    } while ((int)index < (int)array->count);
    return local_8;
  }
  return 0;
}

