#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790728
   Entries: 00403B2F
   Slots: 0x4
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=562/786; unique_owner_for_target; unique physical vtable owner and slot type only
   the existing __thiscall receiver; explicit parameters and return are retained

   [STSwitchEnumApplier] Switch target field_01E6 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_01E6State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall STGroupBoatC::vfunc_4(STGroupBoatC *this,ushort param_1)

{
  DArrayTy *array;
  uint index;
  uint local_1c;
  ushort local_18;

  /* ST_CALLSITE[004A0EF6]: CALL 0x00404ff2; direct=00404FF2 STGroupBoatC::sub_0040CDB0 */
  sub_0040CDB0(this,(uint)param_1);
  if (((this->field_01E6 == CASE_6) && (array = this->field_022E, array != nullptr)) &&
     (index = 0, 0 < (int)array->count)) {
    do {
      DArrayGetElement(array,index,&local_1c);
      if (local_18 == param_1) {
        local_18 = 0xffff;
        local_1c = 0;
        Library::DKW::TBL::DArrayPut(this->field_022E,index,&local_1c);
      }
      array = this->field_022E;
      index = index + 1;
    } while ((int)index < (int)array->count);
  }
  thunk_FUN_00423c70(this,param_1);
  return;
}

