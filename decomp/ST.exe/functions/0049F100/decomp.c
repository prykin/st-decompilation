#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Capture */

undefined4 __thiscall STGroupBoatC::Capture(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  DArrayTy *array;
  int iVar3;
  STBoatC *pSVar4;
  DArrayTy *array_00;
  STGameObjC *pSVar5;
  int iVar6;
  undefined4 uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  STBoatC_CmdToObj_param_1Enum SVar13;
  uint *puVar14;
  undefined4 local_9c [5];
  int local_87;
  InternalExceptionFrame local_7c;
  STGroupBoatC *local_38;
  STBoatC *local_34;
  uint local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined4 local_29;
  undefined4 local_24;
  DArrayTy *local_20;
  int local_1c;
  DArrayTy *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(uint *)(this->field_0029 + 0xc);
  local_18 = (DArrayTy *)0x0;
  local_20 = (DArrayTy *)0x0;
  local_1c = 0;
  local_24 = 2;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_38 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  pSVar2 = local_38;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xbf4,0,iVar3,"%s",
                               "STGroupBoatC::Capture");
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xbf5);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if ((param_1 == 0) || (uVar8 = extraout_var, param_1 == 1)) {
    memset(&local_38->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    local_38->field_0065 = 0;
    local_10 = 0;
    *(undefined4 *)&local_38->field_0x2c3 = *(undefined4 *)&local_38->field_0x192;
    *(undefined2 *)&local_38->field_0x2c7 = local_38->field_0196;
    local_38->field_0x2c9 = local_38->field_0198;
    local_2c = local_38->field_0x192;
    local_2b = *(undefined2 *)&local_38->field_0x193;
    *(undefined4 *)&local_38->field_0x2ca = 0;
    local_30 = PTR_00802a38->field_00E4;
    local_29 = *(undefined4 *)&local_38->field_0x195;
    array_00 = local_20;
    local_14 = local_30;
    if (local_c != 0) {
      uVar9 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar9,&local_8);
        if ((short)local_8 != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
          if (pSVar4 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xbb4);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar3 = (*(code *)pSVar4->vtable->field_002C)();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((iVar3 == 6) || (iVar3 = (*(code *)pSVar4->vtable->field_002C)(), iVar3 == 0x12)) ||
             (iVar3 = (*(code *)pSVar4->vtable->field_002C)(), iVar3 == 0x22)) {
            if (array_00 == (DArrayTy *)0x0) {
              array_00 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
              local_20 = array_00;
            }
            Library::DKW::TBL::FUN_006ae1c0(&array_00->flags,&local_8);
            puVar14 = &local_30;
            SVar13 = CASE_9;
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)pSVar4);
            if (iVar3 != 0) {
              if (local_18 == (DArrayTy *)0x0) {
                local_18 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(&local_18->flags,&local_8);
              goto LAB_0049f2b2;
            }
            puVar14 = &local_14;
            SVar13 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar4,SVar13,puVar14);
        }
LAB_0049f2b2:
        local_10 = local_10 + 1;
        uVar9 = local_10 & 0xffff;
      } while (uVar9 < local_c);
    }
    array = local_18;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(local_c >> 8),pSVar2->field_0024),
               &array_00->flags,&local_18->flags);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar8 = extraout_var_00;
    if (array_00 != (DArrayTy *)0x0) {
      DArrayDestroy(array_00);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar8 = extraout_var_01;
    }
    if (array != (DArrayTy *)0x0) {
      DArrayDestroy(array);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar8 = extraout_var_02;
    }
  }
  uVar9 = 0;
  if (*(int *)&pSVar2->field_0x2ca == 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    pSVar5 = STAllPlayersC::GetObjPtr
                       (g_sTAllPlayers_007FA174,pSVar2->field_0x2c3,
                        CONCAT22(uVar8,*(undefined2 *)&pSVar2->field_0x2c4),CASE_1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((pSVar5 == (STGameObjC *)0x0) || (pSVar5->field_0018 != *(int *)&pSVar2->field_0x2c6)) ||
       (iVar3 = (**(code **)&pSVar5->vtable[1].field_0x38)((int)pSVar2->field_0024), iVar3 == 0)) {
      *(undefined4 *)&pSVar2->field_0x2ca = 1;
      local_10 = 0;
      local_14 = PTR_00802a38->field_00E4;
      if (0 < (int)local_c) {
        uVar9 = 0;
        do {
          DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar9,&local_8);
          if ((short)local_8 != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
            local_34 = pSVar4;
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xbda);
            }
            iVar3 = thunk_FUN_0045ff10((int)pSVar4);
            if (iVar3 == 9) {
              puVar11 = (undefined4 *)&pSVar4->field_05FC;
              puVar12 = local_9c;
              for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
              }
              *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
              pSVar4 = local_34;
              if (3 < local_87) goto LAB_0049f3f5;
            }
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_14);
          }
LAB_0049f3f5:
          local_10 = local_10 + 1;
          uVar9 = local_10 & 0xffff;
          if ((int)local_c <= (int)uVar9) {
            g_currentExceptionFrame = local_7c.previous;
            return local_24;
          }
        } while( true );
      }
    }
  }
  else if (PTR_00802a38->field_00E4 % 0x14 == 5) {
    if (0 < (int)local_c) {
      uVar10 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
          if (pSVar4 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xbeb);
          }
          iVar3 = thunk_FUN_0045ff10((int)pSVar4);
          if ((iVar3 == 9) || (uVar10 = STBoatC::CheckPBoxCmd(pSVar4,CASE_9), uVar10 == 1)) {
            local_1c = local_1c + 1;
            break;
          }
        }
        uVar9 = uVar9 + 1;
        uVar10 = uVar9 & 0xffff;
      } while ((int)uVar10 < (int)local_c);
    }
    if (local_1c == 0) {
      local_24 = 0;
    }
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_24;
}

