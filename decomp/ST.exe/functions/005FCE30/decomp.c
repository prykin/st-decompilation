#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C84C>00401C21 | P:0079C84C>00401C21

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 00401C21
   Slots: 0x138
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall STContainerC::vfunc_138(STContainerC *this)

{
  return this->field_034A;
}

