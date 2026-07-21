#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetVisualInfo

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_GetVisualInfo_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0044C130 -> 0044E980 @ 0044C194 | 0044C130 -> 0044E980 @ 0044C1F7 | 0044C130 ->
   0044E980 @ 0044C25A */

void __thiscall
STBoatC::GetVisualInfo
          (STBoatC *this,undefined4 param_1,STBoatC_GetVisualInfo_param_2Enum param_2,int param_3,
          undefined4 *param_4,char *param_5,undefined1 *param_6,
          STAllPlayersC_GetTOBJImage_param_2Enum *param_7)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;

  *param_4 = DAT_0080677c;
  *param_5 = '\0';
  *param_6 = 0x1d;
  *param_7 = 0;
  if ((param_3 != 0xe) && (param_3 != 0xc)) {
    if (param_3 == 0xd) {
      if (param_2 == CASE_B) {
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_007a9e94;
        do {
          pcVar6 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar6 + -uVar4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)param_5 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          param_5 = param_5 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_5 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          param_5 = param_5 + 1;
        }
        return;
      }
      if (param_2 == CASE_16) {
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_007a9e9c;
        do {
          pcVar6 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar6 + -uVar4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)param_5 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          param_5 = param_5 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_5 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          param_5 = param_5 + 1;
        }
        return;
      }
      if (param_2 == CASE_23) {
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_007a9ea4;
        do {
          pcVar6 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar6 + -uVar4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)param_5 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          param_5 = param_5 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_5 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          param_5 = param_5 + 1;
        }
        return;
      }
    }
    *param_4 = 0;
    return;
  }
  switch(param_2) {
  case CASE_1:
    pcVar7 = &DAT_007a9e8c;
    break;
  case CASE_2:
    pcVar7 = &DAT_007a9e84;
    break;
  case CASE_3:
    pcVar7 = &DAT_007a9e7c;
    break;
  case CASE_4:
    pcVar7 = &DAT_007a9e74;
    break;
  case CASE_5:
    pcVar7 = &DAT_007a9e6c;
    break;
  case CASE_6:
    pcVar7 = &DAT_007a9e64;
    break;
  case CASE_7:
    pcVar7 = &DAT_007a9e5c;
    break;
  case CASE_8:
    pcVar7 = &DAT_007a9e54;
    break;
  case CASE_9:
    pcVar7 = &DAT_007a9e50;
    break;
  case CASE_A:
    pcVar7 = &DAT_007a9e48;
    break;
  case CASE_B:
    pcVar7 = &DAT_007a9e40;
    break;
  case CASE_C:
    pcVar7 = &DAT_007a9e38;
    break;
  case CASE_D:
    pcVar7 = &DAT_007a9e30;
    break;
  case CASE_E:
    pcVar7 = &DAT_007a9e28;
    break;
  case CASE_F:
    pcVar7 = &DAT_007a9e20;
    break;
  case CASE_10:
    pcVar7 = &DAT_007a9e18;
    break;
  case CASE_11:
    pcVar7 = &DAT_007a9e10;
    break;
  case CASE_12:
    pcVar7 = &DAT_007a9e08;
    break;
  case CASE_13:
    pcVar7 = &DAT_007a9e00;
    break;
  case CASE_14:
    pcVar7 = &DAT_007a9df8;
    break;
  case CASE_15:
    pcVar7 = &DAT_007a9df4;
    break;
  case CASE_16:
    pcVar7 = &DAT_007a9dec;
    break;
  case CASE_17:
    pcVar7 = &DAT_007a9de4;
    break;
  case CASE_18:
    pcVar7 = &DAT_007a9ddc;
    break;
  case CASE_19:
    pcVar7 = &DAT_007a9dd8;
    break;
  case CASE_1A:
    pcVar7 = &DAT_007a9dd4;
    break;
  case CASE_1B:
    pcVar7 = &DAT_007a9dd0;
    break;
  case CASE_1C:
    pcVar7 = &DAT_007a9dcc;
    break;
  case CASE_1D:
    pcVar7 = &DAT_007a9dc8;
    break;
  case CASE_1E:
    pcVar7 = &DAT_007a9dc4;
    break;
  case CASE_1F:
    pcVar7 = &DAT_007a9dc0;
    break;
  case CASE_20:
    pcVar7 = &DAT_007a9dbc;
    break;
  case CASE_21:
    pcVar7 = &DAT_007a9db8;
    break;
  case CASE_22:
    pcVar7 = &DAT_007a9db4;
    break;
  case CASE_23:
    pcVar7 = &DAT_007a9db0;
    break;
  case CASE_24:
    pcVar7 = &DAT_007a9dac;
    break;
  case CASE_25:
    pcVar7 = &DAT_007a9da4;
    break;
  case CASE_26:
    pcVar7 = &DAT_007a9d9c;
    break;
  case CASE_27:
    pcVar7 = &DAT_007a9d94;
    break;
  case CASE_28:
    pcVar7 = &DAT_007a9d8c;
    break;
  default:
    *param_4 = 0;
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x12e,0,0,"%s",
                               "STBoatC::GetVisualInfo BODY_LEVEL");
    if (iVar3 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar6 + -uVar4;
  pcVar6 = param_5;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (param_3 != 0xc) {
    return;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_007a9d88;
  do {
    pcVar6 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  do {
    pcVar7 = param_5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar7 = param_5 + 1;
    cVar1 = *param_5;
    param_5 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}

