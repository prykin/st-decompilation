#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DCBomb */

undefined4 __thiscall STGroupBoatC::DCBomb(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  DArrayTy *array;
  int iVar3;
  STBoatC *pSVar4;
  DArrayTy *array_00;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint index;
  InternalExceptionFrame local_78;
  uint local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  STGroupBoatC *local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  DArrayTy *local_14;
  int local_10;
  DArrayTy *local_c;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(int *)(this->field_0029 + 0xc);
  local_c = (DArrayTy *)0x0;
  local_14 = (DArrayTy *)0x0;
  local_24 = 2;
  local_18 = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_28 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  pSVar2 = local_28;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      memset(&local_28->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      local_28->field_0065 = 0;
      local_20 = 0;
      *(undefined4 *)&local_28->field_0x2bd = local_28->field_018C;
      local_28->field_02C1 = local_28->field_0190;
      local_30 = *(undefined2 *)&local_28->field_0x2bd;
      local_34 = PTR_00802a38->field_00E4;
      local_2c = local_28->field_02C1;
      local_2e = *(undefined2 *)&local_28->field_0x2bf;
      array_00 = local_14;
      local_1c = local_34;
      if (0 < local_10) {
        do {
          DArrayGetElement((DArrayTy *)pSVar2->field_0029,local_20,&local_8);
          if ((short)local_8 != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xb6b);
            }
            if ((pSVar4->field_06F7 == CASE_4) && (0 < pSVar4->field_07BE)) {
              if (array_00 == (DArrayTy *)0x0) {
                array_00 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
                local_14 = array_00;
              }
              Library::DKW::TBL::FUN_006ae1c0(&array_00->flags,&local_8);
              STBoatC::CmdToObj(pSVar4,CASE_A,&local_34);
            }
            else {
              iVar3 = thunk_FUN_00490d90((int)pSVar4);
              if (iVar3 == 0) {
                STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
              }
              else {
                if (local_c == (DArrayTy *)0x0) {
                  local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
                }
                Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
              }
            }
          }
          local_20 = local_20 + 1;
        } while ((int)local_20 < local_10);
      }
      array = local_c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)local_10 >> 8),pSVar2->field_0024),
                 &array_00->flags,&local_c->flags);
      if (array_00 != (DArrayTy *)0x0) {
        DArrayDestroy(array_00);
      }
      if (array != (DArrayTy *)0x0) {
        DArrayDestroy(array);
      }
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0xb84);
    }
    index = 0;
    if (PTR_00802a38->field_00E4 % 0x1e == 10) {
      if (0 < local_10) {
        do {
          DArrayGetElement((DArrayTy *)pSVar2->field_0029,index,&local_8);
          if ((short)local_8 != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xb8b);
            }
            iVar3 = thunk_FUN_0045ff10((int)pSVar4);
            if ((iVar3 == 10) || (uVar5 = STBoatC::CheckPBoxCmd(pSVar4,CASE_A), uVar5 == 1)) {
              local_18 = local_18 + 1;
              break;
            }
          }
          index = index + 1;
        } while ((int)index < local_10);
      }
      if (local_18 == 0) {
        local_24 = 0;
      }
    }
    g_currentExceptionFrame = local_78.previous;
  }
  else {
    g_currentExceptionFrame = local_78.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xb94,0,iVar3,"%s"
                                 ,"STGroupBoatC::DCBomb");
      if (iVar6 == 0) {
        RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xb95);
        return 0xffffffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return local_24;
}

