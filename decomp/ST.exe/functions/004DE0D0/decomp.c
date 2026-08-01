
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004DE0D0 @ 004B9B50; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall FUN_004de0d0(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = *(DArrayTy **)&g_playerRuntime[(int)param_1->field_0024].field_0x9ce;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == param_1) {
          DArrayRemoveAt(*(DArrayTy **)&g_playerRuntime[(int)param_1->field_0024].field_0x9ce,index);
          break;
        }
        index = index + 1;
        array = *(DArrayTy **)&g_playerRuntime[(int)param_1->field_0024].field_0x9ce;
      } while ((int)index < (int)array->count);
    }
    if ((*(DArrayTy **)&g_playerRuntime[(int)param_1->field_0024].field_0x9ce)->count == 0) {
      DArrayDestroy(*(DArrayTy **)&g_playerRuntime[(int)param_1->field_0024].field_0x9ce);
      *(undefined4 *)&g_playerRuntime[(int)param_1->field_0024].field_0x9ce = 0;
    }
  }
  return 0;
}

