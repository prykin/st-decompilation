#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STFishC.cpp

// 004162B0 STFishC::sub_004162B0
#line 4 "decomp/ST.exe/functions/004162B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0043AAF0 -> 004162B0 @ 0043ABD0; address of STAllPlayersC::GetCamPoint parameter
   param_1 | 0043AAF0 -> 004162B0 @ 0043AC52; address of STAllPlayersC::GetCamPoint parameter
   param_1 | 0043AAF0 -> 004162B0 @ 0043AD49; address of STAllPlayersC::GetCamPoint parameter
   param_1

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004162C4 exact 2-byte output store from /STFishC+0x49; exact partial-width MOV at
   004162C0

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004162CE exact 2-byte output store from /STFishC+0x4b; exact partial-width MOV at
   004162C7 */

void __thiscall st::fn_004162B0(STFishC *this,short *param_1,short *param_2,short *param_3)

{
  *param_1 = this->field_0047;
  *param_2 = this->field_0049;
  *param_3 = this->field_004B;
  return;
}

// 004162F0 STFishC::sub_004162F0
#line 4 "decomp/ST.exe/functions/004162F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004732F0 -> 004162F0 @ 00473619; /STBoatC+0x588 | 004732F0 -> 004162F0 @ 004737F8;
   /STBoatC+0x588 | 00491FB0 -> 004162F0 @ 00492004; /STBoatC+0x588 | 00492080 -> 004162F0 @
   00492139; /STBoatC+0x588

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004732F0 -> 004162F0 @ 00473404; /STBoatC+0x58a | 004732F0 -> 004162F0 @ 00473619;
   /STBoatC+0x58a | 004732F0 -> 004162F0 @ 004737F8; /STBoatC+0x58a | 00491FB0 -> 004162F0 @
   00492004; /STBoatC+0x58a | 00492080 -> 004162F0 @ 00492139; /STBoatC+0x58a

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004732F0 -> 004162F0 @ 00473404; /STBoatC+0x58c | 00491FB0 -> 004162F0 @ 00492004;
   /STBoatC+0x58c | 00492080 -> 004162F0 @ 00492139; /STBoatC+0x58c */

void __thiscall st::fn_004162F0(STFishC *this,short *param_1,short *param_2,short *param_3)

{
  *param_1 = this->field_005B;
  *param_2 = this->field_005D;
  *param_3 = this->field_005F;
  return;
}

// 0057BD20 STFishC::STFishC
#line 4 "decomp/ST.exe/functions/0057BD20/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B3C4 (store 0057BD3C)
   Evidence: final_vptr=0079B3C4; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0057BD20 returns STFishC::STFishC this @ 0057BD50

   [STSwitchEnumApplier] Switch target field_023B uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_023BState. Cases:
   CASE_0=0;CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

STFishC * __thiscall st::fn_0057BD20(STFishC *this)

{
  /* ST_CALLSITE[0057BD24]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  st::fn_00401933(reinterpret_cast<STGameObjC *>(this));
  /* ST_CALLSITE[0057BD31]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  st::fn_00401316(reinterpret_cast<STT3DSprC *>(&this->field_01D5));
  this->field_01D5 = st::machine_word_boundary_cast<undefined4>(&st_global_0079B524);
  this->vtable = &st_global_0079B3C4;
  this->field_023B = CASE_0;
  return this;
}

// 0057BD70 STFishC::vfunc_DC
#line 4 "decomp/ST.exe/functions/0057BD70/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B3C4
   Entries: 0040588A
   Slots: 0xDC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=619/619; unique_owner_for_target

   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235 */

undefined4 __thiscall
st::fn_0057BD70(STFishC *this,short param_1,short param_2,short param_3,short param_4,
                 short param_5,short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;

  sVar2 = 0;
  sVar5 = 0;
  sVar6 = 0;
  switch(this->field_0267) {
  case CASE_E7:
  case CASE_E9:
    sVar2 = 0x1c;
    sVar5 = 0x1c;
    sVar6 = 0x1c;
    goto switchD_0057bd8f_default;
  case CASE_E8:
  case CASE_EA:
    sVar2 = 0x16;
    break;
  case CASE_EB:
    sVar2 = 0x1c;
    break;
  default:
    goto switchD_0057bd8f_default;
  }
  sVar5 = 0xc;
  sVar6 = 0xc;
switchD_0057bd8f_default:
  sVar3 = this->field_0043 - sVar5;
  sVar4 = this->field_0045 - sVar6;
  sVar1 = this->field_0041 - sVar2;
  sVar2 = sVar2 + this->field_0041;
  sVar5 = sVar5 + this->field_0043;
  sVar6 = sVar6 + this->field_0045;
  if ((((((sVar1 <= param_1) && (param_1 <= sVar2)) || ((sVar1 <= param_4 && (param_4 <= sVar2))))
       || ((param_1 <= sVar1 && (sVar2 <= param_4)))) &&
      (((sVar3 <= param_2 && (param_2 <= sVar5)) ||
       (((sVar3 <= param_5 && (param_5 <= sVar5)) || ((param_2 <= sVar3 && (sVar5 <= param_5))))))))
     && ((((sVar4 <= param_3 && (param_3 <= sVar6)) || ((sVar4 <= param_6 && (param_6 <= sVar6))))
         || ((param_3 <= sVar4 && (sVar6 <= param_6)))))) {
    return 0;
  }
  return 0xffffffff;
}

// 0057BEE0 STFishC::vfunc_E0
#line 4 "decomp/ST.exe/functions/0057BEE0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B3C4
   Entries: 0040209A
   Slots: 0xE0
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=71/619; unique_owner_for_target

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0057BEEA exact 2-byte output store from /STFishC+0x41; exact partial-width MOV at
   0057BEE6

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0057BEF4 exact 2-byte output store from /STFishC+0x43; exact partial-width MOV at
   0057BEF0

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0057BF01 exact 2-byte output store from /STFishC+0x45; exact partial-width MOV at
   0057BEF7 */

undefined4 __thiscall
st::fn_0057BEE0(STFishC *this,undefined4 param_1,short *param_2,short *param_3,short *param_4,
                 undefined4 *param_5)

{
  *param_2 = this->field_0041;
  *param_3 = this->field_0043;
  *param_4 = this->field_0045;
  *param_5 = 0;
  return 0;
}

// 0057BF20 STFishC::sub_0057BF20
#line 4 "decomp/ST.exe/functions/0057BF20/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 0057BF20 returns return of sub_006E60A0 @ 0057BF46 */

int __thiscall st::fn_0057BF20(STFishC *this)

{
  int iVar1;
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = this->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(this,local_24);
  return iVar1;
}

// 0057D5F0 STFishC::sub_0057D5F0
#line 4 "decomp/ST.exe/functions/0057D5F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0

   [STPrototypeApplier] Propagated return.
   Evidence: 0057D5F0 returns stored into /STFishC+0x23b @ 0057CEF5 | 0057D5F0 returns stored into
   /STFishC+0x23b @ 0057CFDA */

STFishC_field_023BState __thiscall st::fn_0057D5F0(STFishC *this,uint param_1)

{
  int iVar1;
  short local_10 [2];
  short local_c [2];
  int local_8;

  local_8 = 0;
  if ((((this->field_0047 == this->field_0235) && (this->field_0049 == this->field_0237)) &&
      (this->field_004B == this->field_0239)) || (param_1 != 0)) {
    /* ST_CALLSITE[0057D641]: CALL 0x00402ecd; direct=00402ECD STFishC::sub_0057D700 */
    iVar1 = st::fn_00402ECD(this,&param_1,reinterpret_cast<uint *>(local_c),reinterpret_cast<int *>(local_10),&local_8);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return CASE_0;
      }

      iVar1 = st::fn_004021E9(this,this->field_006C,(short)local_8);
      if (iVar1 != 0) {
        return CASE_0;
      }
      return 2;
    }
    this->field_0235 = (short)param_1;
    this->field_0237 = local_c[0];
    this->field_0239 = local_10[0];
  }

  iVar1 = st::fn_00401B86(this);
  if (iVar1 != 0) {
    return CASE_1;
  }
  return CASE_0;
}

// 0057D700 STFishC::sub_0057D700
#line 4 "decomp/ST.exe/functions/0057D700/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0

   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235 */

undefined4 __thiscall
st::fn_0057D700(STFishC *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  short sVar13;
  short sVar14;
  int local_18;
  short local_a;
  short local_8;
  short local_6;

  uVar2 = (uint)g_worldGrid.sizeX;
  uVar11 = 0;
  uVar10 = 0;
  uVar3 = uVar2 - 1;
  uVar4 = (uint)g_worldGrid.sizeY;
  uVar5 = uVar4 - 1;
  /* ST_CALLSITE[0057D733]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  st::fn_004018C5(this,&local_a,&local_8,&local_6);
  local_18 = (int)this->field_004B - (g_playSystem_00802A38->field_00E4 & 1);
  if (local_18 < 0) {
    local_18 = 1;
  }
  switch(this->field_0267) {
  case CASE_E7:
  case CASE_E9:
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar11 = (uVar10 >> 0x10) % uVar2;
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % uVar4;
    goto switchD_0057d76c_default;
  case CASE_E8:
  case CASE_EA:
  case CASE_EB:
    if ((((this->field_0047 < 1) &&
         (((sVar1 = this->field_006C, sVar1 == 0xe1 || (sVar1 == 0xb4)) || (sVar1 == 0x87)))) ||
        ((iVar9 = (int)this->field_0047, (int)uVar3 <= iVar9 &&
         (((sVar1 = this->field_006C, sVar1 == 0x2d || (sVar1 == 0)) || (sVar1 == 0x13b)))))) ||
       (((this->field_0049 < 1 &&
         (((sVar1 = this->field_006C, sVar1 == 0x87 || (sVar1 == 0x5a)) || (sVar1 == 0x2d)))) ||
        ((iVar7 = (int)this->field_0049, (int)uVar5 <= iVar7 &&
         (((sVar1 = this->field_006C, sVar1 == 0xe1 || (sVar1 == 0x10e)) || (sVar1 == 0x13b))))))))
    {
      iVar9 = (sVar1 + 0x2d) % 0x168;
      *param_4 = iVar9;
      if (-1 < iVar9) {
        return 2;
      }
      do {
        iVar9 = *param_4;
        *param_4 = iVar9 + 0x168;
      } while (iVar9 + 0x168 < 0);
      return 2;
    }
    break;
  default:
    goto switchD_0057d76c_default;
  }
  iVar8 = (int)((ulonglong)((longlong)(int)this->field_006C * -0x49f49f49) >> 0x20) +
          (int)this->field_006C;
  switch((iVar8 >> 5) - (iVar8 >> 0x1f)) {
  case 0:
    if (iVar9 < 0) {
      iVar7 = this->field_001C;
    }
    else {
      iVar7 = this->field_001C;
    }
    uVar10 = iVar7 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar11 = (uVar10 >> 0x10) % ((uVar3 - iVar9) + 1) + iVar9;
    iVar9 = uVar11 - (int)this->field_0047;
    goto LAB_0057d9ad;
  case 1:
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % (iVar7 + 1U);
    iVar9 = (int)this->field_0047;
    if (iVar9 < 0) {
LAB_0057db0a:
      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    }
    else {
      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    }
    goto LAB_0057db18;
  case 2:
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % (iVar7 + 1U);
    iVar9 = (int)this->field_0049 - uVar10;
    goto LAB_0057da88;
  case 3:
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar11 = (uVar10 >> 0x10) % (iVar9 + 1U);
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((int)this->field_0049 + 1U);
    break;
  case 4:
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar11 = (uVar10 >> 0x10) % (iVar9 + 1U);
    iVar9 = (int)this->field_0047 - uVar11;
LAB_0057d9ad:
    iVar7 = this->field_0049 - iVar9;
    if (iVar7 < 0) {
      iVar8 = this->field_001C;
    }
    else {
      iVar8 = this->field_001C;
    }
    uVar10 = iVar8 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % (((this->field_0049 + iVar9) - iVar7) + 1U) + iVar7;
    break;
  case 5:
    if (iVar7 < 0) {
      iVar9 = this->field_001C;
    }
    else {
      iVar9 = this->field_001C;
    }
    uVar10 = iVar9 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((uVar5 - iVar7) + 1) + iVar7;
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar11;
    uVar11 = (uVar11 >> 0x10) % ((int)this->field_0047 + 1U);
    break;
  case 6:
    if (iVar7 < 0) {
      iVar9 = this->field_001C;
    }
    else {
      iVar9 = this->field_001C;
    }
    uVar10 = iVar9 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((uVar5 - iVar7) + 1) + iVar7;
    iVar9 = uVar10 - (int)this->field_0049;
LAB_0057da88:
    uVar2 = this->field_0047 + iVar9;
    iVar9 = this->field_0047 - iVar9;
    if (iVar9 < 0) {
      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar11;
    }
    else {
      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar11;
    }
    goto LAB_0057db1e;
  case 7:
    if (iVar7 < 0) {
      iVar9 = this->field_001C;
    }
    else {
      iVar9 = this->field_001C;
    }
    uVar10 = iVar9 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((uVar5 - iVar7) + 1) + iVar7;
    iVar9 = (int)this->field_0047;
    if (-1 < iVar9) goto LAB_0057db0a;
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
LAB_0057db18:
    this->field_001C = uVar11;
    uVar2 = uVar3;
LAB_0057db1e:
    uVar11 = (uVar11 >> 0x10) % ((uVar2 - iVar9) + 1) + iVar9;
    break;
  default:
    goto switchD_0057d88f_default;
  }
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
switchD_0057d88f_default:
  if ((int)uVar3 <= (int)uVar11) {
    uVar11 = uVar3;
  }
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  if ((int)uVar5 <= (int)uVar10) {
    uVar10 = uVar5;
  }
switchD_0057d76c_default:
  if ((uVar11 == (int)this->field_0047) && (uVar10 == (int)this->field_0049)) {
    if ((this->field_0267 == CASE_EB) || (this->field_0267 == CASE_E8)) {
      iVar9 = (this->field_006C + 0x2d) % 0x168;
      *param_4 = iVar9;
      if (-1 < iVar9) {
        return 2;
      }
      do {
        iVar9 = *param_4;
        *param_4 = iVar9 + 0x168;
      } while (iVar9 + 0x168 < 0);
      return 2;
    }
    uVar2 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar2;
    local_18 = (int)this->field_004B - (short)((ulonglong)(uVar2 >> 0x10) % 5);
    if (local_18 < 0) {
      local_18 = -local_18;
    }
    local_18 = local_18 % 5;
  }
cf_continue_loop_0057DBE9:
  do {
    sVar1 = (short)uVar11;
    sVar13 = (short)uVar10;
    sVar14 = (short)local_18;

    iVar6 = st::fn_00404D3B(sVar1,sVar13,sVar14);
    if (((iVar6 != 0) &&
        (((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)) ||
         ((sVar13 < 0 ||
          ((((g_worldGrid.sizeY <= sVar13 || (sVar14 < 0)) || (g_worldGrid.sizeZ <= sVar14)) ||
           (STGridAt3D(g_worldGrid, sVar1, sVar13, sVar14).objects[0] == nullptr)))))))) &&
       (((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)) ||
        ((sVar13 < 0 ||
         (((g_worldGrid.sizeY <= sVar13 || (sVar14 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar14 ||
           (STGridAt3D(g_worldGrid, sVar1, sVar13, sVar14).objects[1] == nullptr)))))))))) {
      *param_1 = uVar11;
      *param_2 = uVar10;
      *param_3 = local_18;
      return 1;
    }
    bVar12 = (int)(uVar11 - (int)this->field_0047) < 0;
    if (uVar11 == (int)this->field_0047 || bVar12) {
      if (bVar12) {
        uVar11 = uVar11 + 1;
        goto cf_continue_loop_0057DBE9;
      }
      bVar12 = (int)(uVar10 - (int)this->field_0049) < 0;
      if (uVar10 == (int)this->field_0049 || bVar12) {
        if (!bVar12) goto LAB_0057dd0c;
        uVar10 = uVar10 + 1;
        goto cf_continue_loop_0057DBE9;
      }
      uVar10 = uVar10 - 1;
      uVar2 = uVar10;
    }
    else {
      uVar11 = uVar11 - 1;
      uVar2 = uVar11;
    }
    if ((int)uVar2 < 0) {
LAB_0057dd0c:
      iVar9 = (this->field_006C + 0x2d) % 0x168;
      *param_4 = iVar9;
      while (iVar9 < 0) {
        iVar9 = *param_4 + 0x168;
        *param_4 = iVar9;
      }
      return 2;
    }
  } while( true );
}

// 0057DFB0 STFishC::vfunc_2C
#line 4 "decomp/ST.exe/functions/0057DFB0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B3C4
   Entries: 00405321
   Slots: 0x2C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_0057DFB0(STFishC *this)

{
  return this->field_0267;
}
