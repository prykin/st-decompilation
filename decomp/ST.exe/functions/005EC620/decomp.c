#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C39C>00401FEB | P:0079C39C>00401FEB

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C260
   Entries: 00401FEB
   Slots: 0x13C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall STArtiafactC::vfunc_13C(STArtiafactC *this)

{
  return (dword)&this->field_0x367;
}

