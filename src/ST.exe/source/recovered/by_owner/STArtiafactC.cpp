#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STArtiafactC.cpp

// 005EBCB0 STArtiafactC::sub_005EBCB0
#line 4 "decomp/ST.exe/functions/005EBCB0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STArtiafactC.
   Evidence: this_call_owners=[STArtiafactC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005EBCB0(STArtiafactC *this)

{
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_18 = 0;
  local_10 = this->field_0008;
  local_14 = 10;
  st::fn_006E60A0(this,local_24);
  this->field_023A = 6;
  return;
}

// 005EBD00 STArtiafactC::sub_005EBD00
#line 4 "decomp/ST.exe/functions/005EBD00/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C260
   Entries: 0040306C
   Slots: 0x124
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:73 calls=4
   caller_families=2 receiver_extent=578/1143; unique_owner_for_target */

bool __thiscall st::fn_005EBD00(STArtiafactC *this,int param_1)

{
  int iVar1;

  iVar1 = st::machine_word_boundary_cast<int>(this->field_023E - param_1);
  this->field_023E = iVar1;
  if (iVar1 < 1) {
    this->field_023E = 0;
  }
  return this->field_023E == 0;
}

// 005EC620 STArtiafactC::FUN_005ec620
#line 4 "decomp/ST.exe/functions/005EC620/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C39C>00401FEB | P:0079C39C>00401FEB

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C260
   Entries: 00401FEB
   Slots: 0x13C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005EC620(STArtiafactC *this)

{
  return (dword)&this->field_0x367;
}

// 005EC680 STArtiafactC::FUN_005ec680
#line 4 "decomp/ST.exe/functions/005EC680/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C260
   Entries: 0040508D
   Slots: 0x134
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005EC680(STArtiafactC *this)

{
  return this->field_0342;
}

// 005EF490 STArtiafactC::FUN_005ef490
#line 4 "decomp/ST.exe/functions/005EF490/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C388>004040C0 | P:0079C388>004040C0

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C260
   Entries: 004040C0
   Slots: 0x128
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005EF490(STArtiafactC *this)

{
  return this->field_0354;
}

// 005F0D00 STArtiafactC::sub_005F0D00
#line 4 "decomp/ST.exe/functions/005F0D00/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STArtiafactC.
   Evidence: this_call_owners=[STArtiafactC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005F0D00(STArtiafactC *this)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = (STMessage *)&pSVar2->unknown_04;
    }
    local_24.arg0.words.high = this->field_0032;
    if ((this->field_030D == '\0') || (this->field_030E == 0xff)) {
      local_24.arg1.words.low = 0xff;
    }
    else {
      local_24.arg1.words.high = this->field_030F;
      local_24.arg1.words.low = (word)(byte)this->field_030E;
    }
    local_24.id = 0x5ddc;
    /* ST_CALLSITE[005F0D68]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

