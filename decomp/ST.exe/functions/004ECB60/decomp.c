
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004ECB60 @ 004B9B10; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall FUN_004ecb60(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_playerRuntime[(int)param_1->field_0024].field2173_0x9f2;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70(g_playerRuntime[(int)param_1->field_0024].field2173_0x9f2,index);
          break;
        }
        index = index + 1;
        array = g_playerRuntime[(int)param_1->field_0024].field2173_0x9f2;
      } while ((int)index < (int)array->count);
    }
    if ((g_playerRuntime[(int)param_1->field_0024].field2173_0x9f2)->count == 0) {
      DArrayDestroy(g_playerRuntime[(int)param_1->field_0024].field2173_0x9f2);
      g_playerRuntime[(int)param_1->field_0024].field2173_0x9f2 = (DArrayTy *)0x0;
    }
  }
  return 0;
}

