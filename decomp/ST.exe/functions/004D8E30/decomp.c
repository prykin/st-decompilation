
undefined4 __fastcall FUN_004d8e30(TLOBaseTy *param_1)

{
  if (param_1->field_04D0 == 0) {
    param_1->field_04D0 = 1;
    TLOBaseTy::AddSprInit(param_1);
    TLOBaseTy::RotateSpr(param_1,0);
  }
  return 1;
}

