#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::DeleteCtrls */

void __thiscall PrividerTy::DeleteCtrls(PrividerTy *this,char param_1)

{
  ushort *puVar1;
  PrividerTy *pPVar3;
  int iVar4;
  HoloTy *pHVar4;
  int iVar5;
  uint uVar11;
  byte *puVar6;
  uint local_EAX_845;
  int iVar8;
  uint *puVar7;
  int iVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
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
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  pPVar3 = local_c;
  if (param_1 != '\0') {
    if (local_c->field_1A73 != 0) {
      StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_1A73);
    }
    pPVar3->field_1A73 = 0;
    pPVar3->field_1A61 = 0;
    FUN_006b5f80((int *)g_ddxContext_008075A8,0x79,0x51,0x22e,0x145);
    if (pPVar3->field_1C96 != nullptr) {
      HoloTy::Done(pPVar3->field_1C96);
      Library::MSVCRT::FUN_0072e2b0(pPVar3->field_1C96);
      pPVar3->field_1C96 = nullptr;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pPVar3->field_1C96 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar12 = 0;
      cVar11 = '\x01';
      bVar10 = 0x10;
      iVar9 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x79,0x51,0x22e,0x145);
      uVar11 = HoloTy::Init(pPVar3->field_1C96,CASE_2,0x79,0x51,iVar5,iVar9,bVar10,cVar11,uVar12);
      if (uVar11 != 0) {
        pHVar4 = pPVar3->field_1C96;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar12 = *(uint *)&pPVar3->field_1C96->field_0x3;
        if (-1 < (int)uVar12) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar12);
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
    puVar7 = pPVar3->field_1C2A;
    local_8 = 0x16;
    do {
      FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar7);
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
  puVar6 = (byte *)FUN_006b4fa0((int *)puVar1);
  memset(puVar6, 0, local_8); /* compiler bulk-zero initialization */
  if (pPVar3->field_1C86 != 0) {
    StartSystemTy::sub_006E56B0(pPVar3->field_000C,pPVar3->field_1C86);
    pPVar3->field_1C86 = 0;
    FUN_006b5f80((int *)g_ddxContext_008075A8,0x79,0x197,0x22e,0x2e);
    if (pPVar3->field_1C9A != nullptr) {
      HoloTy::Done(pPVar3->field_1C9A);
      Library::MSVCRT::FUN_0072e2b0(pPVar3->field_1C9A);
      pPVar3->field_1C9A = nullptr;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pPVar3->field_1C9A = pHVar4;
    if (pHVar4 != nullptr) {
      uVar12 = 0;
      cVar11 = '\x01';
      bVar10 = 0x10;
      iVar9 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x79,0x197,0x22e,0x2e);
      local_EAX_845 =
           HoloTy::Init(pPVar3->field_1C9A,CASE_1,0x79,0x197,iVar5,iVar9,bVar10,cVar11,uVar12);
      if (local_EAX_845 != 0) {
        pHVar4 = pPVar3->field_1C9A;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar12 = *(uint *)&pPVar3->field_1C9A->field_0x3;
        if (-1 < (int)uVar12) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar12);
        }
        HoloTy::NextFas(pPVar3->field_1C9A);
      }
    }
    PutDDXClip(0x79,0x197,0x79,0x197,0x22e,(byte *)0x2e,'\x01',
               (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    FUN_006b3af0((int *)g_ddxContext_008075A8,pPVar3->field_1C8A);
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

