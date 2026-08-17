#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004C2950_param_3Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_C=12;CASE_D=13;CASE_E=14

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044C130 -> 004C2950 @ 0044C2EA */

void __cdecl
FUN_004c2950(int param_1,int param_2,Global_sub_004C2950_param_3Enum param_3,undefined4 *param_4,
            char *param_5,undefined1 *param_6,STAllPlayersC_GetTOBJImage_param_2Enum *param_7)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar6;

  *param_4 = 0;
  *param_5 = '\0';
  switch(param_3) {
  case CASE_8:
    if (*(int *)(&DAT_00791948 + param_2 * 4) == 0) {
      return;
    }
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4) == 0) {
      return;
    }
    if (param_2 == 0x40) {
      return;
    }
    if (param_2 == 0x49) {
      return;
    }
    /* ST_CALLSITE[004C2B2D]: CALL dword ptr [0x0085bde8] */
    wsprintfA(param_5,"%s_cover%1i",*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4),0);
    *param_4 = PTR_0080678c;
    *param_6 = 0x1d;
    goto LAB_004c2b44;
  case CASE_9:
    if (*(int *)(&DAT_00791948 + param_2 * 4) != 0) {
      iVar1 = param_1 + -0x97 + param_2 * 3;
      if (*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc) != 0) {
        /* ST_CALLSITE[004C2AC9]: CALL dword ptr [0x0085bde8] */
        wsprintfA(param_5,"%s_cover",*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc));
        *param_4 = PTR_0080678c;
        *param_6 = 0x1d;
        *param_7 = *(STAllPlayersC_GetTOBJImage_param_2Enum *)(PTR_DAT_007b5170 + iVar1 * 0x20);
        return;
      }
    }
    break;
  case CASE_C:
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(char **)(PTR_PTR_007bb198 + iVar1 * 0xc + 8) != nullptr) {
      uVar3 = 0xffffffff;
      pcVar5 = *(char **)(PTR_PTR_007bb198 + iVar1 * 0xc + 8);
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar2 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      memmove(param_5, pcVar5, uVar3); /* compiler REP MOVS byte copy */
      *param_4 = PTR_0080678c;
      *param_6 = 0x1d;
      *param_7 = *(STAllPlayersC_GetTOBJImage_param_2Enum *)(PTR_DAT_007b8310 + iVar1 * 0x20);
      return;
    }
    break;
  case CASE_D:
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4) == 0) {
      return;
    }
    /* ST_CALLSITE[004C2A05]: CALL dword ptr [0x0085bde8] */
    wsprintfA(param_5,"%s%1i",*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4),0);
    *param_4 = PTR_0080678c;
    *param_6 = 0x1d;
    if ((param_2 == 0x40) || (param_2 == 0x49)) {
      *param_7 = 0;
      return;
    }
LAB_004c2b44:
    *param_7 = *(STAllPlayersC_GetTOBJImage_param_2Enum *)(PTR_DAT_007b5170 + iVar1 * 0x20);
    break;
  case CASE_E:
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(char **)(PTR_PTR_007bb198 + iVar1 * 0xc) != nullptr) {
      uVar3 = 0xffffffff;
      pcVar5 = *(char **)(PTR_PTR_007bb198 + iVar1 * 0xc);
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar2 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      memmove(param_5, pcVar5, uVar3); /* compiler REP MOVS byte copy */
      *param_4 = PTR_0080678c;
      *param_6 = 0x1d;
      *param_7 = *(STAllPlayersC_GetTOBJImage_param_2Enum *)(PTR_DAT_007b5170 + iVar1 * 0x20);
      return;
    }
  }
  return;
}

