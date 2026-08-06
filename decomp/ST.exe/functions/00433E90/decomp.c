#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PointPick

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00433E90 -> 0044AB90 @ 0043402D | 00433E90 -> 0044AB90 @ 00434084 | 00433E90 ->
   0044AB90 @ 00434126 | 00433E90 -> 0044AB90 @ 00434221 | 00433E90 -> 0044AB90 @ 004342C8 |
   00433E90 -> 0044AB90 @ 004349DA | 00433E90 -> 0044AB90 @ 00434A25 | 00433E90 -> 0044AB90 @
   00434B10 | 00433E90 -> 0044AB90 @ 00434BE9 | 00433E90 -> 0044AB90 @ 00434C72 | 005449B0 ->
   00433E90 @ 005473F1; unproven partial register write at 005473E8 */

void __thiscall
STAllPlayersC::PointPick
          (STAllPlayersC *this,DArrayTy *objectIds,int param_2,int param_3,int param_4)

{
  int *piVar2;
  int iVar4;
  int local_EAX_225;
  int local_EAX_344;
  int local_EAX_413;
  int local_EAX_500;
  int iVar3;
  int local_EAX_662;
  int local_EAX_913;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EAX;
  int local_EAX_1080;
  int local_EAX_1213;
  int local_EAX_1323;
  int local_EAX_1370;
  int local_EAX_1454;
  int local_EAX_1564;
  int local_EAX_1611;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar5;
  int local_EAX_1716;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EAX_00;
  uint uVar6;
  int local_EAX_1931;
  int local_EAX_2021;
  int local_EAX_2078;
  int local_EAX_2155;
  int local_EAX_2198;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_01;
  int local_EAX_2403;
  int local_EAX_2463;
  int local_EAX_2539;
  int local_EAX_2585;
  int local_EAX_2770;
  int local_EAX_2890;
  int local_EAX_2965;
  int local_EAX_3128;
  int local_EAX_3200;
  int local_EAX_3417;
  int local_EAX_3482;
  int local_EAX_3554;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_08;
  undefined2 uVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_03;
  char ownerPlayerId;
  char playerId;
  short objectId;
  DArrayTy *local_8;
  int uVar4;

  local_8 = nullptr;
  piVar2 = (int *)ST3DSMAPContext::sub_006EB350(g_sT3DSMAPContext_00807598,param_2,param_3,0xe,1);
  playerId = (char)objectIds;
  if (piVar2 == nullptr) {
    RemoveActiveTV(playerId);
    return;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*piVar2 + 0xec))();
  if (iVar4 != 1) {
    return;
  }
  uVar4 = piVar2[8];
  if (0x1a4 < (uint)uVar4) {
    if ((uint)uVar4 < 0x1b9) {
      if (uVar4 == 0x1b8) goto LAB_004345cf;
      if (uVar4 != 0x1ae) {
        return;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_4 == 1) {
        return;
      }
      if (g_packedRecords_A62x8[playerId].field200_0x203 == 0) {
        iVar4 = g_packedRecords_A62x8[playerId].field96_0x163;
        if (iVar4 != 0) {
          if (iVar4 == 0x3c) {
            local_EAX_1716 =
                 CheckTmps(playerId,0,0x1ae,(char)piVar2[9],nullptr,
                           STField<short>(piVar2,0x32));
            if (0 < local_EAX_1716) {
              ActivateTV(this,playerId,0,local_EAX_1716);
              SelfCheckObjControl(this);
              return;
            }
            PushTV(playerId,0);
            ResetActivityFromTmp(this,playerId,0,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar5 = CONCAT22(extraout_var_11,STField<undefined2>(piVar2,0x32));
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = STReplaceLowByte((uint32_t)(extraout_EAX_00), (uint8_t)((char)piVar2[9]));
            iVar4 = piVar2[8];
            goto cf_common_exit_0043440E;
          }
          if (iVar4 != 0x1ae) {
            local_EAX_1564 =
                 ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1003,0,0,
                                    "%s","STAllPlayersC::PointPick GAMETYPE_MINESET ACT_LEFT");
            if (local_EAX_1564 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          local_EAX_1611 =
               CheckTmps(playerId,0,0x1ae,(char)piVar2[9],nullptr,
                         STField<short>(piVar2,0x32));
          if (0 < local_EAX_1611) {
            ActivateTV(this,playerId,0,local_EAX_1611);
            SelfCheckObjControl(this);
            return;
          }
          if (local_EAX_1611 < 0) {
            PushTV(playerId,0);
            ResetActivityFromTmp(this,playerId,0,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar5 = CONCAT22(extraout_var,STField<undefined2>(piVar2,0x32));
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)((char)piVar2[9]));
            iVar4 = piVar2[8];
            goto cf_common_exit_0043440E;
          }
          goto cf_common_exit_00434CBD;
        }
        objectId = STField<short>(piVar2,0x32);
        ownerPlayerId = (char)piVar2[9];
        iVar4 = 0x1ae;
LAB_004345a2:
        local_EAX_1370 = CheckTmps(playerId,0,iVar4,ownerPlayerId,nullptr,objectId);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = extraout_EDX_00;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_02;
        if (0 < local_EAX_1370) {
LAB_004345b4:
          ActivateTV(this,playerId,0,local_EAX_1370);
          SelfCheckObjControl(this);
          return;
        }
      }
      else {
        if (g_packedRecords_A62x8[playerId].field200_0x203 != 1) {
          local_EAX_1213 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x102e,0,0,"%s",
                                  "STAllPlayersC::PointPick GAMETYPE_MINESET wrong panel number");
          if (local_EAX_1213 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        g_packedRecords_A62x8[playerId].field200_0x203 = 0;
        ResetActivityFromTmp(this,playerId,1,0,0);
        iVar4 = g_packedRecords_A62x8[playerId].field96_0x163;
        if (iVar4 == 0) {
          objectId = STField<short>(piVar2,0x32);
          ownerPlayerId = (char)piVar2[9];
          iVar4 = piVar2[8];
          goto LAB_004345a2;
        }
        if (iVar4 == 0x3c) {
          local_EAX_1454 =
               CheckTmps(playerId,0,piVar2[8],(char)piVar2[9],nullptr,
                         STField<short>(piVar2,0x32));
          if (0 < local_EAX_1454) {
            ActivateTV(this,playerId,0,local_EAX_1454);
            SelfCheckObjControl(this);
            return;
          }
        }
        else {
          if (iVar4 != 0x1ae) {
            local_EAX_1323 =
                 ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x102a,0,0,
                                    "%s","STAllPlayersC::PointPick GAMETYPE_MINESET ACT_RIGHT");
            if (local_EAX_1323 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          local_EAX_1370 =
               CheckTmps(playerId,0,0x1ae,(char)piVar2[9],nullptr,
                         STField<short>(piVar2,0x32));
          if (-1 < local_EAX_1370) goto LAB_004345b4;
        }
        PushTV(playerId,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = extraout_EDX;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_01;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar5 = CONCAT22(uVar8,STField<undefined2>(piVar2,0x32));
      uVar6 = STReplaceLowByte((uint32_t)(uVar7), (uint8_t)((char)piVar2[9]));
      iVar4 = piVar2[8];
cf_common_exit_0043440E:
      AddObjToTmp2(this,playerId,0,0,iVar4,uVar6,uVar5);
      SelfCheckObjControl(this);
      return;
    }
    if ((uint)uVar4 < 1000) {
      return;
    }
    if (0x3e9 < (uint)uVar4) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_4 == 1) {
      return;
    }
    if (g_packedRecords_A62x8[playerId].field200_0x203 == 0) {
      g_packedRecords_A62x8[playerId].field200_0x203 = 1;
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar4 = g_packedRecords_A62x8[playerId].field149_0x1b3;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          objectIds = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
          Library::DKW::TBL::DArrayAppend(objectIds,(void *)((int)piVar2 + 0x32));
          local_EAX_3417 = CheckTmps(playerId,1,0x19a,(char)piVar2[9],objectIds,0);
          if (-1 < local_EAX_3417) {
            ActivateTV(this,playerId,1,local_EAX_3417);
            goto cf_common_exit_00434CB8;
          }
          goto LAB_00434c88;
        }
        if (iVar4 != 0) {
          if ((iVar4 != 0x5a) && (iVar4 != 0x172)) goto LAB_00434c12;
          goto LAB_00434c44;
        }
LAB_004349ac:
        objectIds = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        Library::DKW::TBL::DArrayAppend(objectIds,(void *)((int)piVar2 + 0x32));
        local_EAX_2890 = CheckTmps(playerId,1,0x19a,(char)piVar2[9],objectIds,0);
        if (local_EAX_2890 < 1) goto LAB_00434c92;
        ActivateTV(this,playerId,1,local_EAX_2890);
      }
      else {
        if ((iVar4 != 0x1a4) && (iVar4 != 0x1b8)) {
LAB_00434c12:
          local_EAX_3482 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xfd1,0,0,"%s",
                                  "STAllPlayersC::PointPick GAMETYPE_OBJECT ACT_LEFT");
          if (local_EAX_3482 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
LAB_00434c44:
        objectIds = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        Library::DKW::TBL::DArrayAppend(objectIds,(void *)((int)piVar2 + 0x32));
        local_EAX_3554 = CheckTmps(playerId,1,0x19a,(char)piVar2[9],objectIds,0);
        if (0 < local_EAX_3554) {
          ActivateTV(this,playerId,1,local_EAX_3554);
          goto cf_common_exit_00434CB8;
        }
LAB_00434c88:
        PushTV(playerId,1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        local_EAX_2890 = extraout_EAX_02;
LAB_00434c92:
        AddObjToTmp(this,playerId,1,0,(char)piVar2[9],
                    STReplaceLowWord((uint32_t)(local_EAX_2890), (uint16_t)(STField<undefined2>(piVar2,0x32))));
      }
      g_packedRecords_A62x8[playerId].field149_0x1b3 = 0x19a;
    }
    else {
      if (g_packedRecords_A62x8[playerId].field200_0x203 != 1) {
        local_EAX_2770 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xfd5,0,0,"%s",
                                "STAllPlayersC::PointPick GAMETYPE_OBJECT wrong panel number");
        if (local_EAX_2770 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = g_packedRecords_A62x8[playerId].field149_0x1b3;
      if (iVar4 < 0x19b) {
        if (iVar4 != 0x19a) {
          if (iVar4 == 0) goto LAB_004349ac;
          if ((iVar4 != 0x5a) && (iVar4 != 0x172)) goto LAB_00434ab0;
          goto LAB_00434ae2;
        }
        objectIds = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        Library::DKW::TBL::DArrayAppend(objectIds,(void *)((int)piVar2 + 0x32));
        local_EAX_2965 = CheckTmps(playerId,1,0x19a,(char)piVar2[9],objectIds,0);
        if (0 < local_EAX_2965) {
          ActivateTV(this,playerId,1,local_EAX_2965);
          goto cf_common_exit_00434CB8;
        }
        if (-1 < local_EAX_2965) goto cf_common_exit_00434CB8;
        PushTV(playerId,1);
        if (g_packedRecords_A62x8[playerId].field158_0x1c7 != piVar2[9]) goto LAB_00434b39;
        CalibrateTmp(this,playerId,1,1,&objectIds->flags,(int *)&local_8,nullptr,nullptr);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        ResetActivityFromObjs
                  (this,STReplaceLowByte((uint32_t)(extraout_EDX_03), (uint8_t)((char)piVar2[9])),0x19a,local_8,0
                   ,0);
        DArrayDestroy(local_8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_05;
      }
      else {
        if ((iVar4 != 0x1a4) && (iVar4 != 0x1b8)) {
LAB_00434ab0:
          local_EAX_3128 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xf9a,0,0,"%s",
                                  "STAllPlayersC::PointPick GAMETYPE_OBJECT ACT_RIGHT");
          if (local_EAX_3128 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
LAB_00434ae2:
        objectIds = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        Library::DKW::TBL::DArrayAppend(objectIds,(void *)((int)piVar2 + 0x32));
        local_EAX_3200 = CheckTmps(playerId,1,0x19a,(char)piVar2[9],objectIds,0);
        if (0 < local_EAX_3200) {
          ActivateTV(this,playerId,1,local_EAX_3200);
          goto cf_common_exit_00434CB8;
        }
        PushTV(playerId,1);
LAB_00434b39:
        ResetActivityFromTmp(this,playerId,1,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_06;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      AddObjToTmp(this,playerId,1,0,(char)piVar2[9],
                  CONCAT22(uVar8,STField<undefined2>(piVar2,0x32)));
      g_packedRecords_A62x8[playerId].field149_0x1b3 = 0x19a;
    }
cf_common_exit_00434CB8:
    DArrayDestroy(objectIds);
    goto cf_common_exit_00434CBD;
  }
  if (uVar4 != 0x1a4) {
    if (uVar4 == 0x14) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((param_4 == 1) && (playerId != (char)piVar2[9])) {
        return;
      }
      if (g_packedRecords_A62x8[playerId].field200_0x203 == 0) {
        iVar4 = g_packedRecords_A62x8[playerId].field96_0x163;
        if (iVar4 != 0) {
          if (iVar4 == 0x3c) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_4 == 1) {
              if (*(int *)&g_packedRecords_A62x8[playerId].field97_0x167 != (int)(char)piVar2[9]) {
                return;
              }
              iVar4 = PushTV(playerId,0,0,playerId,STField<short>(piVar2,0x32));
              if (iVar4 == 1) {
                thunk_FUN_0042c300(playerId,0,0,playerId,(uint)STField<ushort>(piVar2,0x32));
                SelfCheckObjControl(this);
                return;
              }
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              AddObjToTmp(this,playerId,0,0,playerId,
                          CONCAT22(extraout_var_00,STField<undefined2>(piVar2,0x32)));
              SelfCheckObjControl(this);
              return;
            }
            objectIds = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
            Library::DKW::TBL::DArrayAppend(objectIds,(void *)((int)piVar2 + 0x32));
            local_EAX_913 = CheckTmps(playerId,0,0x3c,(char)piVar2[9],objectIds,0);
            if (local_EAX_913 < 1) {
              if (local_EAX_913 < 0) {
                PushTV(playerId,0);
                if (g_packedRecords_A62x8[playerId].field105_0x177 != piVar2[9]) goto LAB_0043414f;
                CalibrateTmp(this,playerId,0,1,&objectIds->flags,(int *)&local_8,nullptr,
                             nullptr);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                ResetActivityFromObjs
                          (this,STReplaceLowByte((uint32_t)(extraout_EAX), (uint8_t)((char)piVar2[9])),0x3c,
                           local_8,0,0);
                DArrayDestroy(local_8);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                uVar8 = extraout_var_09;
                goto LAB_0043415b;
              }
            }
            else {
              ActivateTV(this,playerId,0,local_EAX_913);
            }
          }
          else {
            if (iVar4 != 0x1ae) {
              iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xf1e,0,0,
                                         "%s","STAllPlayersC::PointPick GAMETYPE_BOAT ACT_LEFT");
              if (iVar3 == 0) {
                return;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_4 == 1) {
              return;
            }
            objectIds = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
            Library::DKW::TBL::DArrayAppend(objectIds,(void *)((int)piVar2 + 0x32));
            local_EAX_662 = CheckTmps(playerId,0,0x3c,(char)piVar2[9],objectIds,0);
            if (local_EAX_662 < 1) {
              PushTV(playerId,0);
LAB_0043414f:
              ResetActivityFromTmp(this,playerId,0,1,0);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar8 = extraout_var_08;
              goto LAB_0043415b;
            }
            ActivateTV(this,playerId,0,local_EAX_662);
          }
          goto cf_common_exit_00434CB8;
        }
LAB_0043429d:
        objectIds = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        Library::DKW::TBL::DArrayAppend(objectIds,(void *)((int)piVar2 + 0x32));
        local_EAX_1080 = CheckTmps(playerId,0,0x3c,(char)piVar2[9],objectIds,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_10;
        if (local_EAX_1080 < 1) goto LAB_0043415b;
        ActivateTV(this,playerId,0,local_EAX_1080);
      }
      else {
        if (g_packedRecords_A62x8[playerId].field200_0x203 != 1) {
          local_EAX_225 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xf56,0,0,"%s",
                                  "STAllPlayersC::PointPick GAMETYPE_BOAT wrong panel number");
          if (local_EAX_225 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_4 == 1) {
          return;
        }
        g_packedRecords_A62x8[playerId].field200_0x203 = 0;
        ResetActivityFromTmp(this,playerId,1,0,0);
        iVar4 = g_packedRecords_A62x8[playerId].field96_0x163;
        if (iVar4 == 0) goto LAB_0043429d;
        if (iVar4 == 0x3c) {
          objectIds = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
          Library::DKW::TBL::DArrayAppend(objectIds,(void *)((int)piVar2 + 0x32));
          local_EAX_500 = CheckTmps(playerId,0,0x3c,(char)piVar2[9],objectIds,0);
          if (local_EAX_500 < 0) goto LAB_0043404a;
          ActivateTV(this,playerId,0,local_EAX_500);
          goto cf_common_exit_00434CB8;
        }
        if (iVar4 != 0x1ae) {
          local_EAX_344 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xf52,0,0,"%s",
                                  "STAllPlayersC::PointPick GAMETYPE_BOAT ACT_RIGHT");
          if (local_EAX_344 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        objectIds = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        Library::DKW::TBL::DArrayAppend(objectIds,(void *)((int)piVar2 + 0x32));
        local_EAX_413 = CheckTmps(playerId,0,0x3c,(char)piVar2[9],objectIds,0);
        if (0 < local_EAX_413) {
          ActivateTV(this,playerId,0,local_EAX_413);
          goto cf_common_exit_00434CB8;
        }
LAB_0043404a:
        PushTV(playerId,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_07;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_0043415b:
        AddObjToTmp(this,playerId,0,0,(char)piVar2[9],
                    CONCAT22(uVar8,STField<undefined2>(piVar2,0x32)));
      }
      g_packedRecords_A62x8[playerId].field96_0x163 = 0x3c;
      goto cf_common_exit_00434CB8;
    }
    if ((uVar4 != 0x5a) && (uVar4 != 0x172)) {
      return;
    }
  }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_004345cf:
  if (param_4 == 1) {
    return;
  }
  if (g_packedRecords_A62x8[playerId].field200_0x203 != 0) {
    if (g_packedRecords_A62x8[playerId].field200_0x203 != 1) {
      local_EAX_1931 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1090,0,0,"%s",
                              "STAllPlayersC::PointPick GAMETYPE_MINESET wrong panel number");
      if (local_EAX_1931 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar4 = g_packedRecords_A62x8[playerId].field149_0x1b3;
    if (iVar4 < 0x19b) {
      if (iVar4 != 0x19a) {
        if (iVar4 == 0) {
          local_EAX_2021 =
               CheckTmps(playerId,1,uVar4,(char)piVar2[9],nullptr,
                         STField<short>(piVar2,0x32));
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar8 = extraout_var_12;
          if (0 < local_EAX_2021) {
            ActivateTV(this,playerId,1,local_EAX_2021);
            SelfCheckObjControl(this);
            return;
          }
          goto LAB_00434768;
        }
        if ((iVar4 != 0x5a) && (iVar4 != 0x172)) goto LAB_004346e3;
        goto LAB_00434715;
      }
      local_EAX_2078 =
           CheckTmps(playerId,1,uVar4,(char)piVar2[9],nullptr,STField<short>(piVar2,0x32)
                    );
      if (0 < local_EAX_2078) {
        ActivateTV(this,playerId,1,local_EAX_2078);
        SelfCheckObjControl(this);
        return;
      }
    }
    else {
      if ((iVar4 != 0x1a4) && (iVar4 != 0x1b8)) {
LAB_004346e3:
        local_EAX_2155 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1062,0,0,"%s",
                                "STAllPlayersC::PointPick GAMETYPE_RESOURCE ACT_RIGHT");
        if (local_EAX_2155 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
LAB_00434715:
      local_EAX_2198 =
           CheckTmps(playerId,1,uVar4,(char)piVar2[9],nullptr,STField<short>(piVar2,0x32)
                    );
      if (0 < local_EAX_2198) {
        ActivateTV(this,playerId,1,local_EAX_2198);
        SelfCheckObjControl(this);
        return;
      }
      if (-1 < local_EAX_2198) {
cf_common_exit_00434CBD:
        SelfCheckObjControl(this);
        return;
      }
    }
    PushTV(playerId,1);
    ResetActivityFromTmp(this,playerId,1,1,0);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    local_EAX_2021 = extraout_EAX_01;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar8 = extraout_var_13;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00434768:
    AddObjToTmp2(this,playerId,1,0,piVar2[8],
                 STReplaceLowByte((uint32_t)(local_EAX_2021), (uint8_t)((char)piVar2[9])),
                 CONCAT22(uVar8,STField<undefined2>(piVar2,0x32)));
    SelfCheckObjControl(this);
    return;
  }
  g_packedRecords_A62x8[playerId].field200_0x203 = 1;
  ResetActivityFromTmp(this,playerId,0,0,0);
  iVar4 = g_packedRecords_A62x8[playerId].field149_0x1b3;
  if (iVar4 < 0x19b) {
    if (iVar4 != 0x19a) {
      if (iVar4 == 0) {
        local_EAX_2403 =
             CheckTmps(playerId,1,piVar2[8],(char)piVar2[9],nullptr,
                       STField<short>(piVar2,0x32));
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = extraout_EDX_01;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_03;
        if (0 < local_EAX_2403) {
          ActivateTV(this,playerId,1,local_EAX_2403);
          SelfCheckObjControl(this);
          return;
        }
        goto LAB_004348d7;
      }
      if ((iVar4 != 0x5a) && (iVar4 != 0x172)) goto LAB_00434863;
      goto LAB_00434895;
    }
    local_EAX_2463 =
         CheckTmps(playerId,1,piVar2[8],(char)piVar2[9],nullptr,
                   STField<short>(piVar2,0x32));
    if (0 < local_EAX_2463) {
      ActivateTV(this,playerId,1,local_EAX_2463);
      SelfCheckObjControl(this);
      return;
    }
  }
  else {
    if ((iVar4 != 0x1a4) && (iVar4 != 0x1b8)) {
LAB_00434863:
      local_EAX_2539 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x108c,0,0,"%s",
                              "STAllPlayersC::PointPick GAMETYPE_RESOURCE ACT_LEFT");
      if (local_EAX_2539 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
LAB_00434895:
    local_EAX_2585 =
         CheckTmps(playerId,1,piVar2[8],(char)piVar2[9],nullptr,
                   STField<short>(piVar2,0x32));
    if (-1 < local_EAX_2585) {
      ActivateTV(this,playerId,1,local_EAX_2585);
      SelfCheckObjControl(this);
      return;
    }
  }
  PushTV(playerId,1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar7 = extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar8 = extraout_var_04;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_004348d7:
  AddObjToTmp2(this,playerId,1,0,piVar2[8],STReplaceLowByte((uint32_t)(uVar7), (uint8_t)((char)piVar2[9])),
               CONCAT22(uVar8,STField<undefined2>(piVar2,0x32)));
  SelfCheckObjControl(this);
  return;
}

