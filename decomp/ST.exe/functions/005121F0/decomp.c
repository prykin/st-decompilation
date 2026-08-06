#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005121F0_param_1Enum. Cases:
   CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247;CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251
    */

undefined4 __thiscall FUN_005121f0(void *this,Global_sub_005121F0_param_1Enum param_1,int param_2)

{
  Global_sub_005121F0_param_1Enum GVar1;
  Global_sub_005121F0_param_1Enum *pGVar2;
  uint uVar3;

  uVar3 = 0;
  if (*(uint *)sizeHelp_exref != 0) {
    pGVar2 = (Global_sub_005121F0_param_1Enum *)(STField<int>(this,0x1c7) + 9);
    do {
      switch(*(byte *)((int)pGVar2 + -1)) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 0xb:
        if (*pGVar2 == param_1) {
          if (*(byte *)((int)pGVar2 + -1) == 3) {
            return 1;
          }
          if (pGVar2[1] == param_2) {
            return 1;
          }
        }
        break;
      case 0xc:
        switch(param_1) {
        case CASE_F2:
        case CASE_F3:
        case CASE_F4:
        case CASE_F5:
          GVar1 = *pGVar2;
          if ((((GVar1 == CASE_F2) || (GVar1 == CASE_F3)) || (GVar1 == CASE_F4)) ||
             (GVar1 == CASE_F5)) {
            return 1;
          }
          break;
        case CASE_F6:
        case CASE_F7:
          if (*pGVar2 == CASE_F6) {
            return 1;
          }
          if (*pGVar2 == CASE_F7) {
            return 1;
          }
          break;
        case CASE_F8:
        case CASE_F9:
          if (*pGVar2 == CASE_F8) {
            return 1;
          }
          if (*pGVar2 == CASE_F9) {
            return 1;
          }
          break;
        case CASE_FA:
        case CASE_FB:
          if (*pGVar2 == CASE_FA) {
            return 1;
          }
          if (*pGVar2 == CASE_FB) {
            return 1;
          }
          break;
        default:
          if (*pGVar2 == param_1) {
            return 1;
          }
        }
      }
      uVar3 = uVar3 + 1;
      pGVar2 = (Global_sub_005121F0_param_1Enum *)((int)pGVar2 + 0x11);
    } while (uVar3 < *(uint *)sizeHelp_exref);
  }
  return 0;
}

