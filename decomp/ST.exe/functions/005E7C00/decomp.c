#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::AddStr

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall WaitTy::AddStr(WaitTy *this,uint *param_1,int param_2)

{
  dword dVar1;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar2;
  RecoveredSourceFamily_dibcopy *pRVar3;
  WaitTy *pWVar5;
  int iVar6;
  ccFntTy *pcVar7;
  DArrayTy *pDVar8;
  uint *puVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  InternalExceptionFrame local_54;
  DArrayTy *local_10;
  WaitTy *local_c;
  uint *local_8;

  if (param_1 != nullptr) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_c = this;

    iVar6 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pWVar5 = local_c;
    if (iVar6 == 0) {
      if (param_2 != 0) {
        pDVar8 = local_c->field_1AF0;
        uVar12 = local_c->field_1AF4;
        if ((int)uVar12 < (int)pDVar8->elementSize) {
          do {

            FUN_006b7830((AnonShape_006B7830_769CA2DF *)pDVar8,uVar12);
            pDVar8 = pWVar5->field_1AF0;
            uVar12 = pWVar5->field_1AF4;
          } while ((int)uVar12 < (int)pDVar8->elementSize);
        }
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)pWVar5->field_1AEC,0,0,
                     pWVar5->field_1AF4 * 0x13,
                     ((RecoveredSourceFamily_dibcopy *)pWVar5->field_1AEC)->field_0004,
                     (0x16 - pWVar5->field_1AF4) * 0x13,0);
      }
      /* ST_CALLSITE[005E7CB0]: CALL 0x00712f80; direct=00712F80 ccFntTy::_TxtToSarr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__thiscall;pointer:/ccFntTy;pointer:/ccFntTy;pointer:/uint */
      pcVar7 = ccFntTy::_TxtToSarr((ccFntTy *)g_startSystem_0081176C->field_0030,param_1);
      pDVar8 = local_10;
      if (pcVar7 != nullptr) {
        pDVar8 = (DArrayTy *)
                 ccFntTy::FormSarr((ccFntTy *)g_startSystem_0081176C->field_0030,(uint *)pcVar7,
                                   " ,.;:!?/\\()[]{}",0x1e4,0,0xffffffff,1);
        local_10 = pDVar8;
        FUN_006b5570((DArrayTy *)pcVar7);
      }
      pWVar5->field_1AF4 = pWVar5->field_1AF0->elementSize;
      if (pDVar8 != nullptr) {
        iVar6 = 0;
        if (0 < (int)pDVar8->elementSize) {
          if ((int)pDVar8->elementSize < 1) {
            pcVar10 = nullptr;
            goto LAB_005e7d14;
          }
          do {
            pcVar10 = *(char **)(pDVar8->growCapacity + iVar6 * 4);
LAB_005e7d14:

            Library::DKW::TBL::FUN_006b5aa0(pWVar5->field_1AF0,pcVar10);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)pDVar8->elementSize);
        }
        FUN_006b5570(pDVar8);
      }
      dVar1 = pWVar5->field_1AF0->elementSize;
      if ((int)dVar1 < 0x16) {
        iVar6 = dVar1 - 1;
      }
      else if ((int)dVar1 < 0x2c) {
        pRVar3 = (RecoveredSourceFamily_dibcopy *)pWVar5->field_1AEC;
        iVar6 = 0x2c - dVar1;

        Library::DKW::WGR::FUN_006b55f0
                  (pRVar3,0,0,0,(RecoveredRecordView_006B84D0_87AF9D9B *)pRVar3,0,0,
                   dVar1 * 0x13 + -0x1a2,pRVar3->field_0004,iVar6 * 0x13);
      }
      else {
        pRVar2 = (RecoveredRecord_006B4FA0_DAC3A217 *)pWVar5->field_1AEC;
        iVar6 = 0;
        local_8 = *(uint **)&pRVar2[1].field_0x4;
        if (local_8 == nullptr) {
          local_8 = (uint *)(((uint)pRVar2->field_000E * *(int *)&pRVar2->field_0x4 + 0x1f >> 3 &
                             0x1ffffffc) * *(int *)&pRVar2->field_0x8);
        }

        puVar9 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar2));
        for (uVar12 = (uint)local_8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (uVar12 = (uint)local_8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      dVar1 = pWVar5->field_1AF0->elementSize;
      while (0x15 < (int)dVar1) {

        FUN_006b7830((AnonShape_006B7830_769CA2DF *)pWVar5->field_1AF0,0);
        pDVar8 = pWVar5->field_1AF0;
        pWVar5->field_1AF0 = (DArrayTy *)&pDVar8[-1].elementSize;
        dVar1 = pDVar8[-1].capacity;
      }
      if (iVar6 <= (int)(pWVar5->field_1AF0->elementSize - 1)) {
        local_8 = pWVar5->field_1A94 + iVar6;
        uVar12 = iVar6 * 0x13;
        do {
          FUN_006b4170((RecoveredSourceFamily_dibcopy *)pWVar5->field_1AEC,0,0,uVar12,
                       ((RecoveredSourceFamily_dibcopy *)pWVar5->field_1AEC)->field_0004,0x13,0);

          ccFntTy::SetSurf((ccFntTy *)g_startSystem_0081176C->field_0030,(int)pWVar5->field_1AEC,0,2
                           ,uVar12,*(int *)(pWVar5->field_1AEC + 2) + -4,0x13);
          if (iVar6 < (int)pWVar5->field_1AF0->elementSize) {
            pcVar10 = *(char **)(pWVar5->field_1AF0->growCapacity + iVar6 * 4);
          }
          else {
            pcVar10 = nullptr;
          }

          ccFntTy::WrStr((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar10,0,-1,1);

          FUN_006b35d0((int *)g_ddxContext_008075A8,*local_8);
          iVar6 = iVar6 + 1;
          local_8 = local_8 + 1;
          uVar12 = uVar12 + 0x13;
        } while (iVar6 <= (int)(pWVar5->field_1AF0->elementSize - 1));
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;

    iVar11 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x120,0,iVar6,
                                "%s","WaitTy::AddStr");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\wait_obj.cpp",0x120);
  }
  return;
}

