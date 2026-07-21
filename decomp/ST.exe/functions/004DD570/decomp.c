
undefined4 __fastcall FUN_004dd570(TLOBaseTy *param_1)

{
  int iVar1;

  iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
  if (iVar1 == param_1->field_01F5->field_020C) {
    if (param_1->field_04D0 == CASE_1) {
      param_1->field_04D0 = CASE_2;
    }
    else {
      if (param_1->field_04D0 != CASE_3) goto LAB_004dd5bb;
      param_1->field_04D0 = CASE_0;
    }
    TLOBaseTy::RotateSpr(param_1,0);
  }
LAB_004dd5bb:
  if ((DAT_008117a4 != (void *)0x0) && (param_1->field_04D0 == CASE_0)) {
    iVar1 = thunk_FUN_0062e640(DAT_008117a4,param_1->field_0024,param_1->field_0018);
    if (iVar1 == 0) {
      if (param_1->field_04D8 == 0) {
        param_1->field_04D8 = 1;
        param_1->field_04DC = PTR_00802a38->field_00E4;
        return 0;
      }
      if (param_1->field_04DC + 0x2ee <= (uint)PTR_00802a38->field_00E4) {
        iVar1 = thunk_FUN_0062e6b0(DAT_008117a4,param_1->field_0024,param_1->field_0018);
        param_1->field_04D8 = (uint)(iVar1 == 0);
      }
    }
  }
  return 0;
}

