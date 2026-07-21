
uint __thiscall FUN_006226c0(void *this,uint param_1,int param_2)

{
  VisibleClassTy *pVVar1;
  uint uVar2;
  int iVar3;
  void *local_8;

  uVar2 = *(uint *)((int)this + 0x2ae);
  local_8 = this;
  if (((uVar2 == 0) || (uVar2 == 1)) &&
     (uVar2 = (uint)DAT_0080874d, *(uint *)((int)this + 0x24) != uVar2)) {
    switch(*(undefined1 *)((int)this + 0x2ad)) {
    case 0:
    case 2:
      uVar2 = thunk_FUN_0041d6c0(this,uVar2);
      if (uVar2 == 0) {
        return 0;
      }
      break;
    case 1:
      uVar2 = thunk_FUN_0041d620(this,uVar2);
      if (uVar2 == 0) {
        return 0;
      }
      break;
    case 3:
      return 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x211);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)(iVar3 + 0x48) <= (int)param_1) && ((int)param_1 <= *(int *)(iVar3 + 0x58))) &&
     ((uVar2 = param_2, *(int *)(iVar3 + 0x44) <= param_2 && (param_2 <= *(int *)(iVar3 + 0x54)))))
  {
    param_1 = FUN_006ddbd0();
    pVVar1 = g_visibleClass_00802A88;
    uVar2 = param_1;
    if ((param_1 == 0) || (g_visibleClass_00802A88 == (VisibleClassTy *)0x0))
    goto cf_common_exit_006227F9;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar2 = CONCAT31((int3)(param_1 >> 8),DAT_0080874d);
    iVar3 = (int)*(short *)((int)this + 0x4b);
    if ((DAT_0080874d == 0xff) ||
       ((((((uVar2 = 0, g_visibleClass_00802A88->field_00F8 == 0 ||
            (uVar2 = thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                        (int)*(short *)((int)this + 0x47),
                                        (int)*(short *)((int)this + 0x49),&param_2,(int *)&local_8),
            iVar3 < 0)) || (4 < iVar3)) || ((param_2 < 0 || (pVVar1->field_0030 <= param_2)))) ||
         ((uVar2 = g_centeredOffsets5[iVar3] + (int)local_8, (int)uVar2 < 0 ||
          ((pVVar1->field_0034 <= (int)uVar2 || (pVVar1->field_004C == (byte *)0x0)))))) ||
        (uVar2 = (uint)pVVar1->field_004C[param_2 + uVar2 * pVVar1->field_0030], uVar2 != 0))))
    goto cf_common_exit_006227F9;
  }
  param_1 = 0;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
cf_common_exit_006227F9:
  return CONCAT31((int3)(uVar2 >> 8),(undefined1)param_1);
}

