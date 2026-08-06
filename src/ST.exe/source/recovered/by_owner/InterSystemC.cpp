#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/InterSystemC.cpp

// 00542440 InterSystemC::InterSystemC
#line 1 "decomp/ST.exe/functions/00542440/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079ADB8 (store 00542453)
   Evidence: final_vptr=0079ADB8; returns_this=true; calls_before=1; field_writes_after=3;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00542440 returns InterSystemC::InterSystemC this @ 00542466

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00542D80 -> 00542440 @ 00542DC7 */

InterSystemC * __thiscall st::fn_00542440(InterSystemC *this,AppClassTy *param_1)

{
  st::fn_006E51C0((SystemClassTy *)this,param_1,5);
  this->vtable = &InterSystemCVTable;
  this->field_0030 = 0;
  this->field_002C = 0;
  this->field_0028 = nullptr;
  return this;
}

// 00542480 InterSystemC::CreateSystemObjects
#line 1 "decomp/ST.exe/functions/00542480/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079ADB8
   Entries: 00401DCA
   Slots: 0x14
   Anchor:
   Evidence: unique_named_method_in_slot_family; unique_owner_for_target;
   no_qualified_signature_anchor */

undefined4 __thiscall st::fn_00542480(InterSystemC *this)

{
  return 0;
}

// 00542EC0 InterSystemC::DoneSystem
#line 1 "decomp/ST.exe/functions/00542EC0/decomp.c"
/* [STDestructorApplier] Recovered destructor for InterSystemC.
   Evidence: cleanup_only_vtable_method; zeroed_this_fields=4; same_this_calls=2;
   field_cleanup_calls=0; 00542ECE ccFntTy::operator; 00542F14 FUN_006e52d0 */

void __thiscall st::fn_00542EC0(InterSystemC *this)

{
  if (this->field_0024 != nullptr) {
    st::fn_00710560((uint *)this->field_0024);
    this->field_0024 = nullptr;
  }
  if (this->field_0028 != nullptr) {
    st::fn_00710560((uint *)this->field_0028);
    this->field_0028 = nullptr;
  }
  if ((uint *)this->field_002C != nullptr) {
    st::fn_00710560((uint *)this->field_002C);
    this->field_002C = 0;
  }
  if ((uint *)this->field_0030 != nullptr) {
    st::fn_00710560((uint *)this->field_0030);
    this->field_0030 = 0;
  }
  st::fn_006E52D0((AnonShape_006E52D0_AF06BCD2 *)this);
  return;
}

