
undefined4 __fastcall FUN_004dff30(int param_1)

{
  DArrayTy *array;
  uint index;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  array = g_playerRuntime[*(int *)(param_1 + 0x24)].field2171_0x9ea;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == param_1) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          FUN_006b0c70(g_playerRuntime[*(int *)(param_1 + 0x24)].field2171_0x9ea,index);
          break;
        }
        index = index + 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        array = g_playerRuntime[*(int *)(param_1 + 0x24)].field2171_0x9ea;
      } while ((int)index < (int)array->count);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((g_playerRuntime[*(int *)(param_1 + 0x24)].field2171_0x9ea)->count == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DArrayDestroy(g_playerRuntime[*(int *)(param_1 + 0x24)].field2171_0x9ea);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      g_playerRuntime[*(int *)(param_1 + 0x24)].field2171_0x9ea = (DArrayTy *)0x0;
    }
  }
  return 0;
}

