#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::RechargeNewCmd
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall RechargeNewCmd(STGroupBoatC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=004A297E RET | 004A2C89 RET | 004A2CD7 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType

   [STSwitchEnumApplier] Switch target field_01E6 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_01E6State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall STGroupBoatC::RechargeNewCmd(STGroupBoatC *this)

{
  STBoatC_field_06F7State SVar1;
  uint uVar3;
  STGroupBoatC *this_00;
  int local_EAX_76;
  STGameObjC *pSVar4;
  STBoatC *pSVar5;
  int local_EAX_791;
  int iVar3;
  dword dVar6;
  int iVar7;
  DArrayTy *pDVar8;
  DArrayTy *pDVar9;
  int iVar6;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_03;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_04;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_05;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_06;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_07;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_08;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_09;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_10;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_11;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_12;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_13;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_14;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_15;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_16;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_17;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_18;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_19;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_20;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_21;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_22;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_23;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_24;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_25;
  STGroupBoatC_field_01E6State SVar10;
  uint uVar11;
  uint uVar12;
  STBoatC_CmdToObj_param_1Enum SVar13;
  uint *puVar14;
  InternalExceptionFrame local_19c;
  STGroupBoatC *local_158;
  uint local_154;
  short local_150;
  short local_14e;
  short local_14c;
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
  uint local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  uint local_e8;
  uint local_e4 [3];
  uint local_d8;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined4 local_ce;
  uint local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  uint local_b8;
  short local_b4;
  short local_b2;
  undefined2 local_b0;
  undefined4 local_ae;
  uint local_a8;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined4 local_9e;
  uint local_98;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  uint local_88;
  undefined1 local_84;
  undefined2 local_83;
  undefined4 local_81;
  uint local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  uint local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  uint local_64;
  short local_60;
  short local_5e;
  short local_5c;
  uint local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  uint local_4c;
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
  short local_22;
  short local_20;
  short local_1e;
  uint local_1c;
  uint local_18;
  uint local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  undefined4 local_8;

  local_14 = this->field_002D->count;
  local_e8 = 0xffffffff;
  local_c = nullptr;
  local_10 = nullptr;
  local_19c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_19c;
  local_158 = this;
  local_EAX_76 = Library::MSVCRT::__setjmp3(local_19c.jumpBuffer,0);
  this_00 = local_158;
  uVar11 = local_14;
  uVar12 = local_14;
  if (local_EAX_76 != 0) {
    g_currentExceptionFrame = local_19c.previous;
    if (local_EAX_76 == -0x5001fff7) {
      return;
    }
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x10dc,0,local_EAX_76,
                               "%s","STGroupBoatC::RechargeNewCmd");
    if (iVar6 == 0) {
      RaiseInternalException(local_EAX_76,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x10dd);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  while (uVar12 = uVar12 - 1, -1 < (int)uVar12) {
    DArrayGetElement(this_00->field_002D,uVar12,&local_8);
    pSVar4 = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
    if ((pSVar4 == nullptr) || (pSVar4->field_0020 != 0x14)) {
      DArrayRemoveAt(this_00->field_002D,uVar12);
      uVar11 = uVar11 - 1;
    }
  }
  if (uVar11 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0xdf7
              );
  }
  SVar10 = this_00->field_01E6;
  uVar12 = this_00->field_002D->count;
  local_14 = uVar12;
  if (SVar10 == CASE_1) {
    InitWay(this_00,this_00->field_002D,this_00->field_003D,this_00->field_0041,this_00->field_0045);
    uVar11 = 0;
    local_18 = 0;
    SVar10 = g_playSystem_00802A38->field_00E4;
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = SVar10;
    if (uVar12 != 0) {
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (pSVar5 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xe03);
        }
        STBoatC::CmdToObj(pSVar5,CASE_1,&local_44);
        local_18 = local_18 + 1;
        uVar11 = local_18 & 0xffff;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar10 = extraout_ECX;
      } while (uVar11 < uVar12);
    }
  }
  if (this_00->field_01E6 == CASE_3) {
    local_18 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    if (uVar12 != 0) {
      uVar11 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (pSVar5 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xe46);
        }
        STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
        local_18 = local_18 + 1;
        uVar11 = local_18 & 0xffff;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar10 = extraout_ECX_00;
      } while (uVar11 < uVar12);
    }
  }
  if (this_00->field_01E6 == CASE_2) {
    DistributeTargets(this_00,&this_00->field_002D->flags);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar10 = extraout_ECX_01;
  }
  if (this_00->field_01E6 == CASE_6) {
    local_4c = g_playSystem_00802A38->field_00E4;
    ReMakePatrolPoints(this_00);
    local_28 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    if (this_00->field_022E->count == 0) {
      uVar11 = 0;
      local_18 = 0;
      if (uVar12 != 0) {
        uVar12 = 0;
        do {
          DArrayGetElement(this_00->field_002D,uVar12,&local_8);
          local_110 = (short)local_8;
          local_114 = 0;
          local_102 = 0;
          Library::DKW::TBL::DArrayPut(this_00->field_022E,uVar11,&local_114);
          local_48 = uVar11;
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xe77,0,0,
                                       "%s","STGroupBoatC::RechargeNewCmd Patrol NULL value");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xe78);
          }
          Library::DKW::TBL::DArrayAppend(local_28,&local_8);
          STBoatC::CmdToObj(pSVar5,CASE_6,&local_4c);
          uVar11 = uVar11 + 1;
          local_18 = local_18 + 1;
          uVar12 = local_18 & 0xffff;
        } while (uVar12 < local_14);
      }
    }
    else {
      local_18 = 0;
      if (uVar12 != 0) {
        do {
          uVar12 = this_00->field_022E->count;
          uVar11 = uVar12;
          uVar3 = local_18;
          while (uVar12 = uVar12 - 1, local_18 = uVar3, -1 < (int)uVar12) {
            DArrayGetElement(this_00->field_022E,uVar12,&local_114);
            uVar3 = local_18;
            if (local_110 == -1) {
              uVar11 = uVar12;
            }
          }
          DArrayGetElement(this_00->field_002D,uVar3 & 0xffff,&local_8);
          local_114 = 0;
          local_102 = 0;
          local_110 = (short)local_8;
          Library::DKW::TBL::DArrayPut(this_00->field_022E,uVar11,&local_114);
          local_48 = uVar11;
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            local_EAX_791 =
                 ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xe64,0,0,"%s",
                                    "STGroupBoatC::RechargeNewCmd Patrol NULL value");
            if (local_EAX_791 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xe65);
          }
          Library::DKW::TBL::DArrayAppend(local_28,&local_8);
          STBoatC::CmdToObj(pSVar5,CASE_6,&local_4c);
          local_18 = uVar3 + 1;
        } while ((local_18 & 0xffff) < local_14);
      }
    }
    DArrayGetElement(this_00->field_022A,this_00->field_0232,&local_124);
    pDVar9 = local_28;
    if (local_28->count != 0) {
      InitWay(this_00,local_28,(int)local_124,(int)local_122,(int)local_120);
    }
    DArrayDestroy(pDVar9);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar10 = extraout_ECX_02;
  }
  if (this_00->field_01E6 == CASE_7) {
    uVar12 = 0;
    SVar10 = g_playSystem_00802A38->field_00E4;
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = SVar10;
    if (local_14 != 0) {
      uVar11 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (pSVar5 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xe8c);
        }
        STFishC::sub_004162B0((STFishC *)pSVar5,&local_20,&local_1e,&local_22);
        STBoatC::sub_00481520(pSVar5,(int)local_20,(int)local_1e,*(int *)&this_00->field_0x222);
        STBoatC::CmdToObj(pSVar5,CASE_1,&local_44);
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar10 = extraout_ECX_03;
      } while (uVar11 < local_14);
    }
  }
  if (this_00->field_01E6 == CASE_8) {
    local_18 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    if (local_14 != 0) {
      do {
        uVar12 = local_18 & 0xffff;
        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xe9a);
          }
          dVar6 = pSVar5->slot_2C();
          if (((dVar6 != 8) && (dVar6 = pSVar5->slot_2C(), dVar6 != 0x14)) &&
             (dVar6 = pSVar5->slot_2C(), dVar6 != 0x1a)) {
            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar5);
            if (iVar7 == 0) {
              STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            }
            else {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }
              Library::DKW::TBL::DArrayAppend(local_c,&local_8);
            }
            DArrayRemoveAt(this_00->field_002D,uVar12);
            local_18 = local_18 + 0xffff;
            local_14 = local_14 - 1;
          }
        }
        local_18 = local_18 + 1;
      } while ((local_18 & 0xffff) < local_14);
    }
    uVar12 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar11 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,uVar11,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xeb0);
          }
          iVar7 = pSVar4->vfunc_2C();
          if (((iVar7 == 8) || (iVar7 = pSVar4->vfunc_2C(), iVar7 == 0x14)) ||
             (iVar7 = pSVar4->vfunc_2C(), iVar7 == 0x1a)) {
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            }
            Library::DKW::TBL::DArrayAppend(local_10,&local_8);
          }
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < local_18);
    }
    pDVar9 = local_c;
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_18), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
    }
    if (pDVar9 != nullptr) {
      DArrayDestroy(pDVar9);
    }
    DistributeMD(this_00,1,this_00->field_024E,this_00->field_0266,this_00->field_002D);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar10 = extraout_ECX_04;
  }
  if (this_00->field_01E6 == CASE_9) {
    uVar12 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    local_154 = g_playSystem_00802A38->field_00E4;
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
      uVar11 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xecf);
          }
          dVar6 = pSVar5->slot_2C();
          if (((dVar6 == 0xc) || (dVar6 = pSVar5->slot_2C(), dVar6 == 0x18)) ||
             (dVar6 = pSVar5->slot_2C(), dVar6 == 0x19)) {
            puVar14 = &local_154;
            SVar13 = CASE_11;
          }
          else {
            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar5);
            if (iVar7 != 0) {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }
              Library::DKW::TBL::DArrayAppend(local_c,&local_8);
              goto LAB_004a1878;
            }
            puVar14 = &local_1c;
            SVar13 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar13,puVar14);
        }
LAB_004a1878:
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < local_14);
    }
    uVar12 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar11 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,uVar11,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xee9);
          }
          iVar7 = pSVar4->vfunc_2C();
          if (((iVar7 == 0xc) || (iVar7 = pSVar4->vfunc_2C(), iVar7 == 0x18)) ||
             (iVar7 = pSVar4->vfunc_2C(), iVar7 == 0x19)) {
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            }
            Library::DKW::TBL::DArrayAppend(local_10,&local_8);
          }
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < local_18);
    }
    pDVar9 = local_c;
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_18), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar10 = extraout_ECX_05;
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar10 = extraout_ECX_06;
    }
    if (pDVar9 != nullptr) {
      DArrayDestroy(pDVar9);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar10 = extraout_ECX_07;
    }
  }
  if (this_00->field_01E6 == CASE_A) {
    uVar12 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    local_64 = g_playSystem_00802A38->field_00E4;
    local_60 = this_00->field_0295;
    local_5e = this_00->field_0297;
    local_5c = this_00->field_0299;
    if (local_14 != 0) {
      uVar11 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf02);
          }
          dVar6 = pSVar5->slot_2C();
          if (((dVar6 == 8) || (dVar6 = pSVar5->slot_2C(), dVar6 == 0x14)) ||
             (dVar6 = pSVar5->slot_2C(), dVar6 == 0x1a)) {
            puVar14 = &local_64;
            SVar13 = CASE_D;
          }
          else {
            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar5);
            if (iVar7 != 0) {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }
              Library::DKW::TBL::DArrayAppend(local_c,&local_8);
              goto LAB_004a1a74;
            }
            puVar14 = &local_1c;
            SVar13 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar13,puVar14);
        }
LAB_004a1a74:
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < local_14);
    }
    uVar12 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar11 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,uVar11,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf1c);
          }
          iVar7 = pSVar4->vfunc_2C();
          if (((iVar7 == 8) || (iVar7 = pSVar4->vfunc_2C(), iVar7 == 0x14)) ||
             (iVar7 = pSVar4->vfunc_2C(), iVar7 == 0x1a)) {
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            }
            Library::DKW::TBL::DArrayAppend(local_10,&local_8);
          }
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < local_18);
    }
    pDVar9 = local_c;
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_18), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar10 = extraout_ECX_08;
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar10 = extraout_ECX_09;
    }
    if (pDVar9 != nullptr) {
      DArrayDestroy(pDVar9);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar10 = extraout_ECX_10;
    }
  }
  if (this_00->field_01E6 == CASE_4) {
    DistributeDock(this_00,1,(DArrayTy *)this_00->field_029F,this_00->field_002D);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar10 = extraout_ECX_11;
  }
  if (this_00->field_01E6 == CASE_5) {
    uVar12 = 0;
    if (local_14 != 0) {
      uVar11 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar10 = extraout_ECX_12;
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf35);
          }
          iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar5);
          if (iVar7 == 0) {
            local_1c = g_playSystem_00802A38->field_00E4;
            STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            SVar10 = extraout_ECX_13;
          }
          else {
            if (local_c == nullptr) {
              local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            }
            Library::DKW::TBL::DArrayAppend(local_c,&local_8);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            SVar10 = extraout_ECX_14;
          }
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < local_14);
    }
    uVar12 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar11 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,uVar11,&local_8);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar10 = extraout_ECX_15;
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf47);
          }
          iVar7 = thunk_FUN_00490d90(pSVar4);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          SVar10 = extraout_ECX_16;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          if ((iVar7 == 1) &&
             (local_e8 = thunk_FUN_00449a90(this_00->field_0024,(short)local_8),
             SVar10 = extraout_ECX_17, local_e8 != 0xffffffff)) break;
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < local_18);
    }
    if (local_e8 != 0xffffffff) {
      DArrayGetElement((DArrayTy *)g_packedRecords_A62x8[this_00->field_0024].field1976_0x9f6,
                       local_e8,local_130);
      Library::DKW::TBL::FUN_006afe40((int *)&local_10,local_130[0]);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,
                 STReplaceLowByte((uint32_t)(extraout_ECX_18), (uint8_t)(this_00->field_0024)),&local_10->flags,
                 &local_c->flags);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar10 = extraout_ECX_19;
    }
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar10 = extraout_ECX_20;
    }
    if (local_c != nullptr) {
      DArrayDestroy(local_c);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar10 = extraout_ECX_21;
    }
  }
  if (this_00->field_01E6 == CASE_B) {
    uVar12 = 0;
    local_d8 = g_playSystem_00802A38->field_00E4;
    local_18 = 0;
    pDVar9 = local_c;
    local_1c = local_d8;
    if (0 < (int)local_14) {
      do {
        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar10 = extraout_ECX_22;
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf5d);
          }
          iVar7 = pSVar5->vfunc_F8();
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          SVar10 = extraout_ECX_23;
          if (iVar7 != 0) {
            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar5);
            if (iVar7 == 0) {
              dVar6 = pSVar5->slot_2C();
              if ((((dVar6 != 7) && (dVar6 != 0x13)) && (dVar6 != 0x1b)) ||
                 (iVar7 = thunk_FUN_00492370((STGameObjC *)pSVar5), iVar7 != 0)) {
                STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
                /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                SVar10 = extraout_ECX_24;
                goto LAB_004a1ea4;
              }
              local_d4 = this_00->field_02A3;
              local_d2 = this_00->field_02A5;
              local_d0 = *(undefined2 *)&this_00->field_0x2a7;
              local_ce = *(undefined4 *)&this_00->field_0x2a9;
              STBoatC::CmdToObj(pSVar5,CASE_F,&local_d8);
              pDVar8 = local_10;
              if (local_10 == nullptr) {
                pDVar8 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                local_10 = pDVar8;
              }
            }
            else {
              pDVar8 = pDVar9;
              if (pDVar9 == nullptr) {
                pDVar9 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                pDVar8 = pDVar9;
                local_c = pDVar9;
              }
            }
            Library::DKW::TBL::DArrayAppend(pDVar8,&local_8);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            SVar10 = extraout_ECX_25;
          }
        }
LAB_004a1ea4:
        local_18 = local_18 + 1;
        uVar12 = local_18 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
    if (local_10 == nullptr) {
LAB_004a1ede:
      if (local_c != nullptr) {
        uVar12 = 0;
        dVar6 = local_c->count;
        if (0 < (int)dVar6) {
          uVar11 = 0;
          do {
            DArrayGetElement(local_c,uVar11,&local_8);
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            uVar12 = uVar12 + 1;
            uVar11 = uVar12 & 0xffff;
          } while ((int)uVar11 < (int)dVar6);
        }
      }
    }
    else if (pDVar9 == nullptr) {
      if (local_10 == nullptr) goto LAB_004a1ede;
    }
    else {
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(SVar10), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&pDVar9->flags);
    }
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
    }
    if (local_c != nullptr) {
      DArrayDestroy(local_c);
    }
  }
  if (this_00->field_01E6 == CASE_C) {
    local_e4[0] = g_playSystem_00802A38->field_00E4;
    uVar12 = 0;
    local_18 = 0;
    local_1c = local_e4[0];
    if (0 < (int)local_14) {
      do {
        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf8e);
          }
          iVar7 = pSVar5->vfunc_F8();
          if (iVar7 != 0) {
            dVar6 = pSVar5->slot_2C();
            if ((((dVar6 == 7) || (dVar6 == 0x13)) || (dVar6 == 0x1b)) &&
               (iVar7 = thunk_FUN_00492370((STGameObjC *)pSVar5), iVar7 != 0)) {
              STBoatC::CmdToObj(pSVar5,CASE_10,local_e4);
              if (((this_00->field_02AD != -1) || (this_00->field_02AF != -1)) ||
                 (this_00->field_02B1 != -1)) {
                pDVar9 = local_10;
                if (local_10 == nullptr) {
                  pDVar9 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                  local_10 = pDVar9;
                }
LAB_004a2089:
                Library::DKW::TBL::DArrayAppend(pDVar9,&local_8);
              }
            }
            else {
              iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar5);
              if (iVar7 == 0) {
                STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
              }
              else if (((this_00->field_02AD != -1) || (this_00->field_02AF != -1)) ||
                      (this_00->field_02B1 != -1)) {
                pDVar9 = local_c;
                if (local_c == nullptr) {
                  pDVar9 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                  local_c = pDVar9;
                }
                goto LAB_004a2089;
              }
            }
          }
        }
        local_18 = local_18 + 1;
        uVar12 = local_18 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
    if (local_10 == nullptr) {
LAB_004a20d0:
      if (local_c != nullptr) {
        dVar6 = local_c->count;
        uVar12 = 0;
        if (0 < (int)dVar6) {
          uVar11 = 0;
          do {
            DArrayGetElement(local_c,uVar11,&local_8);
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            uVar12 = uVar12 + 1;
            uVar11 = uVar12 & 0xffff;
          } while ((int)uVar11 < (int)dVar6);
        }
      }
    }
    else if (local_c == nullptr) {
      if (local_10 == nullptr) goto LAB_004a20d0;
    }
    else {
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar12), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&local_c->flags);
    }
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
    }
    if (local_c != nullptr) {
      DArrayDestroy(local_c);
    }
  }
  if (this_00->field_01E6 == CASE_D) {
    local_52 = this_00->field_02B5;
    uVar12 = 0;
    local_58 = g_playSystem_00802A38->field_00E4;
    local_50 = *(undefined2 *)&this_00->field_0x2b7;
    local_54 = this_00->field_02B3;
    local_1c = local_58;
    if (0 < (int)local_14) {
      uVar11 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xfc2);
          }
          if (*(int *)&this_00->field_0x2b9 == -1) {
            if ((pSVar5->field_07B6 == 0) || (pSVar5->field_07BE < 1)) {
LAB_004a221d:
              puVar14 = &local_1c;
              SVar13 = CASE_3;
            }
            else {
              puVar14 = &local_58;
              SVar13 = CASE_7;
            }
          }
          else {
            if ((pSVar5->field_07B6 != *(int *)&this_00->field_0x2b9) || (pSVar5->field_07BE < 1))
            goto LAB_004a221d;
            puVar14 = &local_58;
            SVar13 = CASE_7;
          }
          STBoatC::CmdToObj(pSVar5,SVar13,puVar14);
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_E) {
    local_78 = this_00->field_02BD;
    uVar12 = 0;
    local_7c = g_playSystem_00802A38->field_00E4;
    local_74 = this_00->field_02C1;
    local_76 = this_00->field_02BF;
    local_1c = local_7c;
    if (0 < (int)local_14) {
      uVar11 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xfea);
          }
          if ((pSVar5->field_06F7 == CASE_4) && (0 < pSVar5->field_07A2)) {
            puVar14 = &local_7c;
            SVar13 = CASE_A;
          }
          else {
            puVar14 = &local_1c;
            SVar13 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar13,puVar14);
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_F) {
    local_83 = *(undefined2 *)&this_00->field_0x2c4;
    uVar12 = 0;
    local_88 = g_playSystem_00802A38->field_00E4;
    local_81 = *(undefined4 *)&this_00->field_0x2c6;
    local_84 = this_00->field_0x2c3;
    local_1c = local_88;
    if (0 < (int)local_14) {
      uVar11 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1003);
          }
          SVar1 = pSVar5->field_06F7;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_12)) || (SVar1 == CASE_22)) {
            puVar14 = &local_88;
            SVar13 = CASE_9;
          }
          else {
            puVar14 = &local_1c;
            SVar13 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar13,puVar14);
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_11) {
    local_c4 = this_00->field_02CE;
    uVar12 = 0;
    local_c8 = g_playSystem_00802A38->field_00E4;
    local_c0 = this_00->field_02D2;
    local_be = this_00->field_02D4;
    local_bc = this_00->field_02D6;
    if (0 < (int)local_14) {
      uVar11 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x101e);
          }
          STBoatC::CmdToObj(pSVar5,CASE_16,&local_c8);
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_10) {
    local_f8 = this_00->field_02D8;
    uVar12 = 0;
    local_fc = g_playSystem_00802A38->field_00E4;
    local_f4 = this_00->field_02DC;
    local_f0 = this_00->field_02E0;
    local_ea = this_00->field_02E6;
    local_f2 = this_00->field_02DE;
    local_ee = this_00->field_02E2;
    local_ec = this_00->field_02E4;
    if (0 < (int)local_14) {
      uVar11 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar11,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1032);
          }
          STBoatC::CmdToObj(pSVar5,CASE_15,&local_fc);
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_12) {
    local_6c = this_00->field_02E8;
    local_70 = g_playSystem_00802A38->field_00E4;
    local_6a = this_00->field_02EA;
    local_68 = this_00->field_02EC;
    uVar12 = 0;
    local_18 = 0;
    pDVar9 = local_c;
    if (0 < (int)local_14) {
      do {
        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1042);
          }
          dVar6 = pSVar5->slot_2C();
          if (((dVar6 == 7) || (dVar6 = pSVar5->slot_2C(), dVar6 == 0x13)) ||
             (dVar6 = pSVar5->slot_2C(), dVar6 == 0x1b)) {
            STBoatC::CmdToObj(pSVar5,CASE_17,&local_70);
            pDVar8 = local_10;
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              pDVar8 = local_10;
            }
          }
          else {
            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar5);
            if (iVar7 == 0) {
              STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
              goto LAB_004a26bb;
            }
            pDVar8 = pDVar9;
            if (pDVar9 == nullptr) {
              pDVar9 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              pDVar8 = pDVar9;
              local_c = pDVar9;
            }
          }
          Library::DKW::TBL::DArrayAppend(pDVar8,&local_8);
        }
LAB_004a26bb:
        local_18 = local_18 + 1;
        uVar12 = local_18 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
    if (local_10 == nullptr) {
LAB_004a26f5:
      if (local_c != nullptr) {
        dVar6 = local_c->count;
        uVar12 = 0;
        if (0 < (int)dVar6) {
          uVar11 = 0;
          do {
            DArrayGetElement(local_c,uVar11,&local_8);
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            uVar12 = uVar12 + 1;
            uVar11 = uVar12 & 0xffff;
          } while ((int)uVar11 < (int)dVar6);
        }
      }
    }
    else if (pDVar9 == nullptr) {
      if (local_10 == nullptr) goto LAB_004a26f5;
    }
    else {
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar12), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&pDVar9->flags);
    }
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
    }
    if (local_c != nullptr) {
      DArrayDestroy(local_c);
    }
  }
  if (this_00->field_01E6 == CASE_13) {
    local_b2 = this_00->field_02F0;
    uVar11 = 0;
    local_b8 = g_playSystem_00802A38->field_00E4;
    local_b0 = *(undefined2 *)&this_00->field_0x2f2;
    uVar12 = STReplaceLowWord((uint32_t)(g_playSystem_00802A38), (uint16_t)(local_b0));
    local_b4 = this_00->field_02EE;
    local_ae = *(undefined4 *)&this_00->field_0x2f4;
    local_1c = local_b8;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {
        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1071);
          }
          dVar6 = pSVar5->slot_2C();
          if (((dVar6 == 0xc) || (dVar6 = pSVar5->slot_2C(), dVar6 == 0x18)) ||
             (dVar6 = pSVar5->slot_2C(), dVar6 == 0x1d)) {
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            }
            Library::DKW::TBL::DArrayAppend(local_10,&local_8);
            puVar14 = &local_b8;
            SVar13 = CASE_12;
          }
          else {
            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar5);
            if (iVar7 != 0) {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }
              Library::DKW::TBL::DArrayAppend(local_c,&local_8);
              goto LAB_004a2897;
            }
            puVar14 = &local_1c;
            SVar13 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar13,puVar14);
        }
LAB_004a2897:
        uVar11 = uVar11 + 1;
        uVar12 = uVar11 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
    pDVar9 = local_c;
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar12), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
    }
    if (pDVar9 != nullptr) {
      DArrayDestroy(pDVar9);
    }
  }
  if (this_00->field_01E6 == CASE_14) {
    local_28 = (DArrayTy *)
               Way3DGrpGetDistrPoint
                         (this_00,this_00->field_002D,(int)this_00->field_02FE,
                          (int)this_00->field_0300,(int)this_00->field_0302,(int)this_00->field_02F8
                          ,(int)this_00->field_02FA,(int)this_00->field_02FC);
    if (local_28 == nullptr) {
      return;
    }
    pDVar9 = (DArrayTy *)
             Way3DGrpGetDistrPoint
                       (this_00,this_00->field_002D,(int)this_00->field_02F8,
                        (int)this_00->field_02FA,(int)this_00->field_02FC,(int)this_00->field_02FE,
                        (int)this_00->field_0300,(int)this_00->field_0302);
    if (pDVar9 == nullptr) {
      DArrayDestroy(local_28);
      return;
    }
    local_18 = 0;
    local_98 = g_playSystem_00802A38->field_00E4;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {
        DArrayGetElement(local_28,uVar12,&local_38);
        DArrayGetElement(pDVar9,uVar12,&local_30);
        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar5 == nullptr) {
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
          STBoatC::CmdToObj(pSVar5,CASE_8,&local_98);
        }
        local_18 = local_18 + 1;
        uVar12 = local_18 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
    DArrayDestroy(local_28);
    DArrayDestroy(pDVar9);
  }
  if (this_00->field_01E6 != CASE_15) {
    g_currentExceptionFrame = local_19c.previous;
    return;
  }
  uVar12 = 0;
  local_a8 = g_playSystem_00802A38->field_00E4;
  local_1c = local_a8;
  if (0 < (int)local_14) {
    uVar11 = 0;
    do {
      DArrayGetElement(this_00->field_002D,uVar11,&local_8);
      if ((ushort)local_8 != 0xffff) {
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (pSVar5 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x10b0);
        }
        iVar7 = pSVar5->vfunc_F8();
        if (iVar7 != 0) {
          iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar5);
          if (iVar7 == 0) {
            dVar6 = pSVar5->slot_2C();
            if ((dVar6 == 7) || (dVar6 == 0x13)) {
              iVar7 = thunk_FUN_00492370((STGameObjC *)pSVar5);
              if (iVar7 == 0) {
                local_a2 = this_00->field_0306;
                local_a4 = this_00->field_0304;
                local_a0 = *(undefined2 *)&this_00->field_0x308;
                local_9e = *(undefined4 *)&this_00->field_0x30a;
                STBoatC::CmdToObj(pSVar5,CASE_F,&local_a8);
                pDVar9 = local_10;
                if (local_10 == nullptr) {
                  pDVar9 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                  local_10 = pDVar9;
                }
                goto LAB_004a2bcf;
              }
            }
            else {
              STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            }
          }
          else {
            pDVar9 = local_c;
            if (local_c == nullptr) {
              pDVar9 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_c = pDVar9;
            }
LAB_004a2bcf:
            Library::DKW::TBL::DArrayAppend(pDVar9,&local_8);
          }
        }
      }
      uVar12 = uVar12 + 1;
      uVar11 = uVar12 & 0xffff;
    } while ((int)uVar11 < (int)local_14);
  }
  if (local_10 != nullptr) {
    if (local_c != nullptr) {
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_c), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&local_c->flags);
      goto cf_common_exit_004A2C5D;
    }
    if (local_10 != nullptr) goto cf_common_exit_004A2C5D;
  }
  if (local_c != nullptr) {
    uVar12 = 0;
    dVar6 = local_c->count;
    if (0 < (int)dVar6) {
      uVar11 = 0;
      do {
        DArrayGetElement(local_c,uVar11,&local_8);
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while ((int)uVar11 < (int)dVar6);
    }
  }
cf_common_exit_004A2C5D:
  if (local_10 != nullptr) {
    DArrayDestroy(local_10);
  }
  if (local_c != nullptr) {
    DArrayDestroy(local_c);
  }
  g_currentExceptionFrame = local_19c.previous;
  return;
}

