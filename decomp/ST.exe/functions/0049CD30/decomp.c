#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpBuild */

undefined4 __thiscall STGroupBoatC::GrpBuild(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  STGroupBoatC *pSVar4;
  DArrayTy *array;
  short sVar5;
  int iVar6;
  STBoatC *pSVar6;
  dword dVar7;
  DArrayTy *array_00;
  int iVar9;
  undefined4 uVar8;
  int iVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  short *psVar15;
  STBoatC_CmdToObj_param_1Enum SVar16;
  uint *puVar17;
  InternalExceptionFrame local_8c;
  uint local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined4 local_3e;
  undefined4 local_3a;
  char local_36 [14];
  undefined1 local_28;
  undefined2 local_27;
  STGroupBoatC *local_24;
  uint local_20;
  DArrayTy *local_1c;
  int local_18;
  uint local_14;
  DArrayTy *local_10;
  uint local_c;
  undefined1 local_8 [4];

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(uint *)(this->field_0029 + 0xc);
  local_10 = nullptr;
  local_1c = nullptr;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_24 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  pSVar4 = local_24;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x944,0,iVar6,"%s",
                               "STGroupBoatC::GrpBuild");
    if (iVar9 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x945);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_24->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar10 = 0;
    local_24->field_0065 = 0;
    psVar13 = &local_24->field_0137;
    psVar15 = &local_24->field_0276;
    for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)psVar15 = *(undefined4 *)psVar13;
      psVar13 = psVar13 + 2;
      psVar15 = psVar15 + 2;
    }
    *psVar15 = *psVar13;
    *(char *)(psVar15 + 1) = (char)psVar13[1];
    local_20 = g_playSystem_00802A38->field_00E4;
    local_44 = local_24->field_0137;
    local_48 = g_playSystem_00802A38->field_00E4;
    local_42 = local_24->field_0139;
    local_3e = local_24->field_013D;
    local_27 = local_24->field_0154;
    local_40 = local_24->field_013B;
    local_3a = *(undefined4 *)&local_24->field_0x141;
    Library::MSVCRT::_strncpy(local_36,&local_24->field_0145,0xe);
    uVar11 = 0;
    local_28 = 0;
    local_c = 0;
    array_00 = local_1c;
    if (local_14 != 0) {
      do {
        DArrayGetElement((DArrayTy *)pSVar4->field_0029,uVar11,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar6 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x90f);
          }
          dVar7 = pSVar6->slot_2C();
          if (((dVar7 == 0xc) || (dVar7 = pSVar6->slot_2C(), dVar7 == 0x18)) ||
             (dVar7 = pSVar6->slot_2C(), dVar7 == 0x19)) {
            if (array_00 == nullptr) {
              array_00 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_1c = array_00;
            }
            Library::DKW::TBL::DArrayAppend(array_00,local_8);
            puVar17 = &local_48;
            SVar16 = CASE_11;
          }
          else {
            iVar10 = thunk_FUN_00490d90((STGameObjC *)pSVar6);
            if (iVar10 != 0) {
              if (local_10 == nullptr) {
                local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }
              Library::DKW::TBL::DArrayAppend(local_10,local_8);
              goto LAB_0049cf10;
            }
            puVar17 = &local_20;
            SVar16 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar6,SVar16,puVar17);
        }
LAB_0049cf10:
        local_c = local_c + 1;
        uVar11 = local_c & 0xffff;
      } while (uVar11 < local_14);
    }
    array = local_10;
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar11), (uint8_t)(pSVar4->field_0024)),
               &array_00->flags,&local_10->flags);
    if (array_00 != nullptr) {
      DArrayDestroy(array_00);
    }
    if (array != nullptr) {
      DArrayDestroy(array);
    }
  }
  uVar11 = 0;
  local_c = 2;
  if (g_playSystem_00802A38->field_00E4 % 0x32 == 0) {
    sVar5 = pSVar4->field_0276;
    sVar1 = pSVar4->field_027A;
    sVar2 = pSVar4->field_0278;
    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
        ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar1)) {
      sVar5 = -1;
    }
    else {
      sVar5 = STGridAt3D(g_pathingGrid, sVar5, sVar2, sVar1);
    }
    if (sVar5 != 0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    local_18 = 0;
    if (local_14 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar4->field_0029,uVar12,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar6 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x938);
          }
          dVar7 = pSVar6->slot_2C();
          if (((((dVar7 == 0xc) || (dVar7 = pSVar6->slot_2C(), dVar7 == 0x18)) ||
               (dVar7 = pSVar6->slot_2C(), dVar7 == 0x19)) &&
              (iVar10 = thunk_FUN_0045ff10((STGameObjC *)pSVar6), iVar10 == 0x11)) ||
             (uVar12 = STBoatC::CheckPBoxCmd(pSVar6,CASE_11), uVar12 == 1)) {
            local_18 = local_18 + 1;
          }
        }
        uVar11 = uVar11 + 1;
        uVar12 = uVar11 & 0xffff;
      } while (uVar12 < local_14);
    }
    if (local_18 == 0) {
      local_c = 0;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return local_c;
}

