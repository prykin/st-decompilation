#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PaintVolume */

void __thiscall OptPanelTy::PaintVolume(OptPanelTy *this,byte param_1,byte param_2)

{
  OptPanelTy *pOVar2;
  uint3 uVar3;
  int iVar4;
  BITMAPINFO *pBVar4;
  int iVar6;
  int iVar5;
  int iVar7;
  InternalExceptionFrame local_5c;
  OptPanelTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;

  local_14 = (-(uint)(param_1 != 0) & 0xfffffffc) + 4;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pOVar2 = local_18;
  if (iVar4 == 0) {
    uVar3 = STPiece<1,3>(local_8);
    local_8 = (uint)STPiece<1,3>(local_8) << 8;
    if (param_2 != 0) {
      local_c = local_14 + (uint)param_1 * 0xd + 0x5f;
      iVar5 = 0x80;
      local_10 = (uint)param_2;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(uVar3,param_2);
      do {
        pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pOVar2->field_0198,6);
        /* ST_CALLSITE[0052EE87]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pOVar2->field_0068,iVar5,local_c,'\x01',
               (byte *)pBVar4);
        iVar5 = iVar5 + 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
    if ((byte)local_8 < 0x1e) {
      local_c = local_14 + (uint)param_1 * 0xd + 0x5f;
      iVar7 = 0x1e - (local_8 & 0xff);
      iVar5 = (local_8 & 0xff) * 4 + 0x80;
      do {
        pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pOVar2->field_0198,0);
        /* ST_CALLSITE[0052EEE8]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pOVar2->field_0068,iVar5,local_c,'\x01',
               (byte *)pBVar4);
        iVar5 = iVar5 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0xac,0,iVar4,"%s",
                             "OptPanelTy::PaintVolume");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\optpanel.cpp",0xac);
  return;
}

