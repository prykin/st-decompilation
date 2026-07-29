
undefined4 __fastcall FUN_006646e0(int param_1)

{
  dword dVar1;
  uint *puVar2;
  DArrayTy *array;
  uint index;
  bool bVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  array = *(DArrayTy **)(param_1 + 0x217);
  dVar1 = array->count;
  if (dVar1 == 0) {
    return 0xffffffff;
  }
  index = 0;
  if (0 < (int)dVar1) {
    bVar3 = dVar1 != 0;
    do {
      if (bVar3) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime stride) */
        puVar2 = (uint *)(array->elementSize * index + (int)array->data);
      }
      else {
        puVar2 = (uint *)0x0;
      }
      if ((0x31 < *puVar2) && (*puVar2 < 100)) {
        DArrayRemoveAt(array,index);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      array = *(DArrayTy **)(param_1 + 0x217);
      index = index + 1;
      bVar3 = index < array->count;
    } while ((int)index < (int)array->count);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(*(int *)(param_1 + 0x217) + 0xc);
}

