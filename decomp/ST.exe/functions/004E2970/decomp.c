
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004E2970 @ 004B9AD0; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall FUN_004e2970(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = *(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9da;
  local_8 = param_1;
  if (array != nullptr) {
    index = 0;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == param_1) {
          DArrayRemoveAt(*(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9da,
                         index);
          break;
        }
        index = index + 1;
        array = *(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9da;
      } while ((int)index < (int)array->count);
    }
    if ((*(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9da)->count == 0) {
      DArrayDestroy(*(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9da);
      *(undefined4 *)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9da = 0;
    }
  }
  thunk_FUN_004e42e0((int)param_1->field_0024);
  return 0;
}

