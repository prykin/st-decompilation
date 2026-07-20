
void __fastcall FUN_00627170(AnonShape_00627170_DB470A34 *param_1)

{
  int iVar1;
  
  if ((param_1->field_035A == 0x15) && ((param_1->field_0355 & 1) != 0)) {
    if ((ushort)param_1->field_035E != param_1->field_004B) {
      iVar1 = thunk_FUN_00624570(param_1,CASE_3,(int)param_1->field_003A,(int)param_1->field_003C,
                                 (short)((ushort)param_1->field_035E * 200 + 100) + -0x32);
      if (iVar1 != 0) {
        param_1->field_02EE = 3;
        param_1->field_02AE = 1;
      }
    }
    param_1->field_0359 = 0;
  }
  return;
}

