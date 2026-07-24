
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E51B0 -> 004E4F30 @ 004E5728 */

undefined4 __fastcall FUN_004e4f30(STMineSetC *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  if ((param_1->field_05AC != 0x5d) && (param_1->field_05AC != 0x3d)) {
    return 0;
  }
  if (param_1->field_04E0 != 0) {
    thunk_FUN_0041d100((AnonShape_0041D100_A90F7B7E *)param_1);
    param_1->field_04E0 = 0;
  }
  if (param_1->field_0024 != param_1->field_023D) {
    uVar2 = GetPlayerRaceId((char)param_1->field_023D);
    iVar4 = param_1->field_0235;
    uVar3 = GetPlayerRaceId(*(char *)&param_1->field_0024);
    if ((&DAT_007e1984)[(uVar3 & 0xff) + ((uVar2 & 0xff) + iVar4 * 3) * 3] == '\0')
    goto LAB_004e4ffe;
  }
  if ((param_1->field_05AC != 0x5d) ||
     (iVar4 = thunk_FUN_004e60d0(param_1->field_0024,0x46), iVar4 != 0)) {
    thunk_FUN_0041cff0(param_1,*(int *)(&DAT_00798fbc + param_1->field_0239 * 4));
    param_1->field_04E0 = 1;
  }
LAB_004e4ffe:
  if (param_1->field_05AC == 0x5d) {
    iVar4 = 0x4a;
  }
  else if ((param_1->field_05AC == 0x3d) &&
          (iVar4 = GetPlayerRaceId(*(char *)&param_1->field_0024), (char)iVar4 == '\x01')) {
    iVar4 = 0x12;
  }
  else {
    iVar4 = 0;
  }
  if (param_1->field_04E4 != 0) {
    STMineSetC::sub_0041D2B0(param_1);
    param_1->field_04E4 = 0;
  }
  if (param_1->field_0024 != param_1->field_023D) {
    uVar2 = GetPlayerRaceId((char)param_1->field_023D);
    iVar1 = param_1->field_0235;
    uVar3 = GetPlayerRaceId(*(char *)&param_1->field_0024);
    if ((&DAT_007e1984)[(uVar3 & 0xff) + ((uVar2 & 0xff) + iVar1 * 3) * 3] == '\0') {
      return 0;
    }
  }
  if ((iVar4 != 0) && (iVar4 = thunk_FUN_004e60d0(param_1->field_0024,iVar4), iVar4 == 0)) {
    return 0;
  }
  STMineSetC::sub_0041D1A0(param_1,10);
  param_1->field_04E4 = 1;
  return 0;
}

