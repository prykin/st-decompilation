#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpRepSub */

undefined4 __thiscall STGroupBoatC::GrpRepSub(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  dword dVar4;
  DArrayTy *pDVar5;
  DArrayTy *array;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  STBoatC *pSVar9;
  uint uVar11;
  InternalExceptionFrame local_84;
  uint local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_36;
  STGroupBoatC *local_30;
  int local_2c;
  int local_28;
  DArrayTy *local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  STBoatC *local_14;
  DArrayTy *local_10;
  uint local_c;
  STBoatC *local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(STBoatC **)(this->field_0029 + 0xc);
  local_10 = (DArrayTy *)0x0;
  local_24 = (DArrayTy *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_1c = 2;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_30 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  pSVar2 = local_30;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_84.previous;
    if (iVar3 == -0x5001fff7) {
      return local_1c;
    }
    iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xda5,0,iVar3,"%s",
                               "STGroupBoatC::GrpRepSub");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xda6);
    return 0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_004a0c5b;
  memset(&local_30->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  local_30->field_0065 = 0;
  iVar3 = FUN_006e62d0(g_playSystem_00802A38,local_30->field_01C5,(int *)&local_8);
  if (iVar3 == -4) {
    return 0;
  }
  thunk_FUN_004162f0(local_8,(undefined2 *)&pSVar2->field_0x304,(undefined2 *)&pSVar2->field_0x306,
                     (undefined2 *)&pSVar2->field_0x308);
  local_20 = 0;
  *(uint *)&pSVar2->field_0x30a = local_8->field_0018;
  local_40 = g_playSystem_00802A38->field_00E4;
  pSVar9 = local_8;
  array = local_24;
  local_18 = local_40;
  if (0 < (int)local_14) {
    do {
      DArrayGetElement((DArrayTy *)pSVar2->field_0029,local_20,&local_c);
      if ((short)local_c != -1) {
        local_8 = (STBoatC *)
                  STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1);
        if (local_8 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xd64);
        }
        iVar3 = (*local_8->vtable->vfunc_F8)();
        if (iVar3 != 0) {
          iVar3 = thunk_FUN_00490d90((STGameObjC *)local_8);
          if (iVar3 == 0) {
            dVar4 = (*local_8->vtable->slot_2C)(local_8);
            if ((dVar4 == 7) || (dVar4 == 0x13)) {
              iVar3 = thunk_FUN_00492370((STGameObjC *)local_8);
              if (iVar3 == 0) {
                local_3a = *(undefined2 *)&pSVar2->field_0x306;
                local_3c = *(undefined2 *)&pSVar2->field_0x304;
                local_38 = *(undefined2 *)&pSVar2->field_0x308;
                local_36 = *(undefined4 *)&pSVar2->field_0x30a;
                STBoatC::CmdToObj(local_8,CASE_E,&local_40);
                pDVar5 = local_10;
                if (local_10 == (DArrayTy *)0x0) {
                  pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
                  local_10 = pDVar5;
                }
                goto LAB_004a0b93;
              }
            }
            else {
              STBoatC::CmdToObj(local_8,CASE_3,&local_18);
            }
          }
          else {
            pDVar5 = array;
            if (array == (DArrayTy *)0x0) {
              array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
              pDVar5 = array;
              local_24 = array;
            }
LAB_004a0b93:
            Library::DKW::TBL::FUN_006ae1c0(&pDVar5->flags,&local_c);
          }
        }
      }
      local_20 = local_20 + 1;
      pSVar9 = local_14;
    } while ((int)local_20 < (int)local_14);
  }
  pDVar5 = local_10;
  if (local_10 == (DArrayTy *)0x0) {
LAB_004a0bcc:
    if (array != (DArrayTy *)0x0) {
      local_14 = (STBoatC *)array->count;
      uVar11 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(array,uVar11,&local_c);
          local_8 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1);
          STBoatC::CmdToObj(local_8,CASE_3,&local_18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_14);
      }
      local_1c = 0;
    }
    pDVar5 = local_10;
    if (local_10 != (DArrayTy *)0x0) goto LAB_004a0c2f;
    if (array == (DArrayTy *)0x0) {
      local_1c = 0;
    }
LAB_004a0c2b:
    if (pDVar5 != (DArrayTy *)0x0) goto LAB_004a0c2f;
  }
  else {
    if (array != (DArrayTy *)0x0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,CONCAT31((int3)((uint)pSVar9 >> 8),pSVar2->field_0024),
                 &local_10->flags,&array->flags);
      goto LAB_004a0c2b;
    }
    if (local_10 == (DArrayTy *)0x0) goto LAB_004a0bcc;
LAB_004a0c2f:
    DArrayDestroy(pDVar5);
  }
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0xd8f);
LAB_004a0c5b:
  pSVar9 = local_14;
  if (g_playSystem_00802A38->field_00E4 % 0x14 == 4) {
    uVar11 = 0;
    if (0 < (int)local_14) {
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar11,&local_c);
        if ((short)local_c != -1) {
          local_8 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1);
          if (local_8 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xd97);
          }
          iVar3 = (*local_8->vtable->vfunc_F8)();
          if ((iVar3 != 0) &&
             (((dVar4 = (*local_8->vtable->slot_2C)(local_8), dVar4 == 7 || (dVar4 == 0x13)) ||
              (dVar4 == 0x1b)))) {
            local_28 = 1;
            iVar3 = thunk_FUN_0045ff10((STGameObjC *)local_8);
            if ((iVar3 == 0xe) || (uVar6 = STBoatC::CheckPBoxCmd(local_8,CASE_E), uVar6 == 1)) {
              local_2c = 1;
              break;
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)pSVar9);
    }
    if ((local_28 == 0) || (local_2c == 0)) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_84.previous;
  return local_1c;
}

