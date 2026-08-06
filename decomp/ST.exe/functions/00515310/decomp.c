#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawTitle

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __thiscall HelpPanelTy::DrawTitle(HelpPanelTy *this,UINT param_1,int param_2,UINT param_3)

{
  char cVar1;
  AnonPointee_HelpPanelTy_0218 *pAVar2;
  HelpPanelTy *pHVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7_mg0;
  char *pcVar7_mg1;
  char *pcVar7_mg2;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  UINT resourceId;
  char *pcVar11;
  int iVar12;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;

  local_8 = 0x16;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pHVar4 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x3d3,0,iVar5,
                                "%s","HelpPanelTy::DrawTitle");
    if (iVar12 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\helppan.cpp",0x3d3);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_019C != 0) {
    StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_019C);
  }
  pHVar4->field_01D7->count = 0;
  pHVar4->field_01DB = 0;
  Library::DKW::WGR::FUN_006b55f0
            ((RecoveredSourceFamily_dibcopy *)pHVar4->field_0068,0,0x21,0x16,
             (byte *)pHVar4->field_01DC,0,0x21,0x16,0x1b8,0x118);
  uVar9 = local_8;
  ccFntTy::SetSurf(pHVar4->field_01E4,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0x14);
  if (DAT_0080874e == '\x03') {
    uVar6 = 5;
  }
  else {
    uVar6 = (-(uint)(DAT_0080874e != '\x01') & 6) + 1;
  }
  iVar12 = -1;
  iVar5 = -1;
  pcVar7_mg0 = LoadResourceString(param_1,g_hINSTANCE_00807618);
  ccFntTy::WrStr(pHVar4->field_01E4,pcVar7_mg0,iVar5,iVar12,uVar6);
  local_8 = uVar9 + 0x14;
  if (param_2 != 0) {
    if (param_2 == 1) {
      resourceId = 0x5604;
    }
    else if (param_2 == 2) {
      resourceId = 0x5605;
    }
    else {
      resourceId = 0x5606;
    }
    ccFntTy::SetSurf(pHVar4->field_01E0,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0xf);
    uVar6 = 3;
    iVar12 = -1;
    iVar5 = -1;
    pcVar7_mg1 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
    ccFntTy::WrStr(pHVar4->field_01E0,pcVar7_mg1,iVar5,iVar12,uVar6);
    local_8 = uVar9 + 0x23;
  }
  if (param_3 != 0) {
    ccFntTy::SetSurf(pHVar4->field_01E0,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0xf);
    pcVar7_mg2 = LoadResourceString(param_3,g_hINSTANCE_00807618);
    uVar9 = 0xffffffff;
    do {
      pcVar10 = pcVar7_mg2;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar7_mg2 + 1;
      cVar1 = *pcVar7_mg2;
      pcVar7_mg2 = pcVar10;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar10 = pcVar10 + -uVar9;
    pcVar11 = (char *)&DAT_0080f33a;
    memmove(pcVar11, pcVar10, uVar9); /* compiler REP MOVS byte copy */
    uVar6 = 0;
    for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
        puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
      *(undefined1 *)puVar7 = 0x20;
    }
    ccFntTy::WrStr(pHVar4->field_01E0,(char *)&DAT_0080f33a,-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
    local_8 = local_8 + 0xf;
  }
  pAVar2 = pHVar4->field_0218;
  uVar9 = pAVar2->field_0014;
  if (uVar9 == 0) {
    uVar9 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            pAVar2->field_0008;
  }
  puVar8 = (undefined4 *)FUN_006b4fa0((int *)pAVar2);
  for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar8 = 0xff;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

