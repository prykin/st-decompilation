#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STSprGameObjC.cpp

// 0041F970 STSprGameObjC::sub_0041F970
#line 4 "decomp/ST.exe/functions/0041F970/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STSprGameObjC.
   Evidence: this_call_owners=[STSprGameObjC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0041F970(STSprGameObjC *this)

{
  if ((this->field_0211 != nullptr) && (this->field_0229 == 1)) {
    st::fn_006E66F0(this->field_0211,this->field_01ED);
    this->field_0229 = 0;
  }
  return;
}

// 005EC7E0 STSprGameObjC::STSprGameObjC
#line 4 "decomp/ST.exe/functions/005EC7E0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C3EC (store 005EC809)
   Evidence: final_vptr=0079C3EC; returns_this=true; calls_before=2; field_writes_after=3;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005EC7E0 returns STSprGameObjC::STSprGameObjC this @ 005EC82C */

STSprGameObjC * __thiscall st::fn_005EC7E0(STSprGameObjC *this)

{
  int iVar1;
  STSprGameObjC_field_0231State *pSVar2;

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &st_global_0079C578;
  this->vtable = &st_global_0079C3EC;
  pSVar2 = &this->field_0231;
  for (iVar1 = 0x3d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pSVar2 = CASE_0;
    pSVar2 = pSVar2 + 1;
  }
  *(undefined1 *)pSVar2 = CASE_0;
  this->field_030E = 0xff;
  this->field_0308 = 0xffffffff;
  this->field_030C = 0xff;
  return this;
}

// 005EF9F0 STSprGameObjC::FUN_005ef9f0
#line 4 "decomp/ST.exe/functions/005EF9F0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C3EC
   Entries: 00402365
   Slots: 0xEC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005EF9F0(STSprGameObjC *this)

{
  return (uint)(this->field_021D == 0);
}

// 005EFA10 STSprGameObjC::FUN_005efa10
#line 4 "decomp/ST.exe/functions/005EFA10/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C3EC
   Entries: 00401B81
   Slots: 0x78
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005EFA10(STSprGameObjC *this)

{
  return this->field_023E;
}

// 005EFAC0 STSprGameObjC::FUN_005efac0
#line 4 "decomp/ST.exe/functions/005EFAC0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C3EC
   Entries: 00405D58
   Slots: 0xA4
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005EFAC0(STSprGameObjC *this)

{
  return (uint)(byte)this->field_024E;
}

// 005F0030 STSprGameObjC::FUN_005f0030
#line 4 "decomp/ST.exe/functions/005F0030/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C3EC
   Entries: 00403A53
   Slots: 0xBC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005F0030(STSprGameObjC *this)

{
  return (uint)(this->field_024E == '\0');
}

// 005F0220 STSprGameObjC::FUN_005f0220
#line 4 "decomp/ST.exe/functions/005F0220/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C3EC
   Entries: 00401091
   Slots: 0x2C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005F0220(STSprGameObjC *this)

{
  return this->field_0231;
}

// 005F0450 STSprGameObjC::FUN_005f0450
#line 4 "decomp/ST.exe/functions/005F0450/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C3EC
   Entries: 004039B8
   Slots: 0x140
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   ret_stack_cleanup_argument_count cleanup=4 (types remain provisional) */

void __thiscall st::fn_005F0450(STSprGameObjC *this,undefined4 param_1)

{
  return;
}

