
undefined4 __fastcall FUN_004d9700(int param_1)

{
  uint index;
  int local_8;

  if (g_dArray_007FA16C != (DArrayTy *)0x0) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)g_dArray_007FA16C->count) {
      do {
        DArrayGetElement(g_dArray_007FA16C,index,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70(g_dArray_007FA16C,index);
          break;
        }
        index = index + 1;
      } while ((int)index < (int)g_dArray_007FA16C->count);
    }
    if (g_dArray_007FA16C->count == 0) {
      DArrayDestroy(g_dArray_007FA16C);
      g_dArray_007FA16C = (DArrayTy *)0x0;
    }
  }
  return 0;
}

