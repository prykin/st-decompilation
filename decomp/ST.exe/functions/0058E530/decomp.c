#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079BE80
   Entries: 0040376A
   Slots: 0xE0
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=71/655; unique_owner_for_target

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0058E53A exact 2-byte output store from /STSharkC+0x41; exact partial-width MOV at
   0058E536

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0058E544 exact 2-byte output store from /STSharkC+0x43; exact partial-width MOV at
   0058E540

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0058E551 exact 2-byte output store from /STSharkC+0x45; exact partial-width MOV at
   0058E547 */

undefined4 __thiscall
STSharkC::vfunc_E0(STSharkC *this,undefined4 param_1,short *param_2,short *param_3,short *param_4,
                  undefined4 *param_5)

{
  *param_2 = this->field_0041;
  *param_3 = this->field_0043;
  *param_4 = this->field_0045;
  *param_5 = 0;
  return 0;
}

