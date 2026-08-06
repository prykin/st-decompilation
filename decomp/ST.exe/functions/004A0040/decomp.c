#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpDismant */

undefined4 __thiscall STGroupBoatC::GrpDismant(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar5;
  STGroupBoatC *pSVar6;
  DArrayTy *array;
  int iVar7;
  STBoatC *pSVar7;
  dword dVar8;
  DArrayTy *array_00;
  int iVar10;
  undefined4 uVar9;
  int iVar11;
  uint uVar12;
  uint uVar13;
  AnonShape_004B9D90_4F3151F9 *pAVar15;
  STBoatC_CmdToObj_param_1Enum SVar16;
  uint *puVar17;
  InternalExceptionFrame local_78;
  uint local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined4 local_2a;
  STGroupBoatC *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  DArrayTy *local_14;
  uint local_10;
  DArrayTy *local_c;
  undefined1 local_8 [4];

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_c = nullptr;
  local_14 = nullptr;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_24 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  pSVar6 = local_24;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar7 == -0x5001fff7) {
      return 0;
    }
    iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xd02,0,iVar7,"%s",
                                "STGroupBoatC::GrpDismant");
    if (iVar10 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xd03);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_24->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar11 = 0;
    *(undefined2 *)&local_24->field_0x2f0 = *(undefined2 *)&local_24->field_0x1bb;
    local_24->field_0065 = 0;
    *(undefined2 *)&local_24->field_0x2ee = *(undefined2 *)&local_24->field_0x1b9;
    *(undefined2 *)&local_24->field_0x2f2 = local_24->field_01BD;
    if (g_worldGrid.sizeZ + -2 < (int)(short)local_24->field_01BD) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0xcc7);
    }
    sVar1 = *(short *)&pSVar6->field_0x2ee;
    sVar2 = *(short *)&pSVar6->field_0x2f2;
    sVar3 = *(short *)&pSVar6->field_0x2f0;
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
      pAVar15 = nullptr;
    }
    else {
      pAVar15 = (AnonShape_004B9D90_4F3151F9 *)
                STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if (((pAVar15 == nullptr) || (*(int *)&pAVar15->field_0x20 != 1000))
       || ((*(int *)&pAVar15->field_0x24 != (int)pSVar6->field_0024 ||
           (iVar11 = thunk_FUN_004b9d90(pAVar15), iVar11 == 0)))) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0xccc);
    }
    uVar5 = *(undefined2 *)&pAVar15->field_0x1a;
    local_1c = 0;
    *(undefined2 *)&pSVar6->field_0x2f4 = *(undefined2 *)&pAVar15->field_0x18;
    pSVar6->field_02F6 = uVar5;
    local_2e = *(undefined2 *)&pSVar6->field_0x2f0;
    local_34 = g_playSystem_00802A38->field_00E4;
    local_2c = *(undefined2 *)&pSVar6->field_0x2f2;
    uVar12 = STReplaceLowWord((uint32_t)(g_playSystem_00802A38), (uint16_t)(local_2c));
    local_30 = *(undefined2 *)&pSVar6->field_0x2ee;
    local_2a = *(undefined4 *)&pSVar6->field_0x2f4;
    array_00 = local_14;
    local_18 = local_34;
    if (local_10 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar6->field_0029,uVar12,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar7 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar6->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar7 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xcd4);
          }
          dVar8 = pSVar7->slot_2C();
          if (((dVar8 == 0xc) || (dVar8 = pSVar7->slot_2C(), dVar8 == 0x18)) ||
             (dVar8 = pSVar7->slot_2C(), dVar8 == 0x1d)) {
            if (array_00 == nullptr) {
              array_00 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_14 = array_00;
            }
            Library::DKW::TBL::DArrayAppend(array_00,local_8);
            puVar17 = &local_34;
            SVar16 = CASE_12;
          }
          else {
            iVar11 = thunk_FUN_00490d90((STGameObjC *)pSVar7);
            if (iVar11 != 0) {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }
              Library::DKW::TBL::DArrayAppend(local_c,local_8);
              goto LAB_004a02d6;
            }
            puVar17 = &local_18;
            SVar16 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar7,SVar16,puVar17);
        }
LAB_004a02d6:
        local_1c = local_1c + 1;
        uVar12 = local_1c & 0xffff;
      } while (uVar12 < local_10);
    }
    array = local_c;
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar12), (uint8_t)(pSVar6->field_0024)),
               &array_00->flags,&local_c->flags);
    if (array_00 != nullptr) {
      DArrayDestroy(array_00);
    }
    if (array != nullptr) {
      DArrayDestroy(array);
    }
  }
  uVar12 = 0;
  local_1c = 2;
  if (g_playSystem_00802A38->field_00E4 % 0x1e == 0xc) {
    local_20 = 0;
    if (local_10 != 0) {
      uVar13 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar6->field_0029,uVar13,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar7 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar6->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar7 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xcf6);
          }
          dVar8 = pSVar7->slot_2C();
          if (((((dVar8 == 0xc) || (dVar8 = pSVar7->slot_2C(), dVar8 == 0x18)) ||
               (dVar8 = pSVar7->slot_2C(), dVar8 == 0x1d)) &&
              (iVar11 = thunk_FUN_0045ff10((STGameObjC *)pSVar7), iVar11 == 0x12)) ||
             (uVar13 = STBoatC::CheckPBoxCmd(pSVar7,CASE_12), uVar13 == 1)) {
            local_20 = 1;
            break;
          }
        }
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xffff;
      } while (uVar13 < local_10);
    }
    if (local_20 == 0) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return local_1c;
}

