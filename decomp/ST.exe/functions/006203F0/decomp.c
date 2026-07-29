
undefined4 __thiscall FUN_006203f0(void *this,int param_1,int param_2,int param_3)

{
  DArrayTy *array;
  uint index;
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_8;

  uVar2 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((*(int *)((int)this + 0xd1) != 0) &&
     (index = *(int *)(*(int *)((int)this + 0xd1) + 0xc) - 1, -1 < (int)index)) {
    do {
      array = *(DArrayTy **)((int)this + 0xd1);
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime stride) */
      if ((index < array->count) &&
         (piVar1 = (int *)(array->elementSize * index + (int)array->data), piVar1 != (int *)0x0)) {
        if ((param_2 < piVar1[2] + -3) ||
           (((piVar1[2] + 3 < param_2 || (uVar2 = local_8, param_3 < piVar1[3] + -3)) ||
            (piVar1[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            DArrayRemoveAt(array,index);
          }
        }
        else {
          piVar1[2] = param_2;
          uVar2 = 1;
          local_8 = 1;
          piVar1[3] = param_3;
          piVar1[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            uVar2 = 2;
            *piVar1 = param_1;
            local_8 = 2;
          }
        }
      }
      index = index - 1;
    } while (-1 < (int)index);
    return uVar2;
  }
  return 0xffffffff;
}

