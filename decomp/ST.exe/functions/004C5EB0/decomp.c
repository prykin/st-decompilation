
undefined4 __fastcall FUN_004c5eb0(AnonShape_004C5EB0_4D7D61A8 *param_1)

{
  int iVar1;
  AnonShape_004C5EB0_4D7D61A8 *local_8;

  if ((uint)param_1->field_04D4 <= (uint)PTR_00802a38->field_00E4) {
    local_8 = param_1;
    iVar1 = FUN_006e62d0(PTR_00802a38,param_1->field_04D0,(int *)&local_8);
    if (iVar1 == 0) {
      param_1->field_02CD = *(undefined4 *)&local_8->field_0x20f;
    }
    param_1->field_04D4 = PTR_00802a38->field_00E4 + 0x7d;
  }
  return 0;
}

