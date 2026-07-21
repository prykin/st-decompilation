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
  AnonPointee_SpecPanelTy_0068 *pAVar1;
  AnonPointee_SpecPanelTy_0000 *pAVar2;
  code *pcVar3;
  SpecPanelTy *pSVar4;
  int iVar5;
  ushort *puVar6;
  ccFntTy *pcVar7;
  undefined4 *puVar8;
  uint *puVar9;
  LPSTR pCVar10;
  ccFntTy *this_00;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar4 = local_8;
  if (iVar5 == 0) {
    local_8->field_003C = local_8->field_003C + (g_nWidth_00806730 + -800) / 2;
    puVar6 = cMf32::RecGet(DAT_00806790,1,text,(int *)0x0,1);
    pSVar4->field_0185 = puVar6;
    pcVar7 = (ccFntTy *)ccFntTy::operator(this_00,0x19d,*(int *)&PTR_00802a28->field_0x28);
    pSVar4->field_0189 = pcVar7;
    pcVar7->field_0058 = 0;
    pcVar7->field_005C = 0;
    pAVar1 = pSVar4->field_0068;
    uVar12 = pAVar1->field_0014;
    if (uVar12 == 0) {
      uVar12 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pAVar1->field_0008;
    }
    puVar8 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
    for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pSVar4->field_0068,0,0,'\x01',(byte *)pSVar4->field_0185);
    ccFntTy::SetSurf(pSVar4->field_0189,(int)pSVar4->field_0068,0,param_2,param_3,param_4,param_5);
    uVar19 = 0;
    iVar17 = -1;
    iVar5 = -2;
    puVar9 = (uint *)LoadResourceString(param_6,HINSTANCE_00807618);
    ccFntTy::WrStr(pSVar4->field_0189,puVar9,iVar5,iVar17,uVar19);
    uVar20 = 1;
    pAVar2 = pSVar4->field_0000;
    uVar18 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0xc000;
    uVar19 = 0xbfff;
    pCVar10 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar19 = (*(code *)pAVar2->field_0004)
                       (0,1,param_7,param_8,0,1,1,pCVar10,uVar19,uVar13,uVar14,uVar15,uVar16,uVar18,
                        uVar20);
    pSVar4->field_017C = uVar19;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0xeb,0,iVar5,"%s",
                              "SpecPanelTy::InitPanel");
  if (iVar17 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\specpan.cpp",0xeb);
  return;
}

