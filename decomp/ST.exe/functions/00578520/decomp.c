#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B238
   Entries: 0040263A
   Slots: 0xE0
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=71/641; unique_owner_for_target

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0057852A exact 2-byte output store from /STCrabC+0x41; exact partial-width MOV at
   00578526

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00578534 exact 2-byte output store from /STCrabC+0x43; exact partial-width MOV at
   00578530

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00578541 exact 2-byte output store from /STCrabC+0x45; exact partial-width MOV at
   00578537 */

undefined4 __thiscall
STCrabC::vfunc_E0(STCrabC *this,undefined4 param_1,short *param_2,short *param_3,short *param_4,
                 undefined4 *param_5)

{
  *param_2 = this->field_0041;
  *param_3 = this->field_0043;
  *param_4 = this->field_0045;
  *param_5 = 0;
  return 0;
}

