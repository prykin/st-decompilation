
undefined4 __fastcall FUN_004c5f30(AnonShape_004C5F30_84FC19DC *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  if (param_1->field_04D0 == 0) {
    local_8 = thunk_FUN_004e81b0(param_1->field_0024,param_1->field_0235,0);
    local_8 = param_1->field_05B0 - local_8;
    if (local_8 < 0) {
      local_8 = 0;
    }
    iVar1 = thunk_FUN_004e81b0(param_1->field_0024,param_1->field_0235,0);
    iVar1 = param_1->field_05B4 - iVar1;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar2 = thunk_FUN_004e81b0(param_1->field_0024,param_1->field_0235,0);
    iVar2 = iVar2 + param_1->field_05B0;
    if (SHORT_007fb240 <= iVar2) {
      iVar2 = SHORT_007fb240 + -1;
    }
    iVar3 = thunk_FUN_004e81b0(param_1->field_0024,param_1->field_0235,0);
    iVar3 = iVar3 + param_1->field_05B4;
    if (SHORT_007fb242 <= iVar3) {
      iVar3 = SHORT_007fb242 + -1;
    }
    iVar1 = thunk_FUN_00581120(local_8,iVar1,iVar2,iVar3,5,param_1->field_0024,param_1->field_0018,
                               param_1->field_0032);
    param_1->field_04D0 = *(undefined4 *)(iVar1 + 0x18);
    param_1->field_02D1 = 5;
    return 0;
  }
  return 0;
}

