#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079BE80
   Entries: 00403E4A
   Slots: 0xDC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=71/655; unique_owner_for_target */

undefined4 __thiscall
STSharkC::vfunc_DC(STSharkC *this,short param_1,short param_2,short param_3,short param_4,
                  short param_5,short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;

  sVar1 = this->field_0045 + -0xc;
  sVar4 = this->field_0045 + 0xc;
  sVar6 = this->field_0041 + -0x1c;
  sVar2 = this->field_0043 + -0xc;
  sVar3 = this->field_0041 + 0x1c;
  sVar5 = this->field_0043 + 0xc;
  if ((((((sVar6 <= param_1) && (param_1 <= sVar3)) || ((sVar6 <= param_4 && (param_4 <= sVar3))))
       || ((param_1 <= sVar6 && (sVar3 <= param_4)))) &&
      (((sVar2 <= param_2 && (param_2 <= sVar5)) ||
       (((sVar2 <= param_5 && (param_5 <= sVar5)) || ((param_2 <= sVar2 && (sVar5 <= param_5))))))))
     && ((((sVar1 <= param_3 && (param_3 <= sVar4)) || ((sVar1 <= param_6 && (param_6 <= sVar4))))
         || ((param_3 <= sVar1 && (sVar4 <= param_6)))))) {
    return 0;
  }
  return 0xffffffff;
}

