#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Bring */

uint * __thiscall STGroupBoatC::Bring(STGroupBoatC *this,int param_1)

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
  DArrayTy *array;
  uint uVar11;
  InternalExceptionFrame local_70;
  uint local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  STGroupBoatC *local_20;
  DArrayTy *local_1c;
  uint local_18;
  DArrayTy *local_14;
  uint local_10;
  DArrayTy *local_c;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_14 = (DArrayTy *)0x0;
  local_c = (DArrayTy *)0x0;
  local_1c = (DArrayTy *)0x2;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_20 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  pSVar2 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar3 == -0x5001fff7) {
      return &local_1c->flags;
    }
    iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xcb0,0,iVar3,"%s",
                               "STGroupBoatC::Bring");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xcb1);
    return (uint *)0xffffffff;
  }
  if ((param_1 != 0) && (param_1 != 1)) goto LAB_0049fe51;
  memset(&local_20->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  uVar11 = 0;
  local_20->field_0065 = 0;
  *(undefined4 *)&local_20->field_0x2e8 = local_20->field_01B3;
  local_20->field_02EC = local_20->field_01B7;
  local_28 = *(undefined2 *)&local_20->field_0x2e8;
  local_26 = *(undefined2 *)&local_20->field_0x2ea;
  local_2c = g_playSystem_00802A38->field_00E4;
  local_24 = local_20->field_02EC;
  local_18 = local_2c;
  if (0 < (int)local_10) {
    do {
      DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar11,&local_8);
      if ((short)local_8 != -1) {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
        if (pSVar4 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xc79);
        }
        dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4);
        if (((dVar5 == 7) || (dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4), dVar5 == 0x13)) ||
           (dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4), dVar5 == 0x1b)) {
          STBoatC::CmdToObj(pSVar4,CASE_17,&local_2c);
          pDVar6 = local_14;
          if (local_14 == (DArrayTy *)0x0) {
            pDVar6 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
            local_14 = pDVar6;
          }
        }
        else {
          iVar3 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
          if (iVar3 == 0) {
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            goto LAB_0049fd94;
          }
          pDVar6 = local_c;
          if (local_c == (DArrayTy *)0x0) {
            pDVar6 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
            local_c = pDVar6;
          }
        }
        Library::DKW::TBL::FUN_006ae1c0(&pDVar6->flags,&local_8);
      }
LAB_0049fd94:
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_10);
  }
  array = local_c;
  pDVar6 = local_14;
  if ((local_14 == (DArrayTy *)0x0) || (local_c == (DArrayTy *)0x0)) {
    if (local_14 == (DArrayTy *)0x0) {
      if (local_c != (DArrayTy *)0x0) {
        uVar11 = local_c->count;
        uVar7 = 0;
        local_10 = uVar11;
        if (0 < (int)uVar11) {
          do {
            DArrayGetElement(local_c,uVar7,&local_8);
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar11);
        }
        local_1c = (DArrayTy *)0x0;
      }
      array = local_c;
      pDVar6 = local_14;
      if (local_14 == (DArrayTy *)0x0) {
        if (local_c == (DArrayTy *)0x0) {
          local_1c = local_c;
        }
        goto LAB_0049fe22;
      }
    }
LAB_0049fe26:
    DArrayDestroy(pDVar6);
  }
  else {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,CONCAT31((int3)(local_10 >> 8),pSVar2->field_0024),
               &local_14->flags,&local_c->flags);
LAB_0049fe22:
    if (pDVar6 != (DArrayTy *)0x0) goto LAB_0049fe26;
  }
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0xca0);
LAB_0049fe51:
  if (g_playSystem_00802A38->field_00E4 % 0x19 == 7) {
    uVar11 = 0;
    if (0 < (int)local_10) {
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar11,&local_8);
        if ((short)local_8 != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1)
          ;
          if (pSVar4 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xca7);
          }
          iVar3 = thunk_FUN_0045ff10((STGameObjC *)pSVar4);
          if ((iVar3 == 0x17) || (uVar7 = STBoatC::CheckPBoxCmd(pSVar4,CASE_17), uVar7 == 1)) break;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)local_10);
    }
    if (uVar11 == local_10) {
      local_1c = (DArrayTy *)0x0;
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return &local_1c->flags;
}

