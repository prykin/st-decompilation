#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBEnergy

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall CPanelTy::PaintBEnergy(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    iVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_c->field_02B2,0);
    iVar3 = (pCVar2->field_018C->field_0004 - *(int *)(iVar3 + 4)) / 2;
    pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,
                                  -(uint)(DAT_0080874e != '\x01') & 6);
    DibPut(pCVar2->field_018C,iVar3,0x50,'\x01',pbVar4);
    if (pCVar2->field_0BCD != 0xff) {
      if (0x28 < (byte)pCVar2->field_0BCD) {
        pCVar2->field_0BCD = 0x28;
      }
      bVar6 = 0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2->field_0BCD != '\0') {
        do {
          pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,3);
          DibPut(pCVar2->field_018C,iVar3 + 3 + (local_8 & 0xff) * 4,0x53,'\x01',pbVar4);
          bVar6 = bVar6 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar6);
        } while (bVar6 < (byte)pCVar2->field_0BCD);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x21,0,iVar3,"%s",
                             "CPanelTy::PaintBEnergy");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x21);
  return;
}

