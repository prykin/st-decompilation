
undefined4 __fastcall FUN_004dc260(TLOBaseTy *param_1)

{
  uint uVar1;
  int iVar2;

  iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
  if (iVar2 == param_1->field_01F5->field_020C) {
    if (param_1->field_04D0 == CASE_2) {
      param_1->field_04D0 = CASE_1;
      param_1->field_0261 = 1;
      TLOBaseTy::RotateSpr(param_1,0);
    }
    else if (param_1->field_04D0 == CASE_3) {
      param_1->field_04D0 = CASE_0;
      param_1->field_0261 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
    }
  }
  if (param_1->field_04D0 == CASE_0) {
    if ((param_1->field_04D8 + 0xf <= PTR_00802a38->field_00E4) && (param_1->field_04D4 < 200)) {
      param_1->field_04D8 = PTR_00802a38->field_00E4;
      iVar2 = param_1->field_04D4 + 2;
      param_1->field_04D4 = iVar2;
      if (199 < iVar2) {
        param_1->field_04D4 = 200;
      }
    }
    uVar1 = PTR_00802a38->field_00E4;
    iVar2 = thunk_FUN_004e8230(param_1->field_0024,param_1->field_0235,0);
    if ((iVar2 + param_1->field_0271 <= uVar1) && (199 < param_1->field_04D4)) {
      param_1->field_0271 = uVar1;
      TLOBaseTy::fireFindCheckTarget(param_1,0,0);
      if (param_1->field_028D != 0) {
        param_1->field_04D0 = CASE_2;
        TLOBaseTy::RotateSpr(param_1,0);
        return 0;
      }
    }
  }
  else if (param_1->field_04D0 == CASE_1) {
    if (param_1->field_04D4 < 1) {
      param_1->field_04D0 = CASE_3;
      param_1->field_04D4 = 0;
      param_1->field_0261 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
      return 0;
    }
    if (param_1->field_0295 + 0x465 <= PTR_00802a38->field_00E4) {
      param_1->field_04D0 = CASE_3;
      param_1->field_0261 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
    }
  }
  return 0;
}

