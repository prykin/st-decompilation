
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0 */

undefined4 __thiscall STBoatC::sub_0045F6C0(STBoatC *this)

{
  AnonPointee_STBoatC_0097 *pAVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar10;
  uint uVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBX;
  int iVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  int iVar16;

  iVar14 = 0;
  uVar6 = GetPlayerRaceId(*(char *)&this->field_0024);
  uVar6 = uVar6 & 0xff;
  if (uVar6 == 1) {
    iVar14 = this->field_0024;
    iVar16 = 5;
  }
  else if (uVar6 == 2) {
    iVar14 = this->field_0024;
    iVar16 = 0x82;
  }
  else {
    if (uVar6 != 3) goto LAB_0045f710;
    iVar14 = this->field_0024;
    iVar16 = 0x6d;
  }
  iVar14 = thunk_FUN_004e60d0(iVar14,iVar16);
LAB_0045f710:
  bVar4 = thunk_FUN_00430750(this->field_06F7);
  if (iVar14 == 1) {
    bVar4 = bVar4 + 2;
    iVar14 = 0;
  }
  else if (iVar14 == 2) {
    bVar4 = bVar4 + 6;
    iVar14 = 0;
  }
  else {
    iVar14 = iVar14 + -3;
    if (iVar14 == 0) {
      bVar4 = bVar4 + 8;
    }
  }
  this->field_0061 = bVar4;
  this->field_00E3 = 1;
  this->field_0062 = bVar4 >> 1;
  pAVar1 = this->field_0097;
  this->field_00D3 = 1;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar15 = CONCAT22((short)((uint)iVar14 >> 0x10),pAVar1->field_0008 * 0xc9) + 100;
  sVar13 = (short)iVar15;
  uVar6 = (int)sVar13 - (int)this->field_0041;
  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  iVar12 = CONCAT22((short)((uint)unaff_EBX >> 0x10),pAVar1->field_000A * 0xc9) + 100;
  uVar11 = (int)uVar6 >> 0x1f;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  iVar10 = CONCAT22(extraout_var,pAVar1->field_000C * 200) + 100;
  iVar14 = (uVar6 ^ uVar11) - uVar11;
  sVar5 = (short)iVar12;
  uVar6 = (int)sVar5 - (int)this->field_0043;
  uVar11 = (int)uVar6 >> 0x1f;
  iVar16 = (uVar6 ^ uVar11) - uVar11;
  uVar6 = (int)(short)iVar10 - (int)this->field_0045;
  uVar11 = (int)uVar6 >> 0x1f;
  iVar7 = (uVar6 ^ uVar11) - uVar11;
  if (((iVar7 != 0) && (iVar14 == 0 || 2 < iVar7 / iVar14)) && (iVar16 == 0 || 2 < iVar7 / iVar16))
  {
    bVar4 = bVar4 >> 1;
  }
  iVar8 = sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,sVar13,sVar5,
                       (short)iVar10,bVar4);
  if (iVar8 != 0) {
    return 0xffffffff;
  }
  if ((this->field_008C != 1) && ((this->field_0041 != sVar13 || (this->field_0043 != sVar5)))) {
    bVar3 = false;
    bVar2 = false;
    if ((iVar14 != 0) && (0x23a < (iVar7 * 100) / iVar14)) {
      bVar2 = true;
    }
    if ((iVar16 != 0) && (0x23a < (iVar7 * 100) / iVar16)) {
      bVar3 = true;
    }
    if ((!bVar2) || (!bVar3)) {
      uVar9 = (undefined2)((uint)iVar10 >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sVar5 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar9,this->field_0041),CONCAT22(uVar9,this->field_0043),
                         CONCAT22((short)((uint)iVar16 >> 0x10),this->field_0045),iVar15,iVar12,
                         iVar10);
      uVar6 = sub_004176C0(this,sVar5);
      if ((short)uVar6 != this->field_006C) {
        thunk_FUN_00417740(this,this->field_006C,(short)uVar6);
      }
    }
  }
  return 0;
}

