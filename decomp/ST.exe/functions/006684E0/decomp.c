#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 117 | 118 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 006684E0 @ 0068608A */

undefined4 * __cdecl FltDataPack(AnonShape_GLOBAL_008489C4_F7BABFAC *param_1,uint *param_2)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint **ppuVar6;
  undefined4 *puVar7;
  uint *puVar8;
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 *local_8;

  local_8 = (undefined4 *)0x0;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 == 0) {
    iVar3 = 7;
    ppuVar6 = &param_1->field_01EB;
    do {
      puVar8 = *ppuVar6;
      if (puVar8 != (uint *)0x0) {
        iVar5 = puVar8[3] * puVar8[2] + 0x1c;
        local_c = local_c + iVar5;
        ppuVar6[2] = (uint *)iVar5;
      }
      ppuVar6 = ppuVar6 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *param_2 = local_c + 0x260U;
    puVar4 = Library::DKW::LIB::FUN_006aac10(local_c + 0x260U);
    puVar7 = puVar4;
    for (iVar3 = 0x98; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *(undefined4 *)param_1;
      param_1 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)&param_1->field_0x4;
      puVar7 = puVar7 + 1;
    }
    iVar3 = 0;
    puVar4[5] = *param_2;
    *(undefined1 *)(puVar4 + 6) = 0;
    puVar8 = (uint *)((int)puVar4 + 0x25f);
    local_8 = puVar4;
    do {
      puVar1 = *(uint **)(iVar3 + 0x1eb + (int)puVar4);
      if (puVar1 != (uint *)0x0) {
        FUN_006affc0(puVar1,puVar8,&local_c);
        *(int *)(iVar3 + 0x1ef + (int)local_8) = (int)puVar8 + (-0x25f - (int)local_8);
        puVar8 = (uint *)((int)puVar8 + *(int *)(iVar3 + 499 + (int)local_8));
        puVar4 = local_8;
      }
      iVar3 = iVar3 + 0xc;
    } while (iVar3 < 0x54);
    g_currentExceptionFrame = local_50.previous;
    return puVar4;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != (undefined4 *)0x0) {
    FreeAndNull(&local_8);
  }
  iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt_d.cpp",0x75,0,iVar3,"%s",
                             "FltDataPack");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_flt_d.cpp",0x76);
  return (undefined4 *)0x0;
}

