
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004E4990 @ 004B9B30; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall FUN_004e4990(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_playerRuntime[(int)param_1->field_0024].field2170_0x9e6;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == param_1) {
          DArrayRemoveAt(g_playerRuntime[(int)param_1->field_0024].field2170_0x9e6,index);
          break;
        }
        index = index + 1;
        array = g_playerRuntime[(int)param_1->field_0024].field2170_0x9e6;
      } while ((int)index < (int)array->count);
    }
    if ((g_playerRuntime[(int)param_1->field_0024].field2170_0x9e6)->count == 0) {
      DArrayDestroy(g_playerRuntime[(int)param_1->field_0024].field2170_0x9e6);
      g_playerRuntime[(int)param_1->field_0024].field2170_0x9e6 = (DArrayTy *)0x0;
    }
  }
  return 0;
}

