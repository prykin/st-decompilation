
uint FUN_00449a90(undefined4 param_1,short param_2)

{
  dword dVar1;
  uint index;
  uint index_00;
  DArrayTy *array;
  undefined1 local_18 [4];
  DArrayTy *local_14;
  dword local_c;
  DArrayTy *local_8;
  
  array = g_playerRuntime[(char)param_1].pgPairs;
  if (((array != (DArrayTy *)0x0) && (local_c = array->count, local_c != 0)) &&
     (index = 0, local_8 = array, 0 < (int)local_c)) {
    do {
      DArrayGetElement(array,index,local_18);
      if (((local_14 != (DArrayTy *)0x0) && (dVar1 = local_14->count, dVar1 != 0)) &&
         (index_00 = 0, array = local_8, 0 < (int)dVar1)) {
        do {
          DArrayGetElement(local_14,index_00,(void *)((int)&param_1 + 2));
          if (param_1._2_2_ == param_2) {
            return index;
          }
          index_00 = index_00 + 1;
          array = local_8;
        } while ((int)index_00 < (int)dVar1);
      }
      index = index + 1;
    } while ((int)index < (int)local_c);
  }
  return 0xffffffff;
}

