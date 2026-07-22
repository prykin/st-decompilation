#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintExplanation */

void __thiscall SIDTy::PaintExplanation(SIDTy *this)

{
  ushort *puVar1;
  code *pcVar2;
  SIDTy *pSVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint *resourceString;
  uint uVar7;
  ccFntTy *this_00;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)local_8->field_1CB8,0,0,0x7d,
                 *(int *)(local_8->field_1CC0 + 2),*(int *)(local_8->field_1CC0 + 4),0xff);
    puVar1 = pSVar3->field_1CC0;
    uVar8 = *(uint *)(puVar1 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)puVar1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)pSVar3->field_1CC0,0,0,0,0,0);
    if (pSVar3->field_1A5F == '\0') {
      iVar11 = -1;
      iVar10 = -1;
      uVar8 = 0;
      iVar9 = -1;
      iVar4 = -2;
      resourceString = (uint *)LoadResourceString(0x2521,g_module_00807618);
      this_00 = g_startSystem_0081176C->field_0034;
    }
    else {
      puVar5 = &DAT_00807ddd;
      resourceString = (uint *)&pSVar3->field_1CD4;
      pcVar6 = LoadResourceString(0x2520,g_module_00807618);
      wsprintfA((LPSTR)resourceString,"&0%s\n&5%s&0?",pcVar6,puVar5);
      this_00 = g_startSystem_0081176C->field_0034;
      iVar11 = -1;
      iVar10 = -1;
      uVar8 = 0;
      iVar9 = -1;
      iVar4 = -2;
    }
    ccFntTy::WrTxt(this_00,resourceString,iVar4,iVar9,uVar8,iVar10,iVar11);
    FUN_006b5440((int)pSVar3->field_1CB8,0,0,0x7d,(uint)pSVar3->field_1CC0,0,0xff);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x17b,0,iVar4,"%s",
                             "SIDTy::PaintExplanation");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\sid_obj.cpp",0x17b);
  return;
}

