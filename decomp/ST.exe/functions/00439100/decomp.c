#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RestoreTmp */

void __thiscall STAllPlayersC::RestoreTmp(STAllPlayersC *this,int param_1)

{
  AnonShape_00439100_AC816B12 *pAVar1;
  STAllPlayersC *this_00;
  int local_EAX_51;
  STGameObjC *pSVar3;
  int local_EAX_274;
  int local_EAX_377;
  int local_EAX_419;
  int local_EAX_528;
  int local_EAX_637;
  int local_EAX_729;
  int local_EAX_771;
  int local_EAX_937;
  STGameObjC *pSVar4;
  uint uVar5;
  STGameObjC *pSVar6;
  int local_EAX_1216;
  int local_EAX_1318;
  int local_EAX_1363;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  int local_EAX_1512;
  int local_EAX_1578;
  int local_EAX_1623;
  int local_EAX_1726;
  int local_EAX_1810;
  int local_EAX_1876;
  int local_EAX_1921;
  int local_EAX_2046;
  int local_EAX_2112;
  int local_EAX_2157;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_00;
  uint uVar6;
  int local_EAX_2252;
  int local_EAX_2345;
  int local_EAX_2410;
  int local_EAX_2554;
  int local_EAX_2599;
  int local_EAX_2760;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_01;
  int local_EAX_2929;
  int local_EAX_2974;
  int local_EAX_3091;
  int local_EAX_3199;
  int local_EAX_3301;
  int local_EAX_3346;
  int local_EAX_3489;
  int local_EAX_3534;
  int local_EAX_3626;
  int local_EAX_3730;
  int local_EAX_3778;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int local_EAX_3864;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EAX_02;
  uint uVar7;
  int local_EAX_3979;
  int local_EAX_4027;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  int local_EAX_4141;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EAX_03;
  int local_EAX_4241;
  int local_EAX_4354;
  int local_EAX_4446;
  int local_EAX_4498;
  int local_EAX_4564;
  int local_EAX_4779;
  int local_EAX_4831;
  int local_EAX_4893;
  int local_EAX_4931;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_04;
  int iVar9;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  undefined4 uVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_02;
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
  undefined2 uVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_14;
  char cVar12;
  uint uVar13;
  InternalExceptionFrame local_70;
  STAllPlayersC *local_2c;
  AnonShape_00439100_AC816B12 *local_28;
  int local_24;
  STGameObjC *local_20_mg0;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  DArrayTy *local_c;
  uint local_8;

  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(DAT_0080874d));
  local_c = nullptr;
  local_24 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_2c = this;
  local_EAX_51 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (local_EAX_51 != -0x5001fff7) {
      iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x19ab,0,0,"%s",
                                 "STAllPlayersC::RestoreTmp");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(local_EAX_51,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x19ac);
    }
    return;
  }
  if ((param_1 < 0) || (9 < param_1)) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x170e);
  }
  this_00 = local_2c;
  pSVar3 = (STGameObjC *)(int)(char)local_8;
  iVar9 = *(int *)(param_1 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, (int)pSVar3, 0x207));
  pAVar1 = (AnonShape_00439100_AC816B12 *)(param_1 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, (int)pSVar3, 0x207));
  local_28 = pAVar1;
  local_20_mg0 = pSVar3;
  if (iVar9 < 0x19b) {
    if (iVar9 == 0x19a) {
      if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 == 0) {
        g_packedRecords_A62x8[(int)pSVar3].field200_0x203 = 1;
        ResetActivityFromTmp(local_2c,(char)local_8,0,0,0);
        iVar9 = g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3;
        cVar12 = (char)local_8;
        if (iVar9 < 0x19b) {
          if (iVar9 == 0x19a) {
            iVar3 = CheckTmps(cVar12,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
            if (-1 < iVar3) {
              ActivateTV(this_00,(char)local_8,1,iVar3);
              goto cf_common_exit_0043A47C;
            }
            PushTV((char)local_8,1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            local_EAX_2345 = extraout_EAX_01;
LAB_00439c32:
            cVar12 = pAVar1->field_0x4;
            uVar5 = STReplaceLowWord((uint32_t)(local_EAX_2345), (uint16_t)(*(undefined2 *)pAVar1->field_000A->data));
          }
          else {
            if (iVar9 != 0) {
              if ((iVar9 == 0x5a) || (iVar9 == 0x172)) goto LAB_00439c87;
              goto LAB_00439c59;
            }
            local_EAX_2760 = CheckTmps(cVar12,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar11 = extraout_var_10;
            if (0 < local_EAX_2760) {
              ActivateTV(this_00,(char)local_8,1,local_EAX_2760);
              g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3 = 0x19a;
              goto cf_common_exit_0043A47C;
            }
LAB_00439aaa:
            cVar12 = pAVar1->field_0x4;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar5 = CONCAT22(uVar11,*(undefined2 *)pAVar1->field_000A->data);
          }
        }
        else {
          if ((iVar9 != 0x1a4) && (iVar9 != 0x1b8)) {
LAB_00439c59:
            local_EAX_2929 =
                 ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x17d3,0,0,
                                    "%s","STAllPlayersC::RestoreTmp GAMETYPE_OBJECT ACT_LEFT");
            if (local_EAX_2929 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
LAB_00439c87:
          local_EAX_2974 = CheckTmps(cVar12,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < local_EAX_2974) {
            ActivateTV(this_00,(char)local_8,1,local_EAX_2974);
            goto cf_common_exit_0043A47C;
          }
          PushTV((char)local_8,1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_02;
LAB_00439cc7:
          cVar12 = pAVar1->field_0x4;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar5 = CONCAT22(uVar11,*(undefined2 *)pAVar1->field_000A->data);
        }
        AddObjToTmp(this_00,(char)local_8,1,0,cVar12,uVar5);
        g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3 = 0x19a;
        goto cf_common_exit_0043A47C;
      }
      if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 != 1) {
        local_EAX_2252 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x17d7,0,0,"%s",
                                "STAllPlayersC::RestoreTmp GAMETYPE_OBJECT wrong panel number");
        if (local_EAX_2252 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      iVar9 = g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3;
      if (iVar9 < 0x19b) {
        if (iVar9 == 0x19a) {
          local_EAX_2410 = CheckTmps((char)local_8,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < local_EAX_2410) {
            ActivateTV(this_00,(char)local_8,1,local_EAX_2410);
            goto cf_common_exit_0043A47C;
          }
          if (local_EAX_2410 < 0) {
            PushTV((char)local_8,1);
            ResetActivityFromTmp(this_00,(char)local_8,1,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar11 = extraout_var_09;
            goto LAB_00439aaa;
          }
cf_common_join_0043A107:
          local_24 = 1;
          goto cf_common_exit_0043A47C;
        }
        if (iVar9 == 0) {
          local_EAX_2345 = CheckTmps((char)local_8,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < local_EAX_2345) {
            ActivateTV(this_00,(char)local_8,1,local_EAX_2345);
            g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3 = 0x19a;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439c32;
        }
        if ((iVar9 == 0x5a) || (iVar9 == 0x172)) goto LAB_00439b10;
      }
      else if ((iVar9 == 0x1a4) || (iVar9 == 0x1b8)) {
LAB_00439b10:
        local_EAX_2599 = CheckTmps((char)local_8,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
        if (0 < local_EAX_2599) {
          ActivateTV(this_00,(char)local_8,1,local_EAX_2599);
          goto cf_common_exit_0043A47C;
        }
        PushTV((char)local_8,1);
        ResetActivityFromTmp(this_00,(char)local_8,1,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_01;
        goto LAB_00439cc7;
      }
      local_EAX_2554 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x17a9,0,0,"%s",
                              "STAllPlayersC::RestoreTmp GAMETYPE_OBJECT ACT_RIGHT");
      if (local_EAX_2554 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0043A47C;
    }
    if (0x5a < iVar9) {
      if (iVar9 == 0x172) {
        pSVar6 = GetObjPtr(local_2c,-1,*(ushort *)&pAVar1->field_0x8,CASE_2);
        uVar5 = local_8;
        cVar12 = (char)local_8;
        if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 != 0) {
          if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 != 1) {
            local_EAX_1726 =
                 ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x18df,0,0,
                                    "%s","STAllPlayersC::RestoreTmp GAMETYPE_ARTEFACT wrong panel number");
            if (local_EAX_1726 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
          iVar9 = g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3;
          if (iVar9 < 0x19b) {
            if (iVar9 == 0x19a) goto LAB_004397fb;
            if (iVar9 == 0) goto LAB_0043a394;
            if ((iVar9 == 0x5a) || (iVar9 == 0x172)) goto LAB_0043986a;
          }
          else if ((iVar9 == 0x1a4) || (iVar9 == 0x1b8)) {
LAB_0043986a:
            local_EAX_1921 =
                 CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                           pSVar6->field_0032);
            if (0 < local_EAX_1921) {
              ActivateTV(this_00,cVar12,1,local_EAX_1921);
              goto cf_common_exit_0043A47C;
            }
            if (local_EAX_1921 < 0) goto LAB_00439672;
            goto cf_common_join_0043A107;
          }
          local_EAX_1876 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x18b4,0,0,"%s",
                                  "STAllPlayersC::RestoreTmp GAMETYPE_ARTEFACT ACT_RIGHT");
          if (local_EAX_1876 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        g_packedRecords_A62x8[(int)pSVar3].field200_0x203 = 1;
        ResetActivityFromTmp(this_00,cVar12,0,0,0);
        uVar5 = local_8;
        iVar9 = g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3;
        if (iVar9 < 0x19b) {
          if (iVar9 == 0x19a) goto LAB_004396d1;
          if (iVar9 == 0) goto LAB_004398e7;
          if ((iVar9 == 0x5a) || (iVar9 == 0x172)) goto LAB_00439956;
        }
        else if ((iVar9 == 0x1a4) || (iVar9 == 0x1b8)) {
LAB_00439956:
          cVar12 = (char)local_8;
          local_EAX_2157 =
               CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                         pSVar6->field_0032);
          if (-1 < local_EAX_2157) {
            ActivateTV(this_00,cVar12,1,local_EAX_2157);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439986;
        }
        local_EAX_2112 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x18db,0,0,"%s",
                                "STAllPlayersC::RestoreTmp GAMETYPE_ARTEFACT ACT_LEFT");
        if (local_EAX_2112 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
LAB_00439cfb:
      local_EAX_3091 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1998,0,0,"%s",
                              "STAllPlayersC::RestoreTmp invalid game type");
      if (local_EAX_3091 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x1999);
      goto cf_common_exit_0043A47C;
    }
    if (iVar9 != 0x5a) {
      if (iVar9 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x1713);
      }
      else if (iVar9 != 0x3c) goto LAB_00439cfb;
      cVar12 = (char)local_8;
      if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 == 0) {
        iVar9 = g_packedRecords_A62x8[(int)pSVar3].field96_0x163;
        if (iVar9 == 0) {
LAB_00439369:
          local_EAX_637 = CheckTmps((char)local_8,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < local_EAX_637) {
            ActivateTV(this_00,(char)local_8,0,local_EAX_637);
            g_packedRecords_A62x8[(int)pSVar3].field96_0x163 = 0x3c;
            goto cf_common_exit_0043A47C;
          }
LAB_0043953a:
          pSVar4 = *(STGameObjC **)&pAVar1->field_0x4;
          if (pSVar4 == local_20_mg0) {
            AddObjsToTmp(this_00,local_8,0,0,pAVar1->field_000A);
            g_packedRecords_A62x8[(int)pSVar3].field96_0x163 = 0x3c;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439566;
        }
        if (iVar9 == 0x3c) {
          local_EAX_937 = CheckTmps(cVar12,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < local_EAX_937) {
            ActivateTV(this_00,(char)local_8,0,local_EAX_937);
            goto cf_common_exit_0043A47C;
          }
          if (-1 < local_EAX_937) goto cf_common_join_0043A107;
          PushTV((char)local_8,0);
          if (((STGameObjC *)g_packedRecords_A62x8[(int)pSVar3].field105_0x177 == local_20_mg0) &&
             (*(STGameObjC **)&pAVar1->field_0x4 == local_20_mg0)) {
            CalibrateTmp(this_00,(char)local_8,0,1,&pAVar1->field_000A->flags,(int *)&local_c,
                         nullptr,nullptr);
            ResetActivityFromObjs(this_00,local_8,0x3c,local_c,0,0);
            DArrayDestroy(local_c);
          }
          else {
            ResetActivityFromTmp(this_00,(char)local_8,0,1,0);
          }
          goto LAB_0043953a;
        }
        if (iVar9 != 0x1ae) {
          local_EAX_729 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1748,0,0,"%s",
                                  "STAllPlayersC::RestoreTmp GAMETYPE_BOAT ACT_LEFT");
          if (local_EAX_729 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        local_EAX_771 = CheckTmps(cVar12,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
        if (0 < local_EAX_771) {
          ActivateTV(this_00,(char)local_8,0,local_EAX_771);
          goto cf_common_exit_0043A47C;
        }
        PushTV((char)local_8,0);
        ResetActivityFromTmp(this_00,(char)local_8,0,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_07;
        if (*(STGameObjC **)&pAVar1->field_0x4 == local_20_mg0) {
          AddObjsToTmp(this_00,local_8,0,0,pAVar1->field_000A);
          g_packedRecords_A62x8[(int)pSVar3].field96_0x163 = 0x3c;
          goto cf_common_exit_0043A47C;
        }
LAB_00439469:
        cVar12 = pAVar1->field_0x4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar5 = CONCAT22(uVar11,*(undefined2 *)pAVar1->field_000A->data);
      }
      else {
        if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 != 1) {
          local_EAX_274 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1778,0,0,"%s",
                                  "STAllPlayersC::RestoreTmp GAMETYPE_BOAT wrong panel number");
          if (local_EAX_274 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        g_packedRecords_A62x8[(int)pSVar3].field200_0x203 = 0;
        ResetActivityFromTmp(this_00,cVar12,1,0,0);
        iVar9 = g_packedRecords_A62x8[(int)pSVar3].field96_0x163;
        if (iVar9 == 0) goto LAB_00439369;
        if (iVar9 != 0x3c) {
          if (iVar9 != 0x1ae) {
            local_EAX_377 =
                 ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1774,0,0,
                                    "%s","STAllPlayersC::RestoreTmp GAMETYPE_BOAT ACT_RIGHT");
            if (local_EAX_377 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
          local_EAX_419 = CheckTmps((char)local_8,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < local_EAX_419) {
            ActivateTV(this_00,(char)local_8,0,local_EAX_419);
            goto cf_common_exit_0043A47C;
          }
          PushTV((char)local_8,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_06;
          if (*(STGameObjC **)&pAVar1->field_0x4 == local_20_mg0) {
            AddObjsToTmp(this_00,local_8,0,0,pAVar1->field_000A);
            g_packedRecords_A62x8[(int)pSVar3].field96_0x163 = 0x3c;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439469;
        }
        local_EAX_528 = CheckTmps((char)local_8,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
        if (-1 < local_EAX_528) {
          ActivateTV(this_00,(char)local_8,0,local_EAX_528);
          goto cf_common_exit_0043A47C;
        }
        PushTV((char)local_8,0);
        pSVar4 = *(STGameObjC **)&pAVar1->field_0x4;
        if (pSVar4 == local_20_mg0) {
          AddObjsToTmp(this_00,local_8,0,0,pAVar1->field_000A);
          g_packedRecords_A62x8[(int)pSVar3].field96_0x163 = 0x3c;
          goto cf_common_exit_0043A47C;
        }
LAB_00439566:
        cVar12 = pAVar1->field_0x4;
        uVar5 = STReplaceLowWord((uint32_t)(pSVar4), (uint16_t)(*(undefined2 *)pAVar1->field_000A->data));
      }
      AddObjToTmp(this_00,(char)local_8,0,0,cVar12,uVar5);
      g_packedRecords_A62x8[(int)pSVar3].field96_0x163 = 0x3c;
      goto cf_common_exit_0043A47C;
    }
    pSVar6 = GetObjPtr(local_2c,-1,*(ushort *)&pAVar1->field_0x8,CASE_4);
    uVar5 = local_8;
    cVar12 = (char)local_8;
    if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 != 0) {
      if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 != 1) {
        local_EAX_1216 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1885,0,0,"%s",
                                "STAllPlayersC::RestoreTmp GAMETYPE_RESOURCE wrong panel number");
        if (local_EAX_1216 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      iVar9 = g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3;
      if (iVar9 < 0x19b) {
        if (iVar9 == 0x19a) {
LAB_004397fb:
          uVar5 = local_8;
          cVar12 = (char)local_8;
          local_EAX_1810 =
               CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                         pSVar6->field_0032);
          if (0 < local_EAX_1810) {
            ActivateTV(this_00,cVar12,1,local_EAX_1810);
            goto cf_common_exit_0043A47C;
          }
LAB_00439672:
          PushTV((char)uVar5,1);
          ResetActivityFromTmp(this_00,(char)uVar5,1,1,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          local_EAX_4779 = extraout_EAX;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_08;
          goto LAB_0043a463;
        }
        if (iVar9 == 0) goto LAB_0043a394;
        if ((iVar9 == 0x5a) || (iVar9 == 0x172)) goto LAB_0043963c;
      }
      else if ((iVar9 == 0x1a4) || (iVar9 == 0x1b8)) {
LAB_0043963c:
        local_EAX_1363 =
             CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                       pSVar6->field_0032);
        if (0 < local_EAX_1363) {
          ActivateTV(this_00,cVar12,1,local_EAX_1363);
          goto cf_common_exit_0043A47C;
        }
        if (-1 < local_EAX_1363) goto cf_common_join_0043A107;
        goto LAB_00439672;
      }
      local_EAX_1318 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x185a,0,0,"%s",
                              "STAllPlayersC::RestoreTmp GAMETYPE_RESOURCE ACT_RIGHT");
      if (local_EAX_1318 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0043A47C;
    }
    g_packedRecords_A62x8[(int)pSVar3].field200_0x203 = 1;
    ResetActivityFromTmp(this_00,cVar12,0,0,0);
    uVar5 = local_8;
    iVar9 = g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3;
    if (iVar9 < 0x19b) {
      if (iVar9 == 0x19a) {
LAB_004396d1:
        uVar5 = local_8;
        cVar12 = (char)local_8;
        local_EAX_1512 =
             CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                       pSVar6->field_0032);
        if (0 < local_EAX_1512) {
          ActivateTV(this_00,cVar12,1,local_EAX_1512);
          goto cf_common_exit_0043A47C;
        }
        goto LAB_00439986;
      }
      if (iVar9 != 0) {
        if ((iVar9 == 0x5a) || (iVar9 == 0x172)) goto LAB_00439740;
        goto LAB_00439712;
      }
LAB_004398e7:
      uVar5 = local_8;
      cVar12 = (char)local_8;
      local_EAX_2046 =
           CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                     pSVar6->field_0032);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar10 = extraout_ECX;
      if (0 < local_EAX_2046) {
        ActivateTV(this_00,cVar12,1,local_EAX_2046);
        goto cf_common_exit_0043A47C;
      }
    }
    else {
      if ((iVar9 != 0x1a4) && (iVar9 != 0x1b8)) {
LAB_00439712:
        local_EAX_1578 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1881,0,0,"%s",
                                "STAllPlayersC::RestoreTmp GAMETYPE_RESOURCE ACT_LEFT");
        if (local_EAX_1578 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
LAB_00439740:
      cVar12 = (char)local_8;
      local_EAX_1623 =
           CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                     pSVar6->field_0032);
      if (-1 < local_EAX_1623) {
        ActivateTV(this_00,cVar12,1,local_EAX_1623);
        goto cf_common_exit_0043A47C;
      }
LAB_00439986:
      PushTV((char)uVar5,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_EAX_2046 = extraout_EAX_00;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar10 = extraout_ECX_00;
    }
    uVar6 = STReplaceLowWord((uint32_t)(local_EAX_2046), (uint16_t)(pSVar6->field_0032));
    uVar7 = STReplaceLowByte((uint32_t)(uVar10), (uint8_t)(*(undefined1 *)&pSVar6->field_0024));
    uVar13 = pSVar6->field_0020;
LAB_0043a470:
    iVar9 = 1;
  }
  else {
    if (iVar9 == 0x1a4) {
      pSVar6 = GetObjPtr(local_2c,-1,*(ushort *)&pAVar1->field_0x8,CASE_5);
      uVar5 = local_8;
      cVar12 = (char)local_8;
      if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 != 0) {
        if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 != 1) {
          local_EAX_4354 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1939,0,0,"%s",
                                  "STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER wrong panel number");
          if (local_EAX_4354 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        iVar9 = g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3;
        if (iVar9 < 0x19b) {
          if (iVar9 == 0x19a) {
LAB_0043a27b:
            uVar5 = local_8;
            cVar12 = (char)local_8;
            local_EAX_4498 =
                 CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                           pSVar6->field_0032);
            if (0 < local_EAX_4498) {
              ActivateTV(this_00,cVar12,1,local_EAX_4498);
              goto cf_common_exit_0043A47C;
            }
            goto LAB_0043a320;
          }
          if (iVar9 != 0) {
            if ((iVar9 == 0x5a) || (iVar9 == 0x172)) goto LAB_0043a2ea;
            goto LAB_0043a2bc;
          }
LAB_0043a247:
          uVar5 = local_8;
          cVar12 = (char)local_8;
          local_EAX_4446 =
               CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                         pSVar6->field_0032);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar10 = extraout_EDX_00;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_04;
          if (0 < local_EAX_4446) {
            ActivateTV(this_00,cVar12,1,local_EAX_4446);
            goto cf_common_exit_0043A47C;
          }
        }
        else {
          if ((iVar9 != 0x1a4) && (iVar9 != 0x1b8)) {
LAB_0043a2bc:
            local_EAX_4564 =
                 ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x190e,0,0,
                                    "%s","STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_RIGHT");
            if (local_EAX_4564 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
LAB_0043a2ea:
          local_EAX_3346 =
               CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                         pSVar6->field_0032);
          if (0 < local_EAX_3346) {
            ActivateTV(this_00,cVar12,1,local_EAX_3346);
            goto cf_common_exit_0043A47C;
          }
joined_r0x0043a31a:
          if (-1 < local_EAX_3346) goto cf_common_join_0043A107;
LAB_0043a320:
          PushTV((char)uVar5,1);
          ResetActivityFromTmp(this_00,(char)uVar5,1,1,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar10 = extraout_EDX_01;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_05;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar6 = CONCAT22(uVar11,pSVar6->field_0032);
        uVar7 = STReplaceLowByte((uint32_t)(uVar10), (uint8_t)(*(undefined1 *)&pSVar6->field_0024));
        uVar13 = pSVar6->field_0020;
        goto LAB_0043a470;
      }
      g_packedRecords_A62x8[(int)pSVar3].field200_0x203 = 1;
      ResetActivityFromTmp(this_00,cVar12,0,0,0);
      uVar5 = local_8;
      iVar9 = g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3;
      if (iVar9 < 0x19b) {
        if (iVar9 == 0x19a) {
LAB_0043a3c8:
          uVar5 = local_8;
          cVar12 = (char)local_8;
          local_EAX_4831 =
               CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                         pSVar6->field_0032);
          if (0 < local_EAX_4831) {
            ActivateTV(this_00,cVar12,1,local_EAX_4831);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_0043a459;
        }
        if (iVar9 != 0) {
          if ((iVar9 == 0x5a) || (iVar9 == 0x172)) goto LAB_0043a42c;
          goto LAB_0043a405;
        }
LAB_0043a394:
        uVar5 = local_8;
        cVar12 = (char)local_8;
        local_EAX_4779 =
             CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                       pSVar6->field_0032);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_13;
        if (0 < local_EAX_4779) {
          ActivateTV(this_00,cVar12,1,local_EAX_4779);
          goto cf_common_exit_0043A47C;
        }
      }
      else {
        if ((iVar9 != 0x1a4) && (iVar9 != 0x1b8)) {
LAB_0043a405:
          local_EAX_4893 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1935,0,0,"%s",
                                  "STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_LEFT");
          if (local_EAX_4893 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
LAB_0043a42c:
        cVar12 = (char)local_8;
        local_EAX_4931 =
             CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                       pSVar6->field_0032);
        if (-1 < local_EAX_4931) {
          ActivateTV(this_00,cVar12,1,local_EAX_4931);
          goto cf_common_exit_0043A47C;
        }
LAB_0043a459:
        PushTV((char)uVar5,1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        local_EAX_4779 = extraout_EAX_04;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_14;
      }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_0043a463:
      uVar6 = CONCAT22(uVar11,pSVar6->field_0032);
      uVar7 = STReplaceLowByte((uint32_t)(local_EAX_4779), (uint8_t)(*(undefined1 *)&pSVar6->field_0024));
      uVar13 = pSVar6->field_0020;
      goto LAB_0043a470;
    }
    if (iVar9 != 0x1ae) {
      if (iVar9 != 0x1b8) goto LAB_00439cfb;
      pSVar6 = GetObjPtr(local_2c,-1,*(ushort *)&pAVar1->field_0x8,CASE_6);
      uVar5 = local_8;
      cVar12 = (char)local_8;
      if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 == 0) {
        g_packedRecords_A62x8[(int)pSVar3].field200_0x203 = 1;
        ResetActivityFromTmp(this_00,cVar12,0,0,0);
        uVar5 = local_8;
        iVar9 = g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3;
        if (iVar9 < 0x19b) {
          if (iVar9 == 0x19a) goto LAB_0043a3c8;
          if (iVar9 == 0) goto LAB_0043a394;
          if ((iVar9 == 0x5a) || (iVar9 == 0x172)) goto LAB_00439eb7;
        }
        else if ((iVar9 == 0x1a4) || (iVar9 == 0x1b8)) {
LAB_00439eb7:
          cVar12 = (char)local_8;
          local_EAX_3534 =
               CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                         pSVar6->field_0032);
          if (-1 < local_EAX_3534) {
            ActivateTV(this_00,cVar12,1,local_EAX_3534);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_0043a459;
        }
        local_EAX_3489 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x198f,0,0,"%s",
                                "STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_LEFT");
        if (local_EAX_3489 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 != 1) {
        local_EAX_3199 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1993,0,0,"%s",
                                "STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER wrong panel number");
        if (local_EAX_3199 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      iVar9 = g_packedRecords_A62x8[(int)pSVar3].field149_0x1b3;
      if (iVar9 < 0x19b) {
        if (iVar9 == 0x19a) goto LAB_0043a27b;
        if (iVar9 == 0) goto LAB_0043a247;
        if ((iVar9 == 0x5a) || (iVar9 == 0x172)) goto LAB_00439dfb;
      }
      else if ((iVar9 == 0x1a4) || (iVar9 == 0x1b8)) {
LAB_00439dfb:
        local_EAX_3346 =
             CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                       pSVar6->field_0032);
        if (0 < local_EAX_3346) {
          ActivateTV(this_00,cVar12,1,local_EAX_3346);
          goto cf_common_exit_0043A47C;
        }
        goto joined_r0x0043a31a;
      }
      local_EAX_3301 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1968,0,0,"%s",
                              "STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_RIGHT");
      if (local_EAX_3301 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0043A47C;
    }
    local_20_mg0 = GetObjPtr(local_2c,pAVar1->field_0x4,*(ushort *)&pAVar1->field_0x8,CASE_3);
    uVar5 = local_8;
    cVar12 = (char)local_8;
    if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 == 0) {
      iVar9 = g_packedRecords_A62x8[(int)pSVar3].field96_0x163;
      if (iVar9 == 0) {
LAB_0043a177:
        uVar5 = local_8;
        cVar12 = (char)local_8;
        local_EAX_4241 =
             CheckTmps(cVar12,0,local_20_mg0->field_0020,pAVar1->field_0x4,nullptr,
                       *(short *)&pAVar1->field_0x8);
        if (0 < local_EAX_4241) {
          ActivateTV(this_00,cVar12,0,local_EAX_4241);
          goto cf_common_exit_0043A47C;
        }
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar6 = CONCAT22(extraout_var_03,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(pAVar1->field_0x4));
        uVar13 = local_20_mg0->field_0020;
        iVar9 = 0;
      }
      else if (iVar9 == 0x3c) {
        local_EAX_4141 =
             CheckTmps(cVar12,0,local_20_mg0->field_0020,pAVar1->field_0x4,nullptr,
                       *(short *)&pAVar1->field_0x8);
        if (0 < local_EAX_4141) {
          ActivateTV(this_00,cVar12,0,local_EAX_4141);
          goto cf_common_exit_0043A47C;
        }
        PushTV(cVar12,0);
        ResetActivityFromTmp(this_00,cVar12,0,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar6 = CONCAT22(extraout_var_12,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = STReplaceLowByte((uint32_t)(extraout_EAX_03), (uint8_t)(pAVar1->field_0x4));
        uVar13 = local_20_mg0->field_0020;
        iVar9 = 0;
      }
      else {
        if (iVar9 != 0x1ae) {
          local_EAX_3979 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1803,0,0,"%s",
                                  "STAllPlayersC::RestoreTmp GAMETYPE_MINESET ACT_LEFT");
          if (local_EAX_3979 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        local_EAX_4027 =
             CheckTmps(cVar12,0,local_20_mg0->field_0020,pAVar1->field_0x4,nullptr,
                       *(short *)&pAVar1->field_0x8);
        if (0 < local_EAX_4027) {
          ActivateTV(this_00,cVar12,0,local_EAX_4027);
          goto cf_common_exit_0043A47C;
        }
        if (-1 < local_EAX_4027) goto cf_common_join_0043A107;
        PushTV(cVar12,0);
        ResetActivityFromTmp(this_00,cVar12,0,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar6 = CONCAT22(extraout_var_00,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = STReplaceLowByte((uint32_t)(extraout_ECX_02), (uint8_t)(pAVar1->field_0x4));
        uVar13 = local_20_mg0->field_0020;
        iVar9 = 0;
      }
    }
    else {
      if (g_packedRecords_A62x8[(int)pSVar3].field200_0x203 != 1) {
        local_EAX_3626 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x182b,0,0,"%s",
                                "STAllPlayersC::RestoreTmp GAMETYPE_MINESET wrong panel number");
        if (local_EAX_3626 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      g_packedRecords_A62x8[(int)pSVar3].field200_0x203 = 0;
      ResetActivityFromTmp(this_00,cVar12,1,0,0);
      uVar5 = local_8;
      iVar9 = g_packedRecords_A62x8[(int)pSVar3].field96_0x163;
      if (iVar9 == 0) goto LAB_0043a177;
      cVar12 = (char)local_8;
      if (iVar9 == 0x3c) {
        local_EAX_3864 =
             CheckTmps(cVar12,0,local_20_mg0->field_0020,pAVar1->field_0x4,nullptr,
                       *(short *)&pAVar1->field_0x8);
        if (0 < local_EAX_3864) {
          ActivateTV(this_00,cVar12,0,local_EAX_3864);
          goto cf_common_exit_0043A47C;
        }
        PushTV(cVar12,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar6 = CONCAT22(extraout_var_11,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = STReplaceLowByte((uint32_t)(extraout_EAX_02), (uint8_t)(pAVar1->field_0x4));
        uVar13 = local_20_mg0->field_0020;
        iVar9 = 0;
      }
      else {
        if (iVar9 != 0x1ae) {
          local_EAX_3730 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1827,0,0,"%s",
                                  "STAllPlayersC::RestoreTmp GAMETYPE_MINESET ACT_RIGHT");
          if (local_EAX_3730 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        local_EAX_3778 =
             CheckTmps(cVar12,0,local_20_mg0->field_0020,pAVar1->field_0x4,nullptr,
                       *(short *)&pAVar1->field_0x8);
        if (-1 < local_EAX_3778) {
          ActivateTV(this_00,cVar12,0,local_EAX_3778);
          goto cf_common_exit_0043A47C;
        }
        PushTV(cVar12,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar6 = CONCAT22(extraout_var,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = STReplaceLowByte((uint32_t)(extraout_ECX_01), (uint8_t)(pAVar1->field_0x4));
        uVar13 = local_20_mg0->field_0020;
        iVar9 = 0;
      }
    }
  }
  AddObjToTmp2(this_00,(char)uVar5,iVar9,0,uVar13,uVar7,uVar6);
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
cf_common_exit_0043A47C:
  if (((local_24 == 1) &&
      (uVar5 = CONCAT22((short)((uint)&local_14 >> 0x10),*(undefined2 *)&local_28->field_0x8),
      iVar9 = GetCamPoint((short)*(undefined4 *)local_28,
                          STReplaceLowByte((uint32_t)(uVar5), (uint8_t)(local_28->field_0x4)),local_28->field_000A,
                          uVar5,&local_18,&local_14,&local_10,&local_1c), iVar9 == 0)) &&
     (iVar9 = Library::Ourlib::ST3DSPR::SprInRect
                        (g_sT3DSMAPContext_00807598,local_1c,DAT_00807410,DAT_00807414,DAT_00807418,
                         DAT_0080741c), iVar9 != 1)) {
    thunk_FUN_004a8e00(local_18,local_14,local_10);
    thunk_FUN_004a8f20(1);
    thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
    CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
    DAT_0080674c = 2;
    DAT_0080745d = 0;
  }
  SelfCheckObjControl(this_00);
  g_currentExceptionFrame = local_70.previous;
  return;
}

