#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B3C4
   Entries: 0040209A
   Slots: 0xE0
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=71/619; unique_owner_for_target

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0057BEEA exact 2-byte output store from /STFishC+0x41; exact partial-width MOV at
   0057BEE6

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0057BEF4 exact 2-byte output store from /STFishC+0x43; exact partial-width MOV at
   0057BEF0

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0057BF01 exact 2-byte output store from /STFishC+0x45; exact partial-width MOV at
   0057BEF7 */

undefined4 __thiscall
STFishC::vfunc_E0(STFishC *this,undefined4 param_1,short *param_2,short *param_3,short *param_4,
                 undefined4 *param_5)

{
  *param_2 = this->field_0041;
  *param_3 = this->field_0043;
  *param_4 = this->field_0045;
  *param_5 = 0;
  return 0;
}

