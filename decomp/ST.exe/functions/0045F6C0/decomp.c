
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0 */

undefined4 __thiscall STBoatC::sub_0045F6C0(STBoatC *this)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 extraout_var;
  int iVar9;
  uint uVar10;
  undefined4 unaff_EBX;
  int iVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar13 = 0;
  uVar5 = thunk_FUN_004406c0(this->field_0x24);
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 1) {
    iVar13 = *(int *)&this->field_0x24;
    iVar15 = 5;
  }
  else if (uVar5 == 2) {
    iVar13 = *(int *)&this->field_0x24;
    iVar15 = 0x82;
  }
  else {
    if (uVar5 != 3) goto LAB_0045f710;
    iVar13 = *(int *)&this->field_0x24;
    iVar15 = 0x6d;
  }
  iVar13 = thunk_FUN_004e60d0(iVar13,iVar15);
LAB_0045f710:
  bVar3 = thunk_FUN_00430750(this->field_06F7);
  if (iVar13 == 1) {
    bVar3 = bVar3 + 2;
    iVar13 = 0;
  }
  else if (iVar13 == 2) {
    bVar3 = bVar3 + 6;
    iVar13 = 0;
  }
  else {
    iVar13 = iVar13 + -3;
    if (iVar13 == 0) {
      bVar3 = bVar3 + 8;
    }
  }
  this->field_0061 = bVar3;
  this->field_00E3 = 1;
  this->field_0062 = bVar3 >> 1;
  iVar15 = this->field_0097;
  this->field_00D3 = 1;
  iVar14 = CONCAT22((short)((uint)iVar13 >> 0x10),*(short *)(iVar15 + 8) * 0xc9) + 100;
  sVar12 = (short)iVar14;
  uVar5 = (int)sVar12 - (int)this->field_0041;
  iVar11 = CONCAT22((short)((uint)unaff_EBX >> 0x10),*(short *)(iVar15 + 10) * 0xc9) + 100;
  uVar10 = (int)uVar5 >> 0x1f;
  iVar9 = CONCAT22(extraout_var,*(short *)(iVar15 + 0xc) * 200) + 100;
  iVar13 = (uVar5 ^ uVar10) - uVar10;
  sVar4 = (short)iVar11;
  uVar5 = (int)sVar4 - (int)this->field_0043;
  uVar10 = (int)uVar5 >> 0x1f;
  iVar15 = (uVar5 ^ uVar10) - uVar10;
  uVar5 = (int)(short)iVar9 - (int)this->field_0045;
  uVar10 = (int)uVar5 >> 0x1f;
  iVar6 = (uVar5 ^ uVar10) - uVar10;
  if (((iVar6 != 0) && (iVar13 == 0 || 2 < iVar6 / iVar13)) && (iVar15 == 0 || 2 < iVar6 / iVar15))
  {
    bVar3 = bVar3 >> 1;
  }
  iVar7 = STJellyGunC::sub_00415B30
                    ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,sVar12,
                     sVar4,(short)iVar9,bVar3);
  if (iVar7 != 0) {
    return 0xffffffff;
  }
  if ((*(short *)&this->field_0x8c != 1) &&
     ((this->field_0041 != sVar12 || (this->field_0043 != sVar4)))) {
    bVar2 = false;
    bVar1 = false;
    if ((iVar13 != 0) && (0x23a < (iVar6 * 100) / iVar13)) {
      bVar1 = true;
    }
    if ((iVar15 != 0) && (0x23a < (iVar6 * 100) / iVar15)) {
      bVar2 = true;
    }
    if ((!bVar1) || (!bVar2)) {
      uVar8 = (undefined2)((uint)iVar9 >> 0x10);
      sVar4 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar8,this->field_0041),CONCAT22(uVar8,this->field_0043),
                         CONCAT22((short)((uint)iVar15 >> 0x10),this->field_0045),iVar14,iVar11,
                         iVar9);
      uVar5 = sub_004176C0(this,sVar4);
      if ((short)uVar5 != this->field_006C) {
        thunk_FUN_00417740(this,this->field_006C,(short)uVar5);
      }
    }
  }
  return 0;
}

