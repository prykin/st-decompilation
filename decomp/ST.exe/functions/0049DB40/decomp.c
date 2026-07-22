#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpGuard */

undefined4 __thiscall STGroupBoatC::GrpGuard(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  DArrayTy *array;
  STBoatC *pSVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_78;
  undefined4 local_34;
  STGroupBoatC *local_30;
  uint local_2c;
  DArrayTy *local_28;
  uint local_24;
  uint local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  DArrayTy *local_10;
  uint local_c;
  DArrayTy *local_8;

  local_8 = (DArrayTy *)0x0;
  local_1c = (uint *)0x0;
  local_10 = (DArrayTy *)0x0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_20 = *(uint *)(this->field_0029 + 0xc);
  local_28 = (DArrayTy *)0x0;
  local_34 = 2;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_30 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  pSVar2 = local_30;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xa3e,0,iVar3,"%s",
                               "STGroupBoatC::GrpGuard");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xa3f);
    return 0xffffffff;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    memset(&local_30->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    local_30->field_0065 = 0;
    local_8 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    if (pSVar2->field_0164 == 0) {
      Library::DKW::TBL::FUN_006afe40((int *)&local_8,&pSVar2->field_0168->flags);
    }
    if (pSVar2->field_0164 == 1) {
      STAllPlayersC::GetGObjFromBox
                (g_allPlayers_007FA174,pSVar2->field_0024,pSVar2->field_016C,
                 *(short *)&pSVar2->field_0x16e,*(short *)&pSVar2->field_0x170,pSVar2->field_0172,
                 pSVar2->field_0174,pSVar2->field_0176,(int *)&local_1c,(int *)&local_10,&local_14,
                 &local_18);
      if (0 < local_14) {
        Library::DKW::TBL::FUN_006afe40((int *)&local_8,local_1c);
      }
      if (0 < local_18) {
        if (local_14 == 0) {
          Library::DKW::TBL::FUN_006afe40((int *)&local_8,&local_10->flags);
        }
        else {
          uVar8 = 0;
          if (0 < local_18) {
            do {
              DArrayGetElement(local_10,uVar8,&local_c);
              Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,&local_c);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < local_18);
          }
        }
      }
    }
    local_2c = 0;
    array = local_28;
    if (0 < (int)local_20) {
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,local_2c,&local_c);
        if ((short)local_c != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1)
          ;
          if (pSVar4 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xa1a);
          }
          iVar3 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
          if (iVar3 == 0) {
            local_24 = g_playSystem_00802A38->field_00E4;
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_24);
          }
          else {
            if (array == (DArrayTy *)0x0) {
              array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
              local_28 = array;
            }
            Library::DKW::TBL::FUN_006ae1c0(&array->flags,&local_c);
          }
        }
        local_2c = local_2c + 1;
      } while ((int)local_2c < (int)local_20);
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,CONCAT31((int3)(local_20 >> 8),pSVar2->field_0024),
               &local_8->flags,&array->flags);
    DArrayDestroy(local_8);
    if (array != (DArrayTy *)0x0) {
      DArrayDestroy(array);
    }
    if (pSVar2->field_0168 != (DArrayTy *)0x0) {
      DArrayDestroy(pSVar2->field_0168);
      pSVar2->field_0168 = (DArrayTy *)0x0;
    }
  }
  else if (g_playSystem_00802A38->field_00E4 % 5 != 0) {
    g_currentExceptionFrame = local_78.previous;
    return local_34;
  }
  uVar8 = 0;
  if (0 < (int)local_20) {
    do {
      DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar8,&local_c);
      if ((short)local_c != -1) {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1);
        if (pSVar4 == (STBoatC *)0x0) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xa34,0,0,"%s"
                                     ,"STGroupBoatC::GrpGuard NULL");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xa35);
        }
        iVar3 = thunk_FUN_0045ff10((STGameObjC *)pSVar4);
        if ((iVar3 == 5) || (uVar6 = STBoatC::CheckPBoxCmd(pSVar4,CASE_5), uVar6 == 1)) break;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_20);
  }
  if ((local_20 != 0) && (uVar8 != local_20)) {
    g_currentExceptionFrame = local_78.previous;
    return local_34;
  }
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

