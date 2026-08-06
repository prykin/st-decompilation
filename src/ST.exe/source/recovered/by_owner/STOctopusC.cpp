#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STOctopusC.cpp

// 00589990 STOctopusC::STOctopusC
#line 1 "decomp/ST.exe/functions/00589990/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BBB8 (store 005899B9)
   Evidence: final_vptr=0079BBB8; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00589990 returns STOctopusC::STOctopusC this @ 005899CF */

STOctopusC * __thiscall st::fn_00589990(STOctopusC *this)

{

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079BD18;
  this->vtable = &STOctopusCVTable;
  this->field_0249 = 0;
  memset(&this->field_0x285, 0, 0x28); /* compiler bulk-zero initialization */
  return this;
}

// 0058AF70 STOctopusC::sub_0058AF70
#line 1 "decomp/ST.exe/functions/0058AF70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STOctopusC.
   Evidence: this_call_owners=[STOctopusC]; agreed_this_calls=1; incoming_this_accesses=41;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_0058AF70(STOctopusC *this,short param_1,short param_2,short param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  this->field_004E = param_1;
  this->field_0050 = param_2;
  iVar2 = (int)param_1 - (int)this->field_0041;
  this->field_0052 = param_3;
  iVar3 = (int)param_2 - (int)this->field_0043;
  this->field_0269 = iVar2;
  iVar4 = (int)param_3 - (int)this->field_0045;
  this->field_026D = iVar3;
  this->field_0271 = iVar4;
  iVar2 = st::fn_006ACF0D(0,0,0,iVar2,iVar3,iVar4);
  this->field_0239 = iVar2;
  iVar2 = st::fn_006ACF0D(0,0,0,this->field_0269,this->field_026D,0);
  uVar1 = this->field_02A5;
  this->field_023D = iVar2;
  if ((uVar1 == 0xf8) || (uVar1 == 0xf9)) {
    iVar2 = this->field_0239;
    this->field_0251 = (this->field_0269 << 8) / iVar2;
    this->field_0255 = (this->field_026D << 8) / iVar2;
    iVar3 = this->field_0271 << 8;
  }
  else {
    iVar2 = this->field_0239;
    this->field_0251 = (this->field_0269 << 9) / iVar2;
    this->field_0255 = (this->field_026D << 9) / iVar2;
    iVar3 = this->field_0271 << 9;
  }
  this->field_0275 = (int)this->field_0041;
  this->field_0265 = 0;
  this->field_0261 = 0;
  this->field_025D = 0;
  this->field_027D = (int)this->field_0045;
  this->field_0259 = iVar3 / iVar2;
  this->field_0279 = (int)this->field_0043;
  if ((this->field_0281 == 0) && ((uVar1 == 0xf8 || (uVar1 == 0xf9)))) {
    iVar2 = this->field_0251;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < this->field_0259) {
      iVar2 = this->field_0255;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < this->field_0259) {
        this->field_0281 = 1;
        return 1;
      }
    }
  }
  return 1;
}

// 0058B190 STOctopusC::sub_0058B190
#line 1 "decomp/ST.exe/functions/0058B190/decomp.c"
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
  uint uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  bool bVar14;
  int local_14;
  int local_c;
  uint local_8;

  this->field_0281 = 0;
  iVar3 = g_worldGrid.sizeX + -1;
  iVar4 = g_worldGrid.sizeY + -1;
  sVar9 = this->field_0041;
  if (sVar9 < 0) {
    STPiece<0,2>(local_14) =
         ((sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    STPiece<0,2>(local_14) =
         (sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f);
  }
  sVar9 = this->field_0043;
  this->field_0047 = (short)local_14;
  if (sVar9 < 0) {
    sVar9 = ((sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar9 = (sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f);
  }
  sVar10 = this->field_0045;
  this->field_0049 = sVar9;
  if (sVar10 < 0) {
    sVar10 = ((sVar10 / 200 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f)
             ) + -1;
  }
  else {
    sVar10 = (sVar10 / 200 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f);
  }
  this->field_004B = sVar10;
  if ((short)local_14 < 0) {
    this->field_0047 = 0;
  }
  if (sVar9 < 0) {
    this->field_0049 = 0;
  }
  if (iVar3 < this->field_0047) {
    this->field_0047 = (short)iVar3;
  }
  if (iVar4 < this->field_0049) {
    this->field_0049 = (short)iVar4;
  }
  iVar7 = (int)this->field_0047;
  bVar13 = iVar7 + -1 < 0;
  iVar5 = (int)this->field_0049;
  if (iVar5 + -1 < 0) {
    bVar13 = bVar13 + 1;
  }
  if (iVar3 < iVar7 + 1) {
    bVar13 = bVar13 + 1;
  }
  if (iVar4 < iVar5 + 1) {
    bVar13 = bVar13 + 1;
  }
  if ((((this->field_02A5 == 0xf8) || (this->field_02A5 == 0xf9)) && (sVar10 < 4)) &&
     (((byte)g_playSystem_00802A38->field_00E4 & 7) == 1)) {
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar11;
    this->field_0281 = 1;
    local_c = (uVar11 >> 0x10) % 0x66 + 100 + (int)this->field_0045;
    goto LAB_0058b5ac;
  }
  iVar12 = 0;
  iVar8 = 0;
  if ((g_playSystem_00802A38->field_00E4 & 3) == 0) {
    iVar12 = this->field_0251;
    iVar8 = iVar12;
    if (iVar12 < 0) {
      iVar8 = -iVar12;
    }
    if (0x1d < iVar8) {
      iVar7 = iVar7 + ((-1 < iVar12) - 1 & 0xfffffffe) + 1;
    }
    iVar12 = this->field_0255;
    iVar8 = iVar12;
    if (iVar12 < 0) {
      iVar8 = -iVar12;
    }
    if (0x1d < iVar8) {
      iVar5 = iVar5 + ((-1 < iVar12) - 1 & 0xfffffffe) + 1;
    }
    iVar12 = iVar7;
    iVar8 = iVar5;
    if (((iVar3 < iVar7) || (iVar7 < 0)) || ((iVar4 <= iVar5 || (iVar5 < 0)))) goto LAB_0058b3ab;
    goto LAB_0058b499;
  }
LAB_0058b3ab:
  if (bVar13 < 2) {
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar11;
    iVar7 = ((uVar11 >> 0x10) % 3 - 1) + (int)this->field_006C;
  }
  else {
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar11;
    iVar7 = ((uVar11 >> 0x10) % 5 - 2) + (int)this->field_006C;
  }
  if (iVar7 < 8) {
    if (iVar7 < 0) {
      iVar7 = iVar7 + 8;
    }
  }
  else {
    iVar7 = iVar7 + -8;
  }
  switch(iVar7) {
  case 0:
    iVar8 = (int)this->field_0049;
    iVar12 = this->field_0047 + 1;
    break;
  case 1:
    iVar12 = this->field_0047 + 1;
    iVar8 = this->field_0049 + -1;
    break;
  case 2:
    iVar12 = (int)this->field_0047;
    iVar8 = this->field_0049 + -1;
    break;
  case 3:
    iVar12 = this->field_0047 + -1;
    iVar8 = this->field_0049 + -1;
    break;
  case 4:
    iVar8 = (int)this->field_0049;
    iVar12 = this->field_0047 + -1;
    break;
  case 5:
    iVar12 = this->field_0047 + -1;
    goto LAB_0058b466;
  case 6:
    iVar12 = (int)this->field_0047;
    goto LAB_0058b466;
  case 7:
    iVar12 = this->field_0047 + 1;
LAB_0058b466:
    iVar8 = this->field_0049 + 1;
  }
  iVar7 = iVar12;
  if (iVar3 < iVar12) {
    iVar8 = (int)this->field_0049;
    iVar7 = iVar3;
  }
  if (iVar7 < 0) {
    iVar8 = (int)this->field_0049;
    iVar7 = 0;
  }
  iVar5 = iVar8;
  if (iVar4 <= iVar8) {
    iVar7 = (int)this->field_0047;
    iVar5 = iVar4;
  }
  if (iVar5 < 0) {
    iVar7 = (int)this->field_0047;
    iVar5 = 0;
  }
LAB_0058b499:
  local_c = (int)this->field_0045;
  uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = uVar11;
  local_8 = (uVar11 >> 0x10) % 0x65;
  if ((int)((int)this->field_0045 + local_8) < 900) {
    iVar3 = local_c - local_8;
    if (0x31 < iVar3) {
      sVar9 = (short)(iVar3 >> 0x1f);
      if (iVar3 < 0) {
        iVar3 = (short)(((short)(iVar3 / 200) + sVar9) -
                       (short)((longlong)iVar3 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar3 = (int)(short)(((short)(iVar3 / 200) + sVar9) -
                            (short)((longlong)iVar3 * 0x51eb851f >> 0x3f));
      }
      uVar11 = st::fn_00404A3E(iVar7,iVar5,iVar3);
      iVar3 = local_8 + local_c;
      sVar9 = (short)(iVar3 >> 0x1f);
      if (iVar3 < 0) {
        iVar3 = (short)(((short)(iVar3 / 200) + sVar9) -
                       (short)((longlong)iVar3 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar3 = (int)(short)(((short)(iVar3 / 200) + sVar9) -
                            (short)((longlong)iVar3 * 0x51eb851f >> 0x3f));
      }
      uVar6 = st::fn_00404A3E(iVar7,iVar5,iVar3);
      if (((int)uVar11 < 0) && ((int)uVar6 < 0)) {
        if ((local_8 & 1) != 0) {
          local_8 = -local_8;
        }
      }
      else {
        if ((local_8 != 0) && (-1 < (int)uVar6)) {
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
  sVar9 = (short)(local_c >> 0x1f);
  if (local_c < 0) {
    local_8 = (short)(((short)(local_c / 200) + sVar9) -
                     (short)((longlong)local_c * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_8 = (uint)(short)(((short)(local_c / 200) + sVar9) -
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
          sVar9 = (short)iVar7;
          sVar10 = (short)iVar5;
          iVar4 = st::fn_00404D3B(sVar9,sVar10,(short)iVar3);
          if ((iVar4 != 0) &&
             ((((sVar9 < 0 || (g_worldGrid.sizeX <= sVar9)) || (sVar10 < 0)) ||
              (((g_worldGrid.sizeY <= sVar10 || (sVar2 = (short)local_8, sVar2 < 0)) ||
               ((g_worldGrid.sizeZ <= sVar2 ||
                (STGridAt3D(g_worldGrid, sVar9, sVar10, sVar2).objects[0] == nullptr)))))))) {
            if (iVar3 != local_8) {
              local_c = (int)(short)((short)iVar3 * 200 + 100);
            }
            bVar1 = true;
            goto LAB_0058b6f6;
          }
          local_14 = local_14 + 1;
        } while (local_14 < (int)(local_8 + 5));
      }
      bVar14 = -1 < iVar7 - this->field_0047;
      if (iVar7 != this->field_0047 && bVar14) break;
      if (bVar14) {
        bVar14 = iVar5 - this->field_0049 < 0;
        if (iVar5 == this->field_0049 || bVar14) {
          if (!bVar14) goto LAB_0058b6f6;
          iVar5 = iVar5 + 1;
        }
        else {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_0058b6f6;
        }
      }
      else {
        iVar7 = iVar7 + 1;
      }
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
LAB_0058b6f6:
  sVar9 = (short)iVar7 * 0xc9 + 100;
  sVar10 = (short)iVar5 * 0xc9 + 100;
  if ((bVar1) &&
     (((this->field_0041 != sVar9 || (this->field_0043 != sVar10)) || (this->field_0045 != local_c))
     )) {
    *param_1 = sVar9;
    *param_2 = sVar10;
    *param_3 = (short)local_c;
    sVar2 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(local_c), (uint16_t)(this->field_0045)),sVar9,sVar10,
                       local_c);
    *param_4 = sVar2 / 0x2d - (short)((int)sVar2 / -0x4c000000);
    st::fn_004024F5(this,sVar9,sVar10,(short)local_c);
    return 1;
  }
  uVar11 = (int)this->field_006C + 1U & 0x80000007;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
  }
  *param_4 = (short)uVar11;
  return 0;
}

// 0058BA10 STOctopusC::FUN_0058ba10
#line 1 "decomp/ST.exe/functions/0058BA10/decomp.c"
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

