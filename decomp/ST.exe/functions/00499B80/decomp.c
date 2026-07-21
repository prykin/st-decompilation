#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::MakePVec */

undefined4 __thiscall STGroupBoatC::MakePVec(STGroupBoatC *this)

{
  code *pcVar1;
  uint uVar2;
  STGroupBoatC *pSVar3;
  int iVar4;
  AnonPointee_STGroupBoatC_021E *pAVar5;
  STGameObjC *pSVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  InternalExceptionFrame local_58;
  char local_14;
  char cStack_13;
  undefined2 uStack_12;
  undefined2 uStack_10;
  uint local_c;
  STGroupBoatC *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_020E == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x52e);
    }
    if (pSVar3->field_021E != (AnonPointee_STGroupBoatC_021E *)0x0) {
      FreeAndNull(&pSVar3->field_021E);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar9 = *(uint *)(pSVar3->field_020E + 0xc);
    pSVar3->field_021A = uVar9;
    local_c = uVar9;
    pAVar5 = (AnonPointee_STGroupBoatC_021E *)Library::DKW::LIB::FUN_006aac70(uVar9 * 8);
    uVar2 = local_c;
    pSVar3->field_021E = pAVar5;
    for (iVar4 = (uVar9 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      pAVar5->field_0000 = 0;
      pAVar5 = (AnonPointee_STGroupBoatC_021E *)&pAVar5->field_0004;
    }
    uVar9 = 0;
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)&pAVar5->field_0000 = 0;
      pAVar5 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar5->field_0000 + 1);
    }
    pSVar3->field_0216 = 0;
    if (0 < (int)local_c) {
      do {
        DArrayGetElement((DArrayTy *)pSVar3->field_020E,uVar9,&local_14);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar6 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,local_14,CONCAT22(uStack_10,uStack_12),
                            (int)cStack_13);
        if (pSVar6 == (STGameObjC *)0x0) {
          uStack_12 = 0xffff;
          Library::DKW::TBL::FUN_006ae140((uint *)pSVar3->field_020E,uVar9,(undefined4 *)&local_14);
          pSVar3->field_021E[uVar9].field_0000 = 0xffffffff;
          if ((int)uVar9 < (int)(uVar2 - 1)) {
            pSVar3->field_021E[uVar9 + 1].field_0000 = pSVar3->field_0216;
          }
        }
        else {
          iVar4 = pSVar6->field_0219 + pSVar6->field_0215;
          pSVar3->field_0216 = pSVar3->field_0216 + iVar4;
          *(int *)&pSVar3->field_021E[uVar9].field_0004 = iVar4;
          if ((int)uVar9 < (int)(uVar2 - 1)) {
            pSVar3->field_021E[uVar9 + 1].field_0000 = pSVar3->field_0216;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar2);
    }
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  if (iVar4 == -0x5001fff7) {
    return 0;
  }
  iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x543,0,iVar4,"%s",
                             "STGroupBoatC::MakePVec");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x544);
  return 0xffffffff;
}

