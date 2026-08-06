#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::InitFrmPanel */

void __thiscall FrmPanelTy::InitFrmPanel(FrmPanelTy *this)

{
  FrmPanelTyVTable *pFVar1;
  FrmPanelTy *this_00;
  int iVar3;
  LPSTR pCVar3;
  uint uVar4;
  int iVar8;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  UINT UVar12;
  undefined4 uVar13;
  char *pcVar14;
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
    UVar12 = 0x2736;
    iVar11 = 0xc;
    iVar9 = 0xc6;
    uVar6 = 2;
    iVar5 = 0x31;
    g_frmPanel_0080168C = local_8;
    pCVar3 = thunk_FUN_00571240("BKG_FORMATIONW",0);
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar3,iVar5,uVar6,iVar9,iVar11,UVar12,uVar13,uVar15);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = nullptr;
    uVar15 = 0x2774;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xc0af;
    uVar6 = 0xc09f;
    pCVar3 = thunk_FUN_00571240("BUT_FLINE",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x2b,0x19,0,1,1,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = nullptr;
    uVar15 = 0x2775;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xc0b0;
    uVar6 = 0xc0a0;
    this_00->field_01B3[0] = uVar4;
    pCVar3 = thunk_FUN_00571240("BUT_FBENDUP",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x60,0x19,0,1,1,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = nullptr;
    uVar15 = 0x2779;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xc0b1;
    uVar6 = 0xc0a1;
    this_00->field_01B3[1] = uVar4;
    pCVar3 = thunk_FUN_00571240("BUT_FHOLD",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x95,0x19,0,1,1,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = nullptr;
    uVar15 = 0x277a;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xc0b2;
    uVar6 = 0xc0a2;
    this_00->field_01B3[2] = uVar4;
    pCVar3 = thunk_FUN_00571240("BUT_FLOCK",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xca,0x19,0,1,1,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = nullptr;
    uVar15 = 0x2777;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xc0b3;
    uVar6 = 0xc0a3;
    this_00->field_01B3[3] = uVar4;
    pCVar3 = thunk_FUN_00571240("BUT_FWALL",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x2b,0x31,0,1,1,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = nullptr;
    uVar15 = 0x2776;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xc0b4;
    uVar6 = 0xc0a4;
    this_00->field_01B3[4] = uVar4;
    pCVar3 = thunk_FUN_00571240("BUT_FBENDDN",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x60,0x31,0,1,1,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    pFVar1 = this_00->vtable;
    uVar16 = 1;
    pcVar14 = nullptr;
    uVar15 = 0x2778;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xc0b5;
    this_00->field_01B3[5] = uVar4;
    uVar6 = 0xc0a5;
    pCVar3 = thunk_FUN_00571240("BUT_FSQUARE",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x95,0x31,0,1,1,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = nullptr;
    uVar15 = 0x277b;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xc0b6;
    uVar6 = 0xc0a6;
    this_00->field_01B3[6] = uVar4;
    pCVar3 = thunk_FUN_00571240("BUT_FBREAK",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xca,0x31,0,1,1,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = "MSK_FRLFT";
    uVar15 = 0x277c;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xb109;
    uVar6 = 0xb108;
    this_00->field_01B3[7] = uVar4;
    pCVar3 = thunk_FUN_00571240("BUT_FINC",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x2b,0x52,0,1,6,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = "MSK_FRRT";
    uVar15 = 0x277d;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xb10b;
    uVar6 = 0xb10a;
    this_00->field_01D3[0] = uVar4;
    pCVar3 = thunk_FUN_00571240("BUT_FDEC",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x4d,0x52,0,1,6,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = "MSK_FRLFT";
    uVar15 = 0x277e;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xb10d;
    uVar6 = 0xb10c;
    this_00->field_01D3[1] = uVar4;
    pCVar3 = thunk_FUN_00571240("BUT_FRLFT",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xaa,0x52,0,1,6,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    uVar16 = 1;
    pFVar1 = this_00->vtable;
    pcVar14 = "MSK_FRRT";
    uVar15 = 0x277f;
    uVar10 = 0;
    sVar7 = 2;
    uVar13 = 0xb10f;
    uVar6 = 0xb10e;
    this_00->field_01D3[2] = uVar4;
    pCVar3 = thunk_FUN_00571240("BUT_FRRT",0);
    uVar4 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xcc,0x52,0,1,6,pCVar3,uVar6,uVar13,sVar7,uVar10,
                       uVar15,pcVar14,uVar16);
    this_00->field_01D3[3] = uVar4;
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

