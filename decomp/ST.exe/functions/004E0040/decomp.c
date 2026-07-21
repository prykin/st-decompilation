
undefined4 __fastcall FUN_004e0040(AnonShape_004E0040_648F9827 *param_1)

{
  int *this;
  int iVar1;

  param_1->field_04D0 = 0;
  param_1->field_04D4 = 0;
  param_1->field_04D8 = 0xffffffff;
  param_1->field_04E0 = 0;
  param_1->field_04E4 = 0;
  param_1->field_04E8 = 0;
  this = thunk_FUN_004d85e0(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
  if (this == (int *)0x0) goto LAB_004e0119;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*this + 0x2c))();
  param_1->field_04DC = iVar1;
  switch(param_1->field_05AC) {
  case 0x38:
    if (iVar1 != 0xdc) break;
    goto LAB_004e00e5;
  case 0x39:
  case 0x5e:
    if (iVar1 == 0xdd) goto LAB_004e00e5;
    break;
  case 0x4f:
    goto joined_r0x004e00e3;
  case 0x61:
joined_r0x004e00e3:
    if (iVar1 == 0xde) {
LAB_004e00e5:
      param_1->field_04D4 = 1;
    }
  }
  if (param_1->field_04D4 != 0) {
    param_1->field_04E0 = *(undefined4 *)((int)this + 0x259);
    thunk_FUN_005804f0(this,param_1->field_0018,(short)param_1->field_0024,param_1->field_0032);
  }
LAB_004e0119:
  if (param_1->field_05AC == 0x61) {
    param_1->field_0518 = 0;
    param_1->field_0520 = param_1->field_04E0;
    param_1->field_051C = 0;
    param_1->field_0524 = PTR_00802a38->field_00E4;
    if (param_1->field_04E0 != 0) {
      param_1->field_0528 = 6;
    }
    thunk_FUN_004e40c0(param_1->field_0024);
  }
  return 0;
}

