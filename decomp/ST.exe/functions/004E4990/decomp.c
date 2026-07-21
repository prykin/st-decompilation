
undefined4 __fastcall FUN_004e4990(int param_1)

{
  DArrayTy *array;
  uint index;
  int local_8;
  
  array = g_playerRuntime[*(int *)(param_1 + 0x24)].field2170_0x9e6;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)
                       g_playerRuntime[*(int *)(param_1 + 0x24)].field2170_0x9e6,index);
          break;
        }
        index = index + 1;
        array = g_playerRuntime[*(int *)(param_1 + 0x24)].field2170_0x9e6;
      } while ((int)index < (int)array->count);
    }
    if ((g_playerRuntime[*(int *)(param_1 + 0x24)].field2170_0x9e6)->count == 0) {
      DArrayDestroy(g_playerRuntime[*(int *)(param_1 + 0x24)].field2170_0x9e6);
      g_playerRuntime[*(int *)(param_1 + 0x24)].field2170_0x9e6 = (DArrayTy *)0x0;
    }
  }
  return 0;
}

