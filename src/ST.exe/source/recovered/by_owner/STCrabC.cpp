#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STCrabC.cpp

// 005785E0 STCrabC::STCrabC
#line 4 "decomp/ST.exe/functions/005785E0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B238 (store 005785FC)
   Evidence: final_vptr=0079B238; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005785E0 returns STCrabC::STCrabC this @ 00578610 */

STCrabC * __thiscall st::fn_005785E0(STCrabC *this)

{
  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &st_global_0079B398;
  this->vtable = &st_global_0079B238;
  this->field_0239 = 0;
  return this;
}

// 0057A2A0 STCrabC::FUN_0057a2a0
#line 4 "decomp/ST.exe/functions/0057A2A0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B238
   Entries: 00403026
   Slots: 0x2C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_0057A2A0(STCrabC *this)

{
  return this->field_0279;
}

