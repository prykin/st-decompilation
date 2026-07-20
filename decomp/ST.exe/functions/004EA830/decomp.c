
undefined4 __fastcall FUN_004ea830(TLOBaseTy *param_1)

{
  if ((param_1->field_04D0 == 0) || (param_1->field_04D0 == 2)) {
    param_1->field_04D0 = 1;
    TLOBaseTy::AddSprInit(param_1);
  }
  return 1;
}

