#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetBoatWeaponInfo

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetBoatWeaponInfo_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40
    */

undefined4
STAllPlayersC::GetBoatWeaponInfo
          (STAllPlayersC_GetBoatWeaponInfo_param_1Enum param_1,undefined4 *param_2,
          undefined4 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  switch(param_1) {
  case CASE_1:
  case CASE_7:
  case CASE_8:
  case CASE_9:
  case CASE_A:
  case CASE_C:
  case CASE_13:
  case CASE_14:
  case CASE_15:
  case CASE_18:
  case CASE_19:
  case CASE_1A:
  case CASE_1B:
  case CASE_1D:
  case CASE_1E:
  case CASE_20:
  case CASE_22:
  case CASE_23:
  case CASE_24:
  case CASE_25:
  case CASE_28:
    uVar3 = 0;
    break;
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_B:
  case CASE_D:
  case CASE_E:
  case CASE_10:
  case CASE_11:
  case CASE_1C:
  case CASE_1F:
  case CASE_21:
  case CASE_26:
    uVar3 = 1;
    break;
  case CASE_F:
  case CASE_12:
  case CASE_16:
  case CASE_17:
  case CASE_27:
    uVar3 = 2;
    break;
  default:
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x281a,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__GetBoatWeaponInfo_007a832c);
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  *param_2 = *(undefined4 *)(&DAT_007a8b18 + param_1 * 4);
  *param_3 = *(undefined4 *)(&DAT_007a8c58 + param_1 * 4);
  *param_4 = *(undefined4 *)(&DAT_007a8bb8 + param_1 * 4);
  return uVar3;
}

