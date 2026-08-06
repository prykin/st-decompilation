#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::SetState

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/cLoadingTy_SetState_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall
cLoadingTy::SetState
          (cLoadingTy *this,cLoadingTy_SetState_param_1Enum param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar3;
  char *pcVar4_mgD;
  char *pcVar4_mgE;
  char *pcVar4_mg8;
  char *pcVar4_mg9;
  DWORD DVar3;
  char *pcVar4_mg3;
  char *pcVar4_mg4;
  char *pcVar4_mg0;
  char *pcVar4_mg1;
  int iVar5;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  cLoadingTy *pcVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  uint local_450 [256];
  InternalExceptionFrame local_50;
  uint local_c;
  cLoadingTy *local_8;
  char *pcVar4_mg6;

  local_8 = this;
  sub_00555570(this);
  if (this->field_003C < -1) {
    return;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pcVar9 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\grig\\loading.cpp",0x14a,0,iVar3,"%s",
                               "cLoadingTy::SetState");
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\loading.cpp",0x14b);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(param_1) {
  case CASE_0:
    pcVar4_mgD = LoadResourceString(0x267a,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mgD;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mgD + 1;
      cVar1 = *pcVar4_mgD;
      pcVar4_mgD = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar10 = (uint *)(pcVar8 + -uVar5);
    puVar11 = local_450;
    memmove(puVar11, puVar10, uVar5); /* compiler REP MOVS byte copy */
    pcVar4_mgE = LoadResourceString(0x267e,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mgE;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mgE + 1;
      cVar1 = *pcVar4_mgE;
      pcVar4_mgE = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    puVar10 = local_450;
    do {
      puVar11 = puVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      puVar11 = (uint *)((int)puVar10 + 1);
      uVar6 = *puVar10;
      puVar10 = puVar11;
    } while ((char)uVar6 != '\0');
    pcVar8 = pcVar8 + -uVar5;
    pcVar12 = (char *)((int)puVar11 + -1);
    memmove(pcVar12, pcVar8, uVar5); /* compiler REP MOVS byte copy */
    DrawLine(local_8,local_450);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_1:
    pcVar4_mg8 = LoadResourceString(0x267a,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg8 + 1;
      cVar1 = *pcVar4_mg8;
      pcVar4_mg8 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar10 = (uint *)(pcVar8 + -uVar5);
    puVar11 = local_450;
    memmove(puVar11, puVar10, uVar5); /* compiler REP MOVS byte copy */
    pcVar4_mg9 = LoadResourceString(0x267b,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg9 + 1;
      cVar1 = *pcVar4_mg9;
      pcVar4_mg9 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    puVar10 = local_450;
    do {
      puVar11 = puVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      puVar11 = (uint *)((int)puVar10 + 1);
      uVar6 = *puVar10;
      puVar10 = puVar11;
    } while ((char)uVar6 != '\0');
    pcVar8 = pcVar8 + -uVar5;
    pcVar12 = (char *)((int)puVar11 + -1);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; pcVar9 = local_8, uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar12 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar12 = pcVar12 + 1;
    }
    if (local_8->field_003C == 0) {
      uVar5 = local_8->field_0040;
      if (uVar5 < param_2) {
        param_2 = uVar5;
      }
    }
    else {
      DVar3 = timeGetTime();
      uVar5 = pcVar9->field_0040;
      param_2 = DVar3 - pcVar9->field_0044;
      if (uVar5 < param_2) {
        param_2 = uVar5;
      }
    }
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar5 = (param_2 * 100) / uVar5;
    if (uVar5 != pcVar9->field_0050) {
      if (0 < (int)uVar5) {
        local_c = uVar5;
        do {
          uVar6 = 0xffffffff;
          pcVar8 = &DAT_007c8fec;
          do {
            pcVar12 = pcVar8;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar7 = -1;
          puVar10 = local_450;
          do {
            puVar11 = puVar10;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            puVar11 = (uint *)((int)puVar10 + 1);
            uVar4 = *puVar10;
            puVar10 = puVar11;
          } while ((char)uVar4 != '\0');
          pcVar8 = pcVar12 + -uVar6;
          pcVar12 = (char *)((int)puVar11 + -1);
          for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar12 = pcVar12 + 4;
          }
          uVar4 = local_c - 1;
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar12 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar12 = pcVar12 + 1;
          }
          local_c = uVar4;
          pcVar9 = local_8;
        } while (uVar4 != 0);
      }
      DrawLine(pcVar9,local_450);
      pcVar9->field_0050 = uVar5;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if ((code *)pcVar9->field_0058 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pcVar9->field_0058)(pcVar9->field_0054);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    break;
  case CASE_2:
    local_8->field_003C = -1;
    pcVar4_mg3 = LoadResourceString(0x267a,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg3 + 1;
      cVar1 = *pcVar4_mg3;
      pcVar4_mg3 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar10 = (uint *)(pcVar8 + -uVar5);
    puVar11 = local_450;
    memmove(puVar11, puVar10, uVar5); /* compiler REP MOVS byte copy */
    pcVar4_mg4 = LoadResourceString(0x267c,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg4 + 1;
      cVar1 = *pcVar4_mg4;
      pcVar4_mg4 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    puVar10 = local_450;
    do {
      puVar11 = puVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      puVar11 = (uint *)((int)puVar10 + 1);
      uVar6 = *puVar10;
      puVar10 = puVar11;
    } while ((char)uVar6 != '\0');
    pcVar8 = pcVar8 + -uVar5;
    pcVar12 = (char *)((int)puVar11 + -1);
    memmove(pcVar12, pcVar8, uVar5); /* compiler REP MOVS byte copy */
    uVar6 = 0;
    goto joined_r0x00555393;
  case CASE_3:
    local_8->field_003C = -1;
    pcVar4_mg0 = LoadResourceString(0x267a,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg0;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg0 + 1;
      cVar1 = *pcVar4_mg0;
      pcVar4_mg0 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar10 = (uint *)(pcVar8 + -uVar5);
    puVar11 = local_450;
    memmove(puVar11, puVar10, uVar5); /* compiler REP MOVS byte copy */
    pcVar4_mg1 = LoadResourceString(0x267d,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg1 + 1;
      cVar1 = *pcVar4_mg1;
      pcVar4_mg1 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    puVar10 = local_450;
    do {
      puVar11 = puVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      puVar11 = (uint *)((int)puVar10 + 1);
      uVar6 = *puVar10;
      puVar10 = puVar11;
    } while ((char)uVar6 != '\0');
    pcVar8 = pcVar8 + -uVar5;
    pcVar12 = (char *)((int)puVar11 + -1);
    memmove(pcVar12, pcVar8, uVar5); /* compiler REP MOVS byte copy */
joined_r0x00555393:
    if (param_3 != nullptr) {
      uVar5 = 0xffffffff;
      do {
        pcVar4_mg6 = param_3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar4_mg6 = param_3 + 1;
        cVar1 = *param_3;
        param_3 = pcVar4_mg6;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar7 = -1;
      puVar10 = local_450;
      do {
        puVar11 = puVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        puVar11 = (uint *)((int)puVar10 + 1);
        uVar6 = *puVar10;
        puVar10 = puVar11;
      } while ((char)uVar6 != '\0');
      pcVar8 = pcVar4_mg6 + -uVar5;
      pcVar12 = (char *)((int)puVar11 + -1);
      memmove(pcVar12, pcVar8, uVar5); /* compiler REP MOVS byte copy */
    }
    DrawLineCR(pcVar9,(char *)local_450);
    g_currentExceptionFrame = local_50.previous;
    return;
  default:
    if ((code *)local_8->field_0058 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)local_8->field_0058)(local_8->field_0054);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

