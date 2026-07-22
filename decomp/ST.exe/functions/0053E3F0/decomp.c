#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::InitPanel

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0053CEF0 -> 0053E3F0 @ 0053CF4C */

void __thiscall
SpecPanelTy::InitPanel
          (SpecPanelTy *this,char *text,int param_2,uint param_3,int param_4,int param_5,
          UINT param_6,undefined4 param_7,undefined4 param_8)

{
  AnonPointee_SpecPanelTy_0000 *pAVar1;
  code *pcVar2;
  SpecPanelTy *pSVar3;
  int iVar4;
  ushort *puVar5;
  ccFntTy *pcVar6;
  undefined4 *puVar7;
  uint *resourceString;
  LPSTR pCVar8;
  ccFntTy *this_00;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    local_8->field_003C = local_8->field_003C + (g_nWidth_00806730 + -800) / 2;
    puVar5 = cMf32::RecGet(DAT_00806790,1,text,(int *)0x0,1);
    pSVar3->field_0185 = puVar5;
    pcVar6 = (ccFntTy *)ccFntTy::operator(this_00,0x19d,*(int *)&PTR_00802a28->field_0x28);
    pSVar3->field_0189 = pcVar6;
    pcVar6->field_0058 = 0;
    pcVar6->field_005C = 0;
    puVar5 = pSVar3->field_0068;
    uVar10 = *(uint *)(puVar5 + 10);
    if (uVar10 == 0) {
      uVar10 = ((uint)puVar5[7] * *(int *)(puVar5 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar5 + 4);
    }
    puVar7 = (undefined4 *)FUN_006b4fa0((int)puVar5);
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pSVar3->field_0068,0,0,'\x01',(byte *)pSVar3->field_0185);
    ccFntTy::SetSurf(pSVar3->field_0189,(int)pSVar3->field_0068,0,param_2,param_3,param_4,param_5);
    uVar17 = 0;
    iVar15 = -1;
    iVar4 = -2;
    resourceString = (uint *)LoadResourceString(param_6,g_module_00807618);
    ccFntTy::WrStr(pSVar3->field_0189,resourceString,iVar4,iVar15,uVar17);
    uVar18 = 1;
    pAVar1 = pSVar3->field_0000;
    uVar16 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0xc000;
    uVar17 = 0xbfff;
    pCVar8 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar17 = (*(code *)pAVar1->field_0004)
                       (0,1,param_7,param_8,0,1,1,pCVar8,uVar17,uVar11,uVar12,uVar13,uVar14,uVar16,
                        uVar18);
    pSVar3->field_017C = uVar17;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar15 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0xeb,0,iVar4,"%s",
                              "SpecPanelTy::InitPanel");
  if (iVar15 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\specpan.cpp",0xeb);
  return;
}

