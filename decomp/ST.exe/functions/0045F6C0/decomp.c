
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0 */

undefined4 __thiscall STBoatC::sub_0045F6C0(STBoatC *this)

{
  ushort *puVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  int uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int arg_6;
  uint uVar10;
  short arg_5;
  short arg_4;
  int iVar11;
  int iVar12;

  iVar11 = 0;
  uVar6 = LookupRecordByte(*(char *)&this->field_0024);
  uVar7 = uVar6 & 0xff;
  if (uVar7 == 1) {
    iVar11 = this->field_0024;
    iVar12 = 5;
  }
  else if (uVar7 == 2) {
    iVar11 = this->field_0024;
    iVar12 = 0x82;
  }
  else {
    if (uVar7 != 3) goto LAB_0045f710;
    iVar11 = this->field_0024;
    iVar12 = 0x6d;
  }
  iVar11 = thunk_FUN_004e60d0(iVar11,iVar12);
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_0045f710:
  bVar4 = thunk_FUN_00430750(*(Global_sub_00430750_param_1Enum *)((int)this->field_06CB + 0x2c));
  if (iVar11 == 1) {
    bVar4 = bVar4 + 2;
  }
  else if (iVar11 == 2) {
    bVar4 = bVar4 + 6;
  }
  else if (iVar11 == 3) {
    bVar4 = bVar4 + 8;
  }
  this->field_0061 = bVar4;
  this->field_00E3 = 1;
  this->field_0062 = bVar4 >> 1;
  puVar1 = this->field_0097;
  this->field_00D3 = 1;
  arg_4 = puVar1[4] * 0xc9 + 100;
  uVar7 = (int)arg_4 - (int)this->field_0041;
  arg_5 = puVar1[5] * 0xc9 + 100;
  uVar10 = (int)uVar7 >> 0x1f;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  arg_6 = CONCAT22(extraout_var,puVar1[6] * 200) + 100;
  iVar11 = (uVar7 ^ uVar10) - uVar10;
  uVar7 = (int)arg_5 - (int)this->field_0043;
  uVar10 = (int)uVar7 >> 0x1f;
  iVar12 = (uVar7 ^ uVar10) - uVar10;
  sVar5 = (short)arg_6;
  uVar7 = (int)sVar5 - (int)this->field_0045;
  uVar10 = (int)uVar7 >> 0x1f;
  iVar8 = (uVar7 ^ uVar10) - uVar10;
  if (((iVar8 != 0) && (iVar11 == 0 || 2 < iVar8 / iVar11)) && (iVar12 == 0 || 2 < iVar8 / iVar12))
  {
    bVar4 = bVar4 >> 1;
  }
  iVar9 = sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,arg_4,arg_5,sVar5,
                       bVar4);
  if (iVar9 != 0) {
    return 0xffffffff;
  }
  if ((this->field_008C != 1) && ((this->field_0041 != arg_4 || (this->field_0043 != arg_5)))) {
    bVar3 = false;
    bVar2 = false;
    if ((iVar11 != 0) && (0x23a < (iVar8 * 100) / iVar11)) {
      bVar2 = true;
    }
    if ((iVar12 != 0) && (0x23a < (iVar8 * 100) / iVar12)) {
      bVar3 = true;
    }
    if ((!bVar2) || (!bVar3)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         CONCAT22((short)((uint)iVar12 >> 0x10),this->field_0045),arg_4,arg_5,arg_6);
      uVar7 = sub_004176C0(this,sVar5);
      if ((short)uVar7 != this->field_006C) {
        thunk_FUN_00417740(this,this->field_006C,(short)uVar7);
      }
    }
  }
  return 0;
}

