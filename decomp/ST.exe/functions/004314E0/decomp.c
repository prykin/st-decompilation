#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::FramePick */

void __thiscall
STAllPlayersC::FramePick
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  int iVar1;
  int local_EAX_96;
  int iVar4;
  int local_EAX_268;
  int local_EAX_374;
  int local_EAX_410;
  int local_EAX_468;
  int iVar2;
  int local_EAX_620;
  int local_EAX_803;
  int local_EAX_943;
  STGameObjC *pSVar5;
  int local_EAX_1213;
  int local_EAX_1319;
  int local_EAX_1353;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  int local_EAX_1636;
  int local_EAX_1677;
  int local_EAX_1725;
  int local_EAX_1808;
  int local_EAX_1849;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_00;
  int local_EAX_1928;
  int local_EAX_2061;
  int local_EAX_2109;
  int local_EAX_2170;
  int local_EAX_2211;
  int local_EAX_2373;
  int local_EAX_2421;
  int local_EAX_2479;
  int local_EAX_2513;
  int local_EAX_2791;
  int local_EAX_2873;
  int local_EAX_2921;
  int local_EAX_2982;
  int local_EAX_3023;
  int local_EAX_3185;
  int local_EAX_3233;
  int local_EAX_3291;
  int local_EAX_3325;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_01;
  uint uVar6;
  int local_EAX_3553;
  int local_EAX_3640;
  int local_EAX_3686;
  int local_EAX_3860;
  int local_EAX_3899;
  int local_EAX_4039;
  int local_EAX_4090;
  int local_EAX_4167;
  int local_EAX_4199;
  int local_EAX_4479;
  int local_EAX_4561;
  int local_EAX_4609;
  int local_EAX_4670;
  int local_EAX_4711;
  int local_EAX_4873;
  int local_EAX_4921;
  int local_EAX_4979;
  int local_EAX_5013;
  int local_EAX_5291;
  int local_EAX_5373;
  int local_EAX_5421;
  int local_EAX_5482;
  int local_EAX_5523;
  int local_EAX_5685;
  int local_EAX_5733;
  int local_EAX_5791;
  int local_EAX_5825;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_02;
  int local_EAX_6084;
  int local_EAX_6180;
  int local_EAX_6219;
  int local_EAX_6284;
  int local_EAX_6386;
  int local_EAX_6425;
  int local_EAX_6501;
  int local_EAX_6576;
  int local_EAX_6850;
  int local_EAX_6956;
  int local_EAX_6990;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_03;
  int local_EAX_7255;
  int local_EAX_7296;
  int local_EAX_7344;
  int local_EAX_7427;
  int local_EAX_7468;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_04;
  int local_EAX_7547;
  int local_EAX_7685;
  int local_EAX_7789;
  int local_EAX_7831;
  int local_EAX_7977;
  int local_EAX_8035;
  int local_EAX_8116;
  int local_EAX_8151;
  int iVar3;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_03;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_04;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_05;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_06;
  undefined4 uVar7;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_02;
  char playerId;
  uint uVar8;
  short sVar9;
  InternalExceptionFrame local_90;
  int local_4c;
  DArrayTy *local_48;
  DArrayTy *local_44;
  DArrayTy *local_40;
  DArrayTy *local_3c;
  DArrayTy *local_38;
  DArrayTy *local_34;
  DArrayTy *local_30;
  DArrayTy *local_2c;
  DArrayTy *local_28;
  DArrayTy *local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  DArrayTy *local_14;
  DArrayTy *local_10;
  char local_c [4];
  uint local_8;

  local_10 = nullptr;
  local_18 = nullptr;
  local_3c = nullptr;
  local_14 = nullptr;
  local_1c = nullptr;
  local_40 = nullptr;
  local_34 = nullptr;
  local_2c = nullptr;
  local_20 = nullptr;
  local_28 = nullptr;
  local_30 = nullptr;
  local_38 = nullptr;
  local_24 = nullptr;
  local_44 = nullptr;
  local_48 = nullptr;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  local_EAX_96 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  if (local_EAX_96 != 0) {
    g_currentExceptionFrame = local_90.previous;
    if (local_EAX_96 == -0x5001fff7) {
      if (local_10 != nullptr) {
        DArrayDestroy(local_10);
      }
      if (local_18 != nullptr) {
        DArrayDestroy(local_18);
      }
      if (local_3c != nullptr) {
        DArrayDestroy(local_3c);
      }
      if (local_14 != nullptr) {
        DArrayDestroy(local_14);
      }
      if (local_1c != nullptr) {
        DArrayDestroy(local_1c);
      }
      if (local_40 != nullptr) {
        DArrayDestroy(local_40);
      }
      if (local_34 != nullptr) {
        DArrayDestroy(local_34);
      }
      if (local_2c != nullptr) {
        DArrayDestroy(local_2c);
      }
      if (local_20 != nullptr) {
        DArrayDestroy(local_20);
      }
      if (local_28 != nullptr) {
        DArrayDestroy(local_28);
      }
      if (local_30 != nullptr) {
        DArrayDestroy(local_30);
      }
      if (local_38 != nullptr) {
        DArrayDestroy(local_38);
      }
      /* ST_CALLSITE[00433617]: CALL 0x004027de; direct=004027DE STAllPlayersC::SelfCheckObjControl */
      SelfCheckObjControl(this);
      return;
    }
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xdd1,0,local_EAX_96,
                               "%s","STAllPlayersC::FramePick");
    if (iVar3 == 0) {
      RaiseInternalException(local_EAX_96,0,"E:\\__titans\\wlad\\to_allpl.cpp",0xdd2);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  playerId = (char)param_1;
  /* ST_CALLSITE[0043159E]: CALL 0x004028fb; direct=004028FB STAllPlayersC::GetGObjFromZone2 */
  GetGObjFromZone2(this,playerId,param_2,param_3,param_4,param_5,(int *)&local_10,(int *)&local_18,
                   (int *)&local_3c,(int *)&local_14,(int *)&local_1c,(int *)&local_40,
                   (int *)&local_34,(int *)&local_2c,(int *)&local_20,(int *)&local_28,
                   (int *)&local_30,(int *)&local_38);
  if (local_10->count != 0) {
    iVar4 = (int)playerId;
    if (g_packedRecords_A62x8[iVar4].field200_0x203 == 0) {
      iVar1 = g_packedRecords_A62x8[iVar4].field96_0x163;
      if (iVar1 == 0) {
LAB_00431886:
        /* ST_CALLSITE[0043188F]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_943 = CheckTmps(playerId,0,0x3c,playerId,local_10,0);
        if (local_EAX_943 < 1) goto cf_error_exit_004318A9;
        /* ST_CALLSITE[0043189E]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_943);
LAB_004318b5:
        g_packedRecords_A62x8[iVar4].field96_0x163 = 0x3c;
      }
      else if (iVar1 == 0x3c) {
        if (param_6 == 1) {
          if (*(int *)&g_packedRecords_A62x8[iVar4].field97_0x167 == iVar4) {
            /* ST_CALLSITE[004317AA]: CALL 0x004020d6; direct=004020D6 STAllPlayersC::CalibrateTmp */
            CalibrateTmp(this,playerId,0,0,&local_10->flags,nullptr,(int *)&local_44,
                         (int *)&local_48);
            /* ST_CALLSITE[004317BC]: CALL 0x004027c0; direct=004027C0 STAllPlayersC::ResetActivityFromObjs */
            ResetActivityFromObjs(this,param_1,0x3c,local_44,0,0);
            /* ST_CALLSITE[004317CC]: CALL 0x00403f0d; direct=00403F0D STAllPlayersC::DelObjsFromTmp */
            DelObjsFromTmp(this,param_1,0,0,local_44);
            /* ST_CALLSITE[004317DC]: CALL 0x00405bbe; direct=00405BBE STAllPlayersC::AddObjsToTmp */
            AddObjsToTmp(this,param_1,0,0,local_48);
            DArrayDestroy(local_44);
            DArrayDestroy(local_48);
          }
        }
        else {
          /* ST_CALLSITE[00431803]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_803 = CheckTmps(playerId,0,0x3c,playerId,local_10,0);
          if (local_EAX_803 < 1) {
            if (local_EAX_803 < 0) {
              /* ST_CALLSITE[00431827]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
              PushTV(playerId,0);
              if (g_packedRecords_A62x8[iVar4].field105_0x177 == (int)playerId) {
                /* ST_CALLSITE[0043184C]: CALL 0x004020d6; direct=004020D6 STAllPlayersC::CalibrateTmp */
                CalibrateTmp(this,playerId,0,1,&local_10->flags,(int *)&local_24,nullptr,
                             nullptr);
                /* ST_CALLSITE[0043185E]: CALL 0x004027c0; direct=004027C0 STAllPlayersC::ResetActivityFromObjs */
                ResetActivityFromObjs(this,param_1,0x3c,local_24,0,0);
                DArrayDestroy(local_24);
              }
              else {
                /* ST_CALLSITE[00431879]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
                ResetActivityFromTmp(this,playerId,0,1,0);
              }
              goto cf_error_exit_004318A9;
            }
          }
          else {
            /* ST_CALLSITE[00431812]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
            ActivateTV(this,playerId,0,local_EAX_803);
          }
        }
      }
      else if (iVar1 == 0x1ae) {
        if (param_6 != 1) {
          /* ST_CALLSITE[0043174C]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_620 = CheckTmps(playerId,0,0x3c,playerId,local_10,0);
          if (local_EAX_620 < 1) {
            /* ST_CALLSITE[0043176A]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
            PushTV(playerId,0);
            /* ST_CALLSITE[00431778]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
            ResetActivityFromTmp(this,playerId,0,1,0);
            goto cf_error_exit_004318A9;
          }
          /* ST_CALLSITE[0043175B]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,0,local_EAX_620);
        }
      }
      else {
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xa60,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_BOAT ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar4].field200_0x203 == 1) {
      if (param_6 != 1) {
        g_packedRecords_A62x8[iVar4].field200_0x203 = 0;
        /* ST_CALLSITE[0043161F]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
        ResetActivityFromTmp(this,playerId,1,0,0);
        iVar1 = g_packedRecords_A62x8[iVar4].field96_0x163;
        if (iVar1 == 0) goto LAB_00431886;
        if (iVar1 == 0x3c) {
          /* ST_CALLSITE[004316B4]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_468 = CheckTmps(playerId,0,0x3c,playerId,local_10,0);
          if (local_EAX_468 < 0) {
            /* ST_CALLSITE[004316D2]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
            PushTV(playerId,0);
cf_error_exit_004318A9:
            /* ST_CALLSITE[004318B0]: CALL 0x00405bbe; direct=00405BBE STAllPlayersC::AddObjsToTmp */
            AddObjsToTmp(this,param_1,0,0,local_10);
            goto LAB_004318b5;
          }
          /* ST_CALLSITE[004316C3]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,0,local_EAX_468);
        }
        else if (iVar1 == 0x1ae) {
          /* ST_CALLSITE[0043167A]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_410 = CheckTmps(playerId,0,0x3c,playerId,local_10,0);
          if (local_EAX_410 < 1) {
            /* ST_CALLSITE[00431698]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
            PushTV(playerId,0);
            goto cf_error_exit_004318A9;
          }
          /* ST_CALLSITE[00431689]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,0,local_EAX_410);
        }
        else {
          local_EAX_374 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xa88,0,0,"%s",
                                  "STAllPlayersC::FramePick GAMETYPE_BOAT ACT_RIGHT");
          if (local_EAX_374 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }
    }
    else {
      local_EAX_268 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xa8c,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_BOAT wrong panel number");
      if (local_EAX_268 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xa8e);
  }
  if (local_34->count != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xa92);
    }
    DArrayGetElement(local_34,0,&local_8);
    local_34->count = 0;
    Library::DKW::TBL::DArrayAppend(local_34,&local_8);
    /* ST_CALLSITE[00431937]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar5 = GetObjPtr(this,'\0',(ushort)local_8,CASE_3);
    if (pSVar5 == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xa95);
    }
    iVar4 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar4 * 0xa62;
    if (g_packedRecords_A62x8[iVar4].field200_0x203 == 0) {
      iVar4 = g_packedRecords_A62x8[iVar4].field96_0x163;
      sVar9 = (short)local_8;
      if (iVar4 == 0) {
        /* ST_CALLSITE[00431C94]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_1725 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_1725 < 1) {
cf_error_exit_00431A49:
          /* ST_CALLSITE[00431A5C]: CALL 0x00403e31; direct=00403E31 STAllPlayersC::AddObjToTmp2 */
          AddObjToTmp2(this,playerId,0,0,pSVar5->field_0020,
                       STReplaceLowByte((uint32_t)(local_EAX_1725), (uint8_t)(*(undefined1 *)&pSVar5->field_0024)),local_8);
        }
        else {
          /* ST_CALLSITE[00431CA7]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,0,local_EAX_1725);
        }
      }
      else if (iVar4 == 0x3c) {
        /* ST_CALLSITE[00431C68]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_1928 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_1928 < 1) {
LAB_00431c38:
          /* ST_CALLSITE[00431C3D]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,0);
          /* ST_CALLSITE[00431C4B]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
          ResetActivityFromTmp(this,playerId,0,1,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          local_EAX_1725 = extraout_EAX_00;
          goto cf_error_exit_00431A49;
        }
        /* ST_CALLSITE[00431C77]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_1928);
      }
      else if (iVar4 == 0x1ae) {
        /* ST_CALLSITE[00431C19]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_1849 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_1849 < 1) {
          if (local_EAX_1849 < 0) goto LAB_00431c38;
        }
        else {
          /* ST_CALLSITE[00431C28]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,0,local_EAX_1849);
        }
      }
      else {
        local_EAX_1808 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xaba,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_MINESET ACT_LEFT");
        if (local_EAX_1808 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar4].field200_0x203 == 1) {
      g_packedRecords_A62x8[iVar4].field200_0x203 = 0;
      /* ST_CALLSITE[004319C9]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
      ResetActivityFromTmp(this,playerId,1,0,0);
      iVar4 = *(int *)((int)&g_packedRecords_A62x8[0].field96_0x163 + local_4c);
      sVar9 = (short)local_8;
      if (iVar4 == 0) {
        /* ST_CALLSITE[00431B9D]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_1725 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_1725 < 1) goto cf_error_exit_00431A49;
        /* ST_CALLSITE[00431BB0]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_1725);
      }
      else if (iVar4 == 0x3c) {
        /* ST_CALLSITE[00431B6D]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_1677 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_1677 < 1) {
LAB_00431a3f:
          /* ST_CALLSITE[00431A44]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          local_EAX_1725 = extraout_EAX;
          goto cf_error_exit_00431A49;
        }
        /* ST_CALLSITE[00431B80]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_1677);
      }
      else if (iVar4 == 0x1ae) {
        /* ST_CALLSITE[00431A29]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_1353 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_1353 < 0) goto LAB_00431a3f;
        /* ST_CALLSITE[00431A38]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_1353);
      }
      else {
        local_EAX_1319 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xade,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_MINESET ACT_RIGHT");
        if (local_EAX_1319 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      local_EAX_1213 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xae2,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_MINESET wrong panel number");
      if (local_EAX_1213 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xae4);
  }
  if (local_28->count != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xae8);
    }
    DArrayGetElement(local_28,0,&local_8);
    local_28->count = 0;
    Library::DKW::TBL::DArrayAppend(local_28,&local_8);
    /* ST_CALLSITE[00431ADA]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar5 = GetObjPtr(this,-1,(ushort)local_8,CASE_2);
    if (pSVar5 == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xaeb);
    }
    iVar4 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar4 * 0xa62;
    if (g_packedRecords_A62x8[iVar4].field200_0x203 == 0) {
      g_packedRecords_A62x8[iVar4].field200_0x203 = 1;
      /* ST_CALLSITE[00431DE1]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar4 = *(int *)((int)&g_packedRecords_A62x8[0].field149_0x1b3 + local_4c);
      sVar9 = (short)local_8;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          /* ST_CALLSITE[00431E55]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_2421 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          if (local_EAX_2421 < 1) goto LAB_00431ec7;
          /* ST_CALLSITE[00431E64]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_2421);
        }
        else {
          if (iVar4 != 0) {
            if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_00431e9e;
            goto LAB_00431e77;
          }
          /* ST_CALLSITE[00431E25]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_2373 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar7 = extraout_ECX;
          if (local_EAX_2373 < 1) goto LAB_00431ed1;
          /* ST_CALLSITE[00431E38]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_2373);
        }
      }
      else if ((iVar4 == 0x1a4) || (iVar4 == 0x1b8)) {
LAB_00431e9e:
        /* ST_CALLSITE[00431EB1]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_2513 =
             CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_2513 < 0) {
LAB_00431ec7:
          /* ST_CALLSITE[00431ECC]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,1);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar7 = extraout_ECX_00;
LAB_00431ed1:
          uVar6 = STReplaceLowByte((uint32_t)(uVar7), (uint8_t)(*(undefined1 *)&pSVar5->field_0024));
          uVar8 = pSVar5->field_0020;
LAB_00431edd:
          /* ST_CALLSITE[00431EE4]: CALL 0x00403e31; direct=00403E31 STAllPlayersC::AddObjToTmp2 */
          AddObjToTmp2(this,playerId,1,0,uVar8,uVar6,local_8);
        }
        else {
          /* ST_CALLSITE[00431EC0]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_2513);
        }
      }
      else {
LAB_00431e77:
        local_EAX_2479 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb3a,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_ARTEFACT ACT_LEFT");
        if (local_EAX_2479 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar4].field200_0x203 == 1) {
      iVar4 = g_packedRecords_A62x8[iVar4].field149_0x1b3;
      sVar9 = (short)local_8;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          /* ST_CALLSITE[00431D1D]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_2109 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          if (local_EAX_2109 < 1) {
LAB_00431da2:
            /* ST_CALLSITE[00431DA7]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
            PushTV(playerId,1);
            /* ST_CALLSITE[00431DB5]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
            ResetActivityFromTmp(this,playerId,1,1,0);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            uVar7 = extraout_EDX_00;
LAB_00431dba:
            uVar6 = STReplaceLowByte((uint32_t)(uVar7), (uint8_t)(*(undefined1 *)&pSVar5->field_0024));
            uVar8 = pSVar5->field_0020;
            goto LAB_00431edd;
          }
          /* ST_CALLSITE[00431D2C]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_2109);
        }
        else {
          if (iVar4 != 0) {
            if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_00431d70;
            goto LAB_00431d42;
          }
          /* ST_CALLSITE[00431CED]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_2061 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar7 = extraout_EDX;
          if (local_EAX_2061 < 1) goto LAB_00431dba;
          /* ST_CALLSITE[00431D00]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_2061);
        }
      }
      else if ((iVar4 == 0x1a4) || (iVar4 == 0x1b8)) {
LAB_00431d70:
        /* ST_CALLSITE[00431D83]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_2211 =
             CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_2211 < 1) {
          if (local_EAX_2211 < 0) goto LAB_00431da2;
        }
        else {
          /* ST_CALLSITE[00431D92]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_2211);
        }
      }
      else {
LAB_00431d42:
        local_EAX_2170 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb13,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_ARTEFACT ACT_RIGHT");
        if (local_EAX_2170 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      local_EAX_1636 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb3e,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_ARTEFACT wrong panel number");
      if (local_EAX_1636 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xb40);
  }
  if (local_30->count != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xb44);
    }
    DArrayGetElement(local_30,0,&local_8);
    local_30->count = 0;
    Library::DKW::TBL::DArrayAppend(local_30,&local_8);
    /* ST_CALLSITE[00431F61]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar5 = GetObjPtr(this,-1,(ushort)local_8,CASE_5);
    if (pSVar5 == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xb47);
    }
    iVar4 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar4 * 0xa62;
    if (g_packedRecords_A62x8[iVar4].field200_0x203 == 0) {
      g_packedRecords_A62x8[iVar4].field200_0x203 = 1;
      /* ST_CALLSITE[0043210D]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar4 = *(int *)((int)&g_packedRecords_A62x8[0].field149_0x1b3 + local_4c);
      sVar9 = (short)local_8;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          /* ST_CALLSITE[00432181]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_3233 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          if (local_EAX_3233 < 1) goto LAB_004321f3;
          /* ST_CALLSITE[00432190]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_3233);
        }
        else {
          if (iVar4 != 0) {
            if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_004321ca;
            goto LAB_004321a3;
          }
          /* ST_CALLSITE[00432151]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_3185 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          if (local_EAX_3185 < 1) goto LAB_004321fd;
          /* ST_CALLSITE[00432164]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_3185);
        }
      }
      else if ((iVar4 == 0x1a4) || (iVar4 == 0x1b8)) {
LAB_004321ca:
        /* ST_CALLSITE[004321DD]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_3325 =
             CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_3325 < 0) {
LAB_004321f3:
          /* ST_CALLSITE[004321F8]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          local_EAX_3185 = extraout_EAX_01;
LAB_004321fd:
          uVar6 = STReplaceLowByte((uint32_t)(local_EAX_3185), (uint8_t)(*(undefined1 *)&pSVar5->field_0024));
          uVar8 = pSVar5->field_0020;
LAB_00432209:
          /* ST_CALLSITE[00432210]: CALL 0x00403e31; direct=00403E31 STAllPlayersC::AddObjToTmp2 */
          AddObjToTmp2(this,playerId,1,0,uVar8,uVar6,local_8);
        }
        else {
          /* ST_CALLSITE[004321EC]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_3325);
        }
      }
      else {
LAB_004321a3:
        local_EAX_3291 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb96,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_CONTAINER ACT_LEFT");
        if (local_EAX_3291 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar4].field200_0x203 == 1) {
      iVar4 = g_packedRecords_A62x8[iVar4].field149_0x1b3;
      sVar9 = (short)local_8;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          /* ST_CALLSITE[00432049]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_2921 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          if (local_EAX_2921 < 1) {
LAB_004320ce:
            /* ST_CALLSITE[004320D3]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
            PushTV(playerId,1);
            /* ST_CALLSITE[004320E1]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
            ResetActivityFromTmp(this,playerId,1,1,0);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            uVar7 = extraout_ECX_02;
LAB_004320e6:
            uVar6 = STReplaceLowByte((uint32_t)(uVar7), (uint8_t)(*(undefined1 *)&pSVar5->field_0024));
            uVar8 = pSVar5->field_0020;
            goto LAB_00432209;
          }
          /* ST_CALLSITE[00432058]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_2921);
        }
        else {
          if (iVar4 != 0) {
            if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_0043209c;
            goto LAB_0043206e;
          }
          /* ST_CALLSITE[00432019]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_2873 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar7 = extraout_ECX_01;
          if (local_EAX_2873 < 1) goto LAB_004320e6;
          /* ST_CALLSITE[0043202C]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_2873);
        }
      }
      else if ((iVar4 == 0x1a4) || (iVar4 == 0x1b8)) {
LAB_0043209c:
        /* ST_CALLSITE[004320AF]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_3023 =
             CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_3023 < 1) {
          if (local_EAX_3023 < 0) goto LAB_004320ce;
        }
        else {
          /* ST_CALLSITE[004320BE]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_3023);
        }
      }
      else {
LAB_0043206e:
        local_EAX_2982 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb6f,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_CONTAINER ACT_RIGHT");
        if (local_EAX_2982 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      local_EAX_2791 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb9a,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_CONTAINER wrong panel number");
      if (local_EAX_2791 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xb9c);
  }
  if (local_14->count != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xba0);
    }
    DArrayGetElement(local_14,0,&local_8);
    local_14->count = 0;
    Library::DKW::TBL::DArrayAppend(local_14,&local_8);
    if (g_packedRecords_A62x8[playerId].field200_0x203 == 0) {
      g_packedRecords_A62x8[playerId].field200_0x203 = 1;
      /* ST_CALLSITE[00432464]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar4 = g_packedRecords_A62x8[playerId].field149_0x1b3;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          /* ST_CALLSITE[004324DA]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_4090 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
          if (-1 < local_EAX_4090) {
            /* ST_CALLSITE[004324E9]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
            ActivateTV(this,playerId,1,local_EAX_4090);
            goto LAB_00432582;
          }
          /* ST_CALLSITE[004324F8]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,1);
cf_error_exit_0043256B:
          /* ST_CALLSITE[00432573]: CALL 0x00404098; direct=00404098 STAllPlayersC::AddObjToTmp */
          AddObjToTmp(this,playerId,1,0,playerId,local_8);
        }
        else {
          if (iVar4 != 0) {
            if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_00432536;
            goto LAB_0043250f;
          }
          /* ST_CALLSITE[004324A7]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_4039 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
          if (local_EAX_4039 < 1) goto cf_error_exit_0043256B;
          /* ST_CALLSITE[004324B6]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_4039);
        }
LAB_00432578:
        g_packedRecords_A62x8[playerId].field149_0x1b3 = 0x19a;
      }
      else if ((iVar4 == 0x1a4) || (iVar4 == 0x1b8)) {
LAB_00432536:
        /* ST_CALLSITE[00432547]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_4199 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
        if (local_EAX_4199 < 1) {
          /* ST_CALLSITE[00432562]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,1);
          goto cf_error_exit_0043256B;
        }
        /* ST_CALLSITE[00432556]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,1,local_EAX_4199);
      }
      else {
LAB_0043250f:
        local_EAX_4167 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xbfb,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_OBJECT ACT_LEFT");
        if (local_EAX_4167 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[playerId].field200_0x203 == 1) {
      iVar4 = g_packedRecords_A62x8[playerId].field149_0x1b3;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          /* ST_CALLSITE[00432346]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_3686 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
          if (local_EAX_3686 < 1) {
            if (local_EAX_3686 < 0) {
              /* ST_CALLSITE[0043236A]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
              PushTV(playerId,1);
              if (g_packedRecords_A62x8[playerId].field158_0x1c7 == (int)playerId) {
                /* ST_CALLSITE[0043238F]: CALL 0x004020d6; direct=004020D6 STAllPlayersC::CalibrateTmp */
                CalibrateTmp(this,playerId,1,1,&local_14->flags,(int *)&local_24,nullptr,
                             nullptr);
                /* ST_CALLSITE[004323A4]: CALL 0x004027c0; direct=004027C0 STAllPlayersC::ResetActivityFromObjs */
                ResetActivityFromObjs(this,param_1,0x19a,local_24,0,0);
                DArrayDestroy(local_24);
              }
              else {
                /* ST_CALLSITE[004323C2]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
                ResetActivityFromTmp(this,playerId,1,1,0);
              }
              goto cf_error_exit_0043256B;
            }
          }
          else {
            /* ST_CALLSITE[00432355]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
            ActivateTV(this,playerId,1,local_EAX_3686);
          }
        }
        else {
          if (iVar4 == 0) {
            /* ST_CALLSITE[00432318]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
            local_EAX_3640 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
            if (0 < local_EAX_3640) {
              /* ST_CALLSITE[0043232B]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
              ActivateTV(this,playerId,1,local_EAX_3640);
              goto LAB_00432578;
            }
            goto cf_error_exit_0043256B;
          }
          if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_0043240a;
LAB_004323dc:
          local_EAX_3860 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xbd1,0,0,"%s",
                                  "STAllPlayersC::FramePick GAMETYPE_OBJECT ACT_RIGHT");
          if (local_EAX_3860 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }
      else {
        if ((iVar4 != 0x1a4) && (iVar4 != 0x1b8)) goto LAB_004323dc;
LAB_0043240a:
        /* ST_CALLSITE[0043241B]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_3899 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
        if (local_EAX_3899 < 1) {
          /* ST_CALLSITE[00432439]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,1);
          /* ST_CALLSITE[00432447]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
          ResetActivityFromTmp(this,playerId,1,1,0);
          goto cf_error_exit_0043256B;
        }
        /* ST_CALLSITE[0043242A]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,1,local_EAX_3899);
      }
    }
    else {
      local_EAX_3553 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xbff,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_OBJECT wrong panel number");
      if (local_EAX_3553 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
LAB_00432582:
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xc01);
  }
  if (local_20->count != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xc05);
    }
    DArrayGetElement(local_20,0,&local_8);
    local_20->count = 0;
    Library::DKW::TBL::DArrayAppend(local_20,&local_8);
    /* ST_CALLSITE[004325FA]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar5 = GetObjPtr(this,-1,(ushort)local_8,CASE_4);
    if (pSVar5 == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xc08);
    }
    iVar4 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar4 * 0xa62;
    if (g_packedRecords_A62x8[iVar4].field200_0x203 == 0) {
      g_packedRecords_A62x8[iVar4].field200_0x203 = 1;
      /* ST_CALLSITE[004327A5]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar4 = *(int *)((int)&g_packedRecords_A62x8[0].field149_0x1b3 + local_4c);
      sVar9 = (short)local_8;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          /* ST_CALLSITE[00432819]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_4921 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          if (local_EAX_4921 < 1) goto LAB_0043288b;
          /* ST_CALLSITE[00432828]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_4921);
        }
        else {
          if (iVar4 != 0) {
            if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_00432862;
            goto LAB_0043283b;
          }
          /* ST_CALLSITE[004327E9]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_4873 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar7 = extraout_ECX_03;
          if (local_EAX_4873 < 1) goto LAB_00432895;
          /* ST_CALLSITE[004327FC]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_4873);
        }
      }
      else if ((iVar4 == 0x1a4) || (iVar4 == 0x1b8)) {
LAB_00432862:
        /* ST_CALLSITE[00432875]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_5013 =
             CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_5013 < 0) {
LAB_0043288b:
          /* ST_CALLSITE[00432890]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,1);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar7 = extraout_ECX_04;
LAB_00432895:
          uVar6 = STReplaceLowByte((uint32_t)(uVar7), (uint8_t)(*(undefined1 *)&pSVar5->field_0024));
          uVar8 = pSVar5->field_0020;
LAB_004328a1:
          /* ST_CALLSITE[004328A8]: CALL 0x00403e31; direct=00403E31 STAllPlayersC::AddObjToTmp2 */
          AddObjToTmp2(this,playerId,1,0,uVar8,uVar6,local_8);
        }
        else {
          /* ST_CALLSITE[00432884]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_5013);
        }
      }
      else {
LAB_0043283b:
        local_EAX_4979 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xc57,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_RESOURCE ACT_LEFT");
        if (local_EAX_4979 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar4].field200_0x203 == 1) {
      iVar4 = g_packedRecords_A62x8[iVar4].field149_0x1b3;
      sVar9 = (short)local_8;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          /* ST_CALLSITE[004326E1]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_4609 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          if (local_EAX_4609 < 1) {
LAB_00432766:
            /* ST_CALLSITE[0043276B]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
            PushTV(playerId,1);
            /* ST_CALLSITE[00432779]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
            ResetActivityFromTmp(this,playerId,1,1,0);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            uVar7 = extraout_EDX_02;
LAB_0043277e:
            uVar6 = STReplaceLowByte((uint32_t)(uVar7), (uint8_t)(*(undefined1 *)&pSVar5->field_0024));
            uVar8 = pSVar5->field_0020;
            goto LAB_004328a1;
          }
          /* ST_CALLSITE[004326F0]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_4609);
        }
        else {
          if (iVar4 != 0) {
            if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_00432734;
            goto LAB_00432706;
          }
          /* ST_CALLSITE[004326B1]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_4561 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar7 = extraout_EDX_01;
          if (local_EAX_4561 < 1) goto LAB_0043277e;
          /* ST_CALLSITE[004326C4]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_4561);
        }
      }
      else if ((iVar4 == 0x1a4) || (iVar4 == 0x1b8)) {
LAB_00432734:
        /* ST_CALLSITE[00432747]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_4711 =
             CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_4711 < 1) {
          if (local_EAX_4711 < 0) goto LAB_00432766;
        }
        else {
          /* ST_CALLSITE[00432756]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_4711);
        }
      }
      else {
LAB_00432706:
        local_EAX_4670 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xc30,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_RESOURCE ACT_RIGHT");
        if (local_EAX_4670 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      local_EAX_4479 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xc5b,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_RESOURCE wrong panel number");
      if (local_EAX_4479 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xc5d);
  }
  if (local_38->count != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xc61);
    }
    DArrayGetElement(local_38,0,&local_8);
    local_38->count = 0;
    Library::DKW::TBL::DArrayAppend(local_38,&local_8);
    /* ST_CALLSITE[00432925]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar5 = GetObjPtr(this,-1,(ushort)local_8,CASE_6);
    if (pSVar5 == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xc64);
    }
    iVar4 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar4 * 0xa62;
    if (g_packedRecords_A62x8[iVar4].field200_0x203 == 0) {
      g_packedRecords_A62x8[iVar4].field200_0x203 = 1;
      /* ST_CALLSITE[00432AD1]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar4 = *(int *)((int)&g_packedRecords_A62x8[0].field149_0x1b3 + local_4c);
      sVar9 = (short)local_8;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          /* ST_CALLSITE[00432B45]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_5733 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          if (local_EAX_5733 < 1) goto LAB_00432bb7;
          /* ST_CALLSITE[00432B54]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_5733);
        }
        else {
          if (iVar4 != 0) {
            if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_00432b8e;
            goto LAB_00432b67;
          }
          /* ST_CALLSITE[00432B15]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_5685 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          if (local_EAX_5685 < 1) goto LAB_00432bc1;
          /* ST_CALLSITE[00432B28]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_5685);
        }
      }
      else if ((iVar4 == 0x1a4) || (iVar4 == 0x1b8)) {
LAB_00432b8e:
        /* ST_CALLSITE[00432BA1]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_5825 =
             CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_5825 < 0) {
LAB_00432bb7:
          /* ST_CALLSITE[00432BBC]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          local_EAX_5685 = extraout_EAX_02;
LAB_00432bc1:
          uVar6 = STReplaceLowByte((uint32_t)(local_EAX_5685), (uint8_t)(*(undefined1 *)&pSVar5->field_0024));
          uVar8 = pSVar5->field_0020;
LAB_00432bcd:
          /* ST_CALLSITE[00432BD4]: CALL 0x00403e31; direct=00403E31 STAllPlayersC::AddObjToTmp2 */
          AddObjToTmp2(this,playerId,1,0,uVar8,uVar6,local_8);
        }
        else {
          /* ST_CALLSITE[00432BB0]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_5825);
        }
      }
      else {
LAB_00432b67:
        local_EAX_5791 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xcb3,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_BLOT ACT_LEFT");
        if (local_EAX_5791 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar4].field200_0x203 == 1) {
      iVar4 = g_packedRecords_A62x8[iVar4].field149_0x1b3;
      sVar9 = (short)local_8;
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          /* ST_CALLSITE[00432A0D]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_5421 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          if (local_EAX_5421 < 1) {
LAB_00432a92:
            /* ST_CALLSITE[00432A97]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
            PushTV(playerId,1);
            /* ST_CALLSITE[00432AA5]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
            ResetActivityFromTmp(this,playerId,1,1,0);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            uVar7 = extraout_ECX_06;
LAB_00432aaa:
            uVar6 = STReplaceLowByte((uint32_t)(uVar7), (uint8_t)(*(undefined1 *)&pSVar5->field_0024));
            uVar8 = pSVar5->field_0020;
            goto LAB_00432bcd;
          }
          /* ST_CALLSITE[00432A1C]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_5421);
        }
        else {
          if (iVar4 != 0) {
            if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_00432a60;
            goto LAB_00432a32;
          }
          /* ST_CALLSITE[004329DD]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
          local_EAX_5373 =
               CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                         sVar9);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar7 = extraout_ECX_05;
          if (local_EAX_5373 < 1) goto LAB_00432aaa;
          /* ST_CALLSITE[004329F0]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_5373);
        }
      }
      else if ((iVar4 == 0x1a4) || (iVar4 == 0x1b8)) {
LAB_00432a60:
        /* ST_CALLSITE[00432A73]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_5523 =
             CheckTmps(playerId,1,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_5523 < 1) {
          if (local_EAX_5523 < 0) goto LAB_00432a92;
        }
        else {
          /* ST_CALLSITE[00432A82]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_5523);
        }
      }
      else {
LAB_00432a32:
        local_EAX_5482 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xc8c,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_BLOT ACT_RIGHT");
        if (local_EAX_5482 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      local_EAX_5291 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xcb7,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_BLOT wrong panel number");
      if (local_EAX_5291 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xcb9);
  }
  if (local_18->count != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xcbd);
    }
    DArrayGetElement(local_18,0,&local_8);
    local_18->count = 0;
    Library::DKW::TBL::DArrayAppend(local_18,&local_8);
    DArrayGetElement(local_3c,0,local_c);
    local_3c->count = 0;
    Library::DKW::TBL::DArrayAppend(local_3c,local_c);
    if (g_packedRecords_A62x8[playerId].field200_0x203 == 0) {
      iVar4 = g_packedRecords_A62x8[playerId].field96_0x163;
      if (iVar4 == 0) {
LAB_00432e7f:
        /* ST_CALLSITE[00432E90]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_6576 = CheckTmps(playerId,0,0x3c,local_c[0],local_18,0);
        if (local_EAX_6576 < 1) {
cf_error_exit_00432EAE:
          /* ST_CALLSITE[00432EB5]: CALL 0x00404098; direct=00404098 STAllPlayersC::AddObjToTmp */
          AddObjToTmp(this,playerId,0,0,local_c[0],local_8);
        }
        else {
          /* ST_CALLSITE[00432E9F]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,0,local_EAX_6576);
        }
        g_packedRecords_A62x8[playerId].field96_0x163 = 0x3c;
      }
      else if (iVar4 == 0x3c) {
        /* ST_CALLSITE[00432E45]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_6501 = CheckTmps(playerId,0,0x3c,local_c[0],local_18,0);
        if (local_EAX_6501 < 1) {
          if (local_EAX_6501 < 0) {
            /* ST_CALLSITE[00432E62]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
            PushTV(playerId,0);
            /* ST_CALLSITE[00432E70]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
            ResetActivityFromTmp(this,playerId,0,1,0);
            goto cf_error_exit_00432EAE;
          }
        }
        else {
          /* ST_CALLSITE[00432E54]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,0,local_EAX_6501);
        }
      }
      else if (iVar4 == 0x1ae) {
        /* ST_CALLSITE[00432DF9]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_6425 = CheckTmps(playerId,0,0x3c,local_c[0],local_18,0);
        if (local_EAX_6425 < 1) {
          /* ST_CALLSITE[00432E17]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,0);
          /* ST_CALLSITE[00432E25]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
          ResetActivityFromTmp(this,playerId,0,1,0);
          goto cf_error_exit_00432EAE;
        }
        /* ST_CALLSITE[00432E08]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_6425);
      }
      else {
        local_EAX_6386 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xce7,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_BOAT (enemy) ACT_LEFT");
        if (local_EAX_6386 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[playerId].field200_0x203 == 1) {
      g_packedRecords_A62x8[playerId].field200_0x203 = 0;
      /* ST_CALLSITE[00432CCD]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
      ResetActivityFromTmp(this,playerId,1,0,0);
      iVar4 = g_packedRecords_A62x8[playerId].field96_0x163;
      if (iVar4 == 0) goto LAB_00432e7f;
      if (iVar4 == 0x3c) {
        /* ST_CALLSITE[00432D6C]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_6284 = CheckTmps(playerId,0,0x3c,local_c[0],local_18,0);
        if (local_EAX_6284 < 0) {
          /* ST_CALLSITE[00432D8A]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,0);
          goto cf_error_exit_00432EAE;
        }
        /* ST_CALLSITE[00432D7B]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_6284);
      }
      else if (iVar4 == 0x1ae) {
        /* ST_CALLSITE[00432D2B]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_6219 = CheckTmps(playerId,0,0x3c,local_c[0],local_18,0);
        if (local_EAX_6219 < 1) {
          /* ST_CALLSITE[00432D49]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,0);
          goto cf_error_exit_00432EAE;
        }
        /* ST_CALLSITE[00432D3A]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_6219);
      }
      else {
        local_EAX_6180 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd0e,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_BOAT (enemy) ACT_RIGHT");
        if (local_EAX_6180 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      local_EAX_6084 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd12,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_BOAT (enemy) wrong panel number");
      if (local_EAX_6084 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xd14);
  }
  if (local_2c->count != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xd18);
    }
    DArrayGetElement(local_2c,0,&local_8);
    local_2c->count = 0;
    Library::DKW::TBL::DArrayAppend(local_2c,&local_8);
    /* ST_CALLSITE[00432F3C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar5 = GetObjPtr(this,'\0',(ushort)local_8,CASE_3);
    if (pSVar5 == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xd1b);
    }
    iVar4 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar4 * 0xa62;
    if (g_packedRecords_A62x8[iVar4].field200_0x203 == 0) {
      iVar4 = g_packedRecords_A62x8[iVar4].field96_0x163;
      sVar9 = (short)local_8;
      if (iVar4 == 0) {
        /* ST_CALLSITE[00433287]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_7344 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_7344 < 1) {
cf_error_exit_00433050:
          /* ST_CALLSITE[00433063]: CALL 0x00403e31; direct=00403E31 STAllPlayersC::AddObjToTmp2 */
          AddObjToTmp2(this,playerId,0,0,pSVar5->field_0020,
                       STReplaceLowByte((uint32_t)(local_EAX_7344), (uint8_t)(*(undefined1 *)&pSVar5->field_0024)),local_8);
        }
        else {
          /* ST_CALLSITE[0043329A]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,0,local_EAX_7344);
        }
      }
      else if (iVar4 == 0x3c) {
        /* ST_CALLSITE[0043325B]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_7547 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_7547 < 1) {
LAB_0043322b:
          /* ST_CALLSITE[00433230]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,0);
          /* ST_CALLSITE[0043323E]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
          ResetActivityFromTmp(this,playerId,0,1,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          local_EAX_7344 = extraout_EAX_04;
          goto cf_error_exit_00433050;
        }
        /* ST_CALLSITE[0043326A]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_7547);
      }
      else if (iVar4 == 0x1ae) {
        /* ST_CALLSITE[0043320C]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_7468 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_7468 < 1) {
          if (local_EAX_7468 < 0) goto LAB_0043322b;
        }
        else {
          /* ST_CALLSITE[0043321B]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,0,local_EAX_7468);
        }
      }
      else {
        local_EAX_7427 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd40,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_MINESET (enemy) ACT_LEFT");
        if (local_EAX_7427 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar4].field200_0x203 == 1) {
      g_packedRecords_A62x8[iVar4].field200_0x203 = 0;
      /* ST_CALLSITE[00432FCE]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
      ResetActivityFromTmp(this,playerId,1,0,0);
      iVar4 = *(int *)((int)&g_packedRecords_A62x8[0].field96_0x163 + local_4c);
      sVar9 = (short)local_8;
      if (iVar4 == 0) {
        /* ST_CALLSITE[00433190]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_7344 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_7344 < 1) goto cf_error_exit_00433050;
        /* ST_CALLSITE[004331A3]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_7344);
      }
      else if (iVar4 == 0x3c) {
        /* ST_CALLSITE[00433160]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_7296 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_7296 < 1) {
LAB_00433046:
          /* ST_CALLSITE[0043304B]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
          PushTV(playerId,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          local_EAX_7344 = extraout_EAX_03;
          goto cf_error_exit_00433050;
        }
        /* ST_CALLSITE[00433173]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,0,local_EAX_7296);
      }
      else if (iVar4 == 0x1ae) {
        /* ST_CALLSITE[0043302E]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_6990 =
             CheckTmps(playerId,0,pSVar5->field_0020,*(char *)&pSVar5->field_0024,nullptr,
                       sVar9);
        if (local_EAX_6990 < 1) {
          if (local_EAX_6990 < 0) goto LAB_00433046;
        }
        else {
          /* ST_CALLSITE[0043303D]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,0,local_EAX_6990);
        }
      }
      else {
        local_EAX_6956 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd66,0,0,"%s",
                                "STAllPlayersC::FramePick GAMETYPE_MINESET (enemy) ACT_RIGHT");
        if (local_EAX_6956 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      local_EAX_6850 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd6a,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_MINESET (enemy) wrong panel number");
      if (local_EAX_6850 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xd6c);
  }
  if (local_1c->count == 0) goto cf_error_exit_004334F5;
  if (param_6 == 1) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xd70);
  }
  DArrayGetElement(local_1c,0,&local_8);
  local_1c->count = 0;
  Library::DKW::TBL::DArrayAppend(local_1c,&local_8);
  DArrayGetElement(local_40,0,local_c);
  local_40->count = 0;
  Library::DKW::TBL::DArrayAppend(local_40,local_c);
  if (g_packedRecords_A62x8[playerId].field200_0x203 != 0) {
    if (g_packedRecords_A62x8[playerId].field200_0x203 != 1) {
      local_EAX_7255 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xdcb,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_OBJECT (enemy) wrong panel number");
      if (local_EAX_7255 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_error_exit_004334F5;
    }
    iVar4 = g_packedRecords_A62x8[playerId].field149_0x1b3;
    if (iVar4 < 0x19b) {
      if (iVar4 == 0x19a) {
        /* ST_CALLSITE[004332E5]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_7685 = CheckTmps(playerId,1,0x19a,local_c[0],local_1c,0);
        if (0 < local_EAX_7685) {
          /* ST_CALLSITE[004332F4]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,playerId,1,local_EAX_7685);
          goto cf_error_exit_004334F5;
        }
        if (-1 < local_EAX_7685) goto cf_error_exit_004334F5;
        /* ST_CALLSITE[00433309]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
        PushTV(playerId,1);
        /* ST_CALLSITE[00433317]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
        ResetActivityFromTmp(this,playerId,1,1,0);
        goto cf_error_exit_004334DF;
      }
      if (iVar4 == 0) goto LAB_004333f5;
      if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_00433363;
    }
    else if ((iVar4 == 0x1a4) || (iVar4 == 0x1b8)) {
LAB_00433363:
      /* ST_CALLSITE[00433377]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
      local_EAX_7831 = CheckTmps(playerId,1,0x19a,local_c[0],local_1c,0);
      if (0 < local_EAX_7831) {
        /* ST_CALLSITE[00433386]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,1,local_EAX_7831);
        goto cf_error_exit_004334F5;
      }
      /* ST_CALLSITE[00433395]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
      PushTV(playerId,1);
      /* ST_CALLSITE[004333A3]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
      ResetActivityFromTmp(this,playerId,1,1,0);
      goto cf_error_exit_004334DF;
    }
    local_EAX_7789 =
         ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd9d,0,0,"%s",
                            "STAllPlayersC::FramePick GAMETYPE_OBJECT (enemy) ACT_RIGHT");
    if (local_EAX_7789 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    goto cf_error_exit_004334F5;
  }
  g_packedRecords_A62x8[playerId].field200_0x203 = 1;
  /* ST_CALLSITE[004333C0]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
  ResetActivityFromTmp(this,playerId,0,0,0);
  iVar4 = g_packedRecords_A62x8[playerId].field149_0x1b3;
  if (iVar4 < 0x19b) {
    if (iVar4 == 0x19a) {
      /* ST_CALLSITE[00433443]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
      local_EAX_8035 = CheckTmps(playerId,1,0x19a,local_c[0],local_1c,0);
      if (-1 < local_EAX_8035) {
        /* ST_CALLSITE[00433452]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,playerId,1,local_EAX_8035);
        goto cf_error_exit_004334F5;
      }
      /* ST_CALLSITE[00433461]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
      PushTV(playerId,1);
      goto cf_error_exit_004334DF;
    }
    if (iVar4 != 0) {
      if ((iVar4 == 0x5a) || (iVar4 == 0x172)) goto LAB_004334a3;
      goto LAB_0043347c;
    }
LAB_004333f5:
    /* ST_CALLSITE[00433409]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
    local_EAX_7977 = CheckTmps(playerId,1,0x19a,local_c[0],local_1c,0);
    if (local_EAX_7977 < 1) goto cf_error_exit_004334DF;
    /* ST_CALLSITE[00433418]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
    ActivateTV(this,playerId,1,local_EAX_7977);
  }
  else {
    if ((iVar4 != 0x1a4) && (iVar4 != 0x1b8)) {
LAB_0043347c:
      local_EAX_8116 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xdc7,0,0,"%s",
                              "STAllPlayersC::FramePick GAMETYPE_OBJECT (enemy) ACT_LEFT");
      if (local_EAX_8116 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_error_exit_004334F5;
    }
LAB_004334a3:
    /* ST_CALLSITE[004334B7]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
    local_EAX_8151 = CheckTmps(playerId,1,0x19a,local_c[0],local_1c,0);
    if (0 < local_EAX_8151) {
      /* ST_CALLSITE[004334C6]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
      ActivateTV(this,playerId,1,local_EAX_8151);
      goto cf_error_exit_004334F5;
    }
    /* ST_CALLSITE[004334D2]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
    PushTV(playerId,1);
cf_error_exit_004334DF:
    /* ST_CALLSITE[004334E6]: CALL 0x00404098; direct=00404098 STAllPlayersC::AddObjToTmp */
    AddObjToTmp(this,playerId,1,0,local_c[0],local_8);
  }
  g_packedRecords_A62x8[playerId].field149_0x1b3 = 0x19a;
cf_error_exit_004334F5:
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",0xdce);
  g_currentExceptionFrame = local_90.previous;
  return;
}

