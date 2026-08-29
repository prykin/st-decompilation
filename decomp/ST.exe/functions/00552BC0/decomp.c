#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::Update */

void __thiscall UpgPanelTy::Update(UpgPanelTy *this)

{
  UpgPanelTy *pUVar2;
  int iVar3;
  int iVar4;
  BITMAPINFO *pBVar5;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  RecoveredGlobalRecordView_0081175C *pRVar10;
  uint local_298 [144];
  InternalExceptionFrame local_58;
  UpgPanelTy *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pUVar2 = local_14;
  if (iVar3 == 0) {
    puVar8 = &local_14->field_01AB;
    puVar7 = puVar8;
    puVar9 = local_298;
    memmove(puVar9, puVar7, 0x240); /* compiler REP MOVS byte copy */
    /* ST_CALLSITE[00552C19]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,0x10,(RecoveredRecordView_0043BEB0_8330D129 *)puVar8);
    iVar6 = 0x19;
    puVar8 = &pUVar2->field_01AB;
    local_8 = 3;
    do {

      iVar4 = thunk_FUN_005276e0((Global_sub_005276E0_param_1Enum)*puVar8,(byte)(*puVar8 >> 0x10));
      if (*(Global_sub_005276E0_param_1Enum *)(puVar8 + 2) == CASE_0) {
        pRVar10 = (RecoveredGlobalRecordView_0081175C *)pUVar2->field_03EF;
      }
      else {
        pRVar10 = (RecoveredGlobalRecordView_0081175C *)pUVar2->field_03EB;
      }
      /* ST_CALLSITE[00552C59]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar5 = FUN_0070b3a0(pRVar10,iVar4);
      /* ST_CALLSITE[00552C6B]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)pUVar2->field_0068,0x24,iVar6,'\x01',
             (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar5);
      puVar8 = puVar8 + 0xc;
      iVar6 = iVar6 + 0x1b;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_8 = 0x5e;
    puVar8 = &pUVar2->field_023B;
    local_c = 2;
    do {
      iVar6 = 0x19;
      local_10 = 3;
      do {

        iVar4 = thunk_FUN_005276e0((Global_sub_005276E0_param_1Enum)*puVar8,(byte)(*puVar8 >> 0x10));
        if (*(Global_sub_005276E0_param_1Enum *)(puVar8 + 2) == CASE_0) {
          pRVar10 = (RecoveredGlobalRecordView_0081175C *)pUVar2->field_03EF;
        }
        else {
          pRVar10 = (RecoveredGlobalRecordView_0081175C *)pUVar2->field_03EB;
        }
        /* ST_CALLSITE[00552CCB]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar5 = FUN_0070b3a0(pRVar10,iVar4);
        /* ST_CALLSITE[00552CDF]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pUVar2->field_0068,local_8,iVar6,'\x01',
               (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar5);
        puVar8 = puVar8 + 0xc;
        iVar6 = iVar6 + 0x1b;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_8 = local_8 + 0x33;
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar6 = 0x19;
    puVar8 = &pUVar2->field_035B;
    local_c = 3;
    local_10 = 0;
    do {

      iVar4 = thunk_FUN_005276e0((Global_sub_005276E0_param_1Enum)*puVar8,(byte)(*puVar8 >> 0x10));
      if (*(Global_sub_005276E0_param_1Enum *)(puVar8 + 2) == CASE_0) {
        pRVar10 = (RecoveredGlobalRecordView_0081175C *)pUVar2->field_03EF;
      }
      else {
        pRVar10 = (RecoveredGlobalRecordView_0081175C *)pUVar2->field_03EB;
      }
      /* ST_CALLSITE[00552D43]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar5 = FUN_0070b3a0(pRVar10,iVar4);
      /* ST_CALLSITE[00552D58]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)pUVar2->field_0068,0xd3,iVar6,'\x01',
             (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar5);
      puVar8 = puVar8 + 0xc;
      iVar6 = iVar6 + 0x1b;
      local_c = local_c + -1;
    } while (local_c != 0);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\upginfo.cpp",0x54,0,iVar3,"%s",
                             "UpgPanelTy::Update");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\upginfo.cpp",0x54);
  return;
}

