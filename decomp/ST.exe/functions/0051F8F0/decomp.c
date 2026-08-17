#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helpstr.cpp
   HelpStringTy::OutStr

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall HelpStringTy::OutStr(HelpStringTy *this)

{
  ushort *puVar1;
  HelpStringTy *pHVar3;
  int iVar4;
  int iVar6;
  byte *puVar7;
  int iVar5;
  uint uVar9;
  InternalExceptionFrame local_4c;
  HelpStringTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    iVar6 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e;
    FUN_006b5f80((int *)g_ddxContext_008075A8,iVar6,DAT_00806734 + -0x1a,
                 (g_nWidth_00806730 - iVar6) + -0x87,0x12);
    pHVar3 = local_8;
    puVar1 = local_8->field_012A;
    uVar9 = *(uint *)(puVar1 + 10);
    if (uVar9 == 0) {
      uVar9 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar7 = (byte *)FUN_006b4fa0((int *)puVar1);
    memset(puVar7, 0, uVar9); /* compiler bulk-zero initialization */
    if (pHVar3->field_0018 != '\0') {
      ccFntTy::SetSurf(pHVar3->field_011E,(int)pHVar3->field_012A,0,0,0,0,0);
      ccFntTy::WrStr(pHVar3->field_011E,&pHVar3->field_0018,0,-1,(uint)(byte)pHVar3->field_011D);
    }
    /* ST_CALLSITE[0051FA03]: CALL 0x00403738; direct=00403738 PutDDX */
    PutDDX((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e,DAT_00806734 + -0x1a,'\x01',
           (BITMAPINFO *)pHVar3->field_012A);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\helpstr.cpp",0x1b,0,iVar4,"%s",
                             "HelpStringTy::OutStr");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\helpstr.cpp",0x1b);
  return;
}

