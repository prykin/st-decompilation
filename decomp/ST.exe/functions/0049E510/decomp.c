#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpUnLoadObj */

uint * __thiscall STGroupBoatC::GrpUnLoadObj(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar4;
  dword dVar5;
  DArrayTy *pDVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  DArrayTy *array;
  InternalExceptionFrame local_78;
  uint local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  STGroupBoatC *local_28;
  int local_24;
  uint local_20;
  DArrayTy *local_1c;
  uint local_18;
  dword local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(dword *)(this->field_0029 + 0xc);
  local_10 = (DArrayTy *)0x0;
  local_c = (DArrayTy *)0x0;
  local_24 = 0;
  local_1c = (DArrayTy *)0x2;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_28 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  pSVar2 = local_28;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar3 == -0x5001fff7) {
      return &local_1c->flags;
    }
    iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xb01,0,iVar3,"%s",
                               "STGroupBoatC::GrpUnLoadObj");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xb02);
    return (uint *)0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_0049e7c1;
  memset(&local_28->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  local_30 = *(undefined2 *)&local_28->field_0x17c;
  local_28->field_0065 = 0;
  *(undefined2 *)&local_28->field_0x2ad = local_30;
  local_2e = *(undefined2 *)&local_28->field_0x17e;
  *(undefined2 *)&local_28->field_0x2af = local_2e;
  local_2c = local_28->field_0180;
  local_28->field_02B1 = local_2c;
  local_34 = g_playSystem_00802A38->field_00E4;
  local_20 = 0;
  local_18 = local_34;
  if (0 < (int)local_14) {
    do {
      DArrayGetElement((DArrayTy *)pSVar2->field_0029,local_20,&local_8);
      if ((short)local_8 != -1) {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
        if (pSVar4 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xabe);
        }
        iVar3 = (*pSVar4->vtable->vfunc_F8)();
        if (iVar3 != 0) {
          dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4);
          if ((((dVar5 == 7) || (dVar5 == 0x13)) || (dVar5 == 0x1b)) &&
             (iVar3 = thunk_FUN_00492370((STGameObjC *)pSVar4), iVar3 != 0)) {
            STBoatC::CmdToObj(pSVar4,CASE_10,&local_34);
            if (((*(short *)&pSVar2->field_0x2ad != -1) || (*(short *)&pSVar2->field_0x2af != -1))
               || (pSVar2->field_02B1 != -1)) {
              pDVar6 = local_10;
              if (local_10 == (DArrayTy *)0x0) {
                pDVar6 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
                local_10 = pDVar6;
              }
LAB_0049e6f6:
              Library::DKW::TBL::FUN_006ae1c0(&pDVar6->flags,&local_8);
            }
          }
          else {
            iVar3 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
            if (iVar3 == 0) {
              STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            }
            else if (((*(short *)&pSVar2->field_0x2ad != -1) ||
                     (*(short *)&pSVar2->field_0x2af != -1)) || (pSVar2->field_02B1 != -1)) {
              pDVar6 = local_c;
              if (local_c == (DArrayTy *)0x0) {
                pDVar6 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
                local_c = pDVar6;
              }
              goto LAB_0049e6f6;
            }
          }
        }
      }
      local_20 = local_20 + 1;
    } while ((int)local_20 < (int)local_14);
  }
  array = local_c;
  pDVar6 = local_10;
  if ((local_10 == (DArrayTy *)0x0) || (local_c == (DArrayTy *)0x0)) {
    if (local_10 == (DArrayTy *)0x0) {
      if (local_c != (DArrayTy *)0x0) {
        dVar5 = local_c->count;
        uVar10 = 0;
        local_14 = dVar5;
        if (0 < (int)dVar5) {
          do {
            DArrayGetElement(local_c,uVar10,&local_8);
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)dVar5);
        }
        local_1c = (DArrayTy *)0x0;
      }
      pDVar6 = local_10;
      array = local_c;
      if (local_10 == (DArrayTy *)0x0) {
        if (local_c == (DArrayTy *)0x0) {
          local_1c = local_c;
        }
        goto LAB_0049e790;
      }
    }
LAB_0049e794:
    DArrayDestroy(pDVar6);
  }
  else {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,CONCAT31((int3)(local_14 >> 8),pSVar2->field_0024),
               &local_10->flags,&local_c->flags);
LAB_0049e790:
    if (pDVar6 != (DArrayTy *)0x0) goto LAB_0049e794;
  }
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0xae9);
LAB_0049e7c1:
  uVar10 = 0;
  if (g_playSystem_00802A38->field_00E4 % 0x32 == 0) {
    if (0 < (int)local_14) {
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1)
          ;
          if (pSVar4 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xaf1);
          }
          iVar3 = (*pSVar4->vtable->vfunc_F8)();
          if ((iVar3 != 0) &&
             ((((dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4), dVar5 == 7 || (dVar5 == 0x13)) ||
               (dVar5 == 0x1b)) &&
              ((iVar3 = thunk_FUN_0045ff10((STGameObjC *)pSVar4), iVar3 == 0x10 ||
               (uVar7 = STBoatC::CheckPBoxCmd(pSVar4,CASE_10), uVar7 == 1)))))) {
            local_24 = 1;
            break;
          }
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)local_14);
    }
    if (local_24 == 0) {
      local_1c = (DArrayTy *)0x0;
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return &local_1c->flags;
}

