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
  int iVar5;
  int iVar4;
  BITMAPINFO *pBVar6;
  ushort *puVar7;
  int iVar8;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  uint local_c;
  int local_8;

  if (param_1 == 0) {
    local_8 = this->field_0194;
    bVar8 = this->field_0C6D;
  }
  else {
    local_8 = (int)this->field_018C;
    bVar8 = this->field_0B7F;
  }
  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar8));
  if (bVar8 < 0x65) {
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
      /* ST_CALLSITE[004FE7D7]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
      pBVar6 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)local_10->field_02DA,2);
      iVar5 = local_8;
      FUN_006b5440((ushort *)local_8,0,199,6,pBVar6,0,0xff);
      pBVar6 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar3->field_02DA,3);
      iVar9 = (pBVar6->bmiHeader).biHeight;
      iVar2 = (int)((local_c & 0xff) * iVar9) / 100;
      iVar9 = iVar9 - iVar2;
      Library::DKW::WGR::FUN_006b5110
                ((int *)iVar5,0,199,iVar9 + 6,pBVar6,0,0,iVar9,(pBVar6->bmiHeader).biWidth,iVar2,
                 0xff);
      puVar7 = pCVar3->field_0148[5];
      if ((int)puVar7 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar11 = pCVar3->field_00A8;
      uVar10 = pCVar3->field_0050;
    }
    else {
      /* ST_CALLSITE[004FE741]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
      pBVar6 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)local_10->field_02DA,0);
      iVar5 = local_8;
      FUN_006b5440((ushort *)local_8,0,2,6,pBVar6,0,0xff);
      pBVar6 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar3->field_02DA,1);
      iVar9 = (pBVar6->bmiHeader).biHeight;
      iVar2 = (int)((local_c & 0xff) * iVar9) / 100;
      iVar9 = iVar9 - iVar2;
      Library::DKW::WGR::FUN_006b5110
                ((int *)iVar5,0,2,iVar9 + 6,pBVar6,0,0,iVar9,(pBVar6->bmiHeader).biWidth,iVar2,0xff);
      puVar7 = pCVar3->field_0148[3];
      if ((int)puVar7 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar11 = pCVar3->field_00A0;
      uVar10 = pCVar3->field_0048;
    }

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)puVar7,0xffffffff,uVar10,uVar11);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  return;
}

