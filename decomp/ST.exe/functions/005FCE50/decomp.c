#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C850>004020A9 | P:0079C850>004020A9

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 004020A9
   Slots: 0x13C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall STContainerC::vfunc_13C(STContainerC *this)

{
  return (dword)&this->field_0x36b;
}

