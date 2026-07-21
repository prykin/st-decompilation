#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::RechargeNewCmd */

void __thiscall STGroupBoatC::RechargeNewCmd(STGroupBoatC *this,void *param_1)

{
  STBoatC_field_06F7State SVar1;
  code *pcVar2;
  uint uVar3;
  STGroupBoatC *this_00;
  int iVar4;
  STGameObjC *pSVar5;
  STBoatC *pSVar6;
  dword dVar7;
  DArrayTy *pDVar8;
  DArrayTy *pDVar9;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_19;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_20;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_21;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_22;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_23;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_24;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STGroupBoatC_field_01E6State extraout_ECX_25;
  STGroupBoatC_field_01E6State SVar11;
  uint uVar12;
  uint uVar13;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  STBoatC_CmdToObj_param_1Enum SVar14;
  undefined4 *puVar15;
  InternalExceptionFrame local_19c;
  STGroupBoatC *local_158;
  undefined4 local_154;
  undefined2 local_150;
  undefined2 local_14e;
  undefined2 local_14c;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_13a;
  undefined2 local_136;
  undefined1 local_134;
  undefined2 local_133;
  uint *local_130 [3];
  short local_124;
  short local_122;
  short local_120;
  undefined4 local_114;
  short local_110;
  undefined4 local_102;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  uint local_e8;
  undefined4 local_e4 [3];
  undefined4 local_d8;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined4 local_ce;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined4 local_ae;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined4 local_98;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  undefined1 local_84;
  undefined2 local_83;
  undefined4 local_81;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined4 local_4c;
  uint local_48;
  STGroupBoatC_field_01E6State local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  DArrayTy *local_28;
  undefined2 local_22;
  short local_20;
  short local_1e;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(uint *)(this->field_002D + 0xc);
  local_e8 = 0xffffffff;
  local_c = (DArrayTy *)0x0;
  local_10 = (DArrayTy *)0x0;
  local_19c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_19c;
  local_158 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_19c.jumpBuffer,0);
  this_00 = local_158;
  uVar12 = local_14;
  uVar13 = local_14;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_19c.previous;
    if (iVar4 == -0x5001fff7) {
      return;
    }
    iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x10dc,0,iVar4,"%s"
                                ,"STGroupBoatC::RechargeNewCmd");
    if (iVar10 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x10dd);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  while (uVar13 = uVar13 - 1, -1 < (int)uVar13) {
    DArrayGetElement((DArrayTy *)this_00->field_002D,uVar13,&local_8);
    pSVar5 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
    if ((pSVar5 == (STGameObjC *)0x0) || (pSVar5->field_0020 != 0x14)) {
      FUN_006b0c70((DArrayTy *)this_00->field_002D,uVar13);
      uVar12 = uVar12 - 1;
    }
  }
  if (uVar12 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0xdf7
              );
  }
  SVar11 = this_00->field_01E6;
  uVar13 = ((DArrayTy *)this_00->field_002D)->count;
  local_14 = uVar13;
  if (SVar11 == CASE_1) {
    InitWay(this_00,(DArrayTy *)this_00->field_002D,this_00->field_003D,this_00->field_0041,
            this_00->field_0045);
    uVar12 = 0;
    local_18 = 0;
    SVar11 = PTR_00802a38->field_00E4;
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = SVar11;
    if (uVar13 != 0) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        pSVar6 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
        if (pSVar6 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xe03);
        }
        STBoatC::CmdToObj(pSVar6,CASE_1,&local_44);
        local_18 = local_18 + 1;
        uVar12 = local_18 & 0xffff;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        SVar11 = extraout_ECX;
      } while (uVar12 < uVar13);
    }
  }
  if (this_00->field_01E6 == CASE_3) {
    local_18 = 0;
    local_1c = PTR_00802a38->field_00E4;
    if (uVar13 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        pSVar6 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
        if (pSVar6 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xe46);
        }
        STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
        local_18 = local_18 + 1;
        uVar12 = local_18 & 0xffff;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        SVar11 = extraout_ECX_00;
      } while (uVar12 < uVar13);
    }
  }
  if (this_00->field_01E6 == CASE_2) {
    DistributeTargets(this_00,(uint *)this_00->field_002D);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    SVar11 = extraout_ECX_01;
  }
  if (this_00->field_01E6 == CASE_6) {
    local_4c = PTR_00802a38->field_00E4;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    ReMakePatrolPoints(this_00,unaff_EDI);
    local_28 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    if (this_00->field_022E->field_000C == 0) {
      uVar12 = 0;
      local_18 = 0;
      if (uVar13 != 0) {
        uVar13 = 0;
        do {
          DArrayGetElement((DArrayTy *)this_00->field_002D,uVar13,&local_8);
          local_110 = (short)local_8;
          local_114 = 0;
          local_102 = 0;
          Library::DKW::TBL::FUN_006ae140((uint *)this_00->field_022E,uVar12,&local_114);
          local_48 = uVar12;
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xe77,0,0,
                                       "%s","STGroupBoatC::RechargeNewCmd Patrol NULL value");
            if (iVar4 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xe78);
          }
          Library::DKW::TBL::FUN_006ae1c0(&local_28->flags,&local_8);
          STBoatC::CmdToObj(pSVar6,CASE_6,&local_4c);
          uVar12 = uVar12 + 1;
          local_18 = local_18 + 1;
          uVar13 = local_18 & 0xffff;
        } while (uVar13 < local_14);
      }
    }
    else {
      local_18 = 0;
      if (uVar13 != 0) {
        do {
          uVar13 = this_00->field_022E->field_000C;
          uVar12 = uVar13;
          uVar3 = local_18;
          while (uVar13 = uVar13 - 1, local_18 = uVar3, -1 < (int)uVar13) {
            DArrayGetElement((DArrayTy *)this_00->field_022E,uVar13,&local_114);
            uVar3 = local_18;
            if (local_110 == -1) {
              uVar12 = uVar13;
            }
          }
          DArrayGetElement((DArrayTy *)this_00->field_002D,uVar3 & 0xffff,&local_8);
          local_114 = 0;
          local_102 = 0;
          local_110 = (short)local_8;
          Library::DKW::TBL::FUN_006ae140((uint *)this_00->field_022E,uVar12,&local_114);
          local_48 = uVar12;
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xe64,0,0,
                                       "%s","STGroupBoatC::RechargeNewCmd Patrol NULL value");
            if (iVar4 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xe65);
          }
          Library::DKW::TBL::FUN_006ae1c0(&local_28->flags,&local_8);
          STBoatC::CmdToObj(pSVar6,CASE_6,&local_4c);
          local_18 = uVar3 + 1;
        } while ((local_18 & 0xffff) < local_14);
      }
    }
    DArrayGetElement((DArrayTy *)this_00->field_022A,this_00->field_0232,&local_124);
    pDVar9 = local_28;
    if (local_28->count != 0) {
      InitWay(this_00,local_28,(int)local_124,(int)local_122,(int)local_120);
    }
    DArrayDestroy(pDVar9);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    SVar11 = extraout_ECX_02;
  }
  if (this_00->field_01E6 == CASE_7) {
    uVar13 = 0;
    SVar11 = PTR_00802a38->field_00E4;
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = SVar11;
    if (local_14 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        pSVar6 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
        if (pSVar6 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xe8c);
        }
        STFishC::sub_004162B0((STFishC *)pSVar6,&local_20,&local_1e,&local_22);
        STBoatC::sub_00481520
                  (pSVar6,(int)local_20,(int)local_1e,*(undefined4 *)&this_00->field_0x222);
        STBoatC::CmdToObj(pSVar6,CASE_1,&local_44);
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        SVar11 = extraout_ECX_03;
      } while (uVar12 < local_14);
    }
  }
  if (this_00->field_01E6 == CASE_8) {
    local_18 = 0;
    local_1c = PTR_00802a38->field_00E4;
    if (local_14 != 0) {
      do {
        uVar13 = local_18 & 0xffff;
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar13,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xe9a);
          }
          dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6);
          if (((dVar7 != 8) && (dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6), dVar7 != 0x14)) &&
             (dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6), dVar7 != 0x1a)) {
            iVar4 = thunk_FUN_00490d90((int)pSVar6);
            if (iVar4 == 0) {
              STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
            }
            else {
              if (local_c == (DArrayTy *)0x0) {
                local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
            }
            FUN_006b0c70((DArrayTy *)this_00->field_002D,uVar13);
            local_18 = local_18 + 0xffff;
            local_14 = local_14 - 1;
          }
        }
        local_18 = local_18 + 1;
      } while ((local_18 & 0xffff) < local_14);
    }
    uVar13 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar5 == (STGameObjC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xeb0);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)&pSVar5->vtable->field_0x2c)();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((iVar4 == 8) || (iVar4 = (**(code **)&pSVar5->vtable->field_0x2c)(), iVar4 == 0x14))
             || (iVar4 = (**(code **)&pSVar5->vtable->field_0x2c)(), iVar4 == 0x1a)) {
            if (local_10 == (DArrayTy *)0x0) {
              local_10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(&local_10->flags,&local_8);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    pDVar9 = local_c;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(local_18 >> 8),this_00->field_0024),
               &local_10->flags,&local_c->flags);
    if (local_10 != (DArrayTy *)0x0) {
      DArrayDestroy(local_10);
    }
    if (pDVar9 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar9);
    }
    DistributeMD(this_00,1,(DArrayTy *)this_00->field_024E,(DArrayTy *)this_00->field_0266,
                 (DArrayTy *)this_00->field_002D);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    SVar11 = extraout_ECX_04;
  }
  if (this_00->field_01E6 == CASE_9) {
    uVar13 = 0;
    local_1c = PTR_00802a38->field_00E4;
    local_154 = PTR_00802a38->field_00E4;
    local_150 = this_00->field_0276;
    local_14e = this_00->field_0278;
    local_14a = this_00->field_027C;
    local_14c = this_00->field_027A;
    local_146 = this_00->field_0280;
    local_133 = this_00->field_0293;
    local_142 = this_00->field_0284;
    local_13e = this_00->field_0288;
    local_13a = this_00->field_028C;
    local_136 = this_00->field_0290;
    local_134 = this_00->field_0292;
    if (local_14 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xecf);
          }
          dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6);
          if (((dVar7 == 0xc) || (dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6), dVar7 == 0x18)) ||
             (dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6), dVar7 == 0x19)) {
            puVar15 = &local_154;
            SVar14 = CASE_11;
          }
          else {
            iVar4 = thunk_FUN_00490d90((int)pSVar6);
            if (iVar4 != 0) {
              if (local_c == (DArrayTy *)0x0) {
                local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
              goto LAB_004a1878;
            }
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar6,SVar14,puVar15);
        }
LAB_004a1878:
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_14);
    }
    uVar13 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar5 == (STGameObjC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xee9);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)&pSVar5->vtable->field_0x2c)();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((iVar4 == 0xc) || (iVar4 = (**(code **)&pSVar5->vtable->field_0x2c)(), iVar4 == 0x18)
              ) || (iVar4 = (**(code **)&pSVar5->vtable->field_0x2c)(), iVar4 == 0x19)) {
            if (local_10 == (DArrayTy *)0x0) {
              local_10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(&local_10->flags,&local_8);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    pDVar9 = local_c;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(local_18 >> 8),this_00->field_0024),
               &local_10->flags,&local_c->flags);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    SVar11 = extraout_ECX_05;
    if (local_10 != (DArrayTy *)0x0) {
      DArrayDestroy(local_10);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      SVar11 = extraout_ECX_06;
    }
    if (pDVar9 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar9);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      SVar11 = extraout_ECX_07;
    }
  }
  if (this_00->field_01E6 == CASE_A) {
    uVar13 = 0;
    local_1c = PTR_00802a38->field_00E4;
    local_64 = PTR_00802a38->field_00E4;
    local_60 = *(undefined2 *)&this_00->field_0x295;
    local_5e = *(undefined2 *)&this_00->field_0x297;
    local_5c = this_00->field_0299;
    if (local_14 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf02);
          }
          dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6);
          if (((dVar7 == 8) || (dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6), dVar7 == 0x14)) ||
             (dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6), dVar7 == 0x1a)) {
            puVar15 = &local_64;
            SVar14 = CASE_D;
          }
          else {
            iVar4 = thunk_FUN_00490d90((int)pSVar6);
            if (iVar4 != 0) {
              if (local_c == (DArrayTy *)0x0) {
                local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
              goto LAB_004a1a74;
            }
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar6,SVar14,puVar15);
        }
LAB_004a1a74:
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_14);
    }
    uVar13 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar5 == (STGameObjC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf1c);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)&pSVar5->vtable->field_0x2c)();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((iVar4 == 8) || (iVar4 = (**(code **)&pSVar5->vtable->field_0x2c)(), iVar4 == 0x14))
             || (iVar4 = (**(code **)&pSVar5->vtable->field_0x2c)(), iVar4 == 0x1a)) {
            if (local_10 == (DArrayTy *)0x0) {
              local_10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(&local_10->flags,&local_8);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    pDVar9 = local_c;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(local_18 >> 8),this_00->field_0024),
               &local_10->flags,&local_c->flags);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    SVar11 = extraout_ECX_08;
    if (local_10 != (DArrayTy *)0x0) {
      DArrayDestroy(local_10);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      SVar11 = extraout_ECX_09;
    }
    if (pDVar9 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar9);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      SVar11 = extraout_ECX_10;
    }
  }
  if (this_00->field_01E6 == CASE_4) {
    DistributeDock(this_00,1,*(DArrayTy **)&this_00->field_0x29f,(DArrayTy *)this_00->field_002D);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    SVar11 = extraout_ECX_11;
  }
  if (this_00->field_01E6 == CASE_5) {
    uVar13 = 0;
    if (local_14 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        SVar11 = extraout_ECX_12;
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf35);
          }
          iVar4 = thunk_FUN_00490d90((int)pSVar6);
          if (iVar4 == 0) {
            local_1c = PTR_00802a38->field_00E4;
            STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            SVar11 = extraout_ECX_13;
          }
          else {
            if (local_c == (DArrayTy *)0x0) {
              local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            SVar11 = extraout_ECX_14;
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_14);
    }
    uVar13 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,uVar12,&local_8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        SVar11 = extraout_ECX_15;
        if ((short)local_8 != -1) {
          pSVar5 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar5 == (STGameObjC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf47);
          }
          iVar4 = thunk_FUN_00490d90((int)pSVar5);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          SVar11 = extraout_ECX_16;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((iVar4 == 1) &&
             (local_e8 = thunk_FUN_00449a90(this_00->field_0024,(short)local_8),
             SVar11 = extraout_ECX_17, local_e8 != 0xffffffff)) break;
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    if (local_e8 != 0xffffffff) {
      DArrayGetElement(g_playerRuntime[this_00->field_0024].pgPairs,local_e8,local_130);
      Library::DKW::TBL::FUN_006afe40((int *)&local_10,local_130[0]);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,
                 CONCAT31((int3)((uint)extraout_ECX_18 >> 8),this_00->field_0024),&local_10->flags,
                 &local_c->flags);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      SVar11 = extraout_ECX_19;
    }
    if (local_10 != (DArrayTy *)0x0) {
      DArrayDestroy(local_10);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      SVar11 = extraout_ECX_20;
    }
    if (local_c != (DArrayTy *)0x0) {
      DArrayDestroy(local_c);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      SVar11 = extraout_ECX_21;
    }
  }
  if (this_00->field_01E6 == CASE_B) {
    uVar13 = 0;
    local_d8 = PTR_00802a38->field_00E4;
    local_18 = 0;
    pDVar9 = local_c;
    local_1c = local_d8;
    if (0 < (int)local_14) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar13,&local_8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        SVar11 = extraout_ECX_22;
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf5d);
          }
          iVar4 = (*pSVar6->vtable->vfunc_F8)();
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          SVar11 = extraout_ECX_23;
          if (iVar4 != 0) {
            iVar4 = thunk_FUN_00490d90((int)pSVar6);
            if (iVar4 == 0) {
              dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6);
              if ((((dVar7 != 7) && (dVar7 != 0x13)) && (dVar7 != 0x1b)) ||
                 (iVar4 = thunk_FUN_00492370((int)pSVar6), iVar4 != 0)) {
                STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                SVar11 = extraout_ECX_24;
                goto LAB_004a1ea4;
              }
              local_d4 = *(undefined2 *)&this_00->field_0x2a3;
              local_d2 = *(undefined2 *)&this_00->field_0x2a5;
              local_d0 = *(undefined2 *)&this_00->field_0x2a7;
              local_ce = *(undefined4 *)&this_00->field_0x2a9;
              STBoatC::CmdToObj(pSVar6,CASE_F,&local_d8);
              pDVar8 = local_10;
              if (local_10 == (DArrayTy *)0x0) {
                pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                local_10 = pDVar8;
              }
            }
            else {
              pDVar8 = pDVar9;
              if (pDVar9 == (DArrayTy *)0x0) {
                pDVar9 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                pDVar8 = pDVar9;
                local_c = pDVar9;
              }
            }
            Library::DKW::TBL::FUN_006ae1c0(&pDVar8->flags,&local_8);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            SVar11 = extraout_ECX_25;
          }
        }
LAB_004a1ea4:
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    if (local_10 == (DArrayTy *)0x0) {
LAB_004a1ede:
      if (local_c != (DArrayTy *)0x0) {
        uVar13 = 0;
        dVar7 = local_c->count;
        if (0 < (int)dVar7) {
          uVar12 = 0;
          do {
            DArrayGetElement(local_c,uVar12,&local_8);
            pSVar6 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
            STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
            uVar13 = uVar13 + 1;
            uVar12 = uVar13 & 0xffff;
          } while ((int)uVar12 < (int)dVar7);
        }
      }
    }
    else if (pDVar9 == (DArrayTy *)0x0) {
      if (local_10 == (DArrayTy *)0x0) goto LAB_004a1ede;
    }
    else {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,CONCAT31((int3)(SVar11 >> 8),this_00->field_0024),
                 &local_10->flags,&pDVar9->flags);
    }
    if (local_10 != (DArrayTy *)0x0) {
      DArrayDestroy(local_10);
    }
    if (local_c != (DArrayTy *)0x0) {
      DArrayDestroy(local_c);
    }
  }
  if (this_00->field_01E6 == CASE_C) {
    local_e4[0] = PTR_00802a38->field_00E4;
    uVar13 = 0;
    local_18 = 0;
    local_1c = local_e4[0];
    if (0 < (int)local_14) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar13,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf8e);
          }
          iVar4 = (*pSVar6->vtable->vfunc_F8)();
          if (iVar4 != 0) {
            dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6);
            if ((((dVar7 == 7) || (dVar7 == 0x13)) || (dVar7 == 0x1b)) &&
               (iVar4 = thunk_FUN_00492370((int)pSVar6), iVar4 != 0)) {
              STBoatC::CmdToObj(pSVar6,CASE_10,local_e4);
              if (((*(short *)&this_00->field_0x2ad != -1) ||
                  (*(short *)&this_00->field_0x2af != -1)) || (this_00->field_02B1 != -1)) {
                pDVar9 = local_10;
                if (local_10 == (DArrayTy *)0x0) {
                  pDVar9 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  local_10 = pDVar9;
                }
LAB_004a2089:
                Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,&local_8);
              }
            }
            else {
              iVar4 = thunk_FUN_00490d90((int)pSVar6);
              if (iVar4 == 0) {
                STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
              }
              else if (((*(short *)&this_00->field_0x2ad != -1) ||
                       (*(short *)&this_00->field_0x2af != -1)) || (this_00->field_02B1 != -1)) {
                pDVar9 = local_c;
                if (local_c == (DArrayTy *)0x0) {
                  pDVar9 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  local_c = pDVar9;
                }
                goto LAB_004a2089;
              }
            }
          }
        }
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    if (local_10 == (DArrayTy *)0x0) {
LAB_004a20d0:
      if (local_c != (DArrayTy *)0x0) {
        dVar7 = local_c->count;
        uVar13 = 0;
        if (0 < (int)dVar7) {
          uVar12 = 0;
          do {
            DArrayGetElement(local_c,uVar12,&local_8);
            pSVar6 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
            STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
            uVar13 = uVar13 + 1;
            uVar12 = uVar13 & 0xffff;
          } while ((int)uVar12 < (int)dVar7);
        }
      }
    }
    else if (local_c == (DArrayTy *)0x0) {
      if (local_10 == (DArrayTy *)0x0) goto LAB_004a20d0;
    }
    else {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,CONCAT31((int3)(uVar13 >> 8),this_00->field_0024),
                 &local_10->flags,&local_c->flags);
    }
    if (local_10 != (DArrayTy *)0x0) {
      DArrayDestroy(local_10);
    }
    if (local_c != (DArrayTy *)0x0) {
      DArrayDestroy(local_c);
    }
  }
  if (this_00->field_01E6 == CASE_D) {
    local_52 = *(undefined2 *)&this_00->field_0x2b5;
    uVar13 = 0;
    local_58 = PTR_00802a38->field_00E4;
    local_50 = *(undefined2 *)&this_00->field_0x2b7;
    local_54 = *(undefined2 *)&this_00->field_0x2b3;
    local_1c = local_58;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xfc2);
          }
          if (*(int *)&this_00->field_0x2b9 == -1) {
            if ((pSVar6->field_07B6 == 0) || (pSVar6->field_07BE < 1)) {
LAB_004a221d:
              puVar15 = &local_1c;
              SVar14 = CASE_3;
            }
            else {
              puVar15 = &local_58;
              SVar14 = CASE_7;
            }
          }
          else {
            if ((pSVar6->field_07B6 != *(int *)&this_00->field_0x2b9) || (pSVar6->field_07BE < 1))
            goto LAB_004a221d;
            puVar15 = &local_58;
            SVar14 = CASE_7;
          }
          STBoatC::CmdToObj(pSVar6,SVar14,puVar15);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_E) {
    local_78 = *(undefined2 *)&this_00->field_0x2bd;
    uVar13 = 0;
    local_7c = PTR_00802a38->field_00E4;
    local_74 = this_00->field_02C1;
    local_76 = *(undefined2 *)&this_00->field_0x2bf;
    local_1c = local_7c;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xfea);
          }
          if ((pSVar6->field_06F7 == CASE_4) && (0 < pSVar6->field_07A2)) {
            puVar15 = &local_7c;
            SVar14 = CASE_A;
          }
          else {
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar6,SVar14,puVar15);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_F) {
    local_83 = *(undefined2 *)&this_00->field_0x2c4;
    uVar13 = 0;
    local_88 = PTR_00802a38->field_00E4;
    local_81 = *(undefined4 *)&this_00->field_0x2c6;
    local_84 = this_00->field_0x2c3;
    local_1c = local_88;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1003);
          }
          SVar1 = pSVar6->field_06F7;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_12)) || (SVar1 == CASE_22)) {
            puVar15 = &local_88;
            SVar14 = CASE_9;
          }
          else {
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar6,SVar14,puVar15);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_11) {
    local_c4 = this_00->field_02CE;
    uVar13 = 0;
    local_c8 = PTR_00802a38->field_00E4;
    local_c0 = *(undefined2 *)&this_00->field_0x2d2;
    local_be = *(undefined2 *)&this_00->field_0x2d4;
    local_bc = this_00->field_02D6;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x101e);
          }
          STBoatC::CmdToObj(pSVar6,CASE_16,&local_c8);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_10) {
    local_f8 = this_00->field_02D8;
    uVar13 = 0;
    local_fc = PTR_00802a38->field_00E4;
    local_f4 = *(undefined2 *)&this_00->field_0x2dc;
    local_f0 = *(undefined2 *)&this_00->field_0x2e0;
    local_ea = *(undefined2 *)&this_00->field_0x2e6;
    local_f2 = *(undefined2 *)&this_00->field_0x2de;
    local_ee = *(undefined2 *)&this_00->field_0x2e2;
    local_ec = *(undefined2 *)&this_00->field_0x2e4;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1032);
          }
          STBoatC::CmdToObj(pSVar6,CASE_15,&local_fc);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_12) {
    local_6c = *(undefined2 *)&this_00->field_0x2e8;
    local_70 = PTR_00802a38->field_00E4;
    local_6a = *(undefined2 *)&this_00->field_0x2ea;
    local_68 = this_00->field_02EC;
    uVar13 = 0;
    local_18 = 0;
    pDVar9 = local_c;
    if (0 < (int)local_14) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar13,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1042);
          }
          dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6);
          if (((dVar7 == 7) || (dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6), dVar7 == 0x13)) ||
             (dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6), dVar7 == 0x1b)) {
            STBoatC::CmdToObj(pSVar6,CASE_17,&local_70);
            pDVar8 = local_10;
            if (local_10 == (DArrayTy *)0x0) {
              local_10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              pDVar8 = local_10;
            }
          }
          else {
            iVar4 = thunk_FUN_00490d90((int)pSVar6);
            if (iVar4 == 0) {
              STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
              goto LAB_004a26bb;
            }
            pDVar8 = pDVar9;
            if (pDVar9 == (DArrayTy *)0x0) {
              pDVar9 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              pDVar8 = pDVar9;
              local_c = pDVar9;
            }
          }
          Library::DKW::TBL::FUN_006ae1c0(&pDVar8->flags,&local_8);
        }
LAB_004a26bb:
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    if (local_10 == (DArrayTy *)0x0) {
LAB_004a26f5:
      if (local_c != (DArrayTy *)0x0) {
        dVar7 = local_c->count;
        uVar13 = 0;
        if (0 < (int)dVar7) {
          uVar12 = 0;
          do {
            DArrayGetElement(local_c,uVar12,&local_8);
            pSVar6 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
            STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
            uVar13 = uVar13 + 1;
            uVar12 = uVar13 & 0xffff;
          } while ((int)uVar12 < (int)dVar7);
        }
      }
    }
    else if (pDVar9 == (DArrayTy *)0x0) {
      if (local_10 == (DArrayTy *)0x0) goto LAB_004a26f5;
    }
    else {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,CONCAT31((int3)(uVar13 >> 8),this_00->field_0024),
                 &local_10->flags,&pDVar9->flags);
    }
    if (local_10 != (DArrayTy *)0x0) {
      DArrayDestroy(local_10);
    }
    if (local_c != (DArrayTy *)0x0) {
      DArrayDestroy(local_c);
    }
  }
  if (this_00->field_01E6 == CASE_13) {
    local_b2 = *(undefined2 *)&this_00->field_0x2f0;
    uVar12 = 0;
    local_b8 = PTR_00802a38->field_00E4;
    local_b0 = *(undefined2 *)&this_00->field_0x2f2;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar13 = CONCAT22((short)((uint)PTR_00802a38 >> 0x10),local_b0);
    local_b4 = *(undefined2 *)&this_00->field_0x2ee;
    local_ae = *(undefined4 *)&this_00->field_0x2f4;
    local_1c = local_b8;
    if (0 < (int)local_14) {
      uVar13 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar13,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1071);
          }
          dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6);
          if (((dVar7 == 0xc) || (dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6), dVar7 == 0x18)) ||
             (dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6), dVar7 == 0x1d)) {
            if (local_10 == (DArrayTy *)0x0) {
              local_10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(&local_10->flags,&local_8);
            puVar15 = &local_b8;
            SVar14 = CASE_12;
          }
          else {
            iVar4 = thunk_FUN_00490d90((int)pSVar6);
            if (iVar4 != 0) {
              if (local_c == (DArrayTy *)0x0) {
                local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
              goto LAB_004a2897;
            }
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar6,SVar14,puVar15);
        }
LAB_004a2897:
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    pDVar9 = local_c;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(uVar13 >> 8),this_00->field_0024),
               &local_10->flags,&local_c->flags);
    if (local_10 != (DArrayTy *)0x0) {
      DArrayDestroy(local_10);
    }
    if (pDVar9 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar9);
    }
  }
  if (this_00->field_01E6 == CASE_14) {
    local_28 = (DArrayTy *)
               Way3DGrpGetDistrPoint
                         (this_00,(AnonShape_00413AF0_B6B4EE9A *)this_00->field_002D,
                          (int)*(short *)&this_00->field_0x2fe,(int)*(short *)&this_00->field_0x300,
                          (int)*(short *)&this_00->field_0x302,(int)*(short *)&this_00->field_0x2f8,
                          (int)*(short *)&this_00->field_0x2fa,(int)*(short *)&this_00->field_0x2fc)
    ;
    if (local_28 == (DArrayTy *)0x0) {
      return;
    }
    pDVar9 = (DArrayTy *)
             Way3DGrpGetDistrPoint
                       (this_00,(AnonShape_00413AF0_B6B4EE9A *)this_00->field_002D,
                        (int)*(short *)&this_00->field_0x2f8,(int)*(short *)&this_00->field_0x2fa,
                        (int)*(short *)&this_00->field_0x2fc,(int)*(short *)&this_00->field_0x2fe,
                        (int)*(short *)&this_00->field_0x300,(int)*(short *)&this_00->field_0x302);
    if (pDVar9 == (DArrayTy *)0x0) {
      DArrayDestroy(local_28);
      return;
    }
    local_18 = 0;
    local_98 = PTR_00802a38->field_00E4;
    if (0 < (int)local_14) {
      uVar13 = 0;
      do {
        DArrayGetElement(local_28,uVar13,&local_38);
        DArrayGetElement(pDVar9,uVar13,&local_30);
        DArrayGetElement((DArrayTy *)this_00->field_002D,uVar13,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x109b);
          }
          local_94 = local_38;
          local_92 = local_36;
          local_8e = local_30;
          local_90 = local_34;
          local_8c = local_2e;
          local_8a = local_2c;
          STBoatC::CmdToObj(pSVar6,CASE_8,&local_98);
        }
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    DArrayDestroy(local_28);
    DArrayDestroy(pDVar9);
  }
  if (this_00->field_01E6 != CASE_15) {
    g_currentExceptionFrame = local_19c.previous;
    return;
  }
  uVar13 = 0;
  local_a8 = PTR_00802a38->field_00E4;
  local_1c = local_a8;
  if (0 < (int)local_14) {
    uVar12 = 0;
    do {
      DArrayGetElement((DArrayTy *)this_00->field_002D,uVar12,&local_8);
      if ((short)local_8 != -1) {
        pSVar6 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
        if (pSVar6 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x10b0);
        }
        iVar4 = (*pSVar6->vtable->vfunc_F8)();
        if (iVar4 != 0) {
          iVar4 = thunk_FUN_00490d90((int)pSVar6);
          if (iVar4 == 0) {
            dVar7 = (*pSVar6->vtable->slot_2C)(pSVar6);
            if ((dVar7 == 7) || (dVar7 == 0x13)) {
              iVar4 = thunk_FUN_00492370((int)pSVar6);
              if (iVar4 == 0) {
                local_a2 = *(undefined2 *)&this_00->field_0x306;
                local_a4 = *(undefined2 *)&this_00->field_0x304;
                local_a0 = *(undefined2 *)&this_00->field_0x308;
                local_9e = *(undefined4 *)&this_00->field_0x30a;
                STBoatC::CmdToObj(pSVar6,CASE_F,&local_a8);
                pDVar9 = local_10;
                if (local_10 == (DArrayTy *)0x0) {
                  pDVar9 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  local_10 = pDVar9;
                }
                goto LAB_004a2bcf;
              }
            }
            else {
              STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
            }
          }
          else {
            pDVar9 = local_c;
            if (local_c == (DArrayTy *)0x0) {
              pDVar9 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_c = pDVar9;
            }
LAB_004a2bcf:
            Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,&local_8);
          }
        }
      }
      uVar13 = uVar13 + 1;
      uVar12 = uVar13 & 0xffff;
    } while ((int)uVar12 < (int)local_14);
  }
  if (local_10 != (DArrayTy *)0x0) {
    if (local_c != (DArrayTy *)0x0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)local_c >> 8),this_00->field_0024),
                 &local_10->flags,&local_c->flags);
      goto cf_common_exit_004A2C5D;
    }
    if (local_10 != (DArrayTy *)0x0) goto cf_common_exit_004A2C5D;
  }
  if (local_c != (DArrayTy *)0x0) {
    uVar13 = 0;
    dVar7 = local_c->count;
    if (0 < (int)dVar7) {
      uVar12 = 0;
      do {
        DArrayGetElement(local_c,uVar12,&local_8);
        pSVar6 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
        STBoatC::CmdToObj(pSVar6,CASE_3,&local_1c);
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)dVar7);
    }
  }
cf_common_exit_004A2C5D:
  if (local_10 != (DArrayTy *)0x0) {
    DArrayDestroy(local_10);
  }
  if (local_c != (DArrayTy *)0x0) {
    DArrayDestroy(local_c);
  }
  g_currentExceptionFrame = local_19c.previous;
  return;
}

