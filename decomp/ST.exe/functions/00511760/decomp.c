#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DoneHelpPanel */

void __thiscall HelpPanelTy::DoneHelpPanel(HelpPanelTy *this)

{
  code *pcVar1;
  HelpPanelTy *pHVar2;
  int errorCode;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_10;
  ccFntTy *this_00;
  uint *puVar4;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pHVar2 = local_c;
  if (errorCode == 0) {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_00 = extraout_ECX;
    if (local_c->field_017C != 0) {
      StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_017C);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_00;
    }
    pHVar2->field_017C = 0;
    puVar4 = &pHVar2->field_0180;
    local_8 = 7;
    do {
      if (*puVar4 != 0) {
        StartSystemTy::sub_006E56B0(pHVar2->field_000C,*puVar4);
        *puVar4 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        this_00 = extraout_ECX_01;
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (pHVar2->field_019C != 0) {
      StartSystemTy::sub_006E56B0(pHVar2->field_000C,pHVar2->field_019C);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_02;
    }
    pHVar2->field_019C = 0;
    if ((DArrayTy *)pHVar2->field_01B3 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pHVar2->field_01B3);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_03;
    }
    pHVar2->field_01B3 = (AnonPointee_HelpPanelTy_01B3 *)0x0;
    if (pHVar2->field_01BB != (DArrayTy *)0x0) {
      DArrayDestroy(pHVar2->field_01BB);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_04;
    }
    pHVar2->field_01BB = (DArrayTy *)0x0;
    if (pHVar2->field_01CB != (DArrayTy *)0x0) {
      DArrayDestroy(pHVar2->field_01CB);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_05;
    }
    pHVar2->field_01CB = (DArrayTy *)0x0;
    if ((DArrayTy *)pHVar2->field_01D7 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pHVar2->field_01D7);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_06;
    }
    pHVar2->field_01D7 = 0;
    if ((AnonShape_006B5570_4D68B99C *)pHVar2->field_01D3 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pHVar2->field_01D3);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_07;
    }
    pHVar2->field_01D3 = (uint *)0x0;
    puVar4 = &pHVar2->field_01F0;
    local_8 = 10;
    do {
      if (*puVar4 != 0) {
        cMf32::RecMemFree(DAT_00806790,puVar4);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        this_00 = extraout_ECX_08;
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    pHVar2->field_0238 = 0;
    pHVar2->field_0248 = 0;
    pHVar2->field_022C = 0;
    pHVar2->field_0228 = 0;
    pHVar2->field_0234 = 0;
    pHVar2->field_0230 = 0;
    pHVar2->field_0224 = 0;
    pHVar2->field_0220 = 0;
    pHVar2->field_0244 = 0;
    pHVar2->field_0240 = 0;
    pHVar2->field_023C = 0;
    if (pHVar2->field_01E0 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pHVar2->field_01E0);
      pHVar2->field_01E0 = (ccFntTy *)0x0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_09;
    }
    if (pHVar2->field_01E4 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pHVar2->field_01E4);
      pHVar2->field_01E4 = (ccFntTy *)0x0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_10;
    }
    if (pHVar2->field_01E8 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pHVar2->field_01E8);
      pHVar2->field_01E8 = (ccFntTy *)0x0;
    }
    if (pHVar2->field_0218 != (AnonPointee_HelpPanelTy_0218 *)0x0) {
      FreeAndNull(&pHVar2->field_0218);
    }
    if (pHVar2->field_01EC != 0) {
      FreeAndNull((void **)&pHVar2->field_01EC);
    }
    if (pHVar2->field_024C != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pHVar2->field_024C);
    }
    if (pHVar2->field_01DC != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pHVar2->field_01DC);
    }
    if (pHVar2->field_021C != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pHVar2->field_021C);
    }
    PTR_00801690 = (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0xcf,0,errorCode,
                             "%s","HelpPanelTy::DoneHelpPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0xcf);
  return;
}

