#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_CheckDefenceShots */

void __thiscall STBoatC::_CheckDefenceShots(STBoatC *this,int param_1)

{
  code *pcVar1;
  STBoatC *pSVar2;
  int iVar3;
  STGameObjC *this_00;
  DArrayTy *pDVar4;
  int iVar5;
  int iVar6;
  uint index;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  InternalExceptionFrame local_68;
  undefined4 local_24;
  uint local_20;
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
  pDVar4 = local_10->field_047B;
  if ((pDVar4 != (DArrayTy *)0x0) && (index = 0, 0 < (int)pDVar4->count)) {
    do {
      DArrayGetElement(pDVar4,index,&local_24);
      if ((short)local_20 != -1) {
        local_1a = local_1a - param_1;
        if (local_1a < 1) {
          pDVar4 = pSVar2->field_047B;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20 = CONCAT22(local_20._2_2_,0xffff);
        }
        else {
          this_00 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)local_24,local_20,CASE_1);
          if (this_00 != (STGameObjC *)0x0) {
            iVar3 = (*this_00->vtable[1].vfunc_24)();
            if (iVar3 == 1) {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              iVar3 = (*this_00->vtable[1].MoveStep)(this_00,unaff_EDI);
              if (iVar3 == 1) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                unaff_EDI = (int *)pSVar2->field_0024;
                iVar3 = (*this_00->vtable[1].vfunc_20)();
                if (iVar3 == 1) {
                  thunk_FUN_00416270(this_00,&local_a,(int *)&local_8,(int *)&local_6);
                  iVar3 = (int)pSVar2->field_0041 - (int)local_a;
                  iVar5 = (int)pSVar2->field_0043 - (int)local_8;
                  iVar6 = (int)pSVar2->field_0045 - (int)local_6;
                  if (local_14 < (uint)(iVar5 * iVar5 + iVar3 * iVar3 + iVar6 * iVar6)) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_20 = CONCAT22(local_20._2_2_,0xffff);
                  }
                  pDVar4 = pSVar2->field_047B;
                  goto LAB_0048d016;
                }
              }
            }
          }
          pDVar4 = pSVar2->field_047B;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20 = CONCAT22(local_20._2_2_,0xffff);
        }
LAB_0048d016:
        Library::DKW::TBL::FUN_006ae140(&pDVar4->flags,index,&local_24);
      }
      pDVar4 = pSVar2->field_047B;
      index = index + 1;
    } while ((int)index < (int)pDVar4->count);
  }
  g_currentExceptionFrame = local_68.previous;
  return;
}

