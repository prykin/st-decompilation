
undefined4 __fastcall FUN_004c2d40(AnonShape_004C2D40_7C578146 *param_1)

{
  int iVar1;
  AnonShape_004C2D40_7C578146 *local_8;

  if (param_1->field_0408 != 0) {
    local_8 = param_1;
    iVar1 = FUN_006e62d0(PTR_00802a38,param_1->field_040C,(int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_0054cf70(PTR_00802a38,*(uint *)&local_8->field_0x8);
      param_1->field_040C = 0;
      param_1->field_0408 = 0;
    }
    param_1->field_0408 = 0;
  }
  return 0;
}

