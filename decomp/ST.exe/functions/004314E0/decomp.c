#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::FramePick */

void __thiscall
STAllPlayersC::FramePick
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  STGameObjC *pSVar4;
  uint uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_06;
  undefined4 uVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  char playerId;
  uint uVar7;
  short sVar8;
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

  local_10 = (DArrayTy *)0x0;
  local_18 = (DArrayTy *)0x0;
  local_3c = (DArrayTy *)0x0;
  local_14 = (DArrayTy *)0x0;
  local_1c = (DArrayTy *)0x0;
  local_40 = (DArrayTy *)0x0;
  local_34 = (DArrayTy *)0x0;
  local_2c = (DArrayTy *)0x0;
  local_20 = (DArrayTy *)0x0;
  local_28 = (DArrayTy *)0x0;
  local_30 = (DArrayTy *)0x0;
  local_38 = (DArrayTy *)0x0;
  local_24 = (DArrayTy *)0x0;
  local_44 = (DArrayTy *)0x0;
  local_48 = (DArrayTy *)0x0;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  iVar2 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_90.previous;
    if (iVar2 == -0x5001fff7) {
      if (local_10 != (DArrayTy *)0x0) {
        DArrayDestroy(local_10);
      }
      if (local_18 != (DArrayTy *)0x0) {
        DArrayDestroy(local_18);
      }
      if (local_3c != (DArrayTy *)0x0) {
        DArrayDestroy(local_3c);
      }
      if (local_14 != (DArrayTy *)0x0) {
        DArrayDestroy(local_14);
      }
      if (local_1c != (DArrayTy *)0x0) {
        DArrayDestroy(local_1c);
      }
      if (local_40 != (DArrayTy *)0x0) {
        DArrayDestroy(local_40);
      }
      if (local_34 != (DArrayTy *)0x0) {
        DArrayDestroy(local_34);
      }
      if (local_2c != (DArrayTy *)0x0) {
        DArrayDestroy(local_2c);
      }
      if (local_20 != (DArrayTy *)0x0) {
        DArrayDestroy(local_20);
      }
      if (local_28 != (DArrayTy *)0x0) {
        DArrayDestroy(local_28);
      }
      if (local_30 != (DArrayTy *)0x0) {
        DArrayDestroy(local_30);
      }
      if (local_38 != (DArrayTy *)0x0) {
        DArrayDestroy(local_38);
      }
      SelfCheckObjControl(this);
      return;
    }
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xdd1,0,iVar2,"%s",
                               "STAllPlayersC::FramePick");
    if (iVar3 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0xdd2);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  playerId = (char)param_1;
  GetGObjFromZone2(this,playerId,param_2,param_3,param_4,param_5,(int *)&local_10,(int *)&local_18,
                   (int *)&local_3c,(int *)&local_14,(int *)&local_1c,(int *)&local_40,
                   (int *)&local_34,(int *)&local_2c,(int *)&local_20,(int *)&local_28,
                   (int *)&local_30,(int *)&local_38);
  if (local_10->count != 0) {
    iVar2 = (int)playerId;
    if (g_playerRuntime[iVar2].field324_0x203 == 0) {
      iVar3 = g_playerRuntime[iVar2].tempSlots[0][0].objectType;
      if (iVar3 == 0) {
LAB_00431886:
        iVar3 = CheckTmps(playerId,0,0x3c,playerId,local_10,0);
        if (iVar3 < 1) goto cf_error_exit_004318A9;
        ActivateTV(this,playerId,0,iVar3);
LAB_004318b5:
        g_playerRuntime[iVar2].tempSlots[0][0].objectType = 0x3c;
      }
      else if (iVar3 == 0x3c) {
        if (param_6 == 1) {
          if (g_playerRuntime[iVar2].tempSlots[0][0].playerId == iVar2) {
            CalibrateTmp(this,playerId,0,0,&local_10->flags,(int *)0x0,(int *)&local_44,
                         (int *)&local_48);
            ResetActivityFromObjs(this,param_1,0x3c,local_44,0,0);
            DelObjsFromTmp(this,param_1,0,0,local_44);
            AddObjsToTmp(this,param_1,0,0,local_48);
            DArrayDestroy(local_44);
            DArrayDestroy(local_48);
          }
        }
        else {
          iVar3 = CheckTmps(playerId,0,0x3c,playerId,local_10,0);
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              PushTV(playerId,0);
              if (g_playerRuntime[iVar2].tempSlots[0][1].playerId == (int)playerId) {
                CalibrateTmp(this,playerId,0,1,&local_10->flags,(int *)&local_24,(int *)0x0,
                             (int *)0x0);
                ResetActivityFromObjs(this,param_1,0x3c,local_24,0,0);
                DArrayDestroy(local_24);
              }
              else {
                ResetActivityFromTmp(this,playerId,0,1,0);
              }
              goto cf_error_exit_004318A9;
            }
          }
          else {
            ActivateTV(this,playerId,0,iVar3);
          }
        }
      }
      else if (iVar3 == 0x1ae) {
        if (param_6 != 1) {
          iVar3 = CheckTmps(playerId,0,0x3c,playerId,local_10,0);
          if (iVar3 < 1) {
            PushTV(playerId,0);
            ResetActivityFromTmp(this,playerId,0,1,0);
            goto cf_error_exit_004318A9;
          }
          ActivateTV(this,playerId,0,iVar3);
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
    else if (g_playerRuntime[iVar2].field324_0x203 == 1) {
      if (param_6 != 1) {
        g_playerRuntime[iVar2].field324_0x203 = 0;
        ResetActivityFromTmp(this,playerId,1,0,0);
        iVar3 = g_playerRuntime[iVar2].tempSlots[0][0].objectType;
        if (iVar3 == 0) goto LAB_00431886;
        if (iVar3 == 0x3c) {
          iVar3 = CheckTmps(playerId,0,0x3c,playerId,local_10,0);
          if (iVar3 < 0) {
            PushTV(playerId,0);
cf_error_exit_004318A9:
            AddObjsToTmp(this,param_1,0,0,local_10);
            goto LAB_004318b5;
          }
          ActivateTV(this,playerId,0,iVar3);
        }
        else if (iVar3 == 0x1ae) {
          iVar3 = CheckTmps(playerId,0,0x3c,playerId,local_10,0);
          if (iVar3 < 1) {
            PushTV(playerId,0);
            goto cf_error_exit_004318A9;
          }
          ActivateTV(this,playerId,0,iVar3);
        }
        else {
          iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xa88,0,0,
                                     "%s","STAllPlayersC::FramePick GAMETYPE_BOAT ACT_RIGHT");
          if (iVar2 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xa8c,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_BOAT wrong panel number");
      if (iVar2 != 0) {
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
    Library::DKW::TBL::FUN_006ae1c0(&local_34->flags,&local_8);
    pSVar4 = GetObjPtr(this,'\0',local_8,CASE_3);
    if (pSVar4 == (STGameObjC *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xa95);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field324_0x203 == 0) {
      iVar2 = g_playerRuntime[iVar2].tempSlots[0][0].objectType;
      sVar8 = (short)local_8;
      if (iVar2 == 0) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
cf_error_exit_00431A49:
          AddObjToTmp2(this,playerId,0,0,pSVar4->field_0020,
                       CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)&pSVar4->field_0024),local_8
                      );
        }
        else {
          ActivateTV(this,playerId,0,iVar2);
        }
      }
      else if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
LAB_00431c38:
          PushTV(playerId,0);
          iVar2 = ResetActivityFromTmp(this,playerId,0,1,0);
          goto cf_error_exit_00431A49;
        }
        ActivateTV(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00431c38;
        }
        else {
          ActivateTV(this,playerId,0,iVar2);
        }
      }
      else {
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xaba,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_MINESET ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_playerRuntime[iVar2].field324_0x203 == 1) {
      g_playerRuntime[iVar2].field324_0x203 = 0;
      ResetActivityFromTmp(this,playerId,1,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].tempSlots[0][0].objectType + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 == 0) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) goto cf_error_exit_00431A49;
        ActivateTV(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
LAB_00431a3f:
          iVar2 = PushTV(playerId,0);
          goto cf_error_exit_00431A49;
        }
        ActivateTV(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 0) goto LAB_00431a3f;
        ActivateTV(this,playerId,0,iVar2);
      }
      else {
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xade,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_MINESET ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xae2,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_MINESET wrong panel number");
      if (iVar2 != 0) {
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
    Library::DKW::TBL::FUN_006ae1c0(&local_28->flags,&local_8);
    pSVar4 = GetObjPtr(this,-1,local_8,CASE_2);
    if (pSVar4 == (STGameObjC *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xaeb);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field324_0x203 == 0) {
      g_playerRuntime[iVar2].field324_0x203 = 1;
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].tempSlots[1][0].objectType + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          if (iVar2 < 1) goto LAB_00431ec7;
          ActivateTV(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00431e9e;
            goto LAB_00431e77;
          }
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX;
          if (iVar2 < 1) goto LAB_00431ed1;
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00431e9e:
        iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 0) {
LAB_00431ec7:
          PushTV(playerId,1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX_00;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00431ed1:
          uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)&pSVar4->field_0024);
          uVar7 = pSVar4->field_0020;
LAB_00431edd:
          AddObjToTmp2(this,playerId,1,0,uVar7,uVar5,local_8);
        }
        else {
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else {
LAB_00431e77:
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb3a,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_ARTEFACT ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_playerRuntime[iVar2].field324_0x203 == 1) {
      iVar2 = g_playerRuntime[iVar2].tempSlots[1][0].objectType;
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          if (iVar2 < 1) {
LAB_00431da2:
            PushTV(playerId,1);
            ResetActivityFromTmp(this,playerId,1,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = extraout_EDX_00;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00431dba:
            uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)&pSVar4->field_0024);
            uVar7 = pSVar4->field_0020;
            goto LAB_00431edd;
          }
          ActivateTV(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00431d70;
            goto LAB_00431d42;
          }
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_EDX;
          if (iVar2 < 1) goto LAB_00431dba;
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00431d70:
        iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00431da2;
        }
        else {
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else {
LAB_00431d42:
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb13,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_ARTEFACT ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb3e,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_ARTEFACT wrong panel number");
      if (iVar2 != 0) {
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
    Library::DKW::TBL::FUN_006ae1c0(&local_30->flags,&local_8);
    pSVar4 = GetObjPtr(this,-1,local_8,CASE_5);
    if (pSVar4 == (STGameObjC *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xb47);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field324_0x203 == 0) {
      g_playerRuntime[iVar2].field324_0x203 = 1;
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].tempSlots[1][0].objectType + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          if (iVar2 < 1) goto LAB_004321f3;
          ActivateTV(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_004321ca;
            goto LAB_004321a3;
          }
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          if (iVar2 < 1) goto LAB_004321fd;
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_004321ca:
        iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 0) {
LAB_004321f3:
          iVar2 = PushTV(playerId,1);
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_004321fd:
          uVar5 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)&pSVar4->field_0024);
          uVar7 = pSVar4->field_0020;
LAB_00432209:
          AddObjToTmp2(this,playerId,1,0,uVar7,uVar5,local_8);
        }
        else {
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else {
LAB_004321a3:
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb96,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_CONTAINER ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_playerRuntime[iVar2].field324_0x203 == 1) {
      iVar2 = g_playerRuntime[iVar2].tempSlots[1][0].objectType;
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          if (iVar2 < 1) {
LAB_004320ce:
            PushTV(playerId,1);
            ResetActivityFromTmp(this,playerId,1,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = extraout_ECX_02;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_004320e6:
            uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)&pSVar4->field_0024);
            uVar7 = pSVar4->field_0020;
            goto LAB_00432209;
          }
          ActivateTV(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_0043209c;
            goto LAB_0043206e;
          }
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX_01;
          if (iVar2 < 1) goto LAB_004320e6;
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_0043209c:
        iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_004320ce;
        }
        else {
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else {
LAB_0043206e:
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb6f,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_CONTAINER ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xb9a,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_CONTAINER wrong panel number");
      if (iVar2 != 0) {
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
    Library::DKW::TBL::FUN_006ae1c0(&local_14->flags,&local_8);
    if (g_playerRuntime[playerId].field324_0x203 == 0) {
      g_playerRuntime[playerId].field324_0x203 = 1;
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar2 = g_playerRuntime[playerId].tempSlots[1][0].objectType;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
          if (-1 < iVar2) {
            ActivateTV(this,playerId,1,iVar2);
            goto LAB_00432582;
          }
          PushTV(playerId,1);
cf_error_exit_0043256B:
          AddObjToTmp(this,playerId,1,0,playerId,local_8);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432536;
            goto LAB_0043250f;
          }
          iVar2 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
          if (iVar2 < 1) goto cf_error_exit_0043256B;
          ActivateTV(this,playerId,1,iVar2);
        }
LAB_00432578:
        g_playerRuntime[playerId].tempSlots[1][0].objectType = 0x19a;
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432536:
        iVar2 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
        if (iVar2 < 1) {
          PushTV(playerId,1);
          goto cf_error_exit_0043256B;
        }
        ActivateTV(this,playerId,1,iVar2);
      }
      else {
LAB_0043250f:
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xbfb,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_OBJECT ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_playerRuntime[playerId].field324_0x203 == 1) {
      iVar2 = g_playerRuntime[playerId].tempSlots[1][0].objectType;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
          if (iVar2 < 1) {
            if (iVar2 < 0) {
              PushTV(playerId,1);
              if (g_playerRuntime[playerId].tempSlots[1][1].playerId == (int)playerId) {
                CalibrateTmp(this,playerId,1,1,&local_14->flags,(int *)&local_24,(int *)0x0,
                             (int *)0x0);
                ResetActivityFromObjs(this,param_1,0x19a,local_24,0,0);
                DArrayDestroy(local_24);
              }
              else {
                ResetActivityFromTmp(this,playerId,1,1,0);
              }
              goto cf_error_exit_0043256B;
            }
          }
          else {
            ActivateTV(this,playerId,1,iVar2);
          }
        }
        else {
          if (iVar2 == 0) {
            iVar2 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
            if (0 < iVar2) {
              ActivateTV(this,playerId,1,iVar2);
              goto LAB_00432578;
            }
            goto cf_error_exit_0043256B;
          }
          if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_0043240a;
LAB_004323dc:
          iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xbd1,0,0,
                                     "%s","STAllPlayersC::FramePick GAMETYPE_OBJECT ACT_RIGHT");
          if (iVar2 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }
      else {
        if ((iVar2 != 0x1a4) && (iVar2 != 0x1b8)) goto LAB_004323dc;
LAB_0043240a:
        iVar2 = CheckTmps(playerId,1,0x19a,playerId,local_14,0);
        if (iVar2 < 1) {
          PushTV(playerId,1);
          ResetActivityFromTmp(this,playerId,1,1,0);
          goto cf_error_exit_0043256B;
        }
        ActivateTV(this,playerId,1,iVar2);
      }
    }
    else {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xbff,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_OBJECT wrong panel number");
      if (iVar2 != 0) {
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
    Library::DKW::TBL::FUN_006ae1c0(&local_20->flags,&local_8);
    pSVar4 = GetObjPtr(this,-1,local_8,CASE_4);
    if (pSVar4 == (STGameObjC *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xc08);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field324_0x203 == 0) {
      g_playerRuntime[iVar2].field324_0x203 = 1;
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].tempSlots[1][0].objectType + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          if (iVar2 < 1) goto LAB_0043288b;
          ActivateTV(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432862;
            goto LAB_0043283b;
          }
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX_03;
          if (iVar2 < 1) goto LAB_00432895;
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432862:
        iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 0) {
LAB_0043288b:
          PushTV(playerId,1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX_04;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00432895:
          uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)&pSVar4->field_0024);
          uVar7 = pSVar4->field_0020;
LAB_004328a1:
          AddObjToTmp2(this,playerId,1,0,uVar7,uVar5,local_8);
        }
        else {
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else {
LAB_0043283b:
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xc57,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_RESOURCE ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_playerRuntime[iVar2].field324_0x203 == 1) {
      iVar2 = g_playerRuntime[iVar2].tempSlots[1][0].objectType;
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          if (iVar2 < 1) {
LAB_00432766:
            PushTV(playerId,1);
            ResetActivityFromTmp(this,playerId,1,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = extraout_EDX_02;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_0043277e:
            uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)&pSVar4->field_0024);
            uVar7 = pSVar4->field_0020;
            goto LAB_004328a1;
          }
          ActivateTV(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432734;
            goto LAB_00432706;
          }
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_EDX_01;
          if (iVar2 < 1) goto LAB_0043277e;
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432734:
        iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00432766;
        }
        else {
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else {
LAB_00432706:
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xc30,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_RESOURCE ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xc5b,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_RESOURCE wrong panel number");
      if (iVar2 != 0) {
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
    Library::DKW::TBL::FUN_006ae1c0(&local_38->flags,&local_8);
    pSVar4 = GetObjPtr(this,-1,local_8,CASE_6);
    if (pSVar4 == (STGameObjC *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xc64);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field324_0x203 == 0) {
      g_playerRuntime[iVar2].field324_0x203 = 1;
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].tempSlots[1][0].objectType + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          if (iVar2 < 1) goto LAB_00432bb7;
          ActivateTV(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432b8e;
            goto LAB_00432b67;
          }
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          if (iVar2 < 1) goto LAB_00432bc1;
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432b8e:
        iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 0) {
LAB_00432bb7:
          iVar2 = PushTV(playerId,1);
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00432bc1:
          uVar5 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)&pSVar4->field_0024);
          uVar7 = pSVar4->field_0020;
LAB_00432bcd:
          AddObjToTmp2(this,playerId,1,0,uVar7,uVar5,local_8);
        }
        else {
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else {
LAB_00432b67:
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xcb3,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_BLOT ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_playerRuntime[iVar2].field324_0x203 == 1) {
      iVar2 = g_playerRuntime[iVar2].tempSlots[1][0].objectType;
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          if (iVar2 < 1) {
LAB_00432a92:
            PushTV(playerId,1);
            ResetActivityFromTmp(this,playerId,1,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = extraout_ECX_06;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00432aaa:
            uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)&pSVar4->field_0024);
            uVar7 = pSVar4->field_0020;
            goto LAB_00432bcd;
          }
          ActivateTV(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432a60;
            goto LAB_00432a32;
          }
          iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            (DArrayTy *)0x0,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX_05;
          if (iVar2 < 1) goto LAB_00432aaa;
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432a60:
        iVar2 = CheckTmps(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00432a92;
        }
        else {
          ActivateTV(this,playerId,1,iVar2);
        }
      }
      else {
LAB_00432a32:
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xc8c,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_BLOT ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xcb7,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_BLOT wrong panel number");
      if (iVar2 != 0) {
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
    Library::DKW::TBL::FUN_006ae1c0(&local_18->flags,&local_8);
    DArrayGetElement(local_3c,0,local_c);
    local_3c->count = 0;
    Library::DKW::TBL::FUN_006ae1c0(&local_3c->flags,(undefined4 *)local_c);
    if (g_playerRuntime[playerId].field324_0x203 == 0) {
      iVar2 = g_playerRuntime[playerId].tempSlots[0][0].objectType;
      if (iVar2 == 0) {
LAB_00432e7f:
        iVar2 = CheckTmps(playerId,0,0x3c,local_c[0],local_18,0);
        if (iVar2 < 1) {
cf_error_exit_00432EAE:
          AddObjToTmp(this,playerId,0,0,local_c[0],local_8);
        }
        else {
          ActivateTV(this,playerId,0,iVar2);
        }
        g_playerRuntime[playerId].tempSlots[0][0].objectType = 0x3c;
      }
      else if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(playerId,0,0x3c,local_c[0],local_18,0);
        if (iVar2 < 1) {
          if (iVar2 < 0) {
            PushTV(playerId,0);
            ResetActivityFromTmp(this,playerId,0,1,0);
            goto cf_error_exit_00432EAE;
          }
        }
        else {
          ActivateTV(this,playerId,0,iVar2);
        }
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(playerId,0,0x3c,local_c[0],local_18,0);
        if (iVar2 < 1) {
          PushTV(playerId,0);
          ResetActivityFromTmp(this,playerId,0,1,0);
          goto cf_error_exit_00432EAE;
        }
        ActivateTV(this,playerId,0,iVar2);
      }
      else {
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xce7,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_BOAT (enemy) ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_playerRuntime[playerId].field324_0x203 == 1) {
      g_playerRuntime[playerId].field324_0x203 = 0;
      ResetActivityFromTmp(this,playerId,1,0,0);
      iVar2 = g_playerRuntime[playerId].tempSlots[0][0].objectType;
      if (iVar2 == 0) goto LAB_00432e7f;
      if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(playerId,0,0x3c,local_c[0],local_18,0);
        if (iVar2 < 0) {
          PushTV(playerId,0);
          goto cf_error_exit_00432EAE;
        }
        ActivateTV(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(playerId,0,0x3c,local_c[0],local_18,0);
        if (iVar2 < 1) {
          PushTV(playerId,0);
          goto cf_error_exit_00432EAE;
        }
        ActivateTV(this,playerId,0,iVar2);
      }
      else {
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd0e,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_BOAT (enemy) ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd12,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_BOAT (enemy) wrong panel number");
      if (iVar2 != 0) {
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
    Library::DKW::TBL::FUN_006ae1c0(&local_2c->flags,&local_8);
    pSVar4 = GetObjPtr(this,'\0',local_8,CASE_3);
    if (pSVar4 == (STGameObjC *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xd1b);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field324_0x203 == 0) {
      iVar2 = g_playerRuntime[iVar2].tempSlots[0][0].objectType;
      sVar8 = (short)local_8;
      if (iVar2 == 0) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
cf_error_exit_00433050:
          AddObjToTmp2(this,playerId,0,0,pSVar4->field_0020,
                       CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)&pSVar4->field_0024),local_8
                      );
        }
        else {
          ActivateTV(this,playerId,0,iVar2);
        }
      }
      else if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
LAB_0043322b:
          PushTV(playerId,0);
          iVar2 = ResetActivityFromTmp(this,playerId,0,1,0);
          goto cf_error_exit_00433050;
        }
        ActivateTV(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_0043322b;
        }
        else {
          ActivateTV(this,playerId,0,iVar2);
        }
      }
      else {
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd40,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_MINESET (enemy) ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_playerRuntime[iVar2].field324_0x203 == 1) {
      g_playerRuntime[iVar2].field324_0x203 = 0;
      ResetActivityFromTmp(this,playerId,1,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].tempSlots[0][0].objectType + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 == 0) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) goto cf_error_exit_00433050;
        ActivateTV(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
LAB_00433046:
          iVar2 = PushTV(playerId,0);
          goto cf_error_exit_00433050;
        }
        ActivateTV(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,(DArrayTy *)0x0
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00433046;
        }
        else {
          ActivateTV(this,playerId,0,iVar2);
        }
      }
      else {
        iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd66,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_MINESET (enemy) ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd6a,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_MINESET (enemy) wrong panel number");
      if (iVar2 != 0) {
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
  Library::DKW::TBL::FUN_006ae1c0(&local_1c->flags,&local_8);
  DArrayGetElement(local_40,0,local_c);
  local_40->count = 0;
  Library::DKW::TBL::FUN_006ae1c0(&local_40->flags,(undefined4 *)local_c);
  if (g_playerRuntime[playerId].field324_0x203 != 0) {
    if (g_playerRuntime[playerId].field324_0x203 != 1) {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xdcb,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_OBJECT (enemy) wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_error_exit_004334F5;
    }
    iVar2 = g_playerRuntime[playerId].tempSlots[1][0].objectType;
    if (iVar2 < 0x19b) {
      if (iVar2 == 0x19a) {
        iVar2 = CheckTmps(playerId,1,0x19a,local_c[0],local_1c,0);
        if (0 < iVar2) {
          ActivateTV(this,playerId,1,iVar2);
          goto cf_error_exit_004334F5;
        }
        if (-1 < iVar2) goto cf_error_exit_004334F5;
        PushTV(playerId,1);
        ResetActivityFromTmp(this,playerId,1,1,0);
        goto cf_error_exit_004334DF;
      }
      if (iVar2 == 0) goto LAB_004333f5;
      if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00433363;
    }
    else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00433363:
      iVar2 = CheckTmps(playerId,1,0x19a,local_c[0],local_1c,0);
      if (0 < iVar2) {
        ActivateTV(this,playerId,1,iVar2);
        goto cf_error_exit_004334F5;
      }
      PushTV(playerId,1);
      ResetActivityFromTmp(this,playerId,1,1,0);
      goto cf_error_exit_004334DF;
    }
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xd9d,0,0,"%s",
                               "STAllPlayersC::FramePick GAMETYPE_OBJECT (enemy) ACT_RIGHT");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    goto cf_error_exit_004334F5;
  }
  g_playerRuntime[playerId].field324_0x203 = 1;
  ResetActivityFromTmp(this,playerId,0,0,0);
  iVar2 = g_playerRuntime[playerId].tempSlots[1][0].objectType;
  if (iVar2 < 0x19b) {
    if (iVar2 == 0x19a) {
      iVar2 = CheckTmps(playerId,1,0x19a,local_c[0],local_1c,0);
      if (-1 < iVar2) {
        ActivateTV(this,playerId,1,iVar2);
        goto cf_error_exit_004334F5;
      }
      PushTV(playerId,1);
      goto cf_error_exit_004334DF;
    }
    if (iVar2 != 0) {
      if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_004334a3;
      goto LAB_0043347c;
    }
LAB_004333f5:
    iVar2 = CheckTmps(playerId,1,0x19a,local_c[0],local_1c,0);
    if (iVar2 < 1) goto cf_error_exit_004334DF;
    ActivateTV(this,playerId,1,iVar2);
  }
  else {
    if ((iVar2 != 0x1a4) && (iVar2 != 0x1b8)) {
LAB_0043347c:
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xdc7,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_OBJECT (enemy) ACT_LEFT");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_error_exit_004334F5;
    }
LAB_004334a3:
    iVar2 = CheckTmps(playerId,1,0x19a,local_c[0],local_1c,0);
    if (0 < iVar2) {
      ActivateTV(this,playerId,1,iVar2);
      goto cf_error_exit_004334F5;
    }
    PushTV(playerId,1);
cf_error_exit_004334DF:
    AddObjToTmp(this,playerId,1,0,local_c[0],local_8);
  }
  g_playerRuntime[playerId].tempSlots[1][0].objectType = 0x19a;
cf_error_exit_004334F5:
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",0xdce)
  ;
  g_currentExceptionFrame = local_90.previous;
  return;
}

