#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpUnLoadRC */

undefined4 __thiscall STGroupBoatC::GrpUnLoadRC(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  STGroupBoatC *pSVar5;
  DArrayTy *array;
  int iVar6;
  STBoatC *this_00;
  dword dVar7;
  DArrayTy *array_00;
  STGameObjC *pSVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint index;
  STWorldObject *this_01;
  undefined4 *puVar12;
  STBoatC_CmdToObj_param_1Enum SVar13;
  InternalExceptionFrame local_7c;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  STGroupBoatC *local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  int local_18;
  DArrayTy *local_14;
  uint local_10;
  DArrayTy *local_c;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_c = (DArrayTy *)0x0;
  local_14 = (DArrayTy *)0x0;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_2c = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  pSVar5 = local_2c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x99a,0,iVar6,"%s",
                               "STGroupBoatC::GrpUnLoadRC");
    if (iVar9 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x99b);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    uVar11 = 0;
    puVar12 = &local_2c->field_0089;
    for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    local_2c->field_0065 = 0;
    local_20 = 0;
    *(undefined4 *)&local_2c->field_0x295 = *(undefined4 *)&local_2c->field_0x156;
    local_2c->field_0299 = local_2c->field_015A;
    local_34 = *(undefined2 *)&local_2c->field_0x156;
    local_38 = PTR_00802a38->field_00E4;
    local_30 = local_2c->field_015A;
    local_32 = *(undefined2 *)&local_2c->field_0x158;
    array_00 = local_14;
    local_24 = local_38;
    if (local_10 != 0) {
      do {
        DArrayGetElement((DArrayTy *)pSVar5->field_0029,uVar11,&local_8);
        if ((short)local_8 != -1) {
          this_00 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,pSVar5->field_0024,local_8,CASE_1);
          if (this_00 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x960);
          }
          dVar7 = (*this_00->vtable->slot_2C)(this_00);
          if (((dVar7 == 8) || (dVar7 = (*this_00->vtable->slot_2C)(this_00), dVar7 == 0x14)) ||
             (dVar7 = (*this_00->vtable->slot_2C)(this_00), dVar7 == 0x1a)) {
            if (array_00 == (DArrayTy *)0x0) {
              array_00 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_14 = array_00;
            }
            Library::DKW::TBL::FUN_006ae1c0(&array_00->flags,&local_8);
            puVar12 = &local_38;
            SVar13 = CASE_D;
          }
          else {
            iVar6 = thunk_FUN_00490d90((int)this_00);
            if (iVar6 != 0) {
              if (local_c == (DArrayTy *)0x0) {
                local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
              goto LAB_0049d3ca;
            }
            puVar12 = &local_24;
            SVar13 = CASE_3;
          }
          STBoatC::CmdToObj(this_00,SVar13,puVar12);
        }
LAB_0049d3ca:
        local_20 = local_20 + 1;
        uVar11 = local_20 & 0xffff;
      } while (uVar11 < local_10);
    }
    array = local_c;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(uVar11 >> 8),pSVar5->field_0024),
               &array_00->flags,&local_c->flags);
    if (array_00 != (DArrayTy *)0x0) {
      DArrayDestroy(array_00);
    }
    if (array != (DArrayTy *)0x0) {
      DArrayDestroy(array);
    }
  }
  local_20 = 2;
  if ((uint)PTR_00802a38->field_00E4 % 100 == 0) {
    sVar1 = *(short *)&pSVar5->field_0x295;
    sVar2 = pSVar5->field_0299;
    sVar3 = *(short *)&pSVar5->field_0x297;
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
        ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar2)) {
      this_01 = (STWorldObject *)0x0;
    }
    else {
      this_01 = g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                 (int)sVar1].objects[0];
    }
    uVar11 = 0;
    if (((this_01 == (STWorldObject *)0x0) ||
        (this_01[1].vtable != (STWorldObjectVTable *)(int)pSVar5->field_0024)) ||
       ((iVar6 = (*this_01->vtable->GetObjectTypeId)(this_01), iVar6 != 0x3b &&
        (iVar6 = (*this_01->vtable->GetObjectTypeId)(this_01), iVar6 != 0x60)))) {
      local_20 = 0;
    }
    else {
      local_28 = 0;
      local_1c = 0;
      local_18 = 0;
      if (local_10 != 0) {
        index = 0;
        do {
          DArrayGetElement((DArrayTy *)pSVar5->field_0029,index,&local_8);
          if ((short)local_8 != -1) {
            pSVar8 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar5->field_0024,local_8,CASE_1);
            if (pSVar8 == (STGameObjC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0x989);
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar6 = (**(code **)&pSVar8->vtable->field_0x2c)();
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            if (((iVar6 == 8) || (iVar6 = (**(code **)&pSVar8->vtable->field_0x2c)(), iVar6 == 0x14)
                ) || (iVar6 = (**(code **)&pSVar8->vtable->field_0x2c)(), iVar6 == 0x1a)) {
              local_18 = local_18 + 1;
              local_1c = local_1c + pSVar8->field_07DA + pSVar8->field_07D6 + pSVar8->field_07D2;
              if (0 < local_1c) break;
              iVar6 = thunk_FUN_0045ff10((int)pSVar8);
              if (iVar6 == 0xd) {
                local_28 = 1;
                break;
              }
            }
          }
          uVar11 = uVar11 + 1;
          index = uVar11 & 0xffff;
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

