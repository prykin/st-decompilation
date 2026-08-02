
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004DFF30 @ 004B9B45; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall FUN_004dff30(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = *(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9ea;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == param_1) {
          DArrayRemoveAt(*(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9ea,
                         index);
          break;
        }
        index = index + 1;
        array = *(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9ea;
      } while ((int)index < (int)array->count);
    }
    if ((*(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9ea)->count == 0) {
      DArrayDestroy(*(DArrayTy **)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9ea);
      *(undefined4 *)&g_packedRecords_A62x8[(int)param_1->field_0024].field_0x9ea = 0;
    }
  }
  return 0;
}

