
undefined4 __fastcall FUN_0060cef0(AnonShape_0060CEF0_8FC1D59C *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;

  iVar1 = param_1->field_023C;
  local_c = 0;
  local_10 = 0;
  if (0 < iVar1) {
    local_8 = 0;
    do {
      iVar2 = FUN_006aff50(local_8);
      iVar3 = FUN_006aff5b(local_8);
      iVar4 = (param_1->field_01FD * iVar2) / 10000 + param_1->field_01E9;
      iVar5 = (param_1->field_01FD * iVar3) / 10000 + param_1->field_01ED;
      iVar2 = thunk_FUN_0060ccf0(param_1,local_10,iVar4,iVar5,param_1->field_01F1,
                                 (param_1->field_01F9 * iVar2) / 10000 + iVar4,
                                 (param_1->field_01F9 * iVar3) / 10000 + iVar5,param_1->field_01F1);
      if (iVar2 != 0) {
        local_c = local_c + 1;
      }
      local_8 = local_8 + (int)(0x168 / (longlong)iVar1);
      local_10 = local_10 + 1;
    } while (local_10 < param_1->field_023C);
  }
  if (local_c != param_1->field_023C) {
    return 0;
  }
  return 1;
}

