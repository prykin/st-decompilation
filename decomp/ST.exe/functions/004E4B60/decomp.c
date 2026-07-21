
undefined4 __fastcall FUN_004e4b60(AnonShape_004E4B60_EABE8E44 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  switch(param_1->field_0245) {
  case 0:
    if ((*(int *)&param_1[2].field_0x114 == 0x36) || (*(int *)&param_1[2].field_0x114 == 0x5d)) {
      if (*(int *)&param_1->field_0x24 != param_1->field_023D) {
        uVar1 = GetPlayerRaceId((char)param_1->field_023D);
        iVar3 = param_1->field_0235;
        uVar2 = GetPlayerRaceId(param_1->field_0x24);
        if ((&DAT_007e1984)[(uVar2 & 0xff) + (iVar3 * 3 + (uVar1 & 0xff)) * 3] == '\0') {
          return 0;
        }
      }
      if (*(int *)&param_1[2].field_0x44 == 0) {
        iVar3 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x24,
                                   *(int *)(&DAT_00798fb0 + param_1->field_0239 * 4));
        iVar3 = *(int *)(&DAT_00798f98 + (iVar3 + param_1->field_0239 * 2) * 4);
        *(int *)&param_1[2].field_0x38 = iVar3;
        thunk_FUN_0041ce40(param_1,iVar3);
        *(undefined4 *)&param_1[2].field_0x44 = 1;
        return 0;
      }
    }
    break;
  case 1:
  case 2:
  case 6:
    if ((((*(int *)&param_1[2].field_0x114 == 0x36) || (*(int *)&param_1[2].field_0x114 == 0x5d)) &&
        (0 < *(int *)&param_1[2].field_0x38)) && (*(int *)&param_1[2].field_0x44 != 0)) {
      thunk_FUN_0041cf50((AnonShape_0041CF50_01071190 *)param_1);
      *(undefined4 *)&param_1[2].field_0x44 = 0;
    }
    if ((*(int *)&param_1[2].field_0x114 == 0x3d) || (*(int *)&param_1[2].field_0x114 == 0x5d)) {
      if (*(int *)&param_1[2].field_0x48 != 0) {
        thunk_FUN_0041d100((AnonShape_0041D100_A90F7B7E *)param_1);
        *(undefined4 *)&param_1[2].field_0x48 = 0;
      }
      if (*(int *)&param_1[2].field_0x4c != 0) {
        thunk_FUN_0041d2b0((AnonShape_0041D2B0_CE8C6BD3 *)param_1);
        *(undefined4 *)&param_1[2].field_0x4c = 0;
      }
    }
  }
  return 0;
}

