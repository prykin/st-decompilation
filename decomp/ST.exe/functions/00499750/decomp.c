#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ReMakePVecAndTgtList

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004999C0 -> 00499750 @ 00499AA8 */

undefined4 __thiscall STGroupBoatC::ReMakePVecAndTgtList(STGroupBoatC *this,DArrayTy *param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint index;
  InternalExceptionFrame local_58;
  dword local_14;
  STGroupBoatC *local_10;
  undefined1 local_c [2];
  short local_a;
  undefined4 local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pSVar2 = local_10;
  if (iVar3 == 0) {
    if (local_10->field_0212 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x4d7);
    }
    index = 0;
    local_14 = param_1->count;
    if (0 < (int)local_14) {
      do {
        DArrayGetElement(param_1,index,local_c);
        DArrayGetElement(pSVar2->field_020E,(int)local_a,&local_8);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (local_8._2_2_ != -1) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8._2_2_ = -1;
          Library::DKW::TBL::FUN_006ae140(&pSVar2->field_020E->flags,(int)local_a,&local_8);
          puVar4 = pSVar2->field_021E;
          pSVar2->field_0212 = pSVar2->field_0212 + -1;
          (puVar4 + local_a * 4)[0] = 0xffff;
          (puVar4 + local_a * 4)[1] = 0xffff;
        }
        index = index + 1;
      } while ((int)index < (int)local_14);
    }
    if (pSVar2->field_0212 == 0) {
      DArrayDestroy(pSVar2->field_020E);
      pSVar2->field_020E = (DArrayTy *)0x0;
      FreeAndNull(&pSVar2->field_021E);
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x4e5);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < pSVar2->field_021A) {
      puVar4 = pSVar2->field_021E;
      do {
        if (*(int *)(puVar4 + iVar3 * 4) != -1) {
          if (iVar6 == -1) {
            (puVar4 + iVar3 * 4)[0] = 0;
            (puVar4 + iVar3 * 4)[1] = 0;
            puVar4 = pSVar2->field_021E;
            pSVar2->field_0216 = *(undefined4 *)(puVar4 + iVar3 * 4 + 2);
            iVar6 = 0;
          }
          else {
            *(undefined4 *)(puVar4 + iVar3 * 4) = pSVar2->field_0216;
            puVar4 = pSVar2->field_021E;
            pSVar2->field_0216 = pSVar2->field_0216 + *(int *)(puVar4 + iVar3 * 4 + 2);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < pSVar2->field_021A);
    }
    g_currentExceptionFrame = local_58.previous;
  }
  else {
    g_currentExceptionFrame = local_58.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x4f3,0,iVar3,"%s"
                                 ,"STGroupBoatC::ReMakePVecAndTgtList");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x4f4);
      return 0xffffffff;
    }
  }
  return pSVar2->field_0212;
}

