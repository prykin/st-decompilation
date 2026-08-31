#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STGameObjC.cpp

// 004158E0 STGameObjC::STGameObjC
#line 4 "decomp/ST.exe/functions/004158E0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 007900A0 (store 004158EC)
   Evidence: final_vptr=007900A0; returns_this=true; calls_before=1; field_writes_after=67;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STGameObjC * __thiscall st::fn_004158E0(STGameObjC *this)

{
  int iVar1;
  uint *puVar2;
  st::fn_006E60E0(this);
  this->vtable = &st_global_007900A0;
  this->field_0020 = 0;
  this->field_0024 = 0xff;
  this->field_0028 = 1;
  this->field_002C = 0;
  this->field_0030 = 0xffff;
  this->field_0032 = 0xffff;
  puVar2 = reinterpret_cast<uint *>(&this->field_0x34);
  memset(puVar2, 0, 0x5f); /* compiler bulk-zero initialization */
  puVar2 = reinterpret_cast<uint *>(((byte *)puVar2 + 0x5c));
  iVar1 = 0;
  this->field_005F = -1;
  this->field_005D = -1;
  this->field_005B = -1;
  this->field_006E = 0x2f;
  this->field_0062 = 1;
  this->field_0061 = 1;
  memset(&this->field_0x93, 0, 0x6e); /* compiler bulk-zero initialization */
  this->field_00FD = 1;
  this->field_00CF = -1;
  this->field_00CB = -1;
  this->field_00C7 = -1;
  this->field_0111 = 0xffffffff;
  this->field_010D = -1;
  this->field_0109 = -1;
  this->field_0105 = -1;
  this->field_0101 = 0xffffffff;
  this->field_0121 = nullptr;
  this->field_011D = nullptr;
  this->field_0129 = nullptr;
  this->field_0125 = nullptr;
  this->field_012D = nullptr;
  this->field_0131 = nullptr;
  this->field_0135 = nullptr;
  this->field_0139 = nullptr;
  this->field_013D = nullptr;
  this->field_0141 = nullptr;
  this->field_0145 = nullptr;
  this->field_0149 = nullptr;
  this->field_014D = nullptr;
  this->field_0151 = nullptr;
  this->field_0155 = nullptr;
  this->field_0159 = nullptr;
  this->field_015D = nullptr;
  this->field_0161 = nullptr;
  this->field_0165 = nullptr;
  this->field_0169 = nullptr;
  this->field_016D = nullptr;
  this->field_0171 = nullptr;
  this->field_0175 = nullptr;
  this->field_0179 = nullptr;
  this->field_017D = nullptr;
  this->field_0181 = nullptr;
  this->field_0189 = nullptr;
  this->field_0185 = nullptr;
  this->field_0191 = nullptr;
  this->field_018D = nullptr;
  this->field_0199 = nullptr;
  this->field_0195 = nullptr;
  this->field_01A1 = nullptr;
  this->field_019D = nullptr;
  this->field_01A9 = nullptr;
  this->field_01A5 = nullptr;
  this->field_01B1 = nullptr;
  this->field_01AD = nullptr;
  this->field_01B9 = nullptr;
  this->field_01B5 = nullptr;
  this->field_01C1 = nullptr;
  this->field_01BD = nullptr;
  this->field_01C9 = nullptr;
  this->field_01C5 = nullptr;
  this->field_01CD = 0;
  this->field_01D1 = 0;
  return this;
}

// 00419C30 STGameObjC::sub_00419C30
#line 4 "decomp/ST.exe/functions/00419C30/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00423850 -> 00419C30 @ 00423915; unproven partial register write at 0042390C | 00423C70
   -> 00419C30 @ 00423CE1; literal 65535 at 00423CDA

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

void __thiscall st::fn_00419C30(STGameObjC *this,ushort param_1)

{
  this->field_0030 = param_1;
  return;
}

// 0045FF10 STGameObjC::sub_0045FF10
#line 4 "decomp/ST.exe/functions/0045FF10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0049D750 -> 0045FF10 @ 0049D988

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=34; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=22; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (38), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00422E20 @ 00422E38 -> read as EAX on
   every CFG path | 00422FF0 @ 00423008 -> read as EAX on every CFG path | 00436F20 @ 00437B65 ->
   read as EAX on every CFG path | 00440AA0 @ 00440D5A -> read as EAX on every CFG path | 00442E50 @
   00443306 -> read as EAX on every CFG path | 00448120 @ 00448525 -> read as EAX on every CFG path
   | 00448120 @ 0044869A -> read as EAX on every CFG path | 00448120 @ 004487EE -> read as EAX on
   every CFG path | 00448120 @ 00448BD2 -> read as EAX on every CFG path | 00448120 @ 00448BF2 ->
   read as EAX on every CFG path | 00448120 @ 00448D61 -> read as EAX on every CFG path | 00448120 @
   00448ED5 -> read as EAX on every CFG path | 00448120 @ 00449048 -> read as EAX on every CFG path
   | 00448120 @ 004491C7 -> read as EAX on every CFG path | 00448120 @ 0044931B -> read as EAX on
   every CFG path | 00491980 @ 00491983 -> read as EAX on every CFG path | 0049A620 @ 0049A7F9 ->
   read as EAX on every CFG path | 0049A620 @ 0049A805 -> read as EAX on every CFG path | 0049B4C0 @
   0049B688 -> read as EAX on every CFG path | 0049B4C0 @ 0049B694 -> read as EAX on every CFG path
   | 0049C210 @ 0049C886 -> read as EAX on every CFG path | 0049CD30 @ 0049D080 -> read as EAX on
   every CFG path | 0049D230 @ 0049D57D -> read as EAX on every CFG path | 0049D750 @ 0049D988 ->
   read as EAX on every CFG path */

int __thiscall st::fn_0045FF10(STGameObjC *this)

{
  return this->field_045D;
}

// 00486B40 STGameObjC::sub_00486B40
#line 4 "decomp/ST.exe/functions/00486B40/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00440AA0 -> 00486B40 @ 00441236 | 00440AA0 -> 00486B40 @ 0044130B | 00440AA0 ->
   00486B40 @ 0044137D | 00440AA0 -> 00486B40 @ 00441504 | 00440AA0 -> 00486B40 @ 004415C4 |
   00440AA0 -> 00486B40 @ 00441636

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=15; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

int __thiscall st::fn_00486B40(STGameObjC *this)

{
  return this->field_0712 - this->field_0716;
}

// 0048DC90 STGameObjC::sub_0048DC90
#line 4 "decomp/ST.exe/functions/0048DC90/decomp.c"
/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=3, ignored=0, unknown=0

   [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: the complete machine CFG returns incoming pointer parameter param_1 (ordinal=1);
   restore its exact formal pointer type after the obsolete void-pointer normalization

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=3; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

uint * __thiscall st::fn_0048DC90(STGameObjC *this,undefined4 *param_1)

{
  byte *puVar2;
  byte *puVar3;

  puVar2 = reinterpret_cast<byte *>(&this->field_0x49b);
  puVar3 = reinterpret_cast<byte *>((param_1));
  memmove(puVar3, puVar2, 0x42); /* compiler REP MOVS byte copy */
  return param_1;
}

// 00492370 STGameObjC::sub_00492370
#line 4 "decomp/ST.exe/functions/00492370/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0049DFA0 -> 00492370 @ 0049E11D | 0049DFA0 -> 00492370 @ 0049E318 | 004A0990 ->
   00492370 @ 004A0B1B

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=9; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (9), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0044D320 @ 0044DA53 -> read as EAX on
   every CFG path | 0044D320 @ 0044DCA5 -> read as EAX on every CFG path | 0049DFA0 @ 0049E11D ->
   read as EAX on every CFG path | 0049DFA0 @ 0049E318 -> read as EAX on every CFG path | 0049E510 @
   0049E652 -> read as EAX on every CFG path | 004A0990 @ 004A0B1B -> read as EAX on every CFG path
   | 004A0FA0 @ 004A1E0A -> read as EAX on every CFG path | 004A0FA0 @ 004A1FF2 -> read as EAX on
   every CFG path | 004A0FA0 @ 004A2B46 -> read as EAX on every CFG path */

int __thiscall st::fn_00492370(STGameObjC *this)

{
  return (int)this->field_07CA;
}

// 004956C0 STGameObjC::sub_004956C0
#line 4 "decomp/ST.exe/functions/004956C0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

void __thiscall st::fn_004956C0(STGameObjC *this,undefined4 param_1)

{
  if (this->field_06F7 == 0x17) {
    *(undefined4 *)&this->field_0x7e2 = param_1;
  }
  return;
}

// 004C5350 STGameObjC::sub_004C5350
#line 4 "decomp/ST.exe/functions/004C5350/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004C5350 -> 006ACF90 @ 004C552D | 0065E450 -> 004C5350 @ 0065E520; FUN_0065e450
   parameter param_4 | 00664960 -> 004C5350 @ 00666F3E; MOVSX at 00666F2E establishes signed source
   width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004C5350 -> 006ACF90 @ 004C552D | 0065E450 -> 004C5350 @ 0065E520; FUN_0065e450
   parameter param_5 | 00664960 -> 004C5350 @ 00666F3E; MOVSX at 00666F27 establishes signed source
   width 2

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=22; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004C21A0 @ 004C242B -> read as EAX on
   every CFG path | 004C21A0 @ 004C25A2 -> read as EAX on every CFG path | 0065E450 @ 0065E520 ->
   read as EAX on every CFG path | 00664960 @ 00666F3E -> read as EAX on every CFG path */

int __thiscall
st::fn_004C5350
          (STGameObjC *this,int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
          int param_6,int param_7)

{
  uint32_t _local_10;

  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *this_00;
  int iVar5;
  int iVar4;
  int local_EAX_620;
  uint uVar6;
  bool bVar7;
  uint local_1c;
  int local_18;
  int local_14;
  byte local_10;
  undefined3 uStack_f;
  uint local_c;
  short local_8;
  short local_6;

  this_00 = param_2;
  local_c = 0;
  if (*(int *)(&DAT_00792778 + this->field_0235 * 4) == 0) {
    return 0;
  }
  if ((*(int *)(&this->field_0x261 + param_1 * 0x80) == 0) && (this->field_0245 != 5)) {
    return 0;
  }
  if (param_2 == nullptr) {
    local_18 = param_3;
    local_14 = param_4;
    local_1c = param_5;
  }
  else {
    /* ST_CALLSITE[004C53B1]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5
              (reinterpret_cast<STFishC *>(param_2),reinterpret_cast<short *>(&local_18),reinterpret_cast<short *>(&local_14),reinterpret_cast<short *>(&local_1c));
  }
  if (*(int *)(&DAT_00792a90 + (param_1 + this->field_0235 * 2) * 4) == 1) {
    if (this_00 == nullptr) {
      return local_c;
    }
  }
  else {
    if (*(int *)(&DAT_00792a90 + (param_1 + this->field_0235 * 2) * 4) != 2) {
      return local_c;
    }
    if (this_00 == nullptr) goto LAB_004c5515;
  }
  if (this_00[10] != 1) {
    return local_c;
  }
  if (7 < (uint)this_00[9]) {
    return local_c;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[this_00[9]].field_0022)) {
    return local_c;
  }
  /* ST_CALLSITE[004C5437]: CALL dword ptr [EDX + 0xf4]; [STIndirectCallsiteApplier] exact slot 0xF4; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
  iVar5 = STStructuralVirtualCall<undefined4>(this_00, 0xF4, this->field_0024);
  if (iVar5 == 0) {
    return local_c;
  }
  if (param_7 == 0) goto LAB_004c5515;
  bVar1 = ((byte *)this_00)[9];
  bVar2 = (byte)this->field_0024;
  param_7 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(param_7)), (uint8_t)(bVar1));
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT31(uStack_f,bVar2);
  if (DAT_00808a8f == '\0') {
    if (bVar1 == bVar2) {
LAB_004c5502:
      iVar5 = 0;
    }
    else {
      bVar3 = g_playerRelationMatrix[bVar1][bVar2];
      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
        iVar5 = -2;
      }
      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
        iVar5 = -1;
      }
      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
        iVar5 = 1;
      }
      else {
        if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_004c5502;
        iVar5 = 2;
      }
    }
    bVar7 = iVar5 < 0;
  }
  else {
    bVar7 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
            g_bulkInitializedRecords_008087C7[bVar1].field_0023;
  }
  if (!bVar7) {
    return local_c;
  }
LAB_004c5515:

  iVar4 = st::fn_006ACF90((short)local_18,(short)local_14,*(int *)&this->field_0x5b0,
                       *(int *)&this->field_0x5b4);

  iVar5 = st::fn_00405C45(this->field_0024,this->field_0235,param_1);
  if ((((iVar4 <= iVar5) || (uVar6 = local_c, param_6 == 0)) &&
      (uVar6 = 1, *(int *)(&DAT_00792a90 + (param_1 + this->field_0235 * 2) * 4) == 1)) &&
     (param_6 != 0)) {
    st::fn_004031E3(this_00,reinterpret_cast<uint *>(&local_8),&local_6,(short *)((int)&param_3 + 2));
    st::fn_004031E3(this,(uint *)((int)&param_5 + 2),(short *)((int)&param_4 + 2),
                       (short *)((int)&param_2 + 2));

    local_EAX_620 =
         st::fn_006ACF0D((int)local_8,(int)local_6,(int)STPiece<2,2>(param_3),(int)STPiece<2,2>(param_5),
                      (int)STPiece<2,2>(param_4),(int)STPiece<2,2>(param_2));
    uVar6 = (int)STPiece<2,2>(param_3) - (int)STPiece<2,2>(param_2) >> 0x1f;
    uVar6 = st::storage_bit_cast<uint>(static_cast<uint32_t>((int)((((int)STPiece<2,2>(param_3) - (int)STPiece<2,2>(param_2) ^ uVar6) - uVar6) * 10) /
                   local_EAX_620 <= *(int *)(&this->field_0x281 + param_1 * 0x80)));
  }
  local_c = uVar6;
  return local_c;
}

// 004C93E0 STGameObjC::sub_004C93E0
#line 4 "decomp/ST.exe/functions/004C93E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

int __thiscall st::fn_004C93E0(STGameObjC *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = *(int *)&this->field_0x3d4;
  iVar1 = 0;
  if (((iVar3 != 0) && (piVar2 = *(int **)&this->field_0x607, piVar2 != nullptr)) && (0 < iVar3))
  {
    do {
      if ((param_1 == 0) || (*piVar2 == param_1)) {
        iVar1 = iVar1 + piVar2[2];
      }
      piVar2 = (int *)((int)piVar2 + 0x27);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}
