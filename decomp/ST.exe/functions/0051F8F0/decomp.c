#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helpstr.cpp
   HelpStringTy::OutStr */

void __thiscall HelpStringTy::OutStr(HelpStringTy *this)

{
  AnonPointee_HelpStringTy_012A *pAVar1;
  code *pcVar2;
  HelpStringTy *pHVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  HelpStringTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    iVar4 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e;
    FUN_006b5f80(DAT_008075a8,iVar4,DAT_00806734 + -0x1a,(g_nWidth_00806730 - iVar4) + -0x87,0x12);
    pHVar3 = local_8;
    pAVar1 = local_8->field_012A;
    uVar8 = pAVar1->field_0014;
    if (uVar8 == 0) {
      uVar8 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar1->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    if (pHVar3->field_0018 != '\0') {
      ccFntTy::SetSurf(pHVar3->field_011E,(int)pHVar3->field_012A,0,0,0,0,0);
      ccFntTy::WrStr(pHVar3->field_011E,(uint *)&pHVar3->field_0018,0,-1,
                     (uint)(byte)pHVar3->field_011D);
    }
    PutDDX((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e,DAT_00806734 + -0x1a,'\x01',
           (BITMAPINFO *)pHVar3->field_012A);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_helpstr_cpp_007c3e4c,0x1b,0,iVar4,&DAT_007a4ccc,
                             s_HelpStringTy__OutStr_007c3e74);
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_helpstr_cpp_007c3e4c,0x1b);
  return;
}

