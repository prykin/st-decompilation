#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_SetSpeedFireLife

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40
    */

void __thiscall STBoatC::_SetSpeedFireLife(STBoatC *this,void *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;

  switch(this->field_06F7) {
  case CASE_1:
  case CASE_20:
    this->field_0219 = 0x5a;
    break;
  case CASE_2:
  case CASE_5:
  case CASE_6:
  case CASE_D:
  case CASE_E:
  case CASE_10:
  case CASE_11:
  case CASE_12:
  case CASE_1C:
  case CASE_1E:
  case CASE_1F:
  case CASE_21:
  case CASE_26:
  case CASE_27:
  case CASE_28:
    this->field_0219 = 0x8c;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_B:
  case CASE_F:
    this->field_0219 = 0xbe;
    break;
  case CASE_7:
  case CASE_8:
  case CASE_9:
  case CASE_C:
  case CASE_13:
  case CASE_14:
  case CASE_15:
  case CASE_18:
  case CASE_19:
  case CASE_1A:
  case CASE_1B:
  case CASE_1D:
  case CASE_24:
  case CASE_25:
    break;
  case CASE_A:
  case CASE_17:
  case CASE_22:
    this->field_0219 = 0xfa;
    break;
  case CASE_16:
    this->field_0219 = 0xe6;
    break;
  case CASE_23:
    this->field_0219 = 0xaa;
    break;
  default:
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x46b8,0,0,"%s",
                               "STBoatC::_SetSpeedFireLife unknown boat type");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  bVar2 = thunk_FUN_00430750(this->field_06F7);
  thunk_FUN_00417ff0(this,bVar2);
  thunk_FUN_00418010(this,bVar2 / 2);
  iVar3 = *(int *)(&DAT_007dfbac + this->field_06F7 * 4);
  this->field_0716 = iVar3;
  this->field_0712 = iVar3;
  return;
}

