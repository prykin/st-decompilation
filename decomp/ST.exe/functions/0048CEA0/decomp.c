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
  DArrayTy *array;
  int iVar4;
  int iVar5;
  uint index;
  uint *puVar6;
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
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4bb4,0,iVar3,"%s",
                               "STBoatC::_CheckDefenceShots");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\To_boat.cpp",0x4bb5);
    return;
  }
  array = (DArrayTy *)local_10->field_047B;
  if ((array != (DArrayTy *)0x0) && (index = 0, 0 < (int)array->count)) {
    do {
      DArrayGetElement(array,index,&local_24);
      if ((short)local_20 != -1) {
        local_1a = local_1a - param_1;
        if (local_1a < 1) {
          puVar6 = pSVar2->field_047B;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20 = CONCAT22(local_20._2_2_,0xffff);
        }
        else {
          this_00 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,(char)local_24,local_20,CASE_1)
          ;
          if (this_00 != (STGameObjC *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar3 = (**(code **)&this_00->vtable[1].field_0x28)();
            if (iVar3 == 1) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar3 = (**(code **)&this_00->vtable[1].field_0x20)();
              if (iVar3 == 1) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar3 = (**(code **)&this_00->vtable[1].field_0x24)(pSVar2->field_0024);
                if (iVar3 == 1) {
                  thunk_FUN_00416270(this_00,&local_a,(int *)&local_8,(int *)&local_6);
                  iVar3 = (int)pSVar2->field_0041 - (int)local_a;
                  iVar4 = (int)pSVar2->field_0043 - (int)local_8;
                  iVar5 = (int)pSVar2->field_0045 - (int)local_6;
                  if (local_14 < (uint)(iVar4 * iVar4 + iVar3 * iVar3 + iVar5 * iVar5)) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_20 = CONCAT22(local_20._2_2_,0xffff);
                  }
                  puVar6 = pSVar2->field_047B;
                  goto LAB_0048d016;
                }
              }
            }
          }
          puVar6 = pSVar2->field_047B;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20 = CONCAT22(local_20._2_2_,0xffff);
        }
LAB_0048d016:
        Library::DKW::TBL::FUN_006ae140(puVar6,index,&local_24);
      }
      array = (DArrayTy *)pSVar2->field_047B;
      index = index + 1;
    } while ((int)index < (int)array->count);
  }
  g_currentExceptionFrame = local_68.previous;
  return;
}

