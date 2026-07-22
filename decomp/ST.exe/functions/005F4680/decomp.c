
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=33;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STBHEShellC::sub_005F4680(STBHEShellC *this)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;

  if (this->field_008F < 0) {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005F35F0::sub_005F35F0
              ((AnonReceiver_005F35F0 *)this,this->field_0087);
  }
  pVVar2 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    iVar5 = this->field_009B;
    sVar1 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      local_8 = (short)(((short)(iVar5 / 200) + sVar1) -
                       (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_8 = (int)(short)(((short)(iVar5 / 200) + sVar1) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = this->field_0097;
    sVar1 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar1) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar1) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar3 = this->field_0093;
    sVar1 = (short)(iVar3 >> 0x1f);
    if (iVar3 < 0) {
      iVar3 = (short)(((short)(iVar3 / 0xc9) + sVar1) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar3 = (int)(short)(((short)(iVar3 / 0xc9) + sVar1) -
                          (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
    }
    if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar3,iVar5,
                      &local_c,&local_10), -1 < local_8)) && ((local_8 < 5 && (-1 < local_c)))) &&
        ((local_c < pVVar2->field_0030 &&
         ((local_10 = g_centeredOffsets5[local_8] + local_10, -1 < local_10 &&
          (local_10 < pVVar2->field_0034)))))) &&
       ((pVVar2->field_004C != (byte *)0x0 &&
        (pVVar2->field_004C[local_c + local_10 * pVVar2->field_0030] == 0)))) {
      if (this->field_00C4 == '\0') {
        return;
      }
      FUN_006eab60(PTR_00807598,this->field_008F);
      this->field_00C4 = 0;
      return;
    }
    iVar5 = this->field_00AB + 1;
    this->field_00AB = iVar5;
    if (this->field_00AF <= iVar5) {
      this->field_00AB = 0;
    }
    FUN_006ea960(PTR_00807598,this->field_008F,
                 (float)this->field_0093 * _DAT_007904f8 * _DAT_007904f0,
                 (float)this->field_0097 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)this->field_009B * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006ea270(PTR_00807598,this->field_008F,0,this->field_00AB);
    local_8 = FUN_006acf0d(this->field_009F,this->field_00A3,this->field_00A7,this->field_0093,
                           this->field_0097,this->field_009B);
    if (local_8 == 0) {
      iVar5 = this->field_0093;
      iVar3 = this->field_0097;
      iVar4 = this->field_009B;
    }
    else {
      iVar5 = ((this->field_009F - this->field_0093) * 0x28) / local_8 + this->field_0093;
      iVar3 = ((this->field_00A3 - this->field_0097) * 0x28) / local_8 + this->field_0097;
      iVar4 = ((this->field_00A7 - this->field_009B) * 0x28) / local_8 + this->field_009B;
    }
    TraksClassTy::TraksCreate(g_traksClass_00802A7C,1,1,0,iVar5,iVar3,iVar4,0,0,0,0,0,0,-1,0,0);
    if (this->field_00C4 == '\0') {
      FUN_006eaaa0(PTR_00807598,this->field_008F,0);
      this->field_00C4 = 1;
      return;
    }
  }
  return;
}

