#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::Clear */

void __thiscall PopUpTy::Clear(PopUpTy *this)

{
  ushort *puVar1;
  code *pcVar2;
  PopUpTy *pPVar3;
  int iVar4;
  DArrayTy *pDVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  InternalExceptionFrame local_4c;
  PopUpTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_009C != '\0') {
      if ((AnonShape_006B5570_4D68B99C *)local_8->field_0098 != (AnonShape_006B5570_4D68B99C *)0x0)
      {
        FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_8->field_0098);
      }
      pDVar5 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
      pPVar3->field_0098 = &pDVar5->flags;
      puVar1 = pPVar3->field_0090;
      uVar9 = *(uint *)(puVar1 + 10);
      if (uVar9 == 0) {
        uVar9 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
      }
      puVar6 = (undefined4 *)FUN_006b4fa0((int)puVar1);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0x89898989;
        puVar6 = puVar6 + 1;
      }
      puVar10 = &pPVar3->field_0018;
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = 0x89;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      iVar4 = 0xf;
      do {
        puVar10[0xf] = 0;
        FUN_006b2800((int)PTR_008075a8,*puVar10,0,0x13);
        FUN_006b3af0((int *)PTR_008075a8,*puVar10);
        puVar10 = puVar10 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pPVar3->field_009C = 0;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0xa8,0,iVar4,"%s",
                             "PopUpTy::Clear");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\mpopup.cpp",0xa8);
  return;
}

