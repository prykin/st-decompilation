#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::Clear */

void __thiscall PopUpTy::Clear(PopUpTy *this)

{
  AnonPointee_PopUpTy_0090 *pAVar1;
  code *pcVar2;
  PopUpTy *pPVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
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
      puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
      pPVar3->field_0098 = puVar5;
      pAVar1 = pPVar3->field_0090;
      uVar9 = pAVar1->field_0014;
      if (uVar9 == 0) {
        uVar9 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                pAVar1->field_0008;
      }
      puVar6 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0x89898989;
        puVar6 = puVar6 + 1;
      }
      puVar5 = &pPVar3->field_0018;
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = 0x89;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      iVar4 = 0xf;
      do {
        puVar5[0xf] = 0;
        FUN_006b2800((int)DAT_008075a8,*puVar5,0,0x13);
        FUN_006b3af0(DAT_008075a8,*puVar5);
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pPVar3->field_009C = 0;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0xa8,0,iVar4,&DAT_007a4ccc,
                             s_PopUpTy__Clear_007c702c);
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0xa8);
  return;
}

