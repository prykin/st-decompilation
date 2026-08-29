#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00401681
   Slots: 0x114
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=2098/2106; unique_owner_for_target */

undefined4 __thiscall STBoatC::vfunc_114(STBoatC *this,int param_1)

{
  STBoatC_field_06F7State SVar1;

  if ((this->field_045D == CASE_3) &&
     ((this->field_082E == CASE_FFFFFFFF || (this->field_082E == ~CASE_FFFFFFFF)))) {
    SVar1 = this->field_06F7;
    if ((SVar1 == CASE_7) || ((SVar1 == CASE_13 || (SVar1 == CASE_1B)))) {
      if (this->field_07CA == nullptr) {
        if (param_1 == 0xfd) {
          return 1;
        }
        if (param_1 == 0xfe) {
          return 1;
        }
        if ((((0 < param_1) && (param_1 < 0x29)) && (param_1 != 7)) &&
           ((param_1 != 0x13 && (param_1 != 0x1b)))) {
          return 1;
        }
      }
    }
    else if (((param_1 == 7) || (param_1 == 0x13)) || (param_1 == 0x1b)) {
      return 1;
    }
  }
  return 0;
}

