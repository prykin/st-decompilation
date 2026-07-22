#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::DeleteCtrls */

void __thiscall PrividerTy::DeleteCtrls(PrividerTy *this,char param_1)

{
  ushort *puVar1;
  code *pcVar2;
  PrividerTy *pPVar3;
  int iVar4;
  HoloTy *pHVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  InternalExceptionFrame local_50;
  PrividerTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x279,0,iVar4,"%s"
                               ,"PrividerTy::DeleteCtrls");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\prov_obj.cpp",0x279);
    return;
  }
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                   (uint)g_cursorClass_00802A30->field_001C);
    }
  }
  pPVar3 = local_c;
  if (param_1 != '\0') {
    if (local_c->field_1A73 != 0) {
      StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_1A73);
    }
    pPVar3->field_1A73 = 0;
    pPVar3->field_1A61 = 0;
    FUN_006b5f80((int *)PTR_008075a8,0x79,0x51,0x22e,0x145);
    if (pPVar3->field_1C96 != (HoloTy *)0x0) {
      HoloTy::Done(pPVar3->field_1C96);
      Library::MSVCRT::FUN_0072e2b0(pPVar3->field_1C96);
      pPVar3->field_1C96 = (HoloTy *)0x0;
    }
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == (HoloTy *)0x0) {
      pHVar5 = (HoloTy *)0x0;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      pHVar5->field_0003 = -1;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = 0;
      pHVar5->field_000B = (void *)0x0;
      *(undefined4 *)&pHVar5->field_0xf = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    pPVar3->field_1C96 = pHVar5;
    if (pHVar5 != (HoloTy *)0x0) {
      uVar11 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar8 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x79,0x51,0x22e,0x145);
      uVar9 = HoloTy::Init(pPVar3->field_1C96,CASE_2,0x79,0x51,iVar4,iVar8,uVar9,cVar10,uVar11);
      if (uVar9 != 0) {
        pHVar5 = pPVar3->field_1C96;
        pHVar5->field_0002 = 0;
        pHVar5->field_0017 = -1;
        uVar9 = pPVar3->field_1C96->field_0003;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar9);
        }
        HoloTy::NextFas(pPVar3->field_1C96);
      }
      PutDDXClip(0x79,0x51,0x79,0x51,0x22e,(byte *)0x145,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    if (pPVar3->field_1A7B != 0xffffffff) {
      FUN_006b3af0((int *)pPVar3->field_1ABF,pPVar3->field_1A7B);
    }
    if (pPVar3->field_1B0C != 0xffffffff) {
      FUN_006b3af0((int *)pPVar3->field_1B50,pPVar3->field_1B0C);
    }
    if (pPVar3->field_1B9D != 0xffffffff) {
      FUN_006b3af0((int *)pPVar3->field_1BE1,pPVar3->field_1B9D);
    }
    puVar7 = &pPVar3->field_1C2A;
    local_8 = 0x16;
    do {
      FUN_006b3af0((int *)PTR_008075a8,*puVar7);
      puVar7 = puVar7 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  puVar1 = pPVar3->field_1C82;
  local_8 = *(uint *)(puVar1 + 10);
  if (local_8 == 0) {
    local_8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
  }
  puVar6 = (undefined4 *)FUN_006b4fa0((int)puVar1);
  for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if (pPVar3->field_1C86 != 0) {
    StartSystemTy::sub_006E56B0(pPVar3->field_000C,pPVar3->field_1C86);
    pPVar3->field_1C86 = 0;
    FUN_006b5f80((int *)PTR_008075a8,0x79,0x197,0x22e,0x2e);
    if (pPVar3->field_1C9A != (HoloTy *)0x0) {
      HoloTy::Done(pPVar3->field_1C9A);
      Library::MSVCRT::FUN_0072e2b0(pPVar3->field_1C9A);
      pPVar3->field_1C9A = (HoloTy *)0x0;
    }
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == (HoloTy *)0x0) {
      pHVar5 = (HoloTy *)0x0;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      pHVar5->field_0003 = -1;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = 0;
      pHVar5->field_000B = (void *)0x0;
      *(undefined4 *)&pHVar5->field_0xf = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    pPVar3->field_1C9A = pHVar5;
    if (pHVar5 != (HoloTy *)0x0) {
      uVar11 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar8 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x79,0x197,0x22e,0x2e);
      uVar9 = HoloTy::Init(pPVar3->field_1C9A,CASE_1,0x79,0x197,iVar4,iVar8,uVar9,cVar10,uVar11);
      if (uVar9 != 0) {
        pHVar5 = pPVar3->field_1C9A;
        pHVar5->field_0002 = 0;
        pHVar5->field_0017 = -1;
        uVar9 = pPVar3->field_1C9A->field_0003;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar9);
        }
        HoloTy::NextFas(pPVar3->field_1C9A);
      }
    }
    PutDDXClip(0x79,0x197,0x79,0x197,0x22e,(byte *)0x2e,'\x01',
               (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    FUN_006b3af0((int *)PTR_008075a8,pPVar3->field_1C8A);
  }
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_cursorClass_00802A30->field_0060,(uint)g_cursorClass_00802A30->field_001C
                 ,0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

