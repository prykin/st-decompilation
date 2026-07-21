
uint __fastcall FUN_0062b4a0(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(int *)(param_1 + 0x46);
  sVar3 = (short)(local_14 >> 0x1f);
  if (local_14 < 0) {
    uVar6 = (uint)(short)(((short)(local_14 / 0xc9) + sVar3) -
                         (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = uVar6 - 1;
  }
  else {
    uVar6 = (uint)(short)(((short)(local_14 / 0xc9) + sVar3) -
                         (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = uVar6;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x4a);
  sVar3 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    iVar7 = (int)(short)(((short)(iVar1 / 0xc9) + sVar3) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_8 = iVar7 + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(iVar1 / 0xc9) + sVar3) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_8 = iVar7;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1 + 0x4e);
  sVar3 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    local_10 = (int)(short)(((short)(iVar2 / 200) + sVar3) -
                           (short)((longlong)iVar2 * 0x51eb851f >> 0x3f)) - 1;
  }
  else {
    local_10 = (uint)(short)(((short)(iVar2 / 200) + sVar3) -
                            (short)((longlong)iVar2 * 0x51eb851f >> 0x3f));
  }
  if (iVar1 < 0) {
    iVar7 = iVar7 + -1;
  }
  if (local_14 < 0) {
    uVar6 = uVar6 - 1;
  }
  if ((((PTR_00807598->field_0048 <= (int)uVar6) && ((int)uVar6 <= PTR_00807598->field_0058)) &&
      (PTR_00807598->field_0044 <= iVar7)) && (iVar7 <= PTR_00807598->field_0054)) {
    uVar5 = FUN_006ddbd0();
    pVVar4 = g_visibleClass_00802A88;
    uVar6 = uVar5;
    if (((uVar5 == 0) || (g_visibleClass_00802A88 == (VisibleClassTy *)0x0)) ||
       ((DAT_0080874d == -1 || (uVar6 = 0, g_visibleClass_00802A88->field_00F8 == 0))))
    goto cf_common_exit_0062B616;
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c,local_8,
                       &local_14,(int *)&local_c);
    uVar6 = local_10;
    if ((((int)local_10 < 0) || (4 < (int)local_10)) ||
       ((local_14 < 0 ||
        ((((pVVar4->field_0030 <= local_14 ||
           (uVar6 = (&DAT_0079aed0)[local_10] + local_c, (int)uVar6 < 0)) ||
          (pVVar4->field_0034 <= (int)uVar6)) ||
         ((pVVar4->field_004C == 0 ||
          (uVar6 = (uint)*(byte *)(uVar6 * pVVar4->field_0030 + pVVar4->field_004C + local_14),
          uVar6 != 0)))))))) goto cf_common_exit_0062B616;
  }
  uVar5 = 0;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
cf_common_exit_0062B616:
  return CONCAT31((int3)(uVar6 >> 8),(char)uVar5);
}

