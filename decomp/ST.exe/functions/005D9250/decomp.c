#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintExplanation */

void __thiscall SIDTy::PaintExplanation(SIDTy *this)

{
  AnonPointee_SIDTy_1CC0 *pAVar1;
  code *pcVar2;
  SIDTy *pSVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  ccFntTy *this_00;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)local_8->field_1CB8,0,0,0x7d,
                 local_8->field_1CC0->field_0004,local_8->field_1CC0->field_0008,0xff);
    pAVar1 = pSVar3->field_1CC0;
    uVar9 = pAVar1->field_0014;
    if (uVar9 == 0) {
      uVar9 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar1->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(int)pSVar3->field_1CC0,0,0,0,0,0);
    if (pSVar3->field_1A5F == '\0') {
      iVar12 = -1;
      iVar11 = -1;
      uVar9 = 0;
      iVar10 = -1;
      iVar4 = -2;
      puVar7 = (uint *)LoadResourceString(0x2521,HINSTANCE_00807618);
      this_00 = PTR_0081176c->field_0034;
    }
    else {
      puVar5 = &DAT_00807ddd;
      puVar7 = (uint *)&pSVar3->field_1CD4;
      pcVar6 = LoadResourceString(0x2520,HINSTANCE_00807618);
      wsprintfA((LPSTR)puVar7,"&0%s\n&5%s&0?",pcVar6,puVar5);
      this_00 = PTR_0081176c->field_0034;
      iVar12 = -1;
      iVar11 = -1;
      uVar9 = 0;
      iVar10 = -1;
      iVar4 = -2;
    }
    ccFntTy::WrTxt(this_00,puVar7,iVar4,iVar10,uVar9,iVar11,iVar12);
    FUN_006b5440((int)pSVar3->field_1CB8,0,0,0x7d,(int)pSVar3->field_1CC0,0,0xff);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar10 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x17b,0,iVar4,"%s",
                              "SIDTy::PaintExplanation");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\sid_obj.cpp",0x17b);
  return;
}

