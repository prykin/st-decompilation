#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_CheckDefenceShots

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall STBoatC::_CheckDefenceShots(STBoatC *this,int param_1)

{
  STBoatC *pSVar2;
  int iVar3;
  STGameObjC *this_00;
  int iVar4;
  int iVar5;
  DArrayTy *pDVar5;
  int iVar6;
  int iVar7;
  uint index;
  InternalExceptionFrame local_68;
  undefined1 local_24 [4];
  ushort local_20;
  undefined2 uStack_1e;
  int local_1a;
  uint local_14;
  STBoatC *local_10;
  short local_a;
  short local_8;
  short local_6;

  local_14 = (int)this->field_0816 * (int)this->field_0816 * 0x9dd1;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pSVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4bb4,0,iVar3,"%s",
                               "STBoatC::_CheckDefenceShots");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\To_boat.cpp",0x4bb5);
    return;
  }
  pDVar5 = local_10->field_047B;
  if ((pDVar5 != nullptr) && (index = 0, 0 < (int)pDVar5->count)) {
    do {
      DArrayGetElement(pDVar5,index,local_24);
      if (local_20 != 0xffff) {
        local_1a = local_1a - param_1;
        if (local_1a < 1) {
          pDVar5 = pSVar2->field_047B;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_20 = CONCAT22(uStack_1e,0xffff);
        }
        else {
          this_00 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,local_24[0],local_20,CASE_1);
          if (this_00 != nullptr) {
            iVar4 = this_00->vfunc_F8();
            if (iVar4 == 1) {
              iVar4 = this_00->vfunc_F0();
              if (iVar4 == 1) {
                iVar4 = (*this_00->vtable->vfunc_F4)(pSVar2->field_0024);
                if (iVar4 == 1) {
                  thunk_FUN_00416270(this_00,(uint *)&local_a,(int *)&local_8,&local_6);
                  iVar4 = (int)pSVar2->field_0041 - (int)local_a;
                  iVar6 = (int)pSVar2->field_0043 - (int)local_8;
                  iVar7 = (int)pSVar2->field_0045 - (int)local_6;
                  if (local_14 < (uint)(iVar6 * iVar6 + iVar4 * iVar4 + iVar7 * iVar7)) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _local_20 = CONCAT22(uStack_1e,0xffff);
                  }
                  pDVar5 = pSVar2->field_047B;
                  goto LAB_0048d016;
                }
              }
            }
          }
          pDVar5 = pSVar2->field_047B;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_20 = CONCAT22(uStack_1e,0xffff);
        }
LAB_0048d016:
        Library::DKW::TBL::DArrayPut(pDVar5,index,local_24);
      }
      pDVar5 = pSVar2->field_047B;
      index = index + 1;
    } while ((int)index < (int)pDVar5->count);
  }
  g_currentExceptionFrame = local_68.previous;
  return;
}

