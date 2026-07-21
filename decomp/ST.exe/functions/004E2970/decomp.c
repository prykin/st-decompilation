
undefined4 __fastcall FUN_004e2970(int param_1)

{
  DArrayTy *array;
  uint index;
  int local_8;
  
  array = g_playerRuntime[*(int *)(param_1 + 0x24)].field2167_0x9da;
  local_8 = param_1;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)
                       g_playerRuntime[*(int *)(param_1 + 0x24)].field2167_0x9da,index);
          break;
        }
        index = index + 1;
        array = g_playerRuntime[*(int *)(param_1 + 0x24)].field2167_0x9da;
      } while ((int)index < (int)array->count);
    }
    if ((g_playerRuntime[*(int *)(param_1 + 0x24)].field2167_0x9da)->count == 0) {
      DArrayDestroy(g_playerRuntime[*(int *)(param_1 + 0x24)].field2167_0x9da);
      g_playerRuntime[*(int *)(param_1 + 0x24)].field2167_0x9da = (DArrayTy *)0x0;
    }
  }
  thunk_FUN_004e42e0(*(int *)(param_1 + 0x24));
  return 0;
}

