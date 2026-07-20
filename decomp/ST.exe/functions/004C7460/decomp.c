
undefined4 __fastcall FUN_004c7460(AnonShape_004C7460_AC9F4C4C *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_1->field_0361;
  if ((iVar2 == 0) && (param_1->field_03D4 == 0)) {
    if (*(int *)(&DAT_00794d70 + param_1->field_0365 * 4) != -1) {
      thunk_FUN_004d7570(param_1->field_0024,*(int *)(&DAT_00794d70 + param_1->field_0365 * 4),
                         param_1->field_0018);
      return 0;
    }
  }
  else {
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_8 = 0;
    if (iVar2 != 0) {
      if (iVar2 == 5) {
        local_8 = param_1->field_0398;
        local_14 = param_1->field_039C;
        local_10 = param_1->field_03A0;
        local_c = param_1->field_03A4;
      }
      else {
        iVar2 = 100 - param_1->field_0394;
        iVar3 = param_1->field_036D + -1;
        local_8 = (iVar2 * param_1->field_0398) / 100 + iVar3 * param_1->field_0398;
        local_14 = (iVar2 * param_1->field_039C) / 100 + iVar3 * param_1->field_039C;
        local_10 = (iVar2 * param_1->field_03A0) / 100 + iVar3 * param_1->field_03A0;
        local_c = (iVar2 * param_1->field_03A4) / 100 + iVar3 * param_1->field_03A4;
      }
    }
    if ((param_1->field_03D4 != 0) && (local_18 = 0, 0 < param_1->field_03D4)) {
      iVar2 = param_1->field_0607;
      iVar3 = 0;
      do {
        thunk_FUN_004c7260(param_1,*(Global_sub_004C7260_param_1Enum *)(iVar3 + iVar2),
                           *(int *)(iVar3 + 4 + iVar2),&local_1c,&local_20,&local_24,&local_28);
        iVar2 = param_1->field_0607;
        iVar1 = *(int *)(iVar3 + 8 + iVar2);
        iVar3 = iVar3 + 0x27;
        local_8 = local_8 + iVar1 * local_1c;
        local_14 = local_14 + iVar1 * local_20;
        local_10 = local_10 + iVar1 * local_24;
        local_c = local_c + iVar1 * local_28;
        local_18 = local_18 + 1;
      } while (local_18 < param_1->field_03D4);
    }
    iVar2 = param_1->field_0361;
    if (iVar2 == 0) {
      iVar2 = *(int *)param_1->field_0607;
    }
    if (*(int *)(&DAT_00794d70 + iVar2 * 4) != -1) {
      iVar1 = thunk_FUN_004406c0(param_1->field_0024);
      iVar3 = local_8;
      if ((char)iVar1 == '\x03') {
        iVar3 = 0;
      }
      thunk_FUN_004d76e0(param_1->field_0024,*(int *)(&DAT_00794d70 + iVar2 * 4),param_1->field_0018
                         ,iVar3,local_14,local_10,local_c);
    }
  }
  return 0;
}

