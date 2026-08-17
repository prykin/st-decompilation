#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STOctopusC.cpp

// 00589990 STOctopusC::STOctopusC
#line 4 "decomp/ST.exe/functions/00589990/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BBB8 (store 005899B9)
   Evidence: final_vptr=0079BBB8; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00589990 returns STOctopusC::STOctopusC this @ 005899CF

   [STSwitchEnumApplier] Switch target field_0249 uses
   /SubmarineTitans/Recovered/Enums/STOctopusC_field_0249State. Cases: CASE_0=0;CASE_2=2;CASE_3=3 */

STOctopusC * __thiscall st::fn_00589990(STOctopusC *this)

{

  /* ST_CALLSITE[00589994]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  st::fn_00401933((STGameObjC *)this);
  /* ST_CALLSITE[005899A1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  st::fn_00401316((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = st::machine_word_boundary_cast<undefined4>(&st_global_0079BD18);
  this->vtable = &st_global_0079BBB8;
  this->field_0249 = CASE_0;
  memset(&this->field_0x285, 0, 0x28); /* compiler bulk-zero initialization */
  return this;
}

// 0058AF70 STOctopusC::sub_0058AF70
#line 4 "decomp/ST.exe/functions/0058AF70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STOctopusC.
   Evidence: this_call_owners=[STOctopusC]; agreed_this_calls=1; incoming_this_accesses=41;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_0058AF70(STOctopusC *this,short param_1,short param_2,short param_3)

{
  STOctopusC_field_02A5State SVar1;
  int iVar3;
  int iVar2;
  int local_EAX_118;
  int iVar4;
  int iVar5;

  this->field_004E = param_1;
  this->field_0050 = param_2;
  iVar3 = (int)param_1 - (int)this->field_0041;
  this->field_0052 = param_3;
  iVar4 = (int)param_2 - (int)this->field_0043;
  this->field_0269 = iVar3;
  iVar5 = (int)param_3 - (int)this->field_0045;
  this->field_026D = iVar4;
  this->field_0271 = iVar5;
  iVar2 = st::fn_006ACF0D(0,0,0,iVar3,iVar4,iVar5);
  this->field_0239 = iVar2;
  local_EAX_118 = st::fn_006ACF0D(0,0,0,this->field_0269,this->field_026D,0);
  SVar1 = this->field_02A5;
  this->field_023D = local_EAX_118;
  if ((SVar1 == CASE_F8) || (SVar1 == CASE_F9)) {
    iVar3 = this->field_0239;
    this->field_0251 = (this->field_0269 << 8) / iVar3;
    this->field_0255 = (this->field_026D << 8) / iVar3;
    iVar4 = st::machine_word_boundary_cast<int>(this->field_0271 << 8);
  }
  else {
    iVar3 = this->field_0239;
    this->field_0251 = (this->field_0269 << 9) / iVar3;
    this->field_0255 = (this->field_026D << 9) / iVar3;
    iVar4 = st::machine_word_boundary_cast<int>(this->field_0271 << 9);
  }
  this->field_0275 = (int)this->field_0041;
  this->field_0265 = 0;
  this->field_0261 = 0;
  this->field_025D = 0;
  this->field_027D = (int)this->field_0045;
  this->field_0259 = iVar4 / iVar3;
  this->field_0279 = (int)this->field_0043;
  if ((this->field_0281 == 0) && ((SVar1 == CASE_F8 || (SVar1 == CASE_F9)))) {
    iVar3 = this->field_0251;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < this->field_0259) {
      iVar3 = this->field_0255;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < this->field_0259) {
        this->field_0281 = 1;
        return 1;
      }
    }
  }
  return 1;
}

// 0058B190 STOctopusC::sub_0058B190
#line 4 "decomp/ST.exe/functions/0058B190/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STOctopusC.
   Evidence: this_call_owners=[STOctopusC]; agreed_this_calls=1; incoming_this_accesses=59;
   incoming_edx_uses=17; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_0058B190
          (STOctopusC *this,short *param_1,short *param_2,short *param_3,short *param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar11;
  uint uVar10;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  uint uVar12;
  int iVar13;
  byte bVar14;
  bool bVar15;
  int local_14;
  int local_c;
  uint local_8;

  this->field_0281 = 0;
  iVar3 = g_worldGrid.sizeX + -1;
  iVar4 = g_worldGrid.sizeY + -1;
  sVar8 = this->field_0041;
  if (sVar8 < 0) {
    STPiece<0,2>(local_14) =
         ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    STPiece<0,2>(local_14) =
         (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  sVar8 = this->field_0043;
  this->field_0047 = (short)local_14;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  sVar9 = this->field_0045;
  this->field_0049 = sVar8;
  sVar9 = STBiasedDiv16(sVar9, 200); /* exact signed 16-bit grid-index division */
  this->field_004B = sVar9;
  if ((short)local_14 < 0) {
    this->field_0047 = 0;
  }
  if (sVar8 < 0) {
    this->field_0049 = 0;
  }
  if (iVar3 < this->field_0047) {
    this->field_0047 = (short)iVar3;
  }
  if (iVar4 < this->field_0049) {
    this->field_0049 = (short)iVar4;
  }
  iVar6 = (int)this->field_0047;
  bVar14 = iVar6 + -1 < 0;
  iVar5 = (int)this->field_0049;
  if (iVar5 + -1 < 0) {
    bVar14 = bVar14 + 1;
  }
  if (iVar3 < iVar6 + 1) {
    bVar14 = bVar14 + 1;
  }
  if (iVar4 < iVar5 + 1) {
    bVar14 = bVar14 + 1;
  }
  if ((((this->field_02A5 == CASE_F8) || (this->field_02A5 == CASE_F9)) && (sVar9 < 4)) &&
     (((byte)g_playSystem_00802A38->field_00E4 & 7) == 1)) {
    uVar12 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
    this->field_001C = uVar12;
    this->field_0281 = 1;
    local_c = (uVar12 >> 0x10) % 0x66 + 100 + (int)this->field_0045;
    goto LAB_0058b5ac;
  }
  iVar13 = 0;
  iVar7 = 0;
  if ((g_playSystem_00802A38->field_00E4 & 3) == 0) {
    iVar13 = this->field_0251;
    iVar7 = iVar13;
    if (iVar13 < 0) {
      iVar7 = -iVar13;
    }
    if (0x1d < iVar7) {
      iVar6 = iVar6 + ((-1 < iVar13) - 1 & 0xfffffffe) + 1;
    }
    iVar13 = this->field_0255;
    iVar7 = iVar13;
    if (iVar13 < 0) {
      iVar7 = -iVar13;
    }
    if (0x1d < iVar7) {
      iVar5 = iVar5 + ((-1 < iVar13) - 1 & 0xfffffffe) + 1;
    }
    iVar13 = iVar6;
    iVar7 = iVar5;
    if (((iVar3 < iVar6) || (iVar6 < 0)) || ((iVar4 <= iVar5 || (iVar5 < 0)))) goto LAB_0058b3ab;
    goto LAB_0058b499;
  }
LAB_0058b3ab:
  if (bVar14 < 2) {
    uVar12 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
    this->field_001C = uVar12;
    iVar6 = ((uVar12 >> 0x10) % 3 - 1) + (int)this->field_006C;
  }
  else {
    uVar12 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
    this->field_001C = uVar12;
    iVar6 = ((uVar12 >> 0x10) % 5 - 2) + (int)this->field_006C;
  }
  if (iVar6 < 8) {
    if (iVar6 < 0) {
      iVar6 = iVar6 + 8;
    }
  }
  else {
    iVar6 = iVar6 + -8;
  }
  switch(iVar6) {
  case 0:
    iVar7 = (int)this->field_0049;
    iVar13 = st::machine_word_boundary_cast<int>(this->field_0047 + 1);
    break;
  case 1:
    iVar13 = st::machine_word_boundary_cast<int>(this->field_0047 + 1);
    iVar7 = st::machine_word_boundary_cast<int>(this->field_0049 + -1);
    break;
  case 2:
    iVar13 = (int)this->field_0047;
    iVar7 = st::machine_word_boundary_cast<int>(this->field_0049 + -1);
    break;
  case 3:
    iVar13 = st::machine_word_boundary_cast<int>(this->field_0047 + -1);
    iVar7 = st::machine_word_boundary_cast<int>(this->field_0049 + -1);
    break;
  case 4:
    iVar7 = (int)this->field_0049;
    iVar13 = st::machine_word_boundary_cast<int>(this->field_0047 + -1);
    break;
  case 5:
    iVar13 = st::machine_word_boundary_cast<int>(this->field_0047 + -1);
    goto LAB_0058b466;
  case 6:
    iVar13 = (int)this->field_0047;
    goto LAB_0058b466;
  case 7:
    iVar13 = st::machine_word_boundary_cast<int>(this->field_0047 + 1);
LAB_0058b466:
    iVar7 = st::machine_word_boundary_cast<int>(this->field_0049 + 1);
  }
  iVar6 = iVar13;
  if (iVar3 < iVar13) {
    iVar7 = (int)this->field_0049;
    iVar6 = iVar3;
  }
  if (iVar6 < 0) {
    iVar7 = (int)this->field_0049;
    iVar6 = 0;
  }
  iVar5 = iVar7;
  if (iVar4 <= iVar7) {
    iVar6 = (int)this->field_0047;
    iVar5 = iVar4;
  }
  if (iVar5 < 0) {
    iVar6 = (int)this->field_0047;
    iVar5 = 0;
  }
LAB_0058b499:
  local_c = (int)this->field_0045;
  uVar12 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
  this->field_001C = uVar12;
  local_8 = (uVar12 >> 0x10) % 0x65;
  if ((int)((int)this->field_0045 + local_8) < 900) {
    iVar3 = local_c - local_8;
    if (0x31 < iVar3) {
      iVar3 = STBiasedDiv16(iVar3, 200); /* exact signed 16-bit grid-index division */
      uVar11 = st::fn_00404A3E(iVar6,iVar5,iVar3);
      iVar3 = local_8 + local_c;
      iVar3 = STBiasedDiv16(iVar3, 200); /* exact signed 16-bit grid-index division */
      uVar10 = st::fn_00404A3E(iVar6,iVar5,iVar3);
      if (((int)uVar11 < 0) && ((int)uVar10 < 0)) {
        if ((local_8 & 1) != 0) {
          local_8 = -local_8;
        }
      }
      else {
        if ((local_8 != 0) && (-1 < (int)uVar10)) {
          local_8 = -local_8;
        }
        if (((int)local_8 < 0) && (-1 < (int)uVar11)) {
          local_8 = -local_8;
        }
      }
    }
  }
  else {
    local_8 = -local_8;
  }
  local_c = local_c + local_8;
LAB_0058b5ac:
  sVar8 = (short)(local_c >> 0x1f);
  if (local_c < 0) {
    local_8 = (short)(((short)(local_c / 200) + sVar8) -
                     (short)((longlong)local_c * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_8 = (uint)(short)(((short)(local_c / 200) + sVar8) -
                           (short)((longlong)local_c * 0x51eb851f >> 0x3f));
  }
  bVar1 = false;
  do {
    while( true ) {
      local_14 = local_8;
      if ((int)local_8 < (int)(local_8 + 5)) {
        do {
          iVar3 = local_14;
          if (4 < local_14) {
            iVar3 = local_14 + -5;
          }
          sVar8 = (short)iVar6;
          sVar9 = (short)iVar5;
          iVar4 = st::fn_00404D3B(sVar8,sVar9,(short)iVar3);
          if ((iVar4 != 0) &&
             ((((sVar8 < 0 || (g_worldGrid.sizeX <= sVar8)) || (sVar9 < 0)) ||
              (((g_worldGrid.sizeY <= sVar9 || (sVar2 = (short)local_8, sVar2 < 0)) ||
               ((g_worldGrid.sizeZ <= sVar2 ||
                (STGridAt3D(g_worldGrid, sVar8, sVar9, sVar2).objects[0] == nullptr)))))))) {
            if (iVar3 != local_8) {
              local_c = (int)(short)((short)iVar3 * 200 + 100);
            }
            bVar1 = true;
            goto LAB_0058b6f6;
          }
          local_14 = local_14 + 1;
        } while (local_14 < (int)(local_8 + 5));
      }
      bVar15 = -1 < iVar6 - this->field_0047;
      if (iVar6 != this->field_0047 && bVar15) break;
      if (bVar15) {
        bVar15 = iVar5 - this->field_0049 < 0;
        if (iVar5 == this->field_0049 || bVar15) {
          if (!bVar15) goto LAB_0058b6f6;
          iVar5 = iVar5 + 1;
        }
        else {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_0058b6f6;
        }
      }
      else {
        iVar6 = iVar6 + 1;
      }
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
LAB_0058b6f6:
  sVar8 = (short)iVar6 * 0xc9 + 100;
  sVar9 = (short)iVar5 * 0xc9 + 100;
  if ((bVar1) &&
     (((this->field_0041 != sVar8 || (this->field_0043 != sVar9)) || (this->field_0045 != local_c)))
     ) {
    *param_1 = sVar8;
    *param_2 = sVar9;
    *param_3 = (short)local_c;
    /* ST_CALLSITE[0058B758]: CALL dword ptr [EDX + 0x10] */
    sVar2 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(local_c), (uint16_t)(this->field_0045)),sVar8,sVar9,local_c
                      );
    *param_4 = sVar2 / 0x2d - (short)((int)sVar2 / -0x4c000000);
    /* ST_CALLSITE[0058B77F]: CALL 0x004024f5; direct=004024F5 STOctopusC::sub_0058AF70 */
    st::fn_004024F5(this,sVar8,sVar9,(short)local_c);
    return 1;
  }
  uVar12 = (int)this->field_006C + 1U & 0x80000007;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
  }
  *param_4 = (short)uVar12;
  return 0;
}

// 0058BA10 STOctopusC::FUN_0058ba10
#line 4 "decomp/ST.exe/functions/0058BA10/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079BBB8
   Entries: 00405E93
   Slots: 0x2C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_0058BA10(STOctopusC *this)

{
  return this->field_02A5;
}

