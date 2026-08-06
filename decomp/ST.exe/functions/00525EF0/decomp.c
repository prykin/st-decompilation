#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00525EF0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00525EF0_param_2Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

undefined4 __cdecl
FUN_00525ef0(Global_sub_00525EF0_param_1Enum param_1,Global_sub_00525EF0_param_2Enum param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(param_1) {
  case CASE_1:
    switch(param_2) {
    case CASE_0:
switchD_00525f56_caseD_0:
      return 0x316a;
    case CASE_1:
      return 0x316b;
    case CASE_2:
      return 0x316c;
    case CASE_3:
      return 0x316d;
    case CASE_4:
      return 0x316e;
    }
    break;
  case CASE_2:
    switch(param_2) {
    case CASE_0:
      goto switchD_00525f56_caseD_0;
    case CASE_1:
      return 0x316f;
    case CASE_2:
      return 0x3170;
    case CASE_3:
      return 0x3171;
    case CASE_4:
      return 0x3172;
    case CASE_5:
      return 0x3173;
    }
    break;
  case CASE_3:
    switch(param_2) {
    case CASE_0:
      return 0x3178;
    case CASE_1:
      return 0x3179;
    case CASE_2:
      return 0x317a;
    case CASE_3:
      uVar1 = 10000;
    }
    break;
  case CASE_4:
    switch(param_2) {
    case CASE_0:
      return 0x3174;
    case CASE_1:
      return 0x3175;
    case CASE_2:
      return 0x3176;
    case CASE_3:
      return 0x3177;
    }
  }
  return uVar1;
}

