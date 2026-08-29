#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079BBB8
   Entries: 00403742
   Slots: 0xE0
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=71/685; unique_owner_for_target

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00589B1A exact 2-byte output store from /STOctopusC+0x41; exact partial-width MOV at
   00589B16

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00589B24 exact 2-byte output store from /STOctopusC+0x43; exact partial-width MOV at
   00589B20

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00589B31 exact 2-byte output store from /STOctopusC+0x45; exact partial-width MOV at
   00589B27 */

undefined4 __thiscall
STOctopusC::vfunc_E0
          (STOctopusC *this,undefined4 param_1,short *param_2,short *param_3,short *param_4,
          undefined4 *param_5)

{
  *param_2 = this->field_0041;
  *param_3 = this->field_0043;
  *param_4 = this->field_0045;
  *param_5 = 0;
  return 0;
}

