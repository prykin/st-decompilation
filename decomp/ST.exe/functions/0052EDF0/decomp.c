#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PaintVolume */

void __thiscall OptPanelTy::PaintVolume(OptPanelTy *this,byte param_1,byte param_2)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  uint3 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
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
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar3 = local_8._1_3_;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (uint)local_8._1_3_ << 8;
    if (param_2 != 0) {
      local_c = local_14 + (uint)param_1 * 0xd + 0x5f;
      iVar4 = 0x80;
      local_10 = (uint)param_2;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(uVar3,param_2);
      do {
        pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pOVar2->field_0198,6);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pOVar2->field_0068,iVar4,local_c,'\x01',pbVar5);
        iVar4 = iVar4 + 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
    if ((byte)local_8 < 0x1e) {
      local_c = local_14 + (uint)param_1 * 0xd + 0x5f;
      iVar6 = 0x1e - (local_8 & 0xff);
      iVar4 = (local_8 & 0xff) * 4 + 0x80;
      do {
        pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pOVar2->field_0198,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pOVar2->field_0068,iVar4,local_c,'\x01',pbVar5);
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0xac,0,iVar4,&DAT_007a4ccc,
                             s_OptPanelTy__PaintVolume_007c7198);
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0xac);
  return;
}

