#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B3C4
   Entries: 0040588A
   Slots: 0xDC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=619/619; unique_owner_for_target

   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235 */

undefined4 __thiscall
STFishC::vfunc_DC(STFishC *this,short param_1,short param_2,short param_3,short param_4,
                 short param_5,short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;

  sVar2 = 0;
  sVar5 = 0;
  sVar6 = 0;
  switch(this->field_0267) {
  case CASE_E7:
  case CASE_E9:
    sVar2 = 0x1c;
    sVar5 = 0x1c;
    sVar6 = 0x1c;
    goto switchD_0057bd8f_default;
  case CASE_E8:
  case CASE_EA:
    sVar2 = 0x16;
    break;
  case CASE_EB:
    sVar2 = 0x1c;
    break;
  default:
    goto switchD_0057bd8f_default;
  }
  sVar5 = 0xc;
  sVar6 = 0xc;
switchD_0057bd8f_default:
  sVar3 = this->field_0043 - sVar5;
  sVar4 = this->field_0045 - sVar6;
  sVar1 = this->field_0041 - sVar2;
  sVar2 = sVar2 + this->field_0041;
  sVar5 = sVar5 + this->field_0043;
  sVar6 = sVar6 + this->field_0045;
  if ((((((sVar1 <= param_1) && (param_1 <= sVar2)) || ((sVar1 <= param_4 && (param_4 <= sVar2))))
       || ((param_1 <= sVar1 && (sVar2 <= param_4)))) &&
      (((sVar3 <= param_2 && (param_2 <= sVar5)) ||
       (((sVar3 <= param_5 && (param_5 <= sVar5)) || ((param_2 <= sVar3 && (sVar5 <= param_5))))))))
     && ((((sVar4 <= param_3 && (param_3 <= sVar6)) || ((sVar4 <= param_6 && (param_6 <= sVar6))))
         || ((param_3 <= sVar4 && (sVar6 <= param_6)))))) {
    return 0;
  }
  return 0xffffffff;
}

