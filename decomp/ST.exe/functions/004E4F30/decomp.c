
undefined4 __fastcall FUN_004e4f30(AnonShape_004E4F30_490004C0 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  if ((*(int *)&param_1[2].field_0x124 != 0x5d) && (*(int *)&param_1[2].field_0x124 != 0x3d)) {
    return 0;
  }
  if (*(int *)&param_1[2].field_0x58 != 0) {
    thunk_FUN_0041d100((AnonShape_0041D100_A90F7B7E *)param_1);
    *(undefined4 *)&param_1[2].field_0x58 = 0;
  }
  if (*(int *)&param_1->field_0x24 != param_1->field_023D) {
    uVar2 = GetPlayerRaceId((char)param_1->field_023D);
    iVar4 = param_1->field_0235;
    uVar3 = GetPlayerRaceId(param_1->field_0x24);
    if ((&DAT_007e1984)[(uVar3 & 0xff) + ((uVar2 & 0xff) + iVar4 * 3) * 3] == '\0')
    goto LAB_004e4ffe;
  }
  if ((*(int *)&param_1[2].field_0x124 != 0x5d) ||
     (iVar4 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x24,0x46), iVar4 != 0)) {
    thunk_FUN_0041cff0(param_1,*(int *)(&DAT_00798fbc + param_1->field_0239 * 4));
    *(undefined4 *)&param_1[2].field_0x58 = 1;
  }
LAB_004e4ffe:
  if (*(int *)&param_1[2].field_0x124 == 0x5d) {
    iVar4 = 0x4a;
  }
  else if ((*(int *)&param_1[2].field_0x124 == 0x3d) &&
          (iVar4 = GetPlayerRaceId(param_1->field_0x24), (char)iVar4 == '\x01')) {
    iVar4 = 0x12;
  }
  else {
    iVar4 = 0;
  }
  if (*(int *)&param_1[2].field_0x5c != 0) {
    thunk_FUN_0041d2b0((AnonShape_0041D2B0_CE8C6BD3 *)param_1);
    *(undefined4 *)&param_1[2].field_0x5c = 0;
  }
  if (*(int *)&param_1->field_0x24 != param_1->field_023D) {
    uVar2 = GetPlayerRaceId((char)param_1->field_023D);
    iVar1 = param_1->field_0235;
    uVar3 = GetPlayerRaceId(param_1->field_0x24);
    if ((&DAT_007e1984)[(uVar3 & 0xff) + ((uVar2 & 0xff) + iVar1 * 3) * 3] == '\0') {
      return 0;
    }
  }
  if ((iVar4 != 0) && (iVar4 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x24,iVar4), iVar4 == 0))
  {
    return 0;
  }
  thunk_FUN_0041d1a0(param_1,10);
  *(undefined4 *)&param_1[2].field_0x5c = 1;
  return 0;
}

