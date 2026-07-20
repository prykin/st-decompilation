
void __fastcall FUN_004e0250(AnonShape_004E0250_5A3B9236 *param_1)

{
  int *this;
  int iVar1;
  undefined2 extraout_var;
  
  if (param_1->field_04D4 != 0) {
    return;
  }
  this = thunk_FUN_004d85e0(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
  if (this == (int *)0x0) {
    return;
  }
  iVar1 = (**(code **)(*this + 0x2c))();
  param_1->field_04DC = iVar1;
  switch(param_1->field_05AC) {
  case 0x38:
    if (iVar1 != 0xdc) goto cf_common_exit_004E02E4;
    break;
  case 0x39:
  case 0x5e:
    if (iVar1 != 0xdd) goto cf_common_exit_004E02E4;
    break;
  default:
    goto cf_common_exit_004E02E4;
  case 0x4f:
    goto joined_r0x004e02dc;
  case 0x61:
joined_r0x004e02dc:
    if (iVar1 != 0xde) goto cf_common_exit_004E02E4;
  }
  param_1->field_04D4 = 1;
cf_common_exit_004E02E4:
  if (param_1->field_04D4 != 0) {
    param_1->field_04E0 = *(undefined4 *)((int)this + 0x259);
    thunk_FUN_005804f0(this,param_1->field_0018,(short)param_1->field_0024,param_1->field_0032);
    if (param_1->field_05AC == 0x61) {
      param_1->field_0520 = param_1->field_04E0;
      if (param_1->field_04E0 != 0) {
        param_1->field_0528 = 6;
        return;
      }
    }
    else {
      STAllPlayersC::_ChangeMD
                (g_sTAllPlayers_007FA174,1,(int *)param_1->field_0024,
                 CONCAT22(extraout_var,param_1->field_0032));
    }
  }
  return;
}

