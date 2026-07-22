#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 117 | 118 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 006684E0 @ 0068608A

   [STPrototypeApplier] Propagated return.
   Evidence: 006684E0 returns used as parameter 0 of FUN_006809b0 @ 006860A4 */

byte * __cdecl FltDataPack(AnonShape_GLOBAL_008489C4_F7BABFAC *param_1,uint *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint **ppuVar8;
  byte *pbVar9;
  uint *puVar10;
  InternalExceptionFrame local_50;
  int local_c;
  byte *local_8;

  local_8 = (byte *)0x0;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar5 == 0) {
    iVar5 = 7;
    ppuVar8 = &param_1->field_01EB;
    do {
      puVar10 = *ppuVar8;
      if (puVar10 != (uint *)0x0) {
        iVar7 = puVar10[3] * puVar10[2] + 0x1c;
        local_c = local_c + iVar7;
        ppuVar8[2] = (uint *)iVar7;
      }
      ppuVar8 = ppuVar8 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *param_2 = local_c + 0x260U;
    pbVar6 = (byte *)Library::DKW::LIB::FUN_006aac10(local_c + 0x260U);
    pbVar9 = pbVar6;
    for (iVar5 = 0x98; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar2 = param_1->field_0x1;
      uVar3 = param_1->field_0x2;
      uVar4 = param_1->field_0x3;
      pbVar9[0] = param_1->field_0x0;
      pbVar9[1] = uVar2;
      pbVar9[2] = uVar3;
      pbVar9[3] = uVar4;
      param_1 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)&param_1->field_0x4;
      pbVar9 = pbVar9 + 4;
    }
    iVar5 = 0;
    *(uint *)(pbVar6 + 0x14) = *param_2;
    pbVar6[0x18] = 0;
    puVar10 = (uint *)(pbVar6 + 0x25f);
    local_8 = pbVar6;
    do {
      if (*(uint **)(pbVar6 + iVar5 + 0x1eb) != (uint *)0x0) {
        FUN_006affc0(*(uint **)(pbVar6 + iVar5 + 0x1eb),puVar10,&local_c);
        *(int *)(local_8 + iVar5 + 0x1ef) = (int)puVar10 + (-0x25f - (int)local_8);
        puVar10 = (uint *)((int)puVar10 + *(int *)(local_8 + iVar5 + 499));
        pbVar6 = local_8;
      }
      iVar5 = iVar5 + 0xc;
    } while (iVar5 < 0x54);
    g_currentExceptionFrame = local_50.previous;
    return pbVar6;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != (byte *)0x0) {
    FreeAndNull(&local_8);
  }
  iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt_d.cpp",0x75,0,iVar5,"%s",
                             "FltDataPack");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\ai\\ai_flt_d.cpp",0x76);
  return (byte *)0x0;
}

