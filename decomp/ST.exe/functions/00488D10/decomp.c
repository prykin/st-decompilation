#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00401A0A
   Slots: 0x4C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=2030/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_31=49;CASE_32=50;CASE_34=52
    */

void __thiscall STBoatC::vfunc_4C(STBoatC *this,undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  STField<undefined1>(param_1,0x12) = 0;
  *param_1 = this->field_06F7;
  ((undefined1 *)param_1)[1] = 0x2b;
  STField<undefined1>(param_1,5) = 0x2c;
  STField<undefined1>(param_1,6) = 5;
  STField<undefined1>(param_1,7) = 6;
  ((undefined1 *)param_1)[2] = 0x4d;
  STField<undefined1>(param_1,9) = 0x2d;
  if (this->field_07E6 == 0) {
    STField<undefined1>(param_1,0x11) = 3;
    ((undefined1 *)param_1)[4] = 1;
  }
  else {
    ((undefined1 *)param_1)[4] = 3;
    STField<undefined1>(param_1,0x11) = 1;
  }
  if (this->field_07EA == 0) {
    STField<undefined1>(param_1,0x12) = 1;
  }
  else {
    STField<undefined1>(param_1,0x12) = 3;
  }
  switch(this->field_06F7) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_A:
  case CASE_B:
  case CASE_D:
  case CASE_E:
  case CASE_F:
  case CASE_10:
  case CASE_11:
  case CASE_12:
  case CASE_15:
  case CASE_16:
  case CASE_17:
  case CASE_1C:
  case CASE_1E:
  case CASE_1F:
  case CASE_20:
  case CASE_21:
  case CASE_22:
  case CASE_23:
  case CASE_26:
  case CASE_27:
  case CASE_28:
    STField<undefined1>(param_1,10) = 1;
    STField<undefined1>(param_1,0xb) = 1;
    if (this->field_045D == CASE_5) {
      ((undefined1 *)param_1)[3] = 3;
    }
    else {
      ((undefined1 *)param_1)[3] = 1;
    }
    if (this->field_045D == CASE_6) {
      STField<undefined1>(param_1,0xd) = 3;
    }
    else {
      STField<undefined1>(param_1,0xd) = 1;
    }
    if ((this->field_045D == CASE_15) && (this->field_0635 != 2)) {
      STField<undefined1>(param_1,0xe) = 3;
    }
    else {
      STField<undefined1>(param_1,0xe) = 1;
    }
    if (this->field_045D == CASE_8) {
      STField<undefined1>(param_1,0xf) = 3;
      return;
    }
    break;
  case CASE_7:
  case CASE_8:
  case CASE_9:
  case CASE_C:
  case CASE_13:
  case CASE_14:
  case CASE_18:
  case CASE_19:
  case CASE_1A:
  case CASE_1B:
  case CASE_1D:
  case CASE_24:
  case CASE_25:
    STField<undefined1>(param_1,10) = 0;
    STField<undefined1>(param_1,0xb) = 0;
    ((undefined1 *)param_1)[3] = 0;
    if (this->field_045D == CASE_6) {
      STField<undefined1>(param_1,0xd) = 3;
    }
    else {
      STField<undefined1>(param_1,0xd) = 1;
    }
    if (this->field_045D == CASE_15) {
      STField<undefined1>(param_1,0xe) = 3;
    }
    else {
      STField<undefined1>(param_1,0xe) = 1;
    }
    if (this->field_045D == CASE_8) {
      STField<undefined1>(param_1,0xf) = 3;
      return;
    }
    break;
  default:
    goto switchD_00488d99_default;
  }
  STField<undefined1>(param_1,0xf) = 1;
switchD_00488d99_default:
  return;
}

