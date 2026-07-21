#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ReMakePVecAndTgtList

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004999C0 -> 00499750 @ 00499AA8 */

undefined4 __thiscall STGroupBoatC::ReMakePVecAndTgtList(STGroupBoatC *this,uint *param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  AnonPointee_STGroupBoatC_021E *pAVar4;
  undefined4 uVar5;
  int iVar6;
  uint index;
  InternalExceptionFrame local_58;
  uint local_14;
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
    local_14 = param_1[3];
    if (0 < (int)local_14) {
      do {
        DArrayGetElement((DArrayTy *)param_1,index,local_c);
        DArrayGetElement((DArrayTy *)pSVar2->field_020E,(int)local_a,&local_8);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (local_8._2_2_ != -1) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8._2_2_ = -1;
          Library::DKW::TBL::FUN_006ae140((uint *)pSVar2->field_020E,(int)local_a,&local_8);
          pSVar2->field_0212 = pSVar2->field_0212 + -1;
          pSVar2->field_021E[local_a].field_0000 = 0xffffffff;
        }
        index = index + 1;
      } while ((int)index < (int)local_14);
    }
    if (pSVar2->field_0212 == 0) {
      DArrayDestroy((DArrayTy *)pSVar2->field_020E);
      pSVar2->field_020E = 0;
      FreeAndNull(&pSVar2->field_021E);
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x4e5);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < pSVar2->field_021A) {
      pAVar4 = pSVar2->field_021E;
      do {
        if (pAVar4[iVar3].field_0000 != -1) {
          if (iVar6 == -1) {
            pAVar4[iVar3].field_0000 = 0;
            pAVar4 = pSVar2->field_021E;
            pSVar2->field_0216 = *(undefined4 *)&pAVar4[iVar3].field_0004;
            iVar6 = 0;
          }
          else {
            pAVar4[iVar3].field_0000 = pSVar2->field_0216;
            pAVar4 = pSVar2->field_021E;
            pSVar2->field_0216 = pSVar2->field_0216 + *(int *)&pAVar4[iVar3].field_0004;
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

