
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004DF1A0 @ 004B9B00; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall FUN_004df1a0(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_playerRuntime[(int)param_1->field_0024].field2172_0x9ee;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70(g_playerRuntime[(int)param_1->field_0024].field2172_0x9ee,index);
          break;
        }
        index = index + 1;
        array = g_playerRuntime[(int)param_1->field_0024].field2172_0x9ee;
      } while ((int)index < (int)array->count);
    }
    if ((g_playerRuntime[(int)param_1->field_0024].field2172_0x9ee)->count == 0) {
      DArrayDestroy(g_playerRuntime[(int)param_1->field_0024].field2172_0x9ee);
      g_playerRuntime[(int)param_1->field_0024].field2172_0x9ee = (DArrayTy *)0x0;
    }
  }
  return 0;
}

