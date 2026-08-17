#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::MakePVec */

undefined4 __thiscall STGroupBoatC::MakePVec(STGroupBoatC *this)

{
  uint uVar2;
  STGroupBoatC *pSVar3;
  int iVar4;
  ushort *puVar4;
  STGameObjC *pSVar5;
  int iVar7;
  undefined4 uVar6;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame local_58;
  char local_14;
  char cStack_13;
  ushort uStack_12;
  uint local_c;
  STGroupBoatC *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_020E == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x52e);
    }
    if (pSVar3->field_021E != nullptr) {
      FreeAndNull(&pSVar3->field_021E);
    }
    uVar9 = pSVar3->field_020E->count;
    pSVar3->field_021A = uVar9;
    local_c = uVar9;
    puVar4 = Library::DKW::LIB::MemAlloc(uVar9 * 8);
    uVar2 = local_c;
    pSVar3->field_021E = puVar4;
    for (iVar8 = (uVar9 & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
    }
    uVar9 = 0;
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (ushort *)((int)puVar4 + 1);
    }
    pSVar3->field_0216 = 0;
    if (0 < (int)local_c) {
      do {
        DArrayGetElement(pSVar3->field_020E,uVar9,&local_14);
        /* ST_CALLSITE[00499C60]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar5 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,local_14,uStack_12,(int)cStack_13);
        if (pSVar5 == nullptr) {
          uStack_12 = 0xffff;
          Library::DKW::TBL::DArrayPut(pSVar3->field_020E,uVar9,&local_14);
          puVar4 = pSVar3->field_021E;
          (puVar4 + uVar9 * 4)[0] = 0xffff;
          (puVar4 + uVar9 * 4)[1] = 0xffff;
          if ((int)uVar9 < (int)(uVar2 - 1)) {
            *(undefined4 *)(pSVar3->field_021E + uVar9 * 4 + 4) = pSVar3->field_0216;
          }
        }
        else {
          iVar8 = pSVar5->field_0219 + pSVar5->field_0215;
          pSVar3->field_0216 = pSVar3->field_0216 + iVar8;
          *(int *)(pSVar3->field_021E + uVar9 * 4 + 2) = iVar8;
          if ((int)uVar9 < (int)(uVar2 - 1)) {
            *(undefined4 *)(pSVar3->field_021E + uVar9 * 4 + 4) = pSVar3->field_0216;
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

