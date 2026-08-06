#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintEnergy

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall CPanelTy::PaintEnergy(CPanelTy *this,int param_1)

{
  int iVar2;
  CPanelTy *pCVar3;
  RecoveredSourceFamily_dibcopy *pRVar4;
  int iVar4;
  BITMAPINFO *pBVar5;
  ushort *puVar6;
  int iVar8;
  byte bVar7;
  int iVar9;
  uint uVar10;
  uint uVar11;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  uint local_c;
  RecoveredSourceFamily_dibcopy *local_8;

  if (param_1 == 0) {
    local_8 = (RecoveredSourceFamily_dibcopy *)this->field_0194;
    bVar7 = this->field_0C6D;
  }
  else {
    local_8 = this->field_018C;
    bVar7 = this->field_0B7F;
  }
  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar7));
  if (bVar7 < 0x65) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pCVar3 = local_10;
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_54.previous;
      iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x4a,0,iVar4,
                                 "%s","CPanelTy::PaintEnergy");
      if (iVar8 == 0) {
        RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x4a);
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (param_1 == 0) {
      pBVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02DA,2);
      pRVar4 = local_8;
      FUN_006b5440((ushort *)local_8,0,199,6,pBVar5,0,0xff);
      pBVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar3->field_02DA,3);
      iVar9 = (pBVar5->bmiHeader).biHeight;
      iVar2 = (int)((local_c & 0xff) * iVar9) / 100;
      iVar9 = iVar9 - iVar2;
      Library::DKW::WGR::FUN_006b5110
                ((int)pRVar4,0,199,iVar9 + 6,pBVar5,0,0,iVar9,(pBVar5->bmiHeader).biWidth,iVar2,0xff
                );
      puVar6 = pCVar3->field_0148[5];
      if ((int)puVar6 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar11 = pCVar3->field_00A8;
      uVar10 = pCVar3->field_0050;
    }
    else {
      pBVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02DA,0);
      pRVar4 = local_8;
      FUN_006b5440((ushort *)local_8,0,2,6,pBVar5,0,0xff);
      pBVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar3->field_02DA,1);
      iVar9 = (pBVar5->bmiHeader).biHeight;
      iVar2 = (int)((local_c & 0xff) * iVar9) / 100;
      iVar9 = iVar9 - iVar2;
      Library::DKW::WGR::FUN_006b5110
                ((int)pRVar4,0,2,iVar9 + 6,pBVar5,0,0,iVar9,(pBVar5->bmiHeader).biWidth,iVar2,0xff);
      puVar6 = pCVar3->field_0148[3];
      if ((int)puVar6 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar11 = pCVar3->field_00A0;
      uVar10 = pCVar3->field_0048;
    }
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)puVar6,0xffffffff,uVar10,uVar11);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  return;
}

