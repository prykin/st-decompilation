#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintEnergy */

void __thiscall CPanelTy::PaintEnergy(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  uint local_c;
  uint local_8;

  if (param_1 == 0) {
    local_8 = this->field_0194;
    bVar6 = this->field_0C6D;
  }
  else {
    local_8 = this->field_018C;
    bVar6 = this->field_0B7F;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_c = CONCAT31(local_c._1_3_,bVar6);
  if (bVar6 < 0x65) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pCVar2 = local_10;
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_54.previous;
      iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x4a,0,iVar3,
                                 "%s","CPanelTy::PaintEnergy");
      if (iVar4 == 0) {
        RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x4a);
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (param_1 == 0) {
      iVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02DA,2);
      uVar5 = local_8;
      FUN_006b5440(local_8,0,199,6,iVar3,0,0xff);
      iVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02DA,3);
      iVar3 = (int)((local_c & 0xff) * *(int *)(iVar4 + 8)) / 100;
      iVar7 = *(int *)(iVar4 + 8) - iVar3;
      Library::DKW::WGR::FUN_006b5110
                (uVar5,0,199,iVar7 + 6,iVar4,0,0,iVar7,*(int *)(iVar4 + 4),iVar3,0xff);
      uVar5 = pCVar2->field_015C;
      if ((int)uVar5 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar9 = pCVar2->field_00A8;
      uVar8 = pCVar2->field_0050;
    }
    else {
      iVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02DA,0);
      uVar5 = local_8;
      FUN_006b5440(local_8,0,2,6,iVar3,0,0xff);
      iVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02DA,1);
      iVar3 = (int)((local_c & 0xff) * *(int *)(iVar4 + 8)) / 100;
      iVar7 = *(int *)(iVar4 + 8) - iVar3;
      Library::DKW::WGR::FUN_006b5110
                (uVar5,0,2,iVar7 + 6,iVar4,0,0,iVar7,*(int *)(iVar4 + 4),iVar3,0xff);
      uVar5 = pCVar2->field_0154;
      if ((int)uVar5 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar9 = pCVar2->field_00A0;
      uVar8 = pCVar2->field_0048;
    }
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,uVar5,0xffffffff,uVar8,uVar9);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  return;
}

