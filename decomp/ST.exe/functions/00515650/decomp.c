#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawObj

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00515650 -> 0044C130 @ 005156B3 | 00515650 -> 00526BA0 @ 0051578E */

void __thiscall
HelpPanelTy::DrawObj
          (HelpPanelTy *this,int *param_1,STAllPlayersC_GetTOBJImage_param_2Enum *param_2,
          byte param_3,int param_4)

{
  HelpPanelTy *pHVar2;
  int iVar3;
  BITMAPINFO *pBVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_58;
  int local_14;
  HelpPanelTy *local_10;
  int local_c;
  AnonShape_00515650_BBDC7053 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pHVar2 = local_10;
  if (iVar3 == 0) {
    if (g_allPlayers_007FA174 != nullptr) {
      *param_1 = *param_1 + 2;
      local_8 = /* ST_CALLSITE[005156B3]: CALL 0x00404499; direct=00404499 STAllPlayersC::GetTOBJImage */
      STPointerBoundaryCast<AnonShape_00515650_BBDC7053 *>(STAllPlayersC::GetTOBJImage
                          (g_allPlayers_007FA174,(uint)param_3,
                           (STAllPlayersC_GetTOBJImage_param_2Enum)param_2));
      if (local_8 != nullptr) {
        local_14 = local_8->field_0004;
        local_c = local_8->field_0008;
        iVar4 = (0x19c - local_14) / 2;

        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)pHVar2->field_0218,0,iVar4,*param_1,
                   (RecoveredRecordView_006B84D0_87AF9D9B *)pHVar2->field_021C,0,
                   (*(int *)(pHVar2->field_021C + 2) - local_14) / 2,
                   (*(int *)(pHVar2->field_021C + 4) - local_c) / 2,local_14,local_c);
        FUN_006b5440((ushort *)pHVar2->field_0218,0,iVar4,*param_1,(tagBITMAPINFO *)local_8,0,0xff);
        FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pHVar2->field_0218,0,iVar4 + -2,*param_1 + -2,
                     local_14 + 4,local_c + 4,0x6f,0xd);
        *param_1 = *param_1 + local_c + 10;
        FreeAndNull(&local_8);
      }
    }
    if (param_4 != 0) {

      iVar4 = thunk_FUN_00526ba0((Global_sub_00526BA0_param_1Enum)param_2,param_3);
      local_8 = (AnonShape_00515650_BBDC7053 *)
                /* ST_CALLSITE[00515795]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
                FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)param_4,iVar4);
      if ((BITMAPINFO *)local_8 != nullptr) {
        iVar4 = (0x19c - (((BITMAPINFO *)local_8)->bmiHeader).biWidth) / 2;
        /* ST_CALLSITE[005157C5]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pHVar2->field_0218,iVar4,*param_1,'\x01',
               (RecoveredRecordView_006B84D0_87AF9D9B *)local_8);
        /* ST_CALLSITE[005157D3]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pHVar2->field_0248,4);
        /* ST_CALLSITE[005157EC]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pHVar2->field_0218,iVar4 + -2,*param_1 + -2,'\x06',
               (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar3);
        pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pHVar2->field_0248,4);
        *param_1 = *param_1 + (pBVar3->bmiHeader).biHeight;
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x3f3,0,iVar3,"%s",
                             "HelpPanelTy::DrawObj");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x3f3);
  return;
}

