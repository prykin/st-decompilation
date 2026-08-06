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
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  ushort local_c;
  undefined2 local_a;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_e = this->field_0032;
    if ((this->field_030D == '\0') || (this->field_030E == 0xff)) {
      local_c = 0xff;
    }
    else {
      local_a = this->field_030F;
      local_c = (ushort)(byte)this->field_030E;
    }
    local_14 = 0x5ddc;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

