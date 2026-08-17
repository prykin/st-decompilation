#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBCapacity

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall CPanelTy::PaintBCapacity(CPanelTy *this)

{
  CPanelTy *pCVar2;
  byte bVar3;
  int iVar4;
  BITMAPINFO *pBVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  InternalExceptionFrame local_58;
  uint local_14;
  CPanelTy *local_10;
  uint local_c;
  uint local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pCVar2 = local_10;
  if (iVar4 == 0) {
    pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02B2,0);
    iVar6 = (pCVar2->field_018C->field_0004 - (pBVar4->bmiHeader).biWidth) / 2;
    pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,
                          -(uint)(DAT_0080874e != '\x01') & 6);
    /* ST_CALLSITE[00501214]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(pCVar2->field_018C,iVar6,0x50,'\x01',(byte *)pBVar4);
    local_8 = local_8 & 0xffffff00;
    if (pCVar2->field_0BB6 != '\0') {
      do {
        pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
        /* ST_CALLSITE[00501252]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut(pCVar2->field_018C,iVar6 + 3 + (local_8 & 0xff) * 4,0x53,'\x01',(byte *)pBVar4);
        bVar3 = (byte)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < (byte)pCVar2->field_0BB6);
    }
    uVar7 = local_8 & 0xff;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((byte)local_8));
    local_14 = uVar7;
    if (uVar7 < (byte)pCVar2->field_0BB7 + uVar7) {
      do {
        pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,5);
        /* ST_CALLSITE[005012AB]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut(pCVar2->field_018C,iVar6 + 3 + uVar7 * 4,0x53,'\x01',(byte *)pBVar4);
        bVar3 = (byte)local_c + 1;
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar3));
        uVar7 = (uint)bVar3;
      } while ((int)uVar7 < (int)((byte)pCVar2->field_0BB7 + local_14));
    }
    uVar7 = local_c & 0xff;
    STPiece<0,1>(local_8) = (byte)local_c;
    local_14 = uVar7;
    if (uVar7 < (byte)pCVar2->field_0BB5 + uVar7) {
      do {
        pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,2);
        /* ST_CALLSITE[00501314]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut(pCVar2->field_018C,iVar6 + 3 + uVar7 * 4,0x53,'\x01',(byte *)pBVar4);
        STPiece<0,1>(local_8) = (byte)local_8 + 1;
        uVar7 = (uint)(byte)local_8;
      } while ((int)uVar7 < (int)((byte)pCVar2->field_0BB5 + local_14));
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x32,0,iVar4,"%s",
                             "CPanelTy::PaintBCapacity");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x32);
  return;
}

