
undefined4 FUN_004b79c0(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  DArrayTy *array;
  uint index;
  int local_10 [3];
  
  iVar1 = thunk_FUN_004b72b0(param_1);
  iVar2 = thunk_FUN_004b71c0(param_1);
  if (iVar1 <= iVar2) {
    return 1;
  }
  index = 0;
  array = *(DArrayTy **)&g_playerRuntime[param_1].field_0x992;
  if (array->count != 0) {
    do {
      DArrayGetElement(array,index,local_10);
      if (local_10[0] == param_2) {
        return 1;
      }
      array = *(DArrayTy **)&g_playerRuntime[param_1].field_0x992;
      index = index + 1;
    } while (index < array->count);
  }
  return 0;
}

