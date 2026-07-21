#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpDismant */

undefined4 __thiscall STGroupBoatC::GrpDismant(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  undefined2 uVar5;
  STGroupBoatC *pSVar6;
  DArrayTy *array;
  int iVar7;
  STBoatC *pSVar8;
  DArrayTy *array_00;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  AnonShape_004B9D90_4F3151F9 *pAVar14;
  STBoatC_CmdToObj_param_1Enum SVar15;
  uint *puVar16;
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
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_c = (DArrayTy *)0x0;
  local_14 = (DArrayTy *)0x0;
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
    iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xd02,0,iVar7,"%s",
                               "STGroupBoatC::GrpDismant");
    if (iVar9 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xd03);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_24->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar7 = 0;
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
      pAVar14 = (AnonShape_004B9D90_4F3151F9 *)0x0;
    }
    else {
      pAVar14 = (AnonShape_004B9D90_4F3151F9 *)
                g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                 (int)sVar1].objects[0];
    }
    if (((pAVar14 == (AnonShape_004B9D90_4F3151F9 *)0x0) || (*(int *)&pAVar14->field_0x20 != 1000))
       || ((*(int *)&pAVar14->field_0x24 != (int)pSVar6->field_0024 ||
           (iVar7 = thunk_FUN_004b9d90(pAVar14), iVar7 == 0)))) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0xccc);
    }
    uVar5 = *(undefined2 *)&pAVar14->field_0x1a;
    local_1c = 0;
    *(undefined2 *)&pSVar6->field_0x2f4 = *(undefined2 *)&pAVar14->field_0x18;
    pSVar6->field_02F6 = uVar5;
    local_2e = *(undefined2 *)&pSVar6->field_0x2f0;
    local_34 = PTR_00802a38->field_00E4;
    local_2c = *(undefined2 *)&pSVar6->field_0x2f2;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar11 = CONCAT22((short)((uint)PTR_00802a38 >> 0x10),local_2c);
    local_30 = *(undefined2 *)&pSVar6->field_0x2ee;
    local_2a = *(undefined4 *)&pSVar6->field_0x2f4;
    array_00 = local_14;
    local_18 = local_34;
    if (local_10 != 0) {
      uVar11 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar6->field_0029,uVar11,&local_8);
        if ((short)local_8 != -1) {
          pSVar8 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,pSVar6->field_0024,local_8,CASE_1);
          if (pSVar8 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xcd4);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (*(code *)pSVar8->vtable->field_002C)();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((iVar7 == 0xc) || (iVar7 = (*(code *)pSVar8->vtable->field_002C)(), iVar7 == 0x18))
             || (iVar7 = (*(code *)pSVar8->vtable->field_002C)(), iVar7 == 0x1d)) {
            if (array_00 == (DArrayTy *)0x0) {
              array_00 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
              local_14 = array_00;
            }
            Library::DKW::TBL::FUN_006ae1c0(&array_00->flags,&local_8);
            puVar16 = &local_34;
            SVar15 = CASE_12;
          }
          else {
            iVar7 = thunk_FUN_00490d90((int)pSVar8);
            if (iVar7 != 0) {
              if (local_c == (DArrayTy *)0x0) {
                local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
              goto LAB_004a02d6;
            }
            puVar16 = &local_18;
            SVar15 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar8,SVar15,puVar16);
        }
LAB_004a02d6:
        local_1c = local_1c + 1;
        uVar11 = local_1c & 0xffff;
      } while (uVar11 < local_10);
    }
    array = local_c;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(uVar11 >> 8),pSVar6->field_0024),
               &array_00->flags,&local_c->flags);
    if (array_00 != (DArrayTy *)0x0) {
      DArrayDestroy(array_00);
    }
    if (array != (DArrayTy *)0x0) {
      DArrayDestroy(array);
    }
  }
  uVar11 = 0;
  local_1c = 2;
  if (PTR_00802a38->field_00E4 % 0x1e == 0xc) {
    local_20 = 0;
    if (local_10 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar6->field_0029,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar8 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,pSVar6->field_0024,local_8,CASE_1);
          if (pSVar8 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xcf6);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (*(code *)pSVar8->vtable->field_002C)();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((((iVar7 == 0xc) || (iVar7 = (*(code *)pSVar8->vtable->field_002C)(), iVar7 == 0x18))
               || (iVar7 = (*(code *)pSVar8->vtable->field_002C)(), iVar7 == 0x1d)) &&
              (iVar7 = thunk_FUN_0045ff10((int)pSVar8), iVar7 == 0x12)) ||
             (uVar12 = STBoatC::CheckPBoxCmd(pSVar8,CASE_12), uVar12 == 1)) {
            local_20 = 1;
            break;
          }
        }
        uVar11 = uVar11 + 1;
        uVar12 = uVar11 & 0xffff;
      } while (uVar12 < local_10);
    }
    if (local_20 == 0) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return local_1c;
}

