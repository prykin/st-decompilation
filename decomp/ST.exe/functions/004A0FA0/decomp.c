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
  STGameObjC *puVar4_mg0;
  STBoatC *pSVar4;
  int local_EAX_791;
  int iVar3;
  dword dVar5;
  int iVar7;
  STGameObjC *pSVar8;
  DArrayTy *pDVar9;
  DArrayTy *pDVar10;
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
  STGroupBoatC_field_01E6State SVar11;
  uint uVar12;
  uint uVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  uint *puVar15;
  InternalExceptionFrame local_19c;
  STGroupBoatC *local_158;
  uint local_154;
  short local_150;
  short local_14e;
  short local_14c;
  uint local_14a;
  uint local_146;
  uint local_142;
  uint local_13e;
  uint local_13a;
  ushort local_136;
  byte local_134;
  ushort local_133;
  uint *local_130 [3];
  short local_124;
  short local_122;
  short local_120;
  uint local_114;
  short local_110;
  uint local_102;
  uint local_fc;
  uint local_f8;
  ushort local_f4;
  ushort local_f2;
  ushort local_f0;
  ushort local_ee;
  ushort local_ec;
  ushort local_ea;
  uint local_e8;
  uint local_e4 [3];
  uint local_d8;
  ushort local_d4;
  ushort local_d2;
  ushort local_d0;
  uint local_ce;
  uint local_c8;
  uint local_c4;
  ushort local_c0;
  ushort local_be;
  ushort local_bc;
  uint local_b8;
  short local_b4;
  short local_b2;
  ushort local_b0;
  uint local_ae;
  uint local_a8;
  ushort local_a4;
  ushort local_a2;
  ushort local_a0;
  uint local_9e;
  uint local_98;
  ushort local_94;
  ushort local_92;
  ushort local_90;
  ushort local_8e;
  ushort local_8c;
  ushort local_8a;
  uint local_88;
  byte local_84;
  ushort local_83;
  uint local_81;
  uint local_7c;
  ushort local_78;
  ushort local_76;
  ushort local_74;
  uint local_70;
  ushort local_6c;
  ushort local_6a;
  ushort local_68;
  uint local_64;
  short local_60;
  short local_5e;
  short local_5c;
  uint local_58;
  ushort local_54;
  ushort local_52;
  ushort local_50;
  uint local_4c;
  uint local_48;
  STGroupBoatC_field_01E6State local_44;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  DArrayTy *local_28;
  short local_22;
  short local_20;
  short local_1e;
  uint local_1c;
  uint local_18;
  uint local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  uint local_8;
  local_14 = this->field_002D->count;
  local_e8 = 0xffffffff;
  local_c = nullptr;
  local_10 = nullptr;
  local_19c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_19c;
  local_158 = this;

  local_EAX_76 = Library::MSVCRT::__setjmp3(local_19c.jumpBuffer,0);
  this_00 = local_158;
  uVar12 = local_14;
  uVar13 = local_14;
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
  while (uVar13 = uVar13 - 1, -1 < (int)uVar13) {

    DArrayGetElement(this_00->field_002D,uVar13,&local_8);
    /* ST_CALLSITE[004A102C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    puVar4_mg0 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
    if ((puVar4_mg0 == nullptr) || (puVar4_mg0->field_0020 != 0x14)) {

      DArrayRemoveAt(this_00->field_002D,uVar13);
      uVar12 = uVar12 - 1;
    }
  }
  if (uVar12 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0xdf7
              );
  }
  SVar11 = this_00->field_01E6;
  uVar13 = this_00->field_002D->count;
  local_14 = uVar13;
  if (SVar11 == CASE_1) {
    /* ST_CALLSITE[004A1095]: CALL 0x00405d7b; direct=00405D7B STGroupBoatC::InitWay */
    InitWay(this_00,this_00->field_002D,this_00->field_003D,this_00->field_0041,this_00->field_0045);
    uVar12 = 0;
    local_18 = 0;
    SVar11 = g_playSystem_00802A38->field_00E4;
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = SVar11;
    if (uVar13 != 0) {
      do {

        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        /* ST_CALLSITE[004A10DC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar4 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (pSVar4 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xe03);
        }
        /* ST_CALLSITE[004A1109]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        STBoatC::CmdToObj(pSVar4,CASE_1,&local_44);
        local_18 = local_18 + 1;
        uVar12 = local_18 & 0xffff;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX;
      } while (uVar12 < uVar13);
    }
  }
  if (this_00->field_01E6 == CASE_3) {
    local_18 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    if (uVar13 != 0) {
      uVar12 = 0;
      do {
        /* ST_CALLSITE[004A114B]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__fastcall;pointer:/STAllPlayersC;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;pointer:/void */
        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        /* ST_CALLSITE[004A1160]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar4 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (pSVar4 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xe46);
        }
        /* ST_CALLSITE[004A118E]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
        local_18 = local_18 + 1;
        uVar12 = local_18 & 0xffff;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX_00;
      } while (uVar12 < uVar13);
    }
  }
  if (this_00->field_01E6 == CASE_2) {
    /* ST_CALLSITE[004A11B3]: CALL 0x00405146; direct=00405146 STGroupBoatC::DistributeTargets */
    DistributeTargets(this_00,&this_00->field_002D->flags);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_01;
  }
  if (this_00->field_01E6 == CASE_6) {
    local_4c = g_playSystem_00802A38->field_00E4;
    /* ST_CALLSITE[004A11D6]: CALL 0x00403f80; direct=00403F80 STGroupBoatC::ReMakePatrolPoints */
    ReMakePatrolPoints(this_00);
    local_28 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    if (this_00->field_022E->count == 0) {
      uVar12 = 0;
      local_18 = 0;
      if (uVar13 != 0) {
        uVar13 = 0;
        do {

          DArrayGetElement(this_00->field_002D,uVar13,&local_8);
          local_110 = (short)local_8;
          local_114 = 0;
          local_102 = 0;
          /* ST_CALLSITE[004A1355]: CALL 0x006ae140; direct=006AE140 Library::DKW::TBL::DArrayPut; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__stdcall;pointer:/STAllPlayersC;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;pointer:/void */
          Library::DKW::TBL::DArrayPut(this_00->field_022E,uVar12,&local_114);
          local_48 = uVar12;
          /* ST_CALLSITE[004A136D]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {

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
          /* ST_CALLSITE[004A13CB]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,CASE_6,&local_4c);
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
          uVar13 = this_00->field_022E->count;
          uVar12 = uVar13;
          uVar3 = local_18;
          while (uVar13 = uVar13 - 1, local_18 = uVar3, -1 < (int)uVar13) {

            DArrayGetElement(this_00->field_022E,uVar13,&local_114);
            uVar3 = local_18;
            if (local_110 == -1) {
              uVar12 = uVar13;
            }
          }

          DArrayGetElement(this_00->field_002D,uVar3 & 0xffff,&local_8);
          local_114 = 0;
          local_102 = 0;
          local_110 = (short)local_8;

          Library::DKW::TBL::DArrayPut(this_00->field_022E,uVar12,&local_114);
          local_48 = uVar12;
          /* ST_CALLSITE[004A1296]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {

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
          /* ST_CALLSITE[004A12F3]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,CASE_6,&local_4c);
          local_18 = uVar3 + 1;
        } while ((local_18 & 0xffff) < local_14);
      }
    }

    DArrayGetElement(this_00->field_022A,this_00->field_0232,&local_124);
    pDVar10 = local_28;
    if (local_28->count != 0) {
      /* ST_CALLSITE[004A1428]: CALL 0x00405d7b; direct=00405D7B STGroupBoatC::InitWay */
      InitWay(this_00,local_28,(int)local_124,(int)local_122,(int)local_120);
    }
    DArrayDestroy(pDVar10);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_02;
  }
  if (this_00->field_01E6 == CASE_7) {
    uVar13 = 0;
    SVar11 = g_playSystem_00802A38->field_00E4;
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = SVar11;
    if (local_14 != 0) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        pSVar4 = (STBoatC *)
                 /* ST_CALLSITE[004A1488]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (pSVar4 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xe8c);
        }
        /* ST_CALLSITE[004A14BB]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0((STFishC *)pSVar4,&local_20,&local_1e,&local_22);
        /* ST_CALLSITE[004A14D3]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        STBoatC::sub_00481520(pSVar4,(int)local_20,(int)local_1e,*(int *)&this_00->field_0x222);
        /* ST_CALLSITE[004A14E0]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        STBoatC::CmdToObj(pSVar4,CASE_1,&local_44);
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX_03;
      } while (uVar12 < local_14);
    }
  }
  if (this_00->field_01E6 == CASE_8) {
    local_18 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    if (local_14 != 0) {
      do {
        uVar13 = local_18 & 0xffff;

        DArrayGetElement(this_00->field_002D,uVar13,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A1553]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xe9a);
          }
          /* ST_CALLSITE[004A157C]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar5 = pSVar4->sub_0045EEE0();
          /* ST_CALLSITE[004A1588]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar5 != 8) && (dVar5 = pSVar4->sub_0045EEE0(), dVar5 != 0x14)) &&
             /* ST_CALLSITE[004A1594]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (dVar5 = pSVar4->sub_0045EEE0(), dVar5 != 0x1a)) {

            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
            if (iVar7 == 0) {
              /* ST_CALLSITE[004A15AF]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
            }
            else {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }

              Library::DKW::TBL::DArrayAppend(local_c,&local_8);
            }

            DArrayRemoveAt(this_00->field_002D,uVar13);
            local_18 = local_18 + 0xffff;
            local_14 = local_14 - 1;
          }
        }
        local_18 = local_18 + 1;
      } while ((local_18 & 0xffff) < local_14);
    }
    uVar13 = 0;
    local_18 = this_00->field_0029->count;
    if (local_18 != 0) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_0029,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A1643]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar8 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar8 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xeb0);
          }
          /* ST_CALLSITE[004A166D]: CALL dword ptr [EAX + 0x2c] */
          iVar7 = pSVar8->vfunc_2C();
          /* ST_CALLSITE[004A1679]: CALL dword ptr [EDX + 0x2c] */
          if (((iVar7 == 8) || (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x14)) ||
             /* ST_CALLSITE[004A1685]: CALL dword ptr [EAX + 0x2c] */
             (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x1a)) {
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            }

            Library::DKW::TBL::DArrayAppend(local_10,&local_8);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    pDVar10 = local_c;
    /* ST_CALLSITE[004A16D3]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_18), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
    }
    if (pDVar10 != nullptr) {
      DArrayDestroy(pDVar10);
    }
    /* ST_CALLSITE[004A1705]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
    DistributeMD(this_00,1,this_00->field_024E,this_00->field_0266,this_00->field_002D);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_04;
  }
  if (this_00->field_01E6 == CASE_9) {
    uVar13 = 0;
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
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A17EA]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xecf);
          }
          /* ST_CALLSITE[004A1813]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar5 = pSVar4->sub_0045EEE0();
          /* ST_CALLSITE[004A181F]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar5 == 0xc) || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x18))
             /* ST_CALLSITE[004A182B]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x19)) {
            puVar15 = &local_154;
            SVar14 = CASE_11;
          }
          else {

            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
            if (iVar7 != 0) {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }

              Library::DKW::TBL::DArrayAppend(local_c,&local_8);
              goto LAB_004a1878;
            }
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A1873]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,SVar14,puVar15);
        }
LAB_004a1878:
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_14);
    }
    uVar13 = 0;
    local_18 = this_00->field_0029->count;
    if (local_18 != 0) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_0029,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A18C3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar8 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar8 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xee9);
          }
          /* ST_CALLSITE[004A18EC]: CALL dword ptr [EDX + 0x2c] */
          iVar7 = pSVar8->vfunc_2C();
          /* ST_CALLSITE[004A18F8]: CALL dword ptr [EAX + 0x2c] */
          if (((iVar7 == 0xc) || (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x18)) ||
             /* ST_CALLSITE[004A1904]: CALL dword ptr [EDX + 0x2c] */
             (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x19)) {
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            }

            Library::DKW::TBL::DArrayAppend(local_10,&local_8);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    pDVar10 = local_c;
    /* ST_CALLSITE[004A1952]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_18), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_05;
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_06;
    }
    if (pDVar10 != nullptr) {
      DArrayDestroy(pDVar10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_07;
    }
  }
  if (this_00->field_01E6 == CASE_A) {
    uVar13 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    local_64 = g_playSystem_00802A38->field_00E4;
    local_60 = this_00->field_0295;
    local_5e = this_00->field_0297;
    local_5c = this_00->field_0299;
    if (local_14 != 0) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A19E8]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf02);
          }
          /* ST_CALLSITE[004A1A12]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar5 = pSVar4->sub_0045EEE0();
          /* ST_CALLSITE[004A1A1E]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar5 == 8) || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x14)) ||
             /* ST_CALLSITE[004A1A2A]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x1a)) {
            puVar15 = &local_64;
            SVar14 = CASE_D;
          }
          else {

            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
            if (iVar7 != 0) {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }

              Library::DKW::TBL::DArrayAppend(local_c,&local_8);
              goto LAB_004a1a74;
            }
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A1A6F]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,SVar14,puVar15);
        }
LAB_004a1a74:
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_14);
    }
    uVar13 = 0;
    local_18 = this_00->field_0029->count;
    if (local_18 != 0) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_0029,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A1ABF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar8 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar8 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf1c);
          }
          /* ST_CALLSITE[004A1AE9]: CALL dword ptr [EAX + 0x2c] */
          iVar7 = pSVar8->vfunc_2C();
          /* ST_CALLSITE[004A1AF5]: CALL dword ptr [EDX + 0x2c] */
          if (((iVar7 == 8) || (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x14)) ||
             /* ST_CALLSITE[004A1B01]: CALL dword ptr [EAX + 0x2c] */
             (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x1a)) {
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            }

            Library::DKW::TBL::DArrayAppend(local_10,&local_8);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    pDVar10 = local_c;
    /* ST_CALLSITE[004A1B4F]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_18), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_08;
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_09;
    }
    if (pDVar10 != nullptr) {
      DArrayDestroy(pDVar10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_10;
    }
  }
  if (this_00->field_01E6 == CASE_4) {
    /* ST_CALLSITE[004A1B83]: CALL 0x00403251; direct=00403251 STGroupBoatC::DistributeDock */
    DistributeDock(this_00,1,(DArrayTy *)this_00->field_029F,this_00->field_002D);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_11;
  }
  if (this_00->field_01E6 == CASE_5) {
    uVar13 = 0;
    if (local_14 != 0) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX_12;
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A1BC6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf35);
          }

          iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
          if (iVar7 == 0) {
            local_1c = g_playSystem_00802A38->field_00E4;
            /* ST_CALLSITE[004A1C0D]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            SVar11 = extraout_ECX_13;
          }
          else {
            if (local_c == nullptr) {
              local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            }

            Library::DKW::TBL::DArrayAppend(local_c,&local_8);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            SVar11 = extraout_ECX_14;
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_14);
    }
    uVar13 = 0;
    local_18 = this_00->field_0029->count;
    if (local_18 != 0) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_0029,uVar12,&local_8);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX_15;
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A1C7F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar8 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar8 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf47);
          }

          iVar7 = thunk_FUN_00490d90(pSVar8);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          SVar11 = extraout_ECX_16;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          if ((iVar7 == 1) &&

             (local_e8 = thunk_FUN_00449a90(this_00->field_0024,(short)local_8),
             SVar11 = extraout_ECX_17, local_e8 != 0xffffffff)) break;
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    if (local_e8 != 0xffffffff) {

      DArrayGetElement((DArrayTy *)g_packedRecords_A62x8[this_00->field_0024].field1976_0x9f6,
                       local_e8,local_130);

      Library::DKW::TBL::FUN_006afe40((int *)&local_10,local_130[0]);
      /* ST_CALLSITE[004A1D33]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,
                 STReplaceLowByte((uint32_t)(extraout_ECX_18), (uint8_t)(this_00->field_0024)),&local_10->flags,
                 &local_c->flags);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_19;
    }
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_20;
    }
    if (local_c != nullptr) {
      DArrayDestroy(local_c);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_21;
    }
  }
  if (this_00->field_01E6 == CASE_B) {
    uVar13 = 0;
    local_d8 = g_playSystem_00802A38->field_00E4;
    local_18 = 0;
    pDVar10 = local_c;
    local_1c = local_d8;
    if (0 < (int)local_14) {
      do {

        DArrayGetElement(this_00->field_002D,uVar13,&local_8);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX_22;
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A1DAC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf5d);
          }
          /* ST_CALLSITE[004A1DD5]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar7 = pSVar4->sub_004838B0();
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          SVar11 = extraout_ECX_23;
          if (iVar7 != 0) {

            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
            if (iVar7 == 0) {
              /* ST_CALLSITE[004A1DF6]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
              dVar5 = pSVar4->sub_0045EEE0();
              if ((((dVar5 != 7) && (dVar5 != 0x13)) && (dVar5 != 0x1b)) ||
                 /* ST_CALLSITE[004A1E0A]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
                 (iVar7 = STGameObjC::sub_00492370((STGameObjC *)pSVar4), iVar7 != 0)) {
                /* ST_CALLSITE[004A1E7E]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
                STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
                /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                SVar11 = extraout_ECX_24;
                goto LAB_004a1ea4;
              }
              local_d4 = this_00->field_02A3;
              local_d2 = this_00->field_02A5;
              local_d0 = *(undefined2 *)&this_00->field_0x2a7;
              local_ce = *(undefined4 *)&this_00->field_0x2a9;
              /* ST_CALLSITE[004A1E54]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              STBoatC::CmdToObj(pSVar4,CASE_F,&local_d8);
              pDVar9 = local_10;
              if (local_10 == nullptr) {
                pDVar9 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                local_10 = pDVar9;
              }
            }
            else {
              pDVar9 = pDVar10;
              if (pDVar10 == nullptr) {
                pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                pDVar9 = pDVar10;
                local_c = pDVar10;
              }
            }

            Library::DKW::TBL::DArrayAppend(pDVar9,&local_8);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            SVar11 = extraout_ECX_25;
          }
        }
LAB_004a1ea4:
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    if (local_10 == nullptr) {
LAB_004a1ede:
      if (local_c != nullptr) {
        uVar13 = 0;
        dVar5 = local_c->count;
        if (0 < (int)dVar5) {
          uVar12 = 0;
          do {

            DArrayGetElement(local_c,uVar12,&local_8);
            /* ST_CALLSITE[004A1F0E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            /* ST_CALLSITE[004A1F1B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
            uVar13 = uVar13 + 1;
            uVar12 = uVar13 & 0xffff;
          } while ((int)uVar12 < (int)dVar5);
        }
      }
    }
    else if (pDVar10 == nullptr) {
      if (local_10 == nullptr) goto LAB_004a1ede;
    }
    else {
      /* ST_CALLSITE[004A1ED3]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(SVar11), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&pDVar10->flags);
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
    uVar13 = 0;
    local_18 = 0;
    local_1c = local_e4[0];
    if (0 < (int)local_14) {
      do {

        DArrayGetElement(this_00->field_002D,uVar13,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A1FA2]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xf8e);
          }
          /* ST_CALLSITE[004A1FCC]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar7 = pSVar4->sub_004838B0();
          if (iVar7 != 0) {
            /* ST_CALLSITE[004A1FDE]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
            dVar5 = pSVar4->sub_0045EEE0();
            if ((((dVar5 == 7) || (dVar5 == 0x13)) || (dVar5 == 0x1b)) &&
               /* ST_CALLSITE[004A1FF2]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
               (iVar7 = STGameObjC::sub_00492370((STGameObjC *)pSVar4), iVar7 != 0)) {
              /* ST_CALLSITE[004A2006]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              STBoatC::CmdToObj(pSVar4,CASE_10,local_e4);
              if (((this_00->field_02AD != -1) || (this_00->field_02AF != -1)) ||
                 (this_00->field_02B1 != -1)) {
                pDVar10 = local_10;
                if (local_10 == nullptr) {
                  pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                  local_10 = pDVar10;
                }
LAB_004a2089:

                Library::DKW::TBL::DArrayAppend(pDVar10,&local_8);
              }
            }
            else {

              iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
              if (iVar7 == 0) {
                /* ST_CALLSITE[004A2051]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
                STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
              }
              else if (((this_00->field_02AD != -1) || (this_00->field_02AF != -1)) ||
                      (this_00->field_02B1 != -1)) {
                pDVar10 = local_c;
                if (local_c == nullptr) {
                  pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                  local_c = pDVar10;
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
    if (local_10 == nullptr) {
LAB_004a20d0:
      if (local_c != nullptr) {
        dVar5 = local_c->count;
        uVar13 = 0;
        if (0 < (int)dVar5) {
          uVar12 = 0;
          do {
            /* ST_CALLSITE[004A20E9]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__fastcall;pointer:/STAllPlayersC;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;pointer:/void */
            DArrayGetElement(local_c,uVar12,&local_8);
            /* ST_CALLSITE[004A20FE]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            /* ST_CALLSITE[004A210B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
            uVar13 = uVar13 + 1;
            uVar12 = uVar13 & 0xffff;
          } while ((int)uVar12 < (int)dVar5);
        }
      }
    }
    else if (local_c == nullptr) {
      if (local_10 == nullptr) goto LAB_004a20d0;
    }
    else {
      /* ST_CALLSITE[004A20C5]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar13), (uint8_t)(this_00->field_0024)),
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
    uVar13 = 0;
    local_58 = g_playSystem_00802A38->field_00E4;
    local_50 = *(undefined2 *)&this_00->field_0x2b7;
    local_54 = this_00->field_02B3;
    local_1c = local_58;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A21AC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xfc2);
          }
          if (*(int *)&this_00->field_0x2b9 == -1) {
            if ((pSVar4->field_07B6 == 0) || (pSVar4->field_07BE < 1)) {
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
            if ((pSVar4->field_07B6 != *(int *)&this_00->field_0x2b9) || (pSVar4->field_07BE < 1))
            goto LAB_004a221d;
            puVar15 = &local_58;
            SVar14 = CASE_7;
          }
          /* ST_CALLSITE[004A2221]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,SVar14,puVar15);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_E) {
    local_78 = this_00->field_02BD;
    uVar13 = 0;
    local_7c = g_playSystem_00802A38->field_00E4;
    local_74 = this_00->field_02C1;
    local_76 = this_00->field_02BF;
    local_1c = local_7c;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A22AB]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xfea);
          }
          if ((pSVar4->field_06F7 == CASE_4) && (0 < pSVar4->field_07A2)) {
            puVar15 = &local_7c;
            SVar14 = CASE_A;
          }
          else {
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A22F4]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,SVar14,puVar15);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_F) {
    local_83 = *(undefined2 *)&this_00->field_0x2c4;
    uVar13 = 0;
    local_88 = g_playSystem_00802A38->field_00E4;
    local_81 = *(undefined4 *)&this_00->field_0x2c6;
    local_84 = this_00->field_0x2c3;
    local_1c = local_88;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A2379]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1003);
          }
          SVar1 = pSVar4->field_06F7;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_12)) || (SVar1 == CASE_22)) {
            puVar15 = &local_88;
            SVar14 = CASE_9;
          }
          else {
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A23C7]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,SVar14,puVar15);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_11) {
    local_c4 = this_00->field_02CE;
    uVar13 = 0;
    local_c8 = g_playSystem_00802A38->field_00E4;
    local_c0 = this_00->field_02D2;
    local_be = this_00->field_02D4;
    local_bc = this_00->field_02D6;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A2462]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x101e);
          }
          /* ST_CALLSITE[004A2493]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,CASE_16,&local_c8);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_10) {
    local_f8 = this_00->field_02D8;
    uVar13 = 0;
    local_fc = g_playSystem_00802A38->field_00E4;
    local_f4 = this_00->field_02DC;
    local_f0 = this_00->field_02E0;
    local_ea = this_00->field_02E6;
    local_f2 = this_00->field_02DE;
    local_ee = this_00->field_02E2;
    local_ec = this_00->field_02E4;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {

        DArrayGetElement(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A2554]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1032);
          }
          /* ST_CALLSITE[004A2584]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,CASE_15,&local_fc);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_12) {
    local_6c = this_00->field_02E8;
    local_70 = g_playSystem_00802A38->field_00E4;
    local_6a = this_00->field_02EA;
    local_68 = this_00->field_02EC;
    uVar13 = 0;
    local_18 = 0;
    pDVar10 = local_c;
    if (0 < (int)local_14) {
      do {

        DArrayGetElement(this_00->field_002D,uVar13,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A260F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1042);
          }
          /* ST_CALLSITE[004A2638]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar5 = pSVar4->sub_0045EEE0();
          /* ST_CALLSITE[004A2644]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar5 == 7) || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x13)) ||
             /* ST_CALLSITE[004A2650]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x1b)) {
            /* ST_CALLSITE[004A2696]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar4,CASE_17,&local_70);
            pDVar9 = local_10;
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              pDVar9 = local_10;
            }
          }
          else {

            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
            if (iVar7 == 0) {
              /* ST_CALLSITE[004A266B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
              goto LAB_004a26bb;
            }
            pDVar9 = pDVar10;
            if (pDVar10 == nullptr) {
              pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              pDVar9 = pDVar10;
              local_c = pDVar10;
            }
          }

          Library::DKW::TBL::DArrayAppend(pDVar9,&local_8);
        }
LAB_004a26bb:
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    if (local_10 == nullptr) {
LAB_004a26f5:
      if (local_c != nullptr) {
        dVar5 = local_c->count;
        uVar13 = 0;
        if (0 < (int)dVar5) {
          uVar12 = 0;
          do {
            /* ST_CALLSITE[004A270E]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__fastcall;pointer:/STAllPlayersC;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;pointer:/void */
            DArrayGetElement(local_c,uVar12,&local_8);
            /* ST_CALLSITE[004A2723]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            /* ST_CALLSITE[004A2730]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
            uVar13 = uVar13 + 1;
            uVar12 = uVar13 & 0xffff;
          } while ((int)uVar12 < (int)dVar5);
        }
      }
    }
    else if (pDVar10 == nullptr) {
      if (local_10 == nullptr) goto LAB_004a26f5;
    }
    else {
      /* ST_CALLSITE[004A26EA]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar13), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&pDVar10->flags);
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
    uVar12 = 0;
    local_b8 = g_playSystem_00802A38->field_00E4;
    local_b0 = *(undefined2 *)&this_00->field_0x2f2;
    uVar13 = STReplaceLowWord((uint32_t)(g_playSystem_00802A38), (uint16_t)(local_b0));
    local_b4 = this_00->field_02EE;
    local_ae = *(undefined4 *)&this_00->field_0x2f4;
    local_1c = local_b8;
    if (0 < (int)local_14) {
      uVar13 = 0;
      do {

        DArrayGetElement(this_00->field_002D,uVar13,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A27E9]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1071);
          }
          /* ST_CALLSITE[004A2812]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar5 = pSVar4->sub_0045EEE0();
          /* ST_CALLSITE[004A281E]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar5 == 0xc) || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x18))
             /* ST_CALLSITE[004A282A]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x1d)) {
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            }

            Library::DKW::TBL::DArrayAppend(local_10,&local_8);
            puVar15 = &local_b8;
            SVar14 = CASE_12;
          }
          else {

            iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
            if (iVar7 != 0) {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }

              Library::DKW::TBL::DArrayAppend(local_c,&local_8);
              goto LAB_004a2897;
            }
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A2892]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,SVar14,puVar15);
        }
LAB_004a2897:
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    pDVar10 = local_c;
    /* ST_CALLSITE[004A28BD]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar13), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
    }
    if (pDVar10 != nullptr) {
      DArrayDestroy(pDVar10);
    }
  }
  if (this_00->field_01E6 == CASE_14) {
    /* ST_CALLSITE[004A291D]: CALL 0x00403bca; direct=00403BCA STGroupBoatC::Way3DGrpGetDistrPoint; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/STGroupBoatC;pointer:/SubmarineTitans/Recovered/DArrayTy;/int;/int;/undefined4;/int;/int;/int */
    local_28 = Way3DGrpGetDistrPoint
                         (this_00,this_00->field_002D,(int)this_00->field_02FE,
                          (int)this_00->field_0300,(int)this_00->field_0302,(int)this_00->field_02F8
                          ,(int)this_00->field_02FA,(int)this_00->field_02FC);
    if (local_28 == nullptr) {
      return;
    }
    /* ST_CALLSITE[004A2964]: CALL 0x00403bca; direct=00403BCA STGroupBoatC::Way3DGrpGetDistrPoint; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/STGroupBoatC;pointer:/SubmarineTitans/Recovered/DArrayTy;/int;/int;/undefined4;/int;/int;/int */
    pDVar10 = Way3DGrpGetDistrPoint
                        (this_00,this_00->field_002D,(int)this_00->field_02F8,
                         (int)this_00->field_02FA,(int)this_00->field_02FC,(int)this_00->field_02FE,
                         (int)this_00->field_0300,(int)this_00->field_0302);
    if (pDVar10 == nullptr) {
      DArrayDestroy(local_28);
      return;
    }
    local_18 = 0;
    local_98 = g_playSystem_00802A38->field_00E4;
    if (0 < (int)local_14) {
      uVar13 = 0;
      do {

        DArrayGetElement(local_28,uVar13,&local_38);

        DArrayGetElement(pDVar10,uVar13,&local_30);

        DArrayGetElement(this_00->field_002D,uVar13,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A29E7]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
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
          /* ST_CALLSITE[004A2A59]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,CASE_8,&local_98);
        }
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    DArrayDestroy(local_28);
    DArrayDestroy(pDVar10);
  }
  if (this_00->field_01E6 != CASE_15) {
    g_currentExceptionFrame = local_19c.previous;
    return;
  }
  uVar13 = 0;
  local_a8 = g_playSystem_00802A38->field_00E4;
  local_1c = local_a8;
  if (0 < (int)local_14) {
    uVar12 = 0;
    do {

      DArrayGetElement(this_00->field_002D,uVar12,&local_8);
      if ((ushort)local_8 != 0xffff) {
        pSVar4 = (STBoatC *)
                 /* ST_CALLSITE[004A2ADB]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (pSVar4 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x10b0);
        }
        /* ST_CALLSITE[004A2B04]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
        iVar7 = pSVar4->sub_004838B0();
        if (iVar7 != 0) {

          iVar7 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
          if (iVar7 == 0) {
            /* ST_CALLSITE[004A2B25]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
            dVar5 = pSVar4->sub_0045EEE0();
            if ((dVar5 == 7) || (dVar5 == 0x13)) {
              /* ST_CALLSITE[004A2B46]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
              iVar7 = STGameObjC::sub_00492370((STGameObjC *)pSVar4);
              if (iVar7 == 0) {
                local_a2 = this_00->field_0306;
                local_a4 = this_00->field_0304;
                local_a0 = *(undefined2 *)&this_00->field_0x308;
                local_9e = *(undefined4 *)&this_00->field_0x30a;
                /* ST_CALLSITE[004A2B94]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
                STBoatC::CmdToObj(pSVar4,CASE_F,&local_a8);
                pDVar10 = local_10;
                if (local_10 == nullptr) {
                  pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                  local_10 = pDVar10;
                }
                goto LAB_004a2bcf;
              }
            }
            else {
              /* ST_CALLSITE[004A2B3A]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
            }
          }
          else {
            pDVar10 = local_c;
            if (local_c == nullptr) {
              pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_c = pDVar10;
            }
LAB_004a2bcf:

            Library::DKW::TBL::DArrayAppend(pDVar10,&local_8);
          }
        }
      }
      uVar13 = uVar13 + 1;
      uVar12 = uVar13 & 0xffff;
    } while ((int)uVar12 < (int)local_14);
  }
  if (local_10 != nullptr) {
    if (local_c != nullptr) {
      /* ST_CALLSITE[004A2C03]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_c), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&local_c->flags);
      goto cf_common_exit_004A2C5D;
    }
    if (local_10 != nullptr) goto cf_common_exit_004A2C5D;
  }
  if (local_c != nullptr) {
    uVar13 = 0;
    dVar5 = local_c->count;
    if (0 < (int)dVar5) {
      uVar12 = 0;
      do {

        DArrayGetElement(local_c,uVar12,&local_8);
        /* ST_CALLSITE[004A2C3E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar4 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        /* ST_CALLSITE[004A2C4B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)dVar5);
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

