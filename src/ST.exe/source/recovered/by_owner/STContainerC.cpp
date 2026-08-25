#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STContainerC.cpp

// 005F0D90 STContainerC::sub_005F0D90
#line 4 "decomp/ST.exe/functions/005F0D90/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STContainerC.
   Evidence: this_call_owners=[STContainerC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005F0D90(STContainerC *this)

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
    local_24.id = 0x5dd7;
    /* ST_CALLSITE[005F0DF8]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

// 005FC3E0 STContainerC::sub_005FC3E0
#line 4 "decomp/ST.exe/functions/005FC3E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STContainerC.
   Evidence: this_call_owners=[STContainerC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 005FC3E0 returns return of sub_006E60A0 @ 005FC416 */

int __thiscall st::fn_005FC3E0(STContainerC *this)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_18 = 0;
  local_10 = this->field_0008;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(this,local_24);
  this->field_023A = 6;
  return iVar1;
}

// 005FC450 STContainerC::sub_005FC450
#line 4 "decomp/ST.exe/functions/005FC450/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 00405AF6
   Slots: 0x124
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:73 calls=4
   caller_families=2 receiver_extent=578/1147; unique_owner_for_target */

bool __thiscall st::fn_005FC450(STContainerC *this,int param_1)

{
  int iVar1;

  iVar1 = st::machine_word_boundary_cast<int>(this->field_023E - param_1);
  this->field_023E = iVar1;
  if (iVar1 < 1) {
    this->field_023E = 0;
  }
  return this->field_023E == 0;
}

// 005FCD80 STContainerC::FUN_005fcd80
#line 4 "decomp/ST.exe/functions/005FCD80/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 0040389B
   Slots: 0x12C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FCD80(STContainerC *this)

{
  return this->field_032A;
}

// 005FCDA0 STContainerC::FUN_005fcda0
#line 4 "decomp/ST.exe/functions/005FCDA0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 004038C3
   Slots: 0x130
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FCDA0(STContainerC *this)

{
  return this->field_0346;
}

// 005FCE30 STContainerC::FUN_005fce30
#line 4 "decomp/ST.exe/functions/005FCE30/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C84C>00401C21 | P:0079C84C>00401C21

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 00401C21
   Slots: 0x138
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FCE30(STContainerC *this)

{
  return this->field_034A;
}

// 005FCE50 STContainerC::FUN_005fce50
#line 4 "decomp/ST.exe/functions/005FCE50/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C850>004020A9 | P:0079C850>004020A9

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 004020A9
   Slots: 0x13C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FCE50(STContainerC *this)

{
  return (dword)&this->field_0x36b;
}

// 005FD360 STContainerC::FUN_005fd360
#line 4 "decomp/ST.exe/functions/005FD360/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C83C>00404476 | P:0079C83C>00404476

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 00404476
   Slots: 0x128
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FD360(STContainerC *this)

{
  return this->field_0358;
}

