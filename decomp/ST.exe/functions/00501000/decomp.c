#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBEnergy

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall CPanelTy::PaintBEnergy(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar3;
  int iVar4;
  byte bVar4;
  int iVar5;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_c->field_02B2,0);
    iVar5 = (pCVar2->field_018C->field_0004 - (pBVar3->bmiHeader).biWidth) / 2;
    pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,
                          -(uint)(DAT_0080874e != '\x01') & 6);
    DibPut(pCVar2->field_018C,iVar5,0x50,'\x01',(byte *)pBVar3);
    if (pCVar2->field_0BCD != 0xff) {
      if (0x28 < (byte)pCVar2->field_0BCD) {
        pCVar2->field_0BCD = 0x28;
      }
      bVar4 = 0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2->field_0BCD != '\0') {
        do {
          pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,3);
          DibPut(pCVar2->field_018C,iVar5 + 3 + (local_8 & 0xff) * 4,0x53,'\x01',(byte *)pBVar3);
          bVar4 = bVar4 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
        } while (bVar4 < (byte)pCVar2->field_0BCD);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x21,0,iVar3,"%s",
                             "CPanelTy::PaintBEnergy");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x21);
  return;
}

