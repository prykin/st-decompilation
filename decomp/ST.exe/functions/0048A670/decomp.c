#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_SetSpeedFireLife

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=void __thiscall
   _SetSpeedFireLife(STBoatC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0048A73F RET */

void __thiscall STBoatC::_SetSpeedFireLife(STBoatC *this)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)this->field_06CB + 0x2c)) {
  case 1:
  case 0x20:
    this->field_0219 = 0x5a;
    break;
  case 2:
  case 5:
  case 6:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x26:
  case 0x27:
  case 0x28:
    this->field_0219 = 0x8c;
    break;
  case 3:
  case 4:
  case 0xb:
  case 0xf:
    this->field_0219 = 0xbe;
    break;
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x24:
  case 0x25:
    break;
  case 10:
  case 0x17:
  case 0x22:
    this->field_0219 = 0xfa;
    break;
  case 0x16:
    this->field_0219 = 0xe6;
    break;
  case 0x23:
    this->field_0219 = 0xaa;
    break;
  default:
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x46b8,0,0,"%s",
                               "STBoatC::_SetSpeedFireLife unknown boat type");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  bVar2 = thunk_FUN_00430750(*(Global_sub_00430750_param_1Enum *)((int)this->field_06CB + 0x2c));
  thunk_FUN_00417ff0(this,bVar2);
  thunk_FUN_00418010(this,bVar2 / 2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(&DAT_007dfbac + *(int *)((int)this->field_06CB + 0x2c) * 4);
  this->field_0716 = iVar3;
  this->field_0712 = iVar3;
  return;
}

