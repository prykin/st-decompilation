#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpRepSub */

undefined4 __thiscall STGroupBoatC::GrpRepSub(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  dword dVar3;
  DArrayTy *pDVar4;
  DArrayTy *array;
  uint uVar5;
  int iVar7;
  undefined4 uVar6;
  int iVar8;
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
  undefined1 local_c [4];
  STBoatC *local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(STBoatC **)(this->field_0029 + 0xc);
  local_10 = nullptr;
  local_24 = nullptr;
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
  iVar8 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,local_30->field_01C5,(int *)&local_8);
  if (iVar8 == -4) {
    return 0;
  }
  STFishC::sub_004162F0
            ((STFishC *)local_8,(undefined2 *)&pSVar2->field_0x304,
             (undefined2 *)&pSVar2->field_0x306,(undefined2 *)&pSVar2->field_0x308);
  local_20 = 0;
  *(int *)&pSVar2->field_0x30a = local_8->field_0018;
  local_40 = g_playSystem_00802A38->field_00E4;
  pSVar9 = local_8;
  array = local_24;
  local_18 = local_40;
  if (0 < (int)local_14) {
    do {
      DArrayGetElement((DArrayTy *)pSVar2->field_0029,local_20,local_c);
      if (STPiece<0,2>(local_c) != 0xffff) {
        local_8 = (STBoatC *)
                  STAllPlayersC::GetObjPtr
                            (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
        if (local_8 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xd64);
        }
        iVar8 = local_8->vfunc_F8();
        if (iVar8 != 0) {
          iVar8 = thunk_FUN_00490d90((STGameObjC *)local_8);
          if (iVar8 == 0) {
            dVar3 = local_8->slot_2C();
            if ((dVar3 == 7) || (dVar3 == 0x13)) {
              iVar8 = thunk_FUN_00492370((STGameObjC *)local_8);
              if (iVar8 == 0) {
                local_3a = *(undefined2 *)&pSVar2->field_0x306;
                local_3c = *(undefined2 *)&pSVar2->field_0x304;
                local_38 = *(undefined2 *)&pSVar2->field_0x308;
                local_36 = *(undefined4 *)&pSVar2->field_0x30a;
                STBoatC::CmdToObj(local_8,CASE_E,&local_40);
                pDVar4 = local_10;
                if (local_10 == nullptr) {
                  pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                  local_10 = pDVar4;
                }
                goto LAB_004a0b93;
              }
            }
            else {
              STBoatC::CmdToObj(local_8,CASE_3,&local_18);
            }
          }
          else {
            pDVar4 = array;
            if (array == nullptr) {
              array = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              pDVar4 = array;
              local_24 = array;
            }
LAB_004a0b93:
            Library::DKW::TBL::DArrayAppend(pDVar4,local_c);
          }
        }
      }
      local_20 = local_20 + 1;
      pSVar9 = local_14;
    } while ((int)local_20 < (int)local_14);
  }
  pDVar4 = local_10;
  if (local_10 == nullptr) {
LAB_004a0bcc:
    if (array != nullptr) {
      local_14 = (STBoatC *)array->count;
      uVar11 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(array,uVar11,local_c);
          local_8 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
          STBoatC::CmdToObj(local_8,CASE_3,&local_18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_14);
      }
      local_1c = 0;
    }
    pDVar4 = local_10;
    if (local_10 != nullptr) goto LAB_004a0c2f;
    if (array == nullptr) {
      local_1c = 0;
    }
LAB_004a0c2b:
    if (pDVar4 != nullptr) goto LAB_004a0c2f;
  }
  else {
    if (array != nullptr) {
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(pSVar9), (uint8_t)(pSVar2->field_0024)),
                 &local_10->flags,&array->flags);
      goto LAB_004a0c2b;
    }
    if (local_10 == nullptr) goto LAB_004a0bcc;
LAB_004a0c2f:
    DArrayDestroy(pDVar4);
  }
  if (array != nullptr) {
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
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar11,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          local_8 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
          if (local_8 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xd97);
          }
          iVar8 = local_8->vfunc_F8();
          if ((iVar8 != 0) &&
             (((dVar3 = local_8->slot_2C(), dVar3 == 7 || (dVar3 == 0x13)) ||
              (dVar3 == 0x1b)))) {
            local_28 = 1;
            iVar8 = thunk_FUN_0045ff10((STGameObjC *)local_8);
            if ((iVar8 == 0xe) || (uVar5 = STBoatC::CheckPBoxCmd(local_8,CASE_E), uVar5 == 1)) {
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

