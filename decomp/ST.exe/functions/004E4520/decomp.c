
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004E4520 @ 004B9AC0; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall FUN_004e4520(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = *(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9d6;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == param_1) {
          DArrayRemoveAt(*(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9d6,
                         index);
          break;
        }
        index = index + 1;
        array = *(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9d6;
      } while ((int)index < (int)array->count);
    }
    if ((*(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9d6)->count == 0) {
      DArrayDestroy(*(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9d6);
      *(undefined4 *)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9d6 = 0;
    }
  }
  return 0;
}

