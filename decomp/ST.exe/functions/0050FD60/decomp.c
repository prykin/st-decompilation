#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::InitFrmPanel */

void __thiscall FrmPanelTy::InitFrmPanel(FrmPanelTy *this)

{
  AnonPointee_FrmPanelTy_0000 *pAVar1;
  code *pcVar2;
  FrmPanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  UINT UVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  InternalExceptionFrame local_4c;
  FrmPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    uVar15 = 0x77;
    uVar13 = 0xc9;
    UVar11 = 0x2736;
    iVar9 = 0xc;
    iVar8 = 0xc6;
    uVar7 = 2;
    iVar3 = 0x31;
    g_frmPanel_0080168C = local_8;
    pCVar4 = thunk_FUN_00571240("BKG_FORMATIONW",0);
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar4,iVar3,uVar7,iVar8,iVar9,UVar11,uVar13,uVar15);
    uVar16 = 1;
    pAVar1 = this_00->field_0000;
    uVar14 = 0;
    uVar12 = 0x2774;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xc0af;
    uVar7 = 0xc09f;
    pCVar4 = thunk_FUN_00571240("BUT_FLINE",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0x2b,0x19,0,1,1,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,uVar14,uVar16);
    uVar16 = 1;
    pAVar1 = this_00->field_0000;
    uVar14 = 0;
    uVar12 = 0x2775;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xc0b0;
    uVar7 = 0xc0a0;
    this_00->field_01B3[0] = uVar5;
    pCVar4 = thunk_FUN_00571240("BUT_FBENDUP",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0x60,0x19,0,1,1,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,uVar14,uVar16);
    uVar16 = 1;
    pAVar1 = this_00->field_0000;
    uVar14 = 0;
    uVar12 = 0x2779;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xc0b1;
    uVar7 = 0xc0a1;
    this_00->field_01B3[1] = uVar5;
    pCVar4 = thunk_FUN_00571240("BUT_FHOLD",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0x95,0x19,0,1,1,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,uVar14,uVar16);
    uVar16 = 1;
    pAVar1 = this_00->field_0000;
    uVar14 = 0;
    uVar12 = 0x277a;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xc0b2;
    uVar7 = 0xc0a2;
    this_00->field_01B3[2] = uVar5;
    pCVar4 = thunk_FUN_00571240("BUT_FLOCK",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0xca,0x19,0,1,1,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,uVar14,uVar16);
    uVar16 = 1;
    pAVar1 = this_00->field_0000;
    uVar14 = 0;
    uVar12 = 0x2777;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xc0b3;
    uVar7 = 0xc0a3;
    this_00->field_01B3[3] = uVar5;
    pCVar4 = thunk_FUN_00571240("BUT_FWALL",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0x2b,0x31,0,1,1,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,uVar14,uVar16);
    uVar16 = 1;
    pAVar1 = this_00->field_0000;
    uVar14 = 0;
    uVar12 = 0x2776;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xc0b4;
    uVar7 = 0xc0a4;
    this_00->field_01B3[4] = uVar5;
    pCVar4 = thunk_FUN_00571240("BUT_FBENDDN",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0x60,0x31,0,1,1,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,uVar14,uVar16);
    pAVar1 = this_00->field_0000;
    uVar16 = 1;
    uVar14 = 0;
    uVar12 = 0x2778;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xc0b5;
    this_00->field_01B3[5] = uVar5;
    uVar7 = 0xc0a5;
    pCVar4 = thunk_FUN_00571240("BUT_FSQUARE",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0x95,0x31,0,1,1,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,uVar14,uVar16);
    uVar16 = 1;
    pAVar1 = this_00->field_0000;
    uVar14 = 0;
    uVar12 = 0x277b;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xc0b6;
    uVar7 = 0xc0a6;
    this_00->field_01B3[6] = uVar5;
    pCVar4 = thunk_FUN_00571240("BUT_FBREAK",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0xca,0x31,0,1,1,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,uVar14,uVar16);
    uVar14 = 1;
    pAVar1 = this_00->field_0000;
    pcVar6 = "MSK_FRLFT";
    uVar12 = 0x277c;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xb109;
    uVar7 = 0xb108;
    this_00->field_01B3[7] = uVar5;
    pCVar4 = thunk_FUN_00571240("BUT_FINC",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0x2b,0x52,0,1,6,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,pcVar6,uVar14);
    uVar14 = 1;
    pAVar1 = this_00->field_0000;
    pcVar6 = "MSK_FRRT";
    uVar12 = 0x277d;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xb10b;
    uVar7 = 0xb10a;
    this_00->field_01D3[0] = uVar5;
    pCVar4 = thunk_FUN_00571240("BUT_FDEC",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0x4d,0x52,0,1,6,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,pcVar6,uVar14);
    uVar14 = 1;
    pAVar1 = this_00->field_0000;
    pcVar6 = "MSK_FRLFT";
    uVar12 = 0x277e;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xb10d;
    uVar7 = 0xb10c;
    this_00->field_01D3[1] = uVar5;
    pCVar4 = thunk_FUN_00571240("BUT_FRLFT",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0xaa,0x52,0,1,6,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,pcVar6,uVar14);
    uVar14 = 1;
    pAVar1 = this_00->field_0000;
    pcVar6 = "MSK_FRRT";
    uVar12 = 0x277f;
    uVar10 = 0;
    uVar15 = 2;
    uVar13 = 0xb10f;
    uVar7 = 0xb10e;
    this_00->field_01D3[2] = uVar5;
    pCVar4 = thunk_FUN_00571240("BUT_FRRT",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (*(code *)pAVar1->field_0004)
                      (0,1,0xcc,0x52,0,1,6,pCVar4,uVar7,uVar13,uVar15,uVar10,uVar12,pcVar6,uVar14);
    this_00->field_01D3[3] = uVar5;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\frmpanel.cpp",0x43,0,iVar3,"%s",
                             "FrmPanelTy::InitFrmPanel");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0x43);
  return;
}

