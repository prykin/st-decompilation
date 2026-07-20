
undefined4 __fastcall FUN_004d8f80(AnonShape_004D8F80_1255A4D6 *param_1)

{
  int iVar1;
  
  if ((int)param_1->field_04EC < 100) {
    if (param_1->field_04D8 + 0x4b <= (uint)PTR_00802a38->field_00E4) {
      iVar1 = param_1->field_04EC + 1;
      param_1->field_04D8 = PTR_00802a38->field_00E4;
      param_1->field_04EC = iVar1;
      if ((99 < iVar1) && (param_1->field_04EC = 100, param_1->field_04F0 != 0)) {
        param_1->field_0261 = 1;
      }
    }
  }
  return 0;
}

