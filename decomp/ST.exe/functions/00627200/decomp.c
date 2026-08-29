#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 00404868
   Slots: 0xE0
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=716/1456; unique_owner_for_target */

undefined4 __thiscall
STMineSetC::vfunc_E0
          (STMineSetC *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3,
          undefined2 *param_4,undefined4 *param_5)

{
  *param_2 = (short)this->field_02C2;
  *param_3 = (short)this->field_02C6;
  *param_4 = (short)this->field_02CA;
  *param_5 = 0;
  return 0;
}

