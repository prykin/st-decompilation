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
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  cLoadingTy *pcVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  uint local_450 [256];
  InternalExceptionFrame local_50;
  uint local_c;
  cLoadingTy *local_8;

  local_8 = this;
  sub_00555570(this);
  if (this->field_003C < -1) {
    return;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pcVar10 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\grig\\loading.cpp",0x14a,0,iVar3,"%s",
                               "cLoadingTy::SetState");
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\loading.cpp",0x14b);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(param_1) {
  case CASE_0:
    pcVar5 = LoadResourceString(0x267a,g_module_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    puVar11 = (uint *)(pcVar13 + -uVar8);
    puVar12 = local_450;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    pcVar5 = LoadResourceString(0x267e,g_module_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar3 = -1;
    puVar11 = local_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar9 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar9 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    DrawLine(local_8,local_450);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_1:
    pcVar5 = LoadResourceString(0x267a,g_module_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    puVar11 = (uint *)(pcVar13 + -uVar8);
    puVar12 = local_450;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    pcVar5 = LoadResourceString(0x267b,g_module_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar3 = -1;
    puVar11 = local_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar9 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar9 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; pcVar10 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (local_8->field_003C == 0) {
      uVar8 = local_8->field_0040;
      if (uVar8 < param_2) {
        param_2 = uVar8;
      }
    }
    else {
      DVar4 = timeGetTime();
      uVar8 = pcVar10->field_0040;
      param_2 = DVar4 - pcVar10->field_0044;
      if (uVar8 < param_2) {
        param_2 = uVar8;
      }
    }
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar8 = (param_2 * 100) / uVar8;
    if (uVar8 != pcVar10->field_0050) {
      if (0 < (int)uVar8) {
        local_c = uVar8;
        do {
          uVar9 = 0xffffffff;
          pcVar5 = &DAT_007c8fec;
          do {
            pcVar13 = pcVar5;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar13;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          iVar3 = -1;
          puVar11 = local_450;
          do {
            puVar12 = puVar11;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            puVar12 = (uint *)((int)puVar11 + 1);
            uVar7 = *puVar11;
            puVar11 = puVar12;
          } while ((char)uVar7 != '\0');
          pcVar5 = pcVar13 + -uVar9;
          pcVar13 = (char *)((int)puVar12 + -1);
          for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar13 = pcVar13 + 4;
          }
          uVar7 = local_c - 1;
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar13 = pcVar13 + 1;
          }
          local_c = uVar7;
          pcVar10 = local_8;
        } while (uVar7 != 0);
      }
      DrawLine(pcVar10,local_450);
      pcVar10->field_0050 = uVar8;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if ((code *)pcVar10->field_0058 != (code *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pcVar10->field_0058)(pcVar10->field_0054);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    break;
  case CASE_2:
    local_8->field_003C = -1;
    pcVar5 = LoadResourceString(0x267a,g_module_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    puVar11 = (uint *)(pcVar13 + -uVar8);
    puVar12 = local_450;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    pcVar5 = LoadResourceString(0x267c,g_module_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar3 = -1;
    puVar11 = local_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar9 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar9 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    goto joined_r0x00555393;
  case CASE_3:
    local_8->field_003C = -1;
    pcVar5 = LoadResourceString(0x267a,g_module_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    puVar11 = (uint *)(pcVar13 + -uVar8);
    puVar12 = local_450;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    pcVar5 = LoadResourceString(0x267d,g_module_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar3 = -1;
    puVar11 = local_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar9 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar9 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
joined_r0x00555393:
    if (param_3 != (char *)0x0) {
      uVar8 = 0xffffffff;
      do {
        pcVar5 = param_3;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar5 = param_3 + 1;
        cVar1 = *param_3;
        param_3 = pcVar5;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar3 = -1;
      puVar11 = local_450;
      do {
        puVar12 = puVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        puVar12 = (uint *)((int)puVar11 + 1);
        uVar9 = *puVar11;
        puVar11 = puVar12;
      } while ((char)uVar9 != '\0');
      pcVar5 = pcVar5 + -uVar8;
      pcVar13 = (char *)((int)puVar12 + -1);
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    DrawLineCR(pcVar10,(char *)local_450);
    g_currentExceptionFrame = local_50.previous;
    return;
  default:
    if ((code *)local_8->field_0058 != (code *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)local_8->field_0058)(local_8->field_0054);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

