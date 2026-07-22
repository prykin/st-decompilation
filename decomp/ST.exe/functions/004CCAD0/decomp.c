
void __fastcall FUN_004ccad0(AnonShape_004CCAD0_262475FB *param_1)

{
  undefined4 uVar1;

  thunk_FUN_00423160();
  uVar1 = 0;
  if (param_1->field_0361 != 0) {
    uVar1 = thunk_FUN_004c91a0(param_1);
  }
  param_1->field_0265 = param_1->field_0265 & 0xfffffffd;
  param_1->field_026D = 0;
  if (*(int *)&param_1[1].field_0x244 == 0x50) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    thunk_FUN_004b70d0(CONCAT31((int3)((uint)uVar1 >> 8),param_1->field_0x24),0x28);
  }
  if ((*(int *)&param_1[1].field_0x244 == 0x6f) || (*(int *)&param_1[1].field_0x244 == 0x73)) {
    thunk_FUN_004eccc0((int *)param_1);
  }
  if (*(int *)&param_1[1].field_0x244 == 0x36) {
    thunk_FUN_0041cf50((AnonShape_0041CF50_01071190 *)param_1);
  }
  if ((*(int *)&param_1[1].field_0x244 == 0x3d) || (*(int *)&param_1[1].field_0x244 == 0x5d)) {
    if (*(int *)&param_1[1].field_0x178 != 0) {
      thunk_FUN_0041d100((AnonShape_0041D100_A90F7B7E *)param_1);
      *(undefined4 *)&param_1[1].field_0x178 = 0;
    }
    if (*(int *)&param_1[1].field_0x17c != 0) {
      STMineSetC::sub_0041D2B0((STMineSetC *)param_1);
      *(undefined4 *)&param_1[1].field_0x17c = 0;
    }
  }
  TLOBaseTy::sub_004B9A40((TLOBaseTy *)param_1);
  STSprGameObjC::sub_0041F970((STSprGameObjC *)param_1);
  TLOBaseTy::sub_00419D30((TLOBaseTy *)param_1,0xfe);
  return;
}

