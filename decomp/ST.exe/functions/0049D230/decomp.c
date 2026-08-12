#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpUnLoadRC */

undefined4 __thiscall STGroupBoatC::GrpUnLoadRC(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar5;
  STGroupBoatC *pSVar6;
  DArrayTy *array;
  int iVar6;
  STBoatC *this_00;
  dword dVar7;
  DArrayTy *array_00;
  STGameObjC *objPtr;
  int iVar8;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint index;
  STWorldObject *this_01;
  STBoatC_CmdToObj_param_1Enum SVar12;
  uint *puVar13;
  InternalExceptionFrame local_7c;
  uint local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  STGroupBoatC *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  DArrayTy *local_14;
  uint local_10;
  DArrayTy *local_c;
  undefined1 local_8 [4];

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_c = nullptr;
  local_14 = nullptr;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_2c = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  pSVar6 = local_2c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x99a,0,iVar6,"%s",
                               "STGroupBoatC::GrpUnLoadRC");
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x99b);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    uVar10 = 0;
    memset(&local_2c->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    local_2c->field_0065 = 0;
    local_20 = 0;
    uVar5 = local_2c->field_0158;
    local_2c->field_0295 = local_2c->field_0156;
    local_2c->field_0297 = uVar5;
    local_2c->field_0299 = local_2c->field_015A;
    local_34 = local_2c->field_0156;
    local_38 = g_playSystem_00802A38->field_00E4;
    local_30 = local_2c->field_015A;
    local_32 = local_2c->field_0158;
    array_00 = local_14;
    local_24 = local_38;
    if (local_10 != 0) {
      do {
        DArrayGetElement((DArrayTy *)pSVar6->field_0029,uVar10,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          this_00 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,pSVar6->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (this_00 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x960);
          }
          dVar7 = this_00->slot_2C();
          if (((dVar7 == 8) || (dVar7 = this_00->slot_2C(), dVar7 == 0x14)) ||
             (dVar7 = this_00->slot_2C(), dVar7 == 0x1a)) {
            if (array_00 == nullptr) {
              array_00 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_14 = array_00;
            }
            Library::DKW::TBL::DArrayAppend(array_00,local_8);
            puVar13 = &local_38;
            SVar12 = CASE_D;
          }
          else {
            iVar9 = thunk_FUN_00490d90((STGameObjC *)this_00);
            if (iVar9 != 0) {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }
              Library::DKW::TBL::DArrayAppend(local_c,local_8);
              goto LAB_0049d3ca;
            }
            puVar13 = &local_24;
            SVar12 = CASE_3;
          }
          STBoatC::CmdToObj(this_00,SVar12,puVar13);
        }
LAB_0049d3ca:
        local_20 = local_20 + 1;
        uVar10 = local_20 & 0xffff;
      } while (uVar10 < local_10);
    }
    array = local_c;
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar10), (uint8_t)(pSVar6->field_0024)),
               &array_00->flags,&local_c->flags);
    if (array_00 != nullptr) {
      DArrayDestroy(array_00);
    }
    if (array != nullptr) {
      DArrayDestroy(array);
    }
  }
  local_20 = 2;
  if (g_playSystem_00802A38->field_00E4 % 100 == 0) {
    sVar1 = pSVar6->field_0295;
    sVar2 = pSVar6->field_0299;
    sVar3 = pSVar6->field_0297;
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
        ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar2)) {
      this_01 = nullptr;
    }
    else {
      this_01 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    uVar10 = 0;
    if (((this_01 == nullptr) ||
        (this_01[1].vtable != (STWorldObjectVTable *)(int)pSVar6->field_0024)) ||
       ((iVar9 = this_01->GetObjectTypeId(), iVar9 != 0x3b &&
        (iVar9 = this_01->GetObjectTypeId(), iVar9 != 0x60)))) {
      local_20 = 0;
    }
    else {
      local_28 = 0;
      local_1c = 0;
      local_18 = 0;
      if (local_10 != 0) {
        index = 0;
        do {
          DArrayGetElement((DArrayTy *)pSVar6->field_0029,index,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            objPtr = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar6->field_0024,STPiece<0,2>(local_8),CASE_1);
            if (objPtr == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0x989);
            }
            iVar9 = (*objPtr->vtable->vfunc_2C)();
            if (((iVar9 == 8) || (iVar9 = (*objPtr->vtable->vfunc_2C)(), iVar9 == 0x14)) ||
               (iVar9 = (*objPtr->vtable->vfunc_2C)(), iVar9 == 0x1a)) {
              local_18 = local_18 + 1;
              local_1c = local_1c + objPtr->field_07DA + objPtr->field_07D6 + objPtr->field_07D2;
              if (0 < local_1c) break;
              iVar9 = thunk_FUN_0045ff10(objPtr);
              if (iVar9 == 0xd) {
                local_28 = 1;
                break;
              }
            }
          }
          uVar10 = uVar10 + 1;
          index = uVar10 & 0xffff;
        } while (index < local_10);
      }
      if ((local_18 == 0) || ((local_1c == 0 && (local_28 == 0)))) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_20;
}

