#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpBuild */

undefined4 __thiscall STGroupBoatC::GrpBuild(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  STGroupBoatC *pSVar4;
  DArrayTy *array;
  short sVar5;
  int iVar6;
  STBoatC *pSVar7;
  DArrayTy *array_00;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  uint *puVar15;
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
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(uint *)(this->field_0029 + 0xc);
  local_10 = (DArrayTy *)0x0;
  local_1c = (DArrayTy *)0x0;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_24 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  pSVar4 = local_24;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x944,0,iVar6,"%s",
                               "STGroupBoatC::GrpBuild");
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x945);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_24->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar6 = 0;
    local_24->field_0065 = 0;
    puVar12 = (undefined4 *)&local_24->field_0137;
    puVar13 = (undefined4 *)&local_24->field_0276;
    for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    *(undefined2 *)puVar13 = *(undefined2 *)puVar12;
    *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)((int)puVar12 + 2);
    local_20 = PTR_00802a38->field_00E4;
    local_44 = local_24->field_0137;
    local_48 = PTR_00802a38->field_00E4;
    local_42 = local_24->field_0139;
    local_3e = local_24->field_013D;
    local_27 = local_24->field_0154;
    local_40 = local_24->field_013B;
    local_3a = local_24->field_0141;
    Library::MSVCRT::_strncpy(local_36,&local_24->field_0x145,0xe);
    uVar10 = 0;
    local_28 = 0;
    local_c = 0;
    array_00 = local_1c;
    if (local_14 != 0) {
      do {
        DArrayGetElement((DArrayTy *)pSVar4->field_0029,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar7 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,pSVar4->field_0024,local_8,CASE_1);
          if (pSVar7 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x90f);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (*(code *)pSVar7->vtable->field_002C)();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((iVar6 == 0xc) || (iVar6 = (*(code *)pSVar7->vtable->field_002C)(), iVar6 == 0x18))
             || (iVar6 = (*(code *)pSVar7->vtable->field_002C)(), iVar6 == 0x19)) {
            if (array_00 == (DArrayTy *)0x0) {
              array_00 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
              local_1c = array_00;
            }
            Library::DKW::TBL::FUN_006ae1c0(&array_00->flags,&local_8);
            puVar15 = &local_48;
            SVar14 = CASE_11;
          }
          else {
            iVar6 = thunk_FUN_00490d90((int)pSVar7);
            if (iVar6 != 0) {
              if (local_10 == (DArrayTy *)0x0) {
                local_10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(&local_10->flags,&local_8);
              goto LAB_0049cf10;
            }
            puVar15 = &local_20;
            SVar14 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar7,SVar14,puVar15);
        }
LAB_0049cf10:
        local_c = local_c + 1;
        uVar10 = local_c & 0xffff;
      } while (uVar10 < local_14);
    }
    array = local_10;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(uVar10 >> 8),pSVar4->field_0024),
               &array_00->flags,&local_10->flags);
    if (array_00 != (DArrayTy *)0x0) {
      DArrayDestroy(array_00);
    }
    if (array != (DArrayTy *)0x0) {
      DArrayDestroy(array);
    }
  }
  uVar10 = 0;
  local_c = 2;
  if (PTR_00802a38->field_00E4 % 0x32 == 0) {
    sVar5 = pSVar4->field_0276;
    sVar1 = pSVar4->field_027A;
    sVar2 = pSVar4->field_0278;
    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
        ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar1)) {
      sVar5 = -1;
    }
    else {
      sVar5 = g_pathingGrid.cells
              [(int)sVar2 * (int)g_pathingGrid.sizeX + (int)sVar1 * (int)g_pathingGrid.planeStride +
               (int)sVar5];
    }
    if (sVar5 != 0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    local_18 = 0;
    if (local_14 != 0) {
      uVar11 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar4->field_0029,uVar11,&local_8);
        if ((short)local_8 != -1) {
          pSVar7 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,pSVar4->field_0024,local_8,CASE_1);
          if (pSVar7 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x938);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (*(code *)pSVar7->vtable->field_002C)();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((((iVar6 == 0xc) || (iVar6 = (*(code *)pSVar7->vtable->field_002C)(), iVar6 == 0x18))
               || (iVar6 = (*(code *)pSVar7->vtable->field_002C)(), iVar6 == 0x19)) &&
              (iVar6 = thunk_FUN_0045ff10((int)pSVar7), iVar6 == 0x11)) ||
             (uVar11 = STBoatC::CheckPBoxCmd(pSVar7,CASE_11), uVar11 == 1)) {
            local_18 = local_18 + 1;
          }
        }
        uVar10 = uVar10 + 1;
        uVar11 = uVar10 & 0xffff;
      } while (uVar11 < local_14);
    }
    if (local_18 == 0) {
      local_c = 0;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return local_c;
}

