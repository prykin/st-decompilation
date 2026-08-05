#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintEnergy

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall CPanelTy::PaintEnergy(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar2;
  RecoveredSourceFamily_dibcopy *pRVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  uint local_c;
  RecoveredSourceFamily_dibcopy *local_8;

  if (param_1 == 0) {
    local_8 = (RecoveredSourceFamily_dibcopy *)this->field_0194;
    bVar8 = this->field_0C6D;
  }
  else {
    local_8 = this->field_018C;
    bVar8 = this->field_0B7F;
  }
  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar8));
  if (bVar8 < 0x65) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pCVar2 = local_10;
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_54.previous;
      iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x4a,0,iVar4,
                                 "%s","CPanelTy::PaintEnergy");
      if (iVar6 == 0) {
        RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x4a);
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (param_1 == 0) {
      uVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02DA,2);
      pRVar3 = local_8;
      FUN_006b5440((ushort *)local_8,0,199,6,uVar5,0,0xff);
      iVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02DA,3);
      iVar4 = (int)((local_c & 0xff) * *(int *)(iVar6 + 8)) / 100;
      iVar9 = *(int *)(iVar6 + 8) - iVar4;
      Library::DKW::WGR::FUN_006b5110
                ((int)pRVar3,0,199,iVar9 + 6,iVar6,0,0,iVar9,*(int *)(iVar6 + 4),iVar4,0xff);
      puVar7 = pCVar2->field_0148[5];
      if ((int)puVar7 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar5 = pCVar2->field_00A8;
      uVar10 = pCVar2->field_0050;
    }
    else {
      uVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02DA,0);
      pRVar3 = local_8;
      FUN_006b5440((ushort *)local_8,0,2,6,uVar5,0,0xff);
      iVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02DA,1);
      iVar4 = (int)((local_c & 0xff) * *(int *)(iVar6 + 8)) / 100;
      iVar9 = *(int *)(iVar6 + 8) - iVar4;
      Library::DKW::WGR::FUN_006b5110
                ((int)pRVar3,0,2,iVar9 + 6,iVar6,0,0,iVar9,*(int *)(iVar6 + 4),iVar4,0xff);
      puVar7 = pCVar2->field_0148[3];
      if ((int)puVar7 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar5 = pCVar2->field_00A0;
      uVar10 = pCVar2->field_0048;
    }
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)puVar7,0xffffffff,uVar10,uVar5);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  return;
}

