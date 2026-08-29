#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005FB567 SHR EAX,0x10 classifies dword parameter loaded at 005FB543

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C5AC
   Entries: 0040212B
   Slots: 0xE0
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=71/755; unique_owner_for_target */

undefined4 __thiscall
STColl3C::vfunc_E0(STColl3C *this,uint param_1,short *param_2,short *param_3,short *param_4,
                  int *param_5)

{
  *param_2 = this->field_0041 + (short)(char)param_1;
  *param_3 = (short)(char)(param_1 >> 8) + this->field_0043;
  *param_4 = (short)(char)(param_1 >> 0x10) + this->field_0045;
  *param_5 = (int)(char)(param_1 >> 0x18) + (int)this->field_0045;
  return 0;
}

