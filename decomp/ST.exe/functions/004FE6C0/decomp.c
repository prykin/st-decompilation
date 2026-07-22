#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintEnergy */

void __thiscall CPanelTy::PaintEnergy(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  uint local_c;
  uint local_8;

  if (param_1 == 0) {
    local_8 = this->field_0194;
    bVar7 = this->field_0C6D;
  }
  else {
    local_8 = this->field_018C;
    bVar7 = this->field_0B7F;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_c = CONCAT31(local_c._1_3_,bVar7);
  if (bVar7 < 0x65) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pCVar2 = local_10;
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_54.previous;
      iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x4a,0,iVar3,
                                 "%s","CPanelTy::PaintEnergy");
      if (iVar5 == 0) {
        RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x4a);
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (param_1 == 0) {
      uVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02DA,2);
      uVar6 = local_8;
      FUN_006b5440(local_8,0,199,6,uVar4,0,0xff);
      iVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02DA,3);
      iVar3 = (int)((local_c & 0xff) * *(int *)(iVar5 + 8)) / 100;
      iVar8 = *(int *)(iVar5 + 8) - iVar3;
      Library::DKW::WGR::FUN_006b5110
                (uVar6,0,199,iVar8 + 6,iVar5,0,0,iVar8,*(int *)(iVar5 + 4),iVar3,0xff);
      uVar6 = pCVar2->field_015C;
      if ((int)uVar6 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar4 = pCVar2->field_00A8;
      uVar9 = pCVar2->field_0050;
    }
    else {
      uVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02DA,0);
      uVar6 = local_8;
      FUN_006b5440(local_8,0,2,6,uVar4,0,0xff);
      iVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02DA,1);
      iVar3 = (int)((local_c & 0xff) * *(int *)(iVar5 + 8)) / 100;
      iVar8 = *(int *)(iVar5 + 8) - iVar3;
      Library::DKW::WGR::FUN_006b5110
                (uVar6,0,2,iVar8 + 6,iVar5,0,0,iVar8,*(int *)(iVar5 + 4),iVar3,0xff);
      uVar6 = pCVar2->field_0154;
      if ((int)uVar6 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar4 = pCVar2->field_00A0;
      uVar9 = pCVar2->field_0048;
    }
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,uVar6,0xffffffff,uVar9,uVar4);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  return;
}

