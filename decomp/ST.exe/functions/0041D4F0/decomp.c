
void __fastcall FUN_0041d4f0(AnonShape_0041D4F0_1597DF6B *param_1)

{
  int iVar1;

  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    thunk_FUN_0055a110(g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                       (char)param_1->field_005F,*(uint *)&param_1->field_0x24,
                       (undefined *)param_1->field_0111,*(undefined4 *)&param_1->field_0x18);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*(int *)param_1 + 8))();
  if ((iVar1 == 1) && (*(uint *)&param_1->field_0x24 == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    FUN_006e6780(PTR_00807598,
                 CONCAT22(CONCAT11(3,(char)((uint)*(undefined4 *)&param_1->field_0x18 >> 0x10)),
                          *(undefined2 *)&param_1->field_0x18));
  }
  param_1->field_0111 = 0xffffffff;
  return;
}

