#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::Clear */

void __thiscall PopUpTy::Clear(PopUpTy *this)

{
  ushort *puVar1;
  PopUpTy *pPVar3;
  int iVar4;
  DArrayTy *pDVar4;
  undefined4 *puVar5;
  int iVar9;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar10;
  InternalExceptionFrame local_4c;
  PopUpTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_009C != '\0') {
      if ((DArrayTy *)local_8->field_0098 != nullptr) {
        FUN_006b5570((DArrayTy *)local_8->field_0098);
      }
      pDVar4 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
      pPVar3->field_0098 = &pDVar4->flags;
      puVar1 = pPVar3->field_0090;
      uVar7 = *(uint *)(puVar1 + 10);
      if (uVar7 == 0) {
        uVar7 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0((int *)puVar1);
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar5 = 0x89898989;
        puVar5 = puVar5 + 1;
      }
      puVar8 = pPVar3->field_0018;
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar5 = 0x89;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      iVar10 = 0xf;
      do {
        puVar8[0xf] = 0;
        FUN_006b2800(g_ddxContext_008075A8,*puVar8,0,0x13);
        FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar8);
        puVar8 = puVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      pPVar3->field_009C = 0;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0xa8,0,iVar4,"%s",
                             "PopUpTy::Clear");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\mpopup.cpp",0xa8);
  return;
}

