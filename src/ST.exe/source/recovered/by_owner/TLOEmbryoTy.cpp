#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/TLOEmbryoTy.cpp

// 00419C70 TLOEmbryoTy::sub_00419C70
#line 4 "decomp/ST.exe/functions/00419C70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __fastcall st::fn_00419C70(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;

  /* ST_CALLSITE[00419C92]: CALL 0x004052c2; direct=004052C2 STAllPlayersC::RegisterObject */
  uVar1 = st::fn_004052C2
                    (g_allPlayers_007FA174,(char)param_1[9],
                     STReplaceLowWord((uint32_t)(param_1), (uint16_t)((short)param_1[0xc])),0xffff,param_1,
                     param_3,0);
  /* ST_CALLSITE[00419CAA]: CALL 0x0040494e; direct=0040494E STAllPlayersC::_ChangeMD */
  st::fn_0040494E
            (g_allPlayers_007FA174,1,(int *)param_1[9],
             STReplaceLowWord((uint32_t)(uVar1), (uint16_t)(STField<undefined2>(param_1,0x32))));
  /* ST_CALLSITE[00419CC0]: CALL 0x004019a6; direct=004019A6 STAllPlayersC::_ChangeDock */
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  st::fn_004019A6
            (1,(int *)param_1[9],CONCAT22(extraout_var,STField<undefined2>(param_1,0x32)));
  return uVar1;
}

// 00419CF0 TLOEmbryoTy::sub_00419CF0
#line 4 "decomp/ST.exe/functions/00419CF0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_00419CF0(int *param_1,undefined4 param_2,uint param_3)

{
  /* ST_CALLSITE[00419D0B]: CALL 0x004052c2; direct=004052C2 STAllPlayersC::RegisterObject */
  st::fn_004052C2
            (g_allPlayers_007FA174,(char)param_1[9],
             STReplaceLowWord((uint32_t)(param_2), (uint16_t)((short)param_1[0xc])),param_3,param_1,1,0);
  return;
}

// 0041C3F0 TLOEmbryoTy::sub_0041C3F0
#line 4 "decomp/ST.exe/functions/0041C3F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=27;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0041C3F0(TLOEmbryoTy *this,undefined *param_1)

{
  int iVar1;
  uint uVar2;
  if (((-1 < (int)param_1) &&
      (this->field_0101 = param_1, g_visibleClass_00802A88 != nullptr)) &&
     ((this->field_01D1 & 1) == 0)) {
    /* ST_CALLSITE[0041C43C]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
    st::fn_0040388C
              (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
               (undefined *)(int)this->field_005F,(int *)this->field_0024,(uint)param_1,
               (int *)this->field_0018,0xffffffff);
    if (this->field_0020 == 0x14) {
      iVar1 = st::fn_0040186B(this->field_0024,10);
      if (iVar1 < 1) {
        this->field_0105 = (int)this->field_0101;
      }
      else {
        this->field_0105 = (int)this->field_0101 << 1;
      }
      /* ST_CALLSITE[0041C49E]: CALL 0x00402c2a; direct=00402C2A VisibleClassTy::sub_005594A0 */
      st::fn_00402C2A
                (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
                 (char)this->field_005F,(undefined *)this->field_0024,this->field_0105,
                 this->field_0018,0xffffffff);
    }
    /* ST_CALLSITE[0041C4A7]: CALL dword ptr [EAX + 0x2c] */
    uVar2 = this->vfunc_2C();
    switch(uVar2) {
    case 5:
    case 0x11:
    case 0x21:
      /* ST_CALLSITE[0041C4FB]: CALL dword ptr [EDX + 0x94] */
      this->vfunc_94();
      break;
    case 0xb:
    case 0x23:
      this->field_010D = (int)this->field_0101;
      /* ST_CALLSITE[0041C4ED]: CALL 0x0040141f; direct=0040141F VisibleClassTy::SetZoneAst */
      st::fn_0040141F
                (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
                 (char)this->field_005F,this->field_0024,(int)this->field_0101,this->field_0018,
                 0xffffffff);
      return;
    }
  }
  return;
}

// 004D0FC0 TLOEmbryoTy::TLOEmbryoTy
#line 4 "decomp/ST.exe/functions/004D0FC0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00798C70 (store 004D0FE0)
   Evidence: final_vptr=00798C70; returns_this=true; calls_before=2; field_writes_after=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=low;
   exact_factory_tail=004D6DC0->00404110->004D0FC0; allocation_size=884 */

TLOEmbryoTy * __thiscall st::fn_004D0FC0(TLOEmbryoTy *this)

{

  /* ST_CALLSITE[004D0FC4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  st::fn_00401933((STGameObjC *)this);
  /* ST_CALLSITE[004D0FD1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  st::fn_00401316((STT3DSprC *)&this->vtable_at_1d5);
  this->vtable = &st_global_00798C70;
  this->vtable_at_1d5 = &st_global_00798C6C;
  this->field_02A8 = 0;
  this->field_02DC = 0;
  this->field_0350 = nullptr;
  this->field_0354 = 0;
  this->field_0358 = 0;
  memset(&this->field_0x308, 0, 0x30); /* compiler bulk-zero initialization */
  this->field_035C = nullptr;
  this->field_02C8 = 1;
  this->field_02C4 = 1;
  this->field_02C0 = 1;
  this->field_02BC = 1;
  this->field_02B8 = 1;
  this->field_02B4 = 1;
  this->field_02E0 = 0;
  this->field_02A0 = 0;
  this->field_02E4 = 0;
  this->field_02E8 = 0;
  this->field_034C = 0xff;
  this->field_02A4 = 0;
  return this;
}

// 004D10A0 TLOEmbryoTy::sub_004D10A0
#line 4 "decomp/ST.exe/functions/004D10A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=8; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004D10A0(TLOEmbryoTy *this,int param_1)

{
  uint uVar1;
  uint uVar2;

  uVar1 = ((((0x18 - (int)this->field_029C / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 6) * 9;
  uVar2 = uVar1;
  if (param_1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = (*(int *)(this->field_01F5 + 0x18 + this->field_02F0 * 0x24) -
            *(int *)(this->field_01F5 + this->field_02F0 * 0x24 + 0x10)) + uVar1;
  }
  st::fn_00401EBA(&this->vtable_at_1d5,(byte)this->field_02F0,uVar1,uVar1 + 8,'\0');
  /* ST_CALLSITE[004D1149]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  st::fn_00401064((STT3DSprC *)&this->vtable_at_1d5,(char)this->field_02F0,uVar2);
  st::fn_00401EBA(&this->vtable_at_1d5,(char)this->field_02F0 - 1,uVar1,uVar1 + 8,'\0');
  /* ST_CALLSITE[004D1177]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  st::fn_00401064((STT3DSprC *)&this->vtable_at_1d5,(char)this->field_02F0 + -1,uVar2);
  return 0;
}

// 004D6890 TLOEmbryoTy::sub_004D6890
#line 4 "decomp/ST.exe/functions/004D6890/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00798C70
   Entries: 0040594D
   Slots: 0x30
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:12 calls=8
   caller_families=2 receiver_extent=617/884; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=8; caller_families=2;
   owner_type=/TLOEmbryoTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall st::fn_004D6890(TLOEmbryoTy *this,AnonShape_004D6890_0C7826D6 *param_1)

{
  byte uVar1;
  ushort uVar2;
  byte bVar3;
  dword dVar4;
  int iVar5;
  AnonShape_004D6890_0C7826D6 *pAVar6;

  pAVar6 = param_1;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pAVar6 = 0;
    pAVar6 = (AnonShape_004D6890_0C7826D6 *)((int)&pAVar6->field_0003 + 1);
  }
  *(undefined2 *)pAVar6 = 0;
  /* ST_CALLSITE[004D68B2]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar3 = st::fn_004049B7((char)this->field_0024);
  param_1->field_0007 = bVar3;
  *(undefined1 *)param_1 = 1;
  uVar1 = this->field_021D;
  param_1->field_0002 = 2;
  param_1->field_0001 = uVar1;
  /* ST_CALLSITE[004D68CE]: CALL dword ptr [EDX + 0x7c] */
  dVar4 = this->sub_004D6C50();
  param_1->field_001B = (char)dVar4;
  param_1->field_0003 = this->field_0259;
  uVar2 = STField<undefined2>(this,0x1A);
  param_1->field_0008 = *(undefined2 *)&this->field_0018;
  param_1->field_000A = uVar2;
  param_1->field_001E = 0;
  param_1->field_0026 = 0xffff;
  *(undefined2 *)&param_1->field_0x20 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((int)param_1 + (0x2e - this->field_0265)) = 1;
  return;
}

// 004D6930 TLOEmbryoTy::sub_004D6930
#line 4 "decomp/ST.exe/functions/004D6930/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00798C70
   Entries: 00405092
   Slots: 0x34
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:13 calls=7
   caller_families=2 receiver_extent=880/884; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=7; caller_families=2;
   owner_type=/TLOEmbryoTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall
st::fn_004D6930(TLOEmbryoTy *this,RecoveredRecord_TLOEmbryoTy_004D6930 *param_1)

{
  byte *puVar1;
  byte *puVar2;
  byte uVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  short sVar7;

  *(int *)param_1 = this->field_0259;
  param_1->field_0006 = 2;
  param_1->field_0005 =
       ((this->field_0024 != (uint)(byte)this->field_0010->field_112D) - 1U & 0xfe) + 3;
  /* ST_CALLSITE[004D696D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar4 = st::fn_004049B7((char)this->field_0024);
  param_1->field_0x4 = bVar4;
  puVar1 = &param_1->field_0x9;
  param_1->field_0007 = ~(byte)(this->field_01D1 >> 2) & 1;
  *(undefined4 *)puVar1 = 0;
  param_1->field_000D = 0;
  puVar2 = &param_1->field_0xf;
  *(undefined4 *)puVar2 = 0;
  param_1->field_0013 = 0;
  if (this->field_02A4 == 0) {
    *puVar1 = 0x50;
    if (((this->field_02EC == 2) && (0 < this->field_02A8)) && (this->field_02A8 < 0x65)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *puVar2 = uVar3;
  }
  else {
    *puVar1 = 0x51;
    *puVar2 = 1;
  }
  param_1->field_001D = this->field_0259;
  /* ST_CALLSITE[004D69F2]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar4 = st::fn_004049B7((char)this->field_0024);
  if (bVar4 == 3) {
    sVar5 = (short)*(undefined4 *)
                    (&DAT_007e3160 + (this->field_0368 * 3 + (int)this->field_036C) * 4);
    sVar7 = (short)this->field_02D8;
  }
  else {
    sVar7 = (short)this->field_02D4;
    sVar5 = (short)*(undefined4 *)
                    (&DAT_007e24fc + (this->field_0368 * 3 + (int)this->field_036C) * 4);
  }
  param_1->field_0027 = sVar5 - sVar7;
  param_1->field_002B =
       *(short *)(&DAT_007e1c50 + (this->field_0368 * 3 + (int)this->field_036C) * 4) -
       (short)this->field_02D0;
  param_1->field_002F = (char)this->field_02A8;
  /* ST_CALLSITE[004D6A70]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar4 = st::fn_004049B7((char)this->field_0024);
  param_1->field_0025 = bVar4;
  if (this->field_02A4 != 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbde;
    return;
  }
  if (this->field_02B8 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbb9;
    return;
  }
  iVar6 = st::fn_00402815(this->field_0024);
  if (iVar6 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbdf;
    return;
  }
  if (this->field_02B4 != 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 3000;
    return;
  }
  if (this->field_02BC == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbba;
    return;
  }
  if (this->field_02C0 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbbb;
    return;
  }
  if (this->field_02C4 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbbc;
    return;
  }
  if (this->field_02C8 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbd3;
  }
  return;
}

// 004D6C00 TLOEmbryoTy::sub_004D6C00
#line 4 "decomp/ST.exe/functions/004D6C00/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00798C70
   Entries: 00401695
   Slots: 0xC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_004D6C00(TLOEmbryoTy *this)

{
  return (int)this->field_036C + 1;
}

// 004D6C50 TLOEmbryoTy::sub_004D6C50
#line 4 "decomp/ST.exe/functions/004D6C50/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00798C70
   Entries: 00402CE3
   Slots: 0x7C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_004D6C50(TLOEmbryoTy *this)

{
  return this->field_02A8;
}

