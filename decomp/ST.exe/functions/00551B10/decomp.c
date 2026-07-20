
void __fastcall FUN_00551b10(AnonShape_00551B10_03263458 *param_1)

{
  if (param_1->field_01C0 != 0) {
    param_1->field_0028 = 0x26;
    FUN_006e6080(param_1,2,param_1->field_01C0,(undefined4 *)&param_1->field_0x18);
    if (param_1->field_002C !=
        (uint)*(ushort *)(&param_1->field_0x1bc + (uint)param_1->field_01D0 * 2)) {
      param_1->field_0028 = 0x22;
      param_1->field_002C = (uint)*(ushort *)(&param_1->field_0x1bc + (uint)param_1->field_01D0 * 2)
      ;
      FUN_006e6080(param_1,2,param_1->field_01C0,(undefined4 *)&param_1->field_0x18);
    }
    thunk_FUN_00551800((AnonShape_00551800_EBA95FA4 *)param_1);
  }
  return;
}

