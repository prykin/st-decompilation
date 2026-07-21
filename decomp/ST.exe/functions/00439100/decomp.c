#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RestoreTmp */

void __thiscall STAllPlayersC::RestoreTmp(STAllPlayersC *this,int param_1)

{
  AnonShape_00439100_AC816B12 *pAVar1;
  code *pcVar2;
  STAllPlayersC *this_00;
  int iVar3;
  STGameObjC *pSVar4;
  uint uVar5;
  STGameObjC *pSVar6;
  uint uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined4 uVar8;
  uint uVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
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
  STGameObjC *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  DArrayTy *local_c;
  uint local_8;

  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_8 = CONCAT31(local_8._1_3_,DAT_0080874d);
  local_c = (DArrayTy *)0x0;
  local_24 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_2c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar3 != -0x5001fff7) {
      iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x19ab,0,0,"%s",
                                  "STAllPlayersC::RestoreTmp");
      if (iVar10 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x19ac);
    }
    return;
  }
  if ((param_1 < 0) || (9 < param_1)) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x170e);
  }
  this_00 = local_2c;
  pSVar4 = (STGameObjC *)(int)(char)local_8;
  /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
  iVar3 = *(int *)(param_1 * 0x10 + 0x7f5027 + (int)pSVar4 * 0xa62);
  /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
  pAVar1 = (AnonShape_00439100_AC816B12 *)(param_1 * 0x10 + 0x7f5027 + (int)pSVar4 * 0xa62);
  local_28 = pAVar1;
  local_20 = pSVar4;
  if (iVar3 < 0x19b) {
    if (iVar3 == 0x19a) {
      if (g_playerRuntime[(int)pSVar4].field324_0x203 == 0) {
        g_playerRuntime[(int)pSVar4].field324_0x203 = 1;
        ResetActivityFromTmp(local_2c,(char)local_8,0,0,0);
        iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType;
        cVar12 = (char)local_8;
        if (iVar3 < 0x19b) {
          if (iVar3 == 0x19a) {
            iVar3 = CheckTmps(cVar12,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
            if (-1 < iVar3) {
              ActivateTV(this_00,(char)local_8,1,iVar3);
              goto cf_common_exit_0043A47C;
            }
            iVar3 = PushTV((char)local_8,1);
LAB_00439c32:
            cVar12 = pAVar1->field_0x4;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar5 = CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)pAVar1->field_000A->data);
          }
          else {
            if (iVar3 != 0) {
              if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439c87;
              goto LAB_00439c59;
            }
            iVar3 = CheckTmps(cVar12,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar11 = extraout_var_10;
            if (0 < iVar3) {
              ActivateTV(this_00,(char)local_8,1,iVar3);
              g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType = 0x19a;
              goto cf_common_exit_0043A47C;
            }
LAB_00439aaa:
            cVar12 = pAVar1->field_0x4;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar5 = CONCAT22(uVar11,*(undefined2 *)pAVar1->field_000A->data);
          }
        }
        else {
          if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00439c59:
            iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x17d3,0,0,
                                       "%s","STAllPlayersC::RestoreTmp GAMETYPE_OBJECT ACT_LEFT");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
LAB_00439c87:
          iVar3 = CheckTmps(cVar12,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,1,iVar3);
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
        g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType = 0x19a;
        goto cf_common_exit_0043A47C;
      }
      if (g_playerRuntime[(int)pSVar4].field324_0x203 != 1) {
        iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x17d7,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_OBJECT wrong panel number");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType;
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) {
          iVar3 = CheckTmps((char)local_8,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          if (iVar3 < 0) {
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
        if (iVar3 == 0) {
          iVar3 = CheckTmps((char)local_8,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,1,iVar3);
            g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType = 0x19a;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439c32;
        }
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439b10;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439b10:
        iVar3 = CheckTmps((char)local_8,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
        if (0 < iVar3) {
          ActivateTV(this_00,(char)local_8,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        PushTV((char)local_8,1);
        ResetActivityFromTmp(this_00,(char)local_8,1,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_01;
        goto LAB_00439cc7;
      }
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x17a9,0,0,"%s",
                                 "STAllPlayersC::RestoreTmp GAMETYPE_OBJECT ACT_RIGHT");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0043A47C;
    }
    uVar11 = (undefined2)((uint)((int)pSVar4 * 0x29) >> 0x10);
    if (0x5a < iVar3) {
      if (iVar3 == 0x172) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar6 = GetObjPtr(local_2c,-1,CONCAT22(uVar11,*(undefined2 *)&pAVar1->field_0x8),CASE_2);
        uVar5 = local_8;
        cVar12 = (char)local_8;
        if (g_playerRuntime[(int)pSVar4].field324_0x203 != 0) {
          if (g_playerRuntime[(int)pSVar4].field324_0x203 != 1) {
            iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x18df,0,0,
                                       "%s","STAllPlayersC::RestoreTmp GAMETYPE_ARTEFACT wrong panel number");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
          iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType;
          if (iVar3 < 0x19b) {
            if (iVar3 == 0x19a) goto LAB_004397fb;
            if (iVar3 == 0) goto LAB_0043a394;
            if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043986a;
          }
          else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_0043986a:
            iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,
                              (DArrayTy *)0x0,pSVar6->field_0032);
            if (0 < iVar3) {
              ActivateTV(this_00,cVar12,1,iVar3);
              goto cf_common_exit_0043A47C;
            }
            if (iVar3 < 0) goto LAB_00439672;
            goto cf_common_join_0043A107;
          }
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x18b4,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_ARTEFACT ACT_RIGHT");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        g_playerRuntime[(int)pSVar4].field324_0x203 = 1;
        ResetActivityFromTmp(this_00,cVar12,0,0,0);
        uVar5 = local_8;
        iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType;
        if (iVar3 < 0x19b) {
          if (iVar3 == 0x19a) goto LAB_004396d1;
          if (iVar3 == 0) goto LAB_004398e7;
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439956;
        }
        else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439956:
          cVar12 = (char)local_8;
          iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0
                            ,pSVar6->field_0032);
          if (-1 < iVar3) {
            ActivateTV(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439986;
        }
        iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x18db,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_ARTEFACT ACT_LEFT");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
LAB_00439cfb:
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1998,0,0,"%s",
                                 "STAllPlayersC::RestoreTmp invalid game type");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x1999);
      goto cf_common_exit_0043A47C;
    }
    if (iVar3 != 0x5a) {
      if (iVar3 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x1713);
      }
      else if (iVar3 != 0x3c) goto LAB_00439cfb;
      cVar12 = (char)local_8;
      if (g_playerRuntime[(int)pSVar4].field324_0x203 == 0) {
        iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[0][0].objectType;
        if (iVar3 == 0) {
LAB_00439369:
          iVar3 = CheckTmps((char)local_8,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,0,iVar3);
            g_playerRuntime[(int)pSVar4].tempSlots[0][0].objectType = 0x3c;
            goto cf_common_exit_0043A47C;
          }
LAB_0043953a:
          pSVar6 = *(STGameObjC **)&pAVar1->field_0x4;
          if (pSVar6 == local_20) {
            AddObjsToTmp(this_00,local_8,0,0,pAVar1->field_000A);
            g_playerRuntime[(int)pSVar4].tempSlots[0][0].objectType = 0x3c;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439566;
        }
        if (iVar3 == 0x3c) {
          iVar3 = CheckTmps(cVar12,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,0,iVar3);
            goto cf_common_exit_0043A47C;
          }
          if (-1 < iVar3) goto cf_common_join_0043A107;
          PushTV((char)local_8,0);
          if (((STGameObjC *)g_playerRuntime[(int)pSVar4].tempSlots[0][1].playerId == local_20) &&
             (*(STGameObjC **)&pAVar1->field_0x4 == local_20)) {
            CalibrateTmp(this_00,(char)local_8,0,1,&pAVar1->field_000A->flags,(int *)&local_c,
                         (int *)0x0,(int *)0x0);
            ResetActivityFromObjs(this_00,local_8,0x3c,local_c,0,0);
            DArrayDestroy(local_c);
          }
          else {
            ResetActivityFromTmp(this_00,(char)local_8,0,1,0);
          }
          goto LAB_0043953a;
        }
        if (iVar3 != 0x1ae) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1748,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_BOAT ACT_LEFT");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = CheckTmps(cVar12,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
        if (0 < iVar3) {
          ActivateTV(this_00,(char)local_8,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        PushTV((char)local_8,0);
        ResetActivityFromTmp(this_00,(char)local_8,0,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_07;
        if (*(STGameObjC **)&pAVar1->field_0x4 == local_20) {
          AddObjsToTmp(this_00,local_8,0,0,pAVar1->field_000A);
          g_playerRuntime[(int)pSVar4].tempSlots[0][0].objectType = 0x3c;
          goto cf_common_exit_0043A47C;
        }
LAB_00439469:
        cVar12 = pAVar1->field_0x4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar5 = CONCAT22(uVar11,*(undefined2 *)pAVar1->field_000A->data);
      }
      else {
        if (g_playerRuntime[(int)pSVar4].field324_0x203 != 1) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1778,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_BOAT wrong panel number");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        g_playerRuntime[(int)pSVar4].field324_0x203 = 0;
        ResetActivityFromTmp(this_00,cVar12,1,0,0);
        iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[0][0].objectType;
        if (iVar3 == 0) goto LAB_00439369;
        if (iVar3 != 0x3c) {
          if (iVar3 != 0x1ae) {
            iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1774,0,0,
                                       "%s","STAllPlayersC::RestoreTmp GAMETYPE_BOAT ACT_RIGHT");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
          iVar3 = CheckTmps((char)local_8,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,0,iVar3);
            goto cf_common_exit_0043A47C;
          }
          PushTV((char)local_8,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_06;
          if (*(STGameObjC **)&pAVar1->field_0x4 == local_20) {
            AddObjsToTmp(this_00,local_8,0,0,pAVar1->field_000A);
            g_playerRuntime[(int)pSVar4].tempSlots[0][0].objectType = 0x3c;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439469;
        }
        iVar3 = CheckTmps((char)local_8,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
        if (-1 < iVar3) {
          ActivateTV(this_00,(char)local_8,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        PushTV((char)local_8,0);
        pSVar6 = *(STGameObjC **)&pAVar1->field_0x4;
        if (pSVar6 == local_20) {
          AddObjsToTmp(this_00,local_8,0,0,pAVar1->field_000A);
          g_playerRuntime[(int)pSVar4].tempSlots[0][0].objectType = 0x3c;
          goto cf_common_exit_0043A47C;
        }
LAB_00439566:
        cVar12 = pAVar1->field_0x4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar5 = CONCAT22((short)((uint)pSVar6 >> 0x10),*(undefined2 *)pAVar1->field_000A->data);
      }
      AddObjToTmp(this_00,(char)local_8,0,0,cVar12,uVar5);
      g_playerRuntime[(int)pSVar4].tempSlots[0][0].objectType = 0x3c;
      goto cf_common_exit_0043A47C;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    pSVar6 = GetObjPtr(local_2c,-1,CONCAT22(uVar11,*(undefined2 *)&pAVar1->field_0x8),CASE_4);
    uVar5 = local_8;
    cVar12 = (char)local_8;
    if (g_playerRuntime[(int)pSVar4].field324_0x203 != 0) {
      if (g_playerRuntime[(int)pSVar4].field324_0x203 != 1) {
        iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1885,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_RESOURCE wrong panel number");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType;
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) {
LAB_004397fb:
          uVar5 = local_8;
          cVar12 = (char)local_8;
          iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0
                            ,pSVar6->field_0032);
          if (0 < iVar3) {
            ActivateTV(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
LAB_00439672:
          PushTV((char)uVar5,1);
          iVar3 = ResetActivityFromTmp(this_00,(char)uVar5,1,1,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_08;
          goto LAB_0043a463;
        }
        if (iVar3 == 0) goto LAB_0043a394;
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043963c;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_0043963c:
        iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0,
                          pSVar6->field_0032);
        if (0 < iVar3) {
          ActivateTV(this_00,cVar12,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        if (-1 < iVar3) goto cf_common_join_0043A107;
        goto LAB_00439672;
      }
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x185a,0,0,"%s",
                                 "STAllPlayersC::RestoreTmp GAMETYPE_RESOURCE ACT_RIGHT");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0043A47C;
    }
    g_playerRuntime[(int)pSVar4].field324_0x203 = 1;
    ResetActivityFromTmp(this_00,cVar12,0,0,0);
    uVar5 = local_8;
    iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType;
    if (iVar3 < 0x19b) {
      if (iVar3 == 0x19a) {
LAB_004396d1:
        uVar5 = local_8;
        cVar12 = (char)local_8;
        iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0,
                          pSVar6->field_0032);
        if (0 < iVar3) {
          ActivateTV(this_00,cVar12,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        goto LAB_00439986;
      }
      if (iVar3 != 0) {
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439740;
        goto LAB_00439712;
      }
LAB_004398e7:
      uVar5 = local_8;
      cVar12 = (char)local_8;
      iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0,
                        pSVar6->field_0032);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar8 = extraout_ECX;
      if (0 < iVar3) {
        ActivateTV(this_00,cVar12,1,iVar3);
        goto cf_common_exit_0043A47C;
      }
    }
    else {
      if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00439712:
        iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1881,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_RESOURCE ACT_LEFT");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
LAB_00439740:
      cVar12 = (char)local_8;
      iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0,
                        pSVar6->field_0032);
      if (-1 < iVar3) {
        ActivateTV(this_00,cVar12,1,iVar3);
        goto cf_common_exit_0043A47C;
      }
LAB_00439986:
      iVar3 = PushTV((char)uVar5,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar8 = extraout_ECX_00;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar7 = CONCAT22((short)((uint)iVar3 >> 0x10),pSVar6->field_0032);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar9 = CONCAT31((int3)((uint)uVar8 >> 8),*(undefined1 *)&pSVar6->field_0024);
    uVar13 = pSVar6->field_0020;
LAB_0043a470:
    iVar3 = 1;
  }
  else {
    if (iVar3 == 0x1a4) {
      pSVar6 = GetObjPtr(local_2c,-1,(uint)*(ushort *)&pAVar1->field_0x8,CASE_5);
      uVar5 = local_8;
      cVar12 = (char)local_8;
      if (g_playerRuntime[(int)pSVar4].field324_0x203 != 0) {
        if (g_playerRuntime[(int)pSVar4].field324_0x203 != 1) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1939,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER wrong panel number");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType;
        if (iVar3 < 0x19b) {
          if (iVar3 == 0x19a) {
LAB_0043a27b:
            uVar5 = local_8;
            cVar12 = (char)local_8;
            iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,
                              (DArrayTy *)0x0,pSVar6->field_0032);
            if (0 < iVar3) {
              ActivateTV(this_00,cVar12,1,iVar3);
              goto cf_common_exit_0043A47C;
            }
            goto LAB_0043a320;
          }
          if (iVar3 != 0) {
            if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043a2ea;
            goto LAB_0043a2bc;
          }
LAB_0043a247:
          uVar5 = local_8;
          cVar12 = (char)local_8;
          iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0
                            ,pSVar6->field_0032);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar8 = extraout_EDX_00;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_04;
          if (0 < iVar3) {
            ActivateTV(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
        }
        else {
          if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_0043a2bc:
            iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x190e,0,0,
                                       "%s","STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_RIGHT");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
LAB_0043a2ea:
          iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0
                            ,pSVar6->field_0032);
          if (0 < iVar3) {
            ActivateTV(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
joined_r0x0043a31a:
          if (-1 < iVar3) goto cf_common_join_0043A107;
LAB_0043a320:
          PushTV((char)uVar5,1);
          ResetActivityFromTmp(this_00,(char)uVar5,1,1,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar8 = extraout_EDX_01;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_05;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar7 = CONCAT22(uVar11,pSVar6->field_0032);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar9 = CONCAT31((int3)((uint)uVar8 >> 8),*(undefined1 *)&pSVar6->field_0024);
        uVar13 = pSVar6->field_0020;
        goto LAB_0043a470;
      }
      g_playerRuntime[(int)pSVar4].field324_0x203 = 1;
      ResetActivityFromTmp(this_00,cVar12,0,0,0);
      uVar5 = local_8;
      iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType;
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) {
LAB_0043a3c8:
          uVar5 = local_8;
          cVar12 = (char)local_8;
          iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0
                            ,pSVar6->field_0032);
          if (0 < iVar3) {
            ActivateTV(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_0043a459;
        }
        if (iVar3 != 0) {
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043a42c;
          goto LAB_0043a405;
        }
LAB_0043a394:
        uVar5 = local_8;
        cVar12 = (char)local_8;
        iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0,
                          pSVar6->field_0032);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_13;
        if (0 < iVar3) {
          ActivateTV(this_00,cVar12,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
      }
      else {
        if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_0043a405:
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1935,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_LEFT");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
LAB_0043a42c:
        cVar12 = (char)local_8;
        iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0,
                          pSVar6->field_0032);
        if (-1 < iVar3) {
          ActivateTV(this_00,cVar12,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
LAB_0043a459:
        iVar3 = PushTV((char)uVar5,1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_14;
      }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_0043a463:
      uVar7 = CONCAT22(uVar11,pSVar6->field_0032);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar9 = CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)&pSVar6->field_0024);
      uVar13 = pSVar6->field_0020;
      goto LAB_0043a470;
    }
    if (iVar3 != 0x1ae) {
      if (iVar3 != 0x1b8) goto LAB_00439cfb;
      pSVar6 = GetObjPtr(local_2c,-1,(uint)*(ushort *)&pAVar1->field_0x8,CASE_6);
      uVar5 = local_8;
      cVar12 = (char)local_8;
      if (g_playerRuntime[(int)pSVar4].field324_0x203 == 0) {
        g_playerRuntime[(int)pSVar4].field324_0x203 = 1;
        ResetActivityFromTmp(this_00,cVar12,0,0,0);
        uVar5 = local_8;
        iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType;
        if (iVar3 < 0x19b) {
          if (iVar3 == 0x19a) goto LAB_0043a3c8;
          if (iVar3 == 0) goto LAB_0043a394;
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439eb7;
        }
        else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439eb7:
          cVar12 = (char)local_8;
          iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0
                            ,pSVar6->field_0032);
          if (-1 < iVar3) {
            ActivateTV(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_0043a459;
        }
        iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x198f,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_LEFT");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      if (g_playerRuntime[(int)pSVar4].field324_0x203 != 1) {
        iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1993,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER wrong panel number");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[1][0].objectType;
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) goto LAB_0043a27b;
        if (iVar3 == 0) goto LAB_0043a247;
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439dfb;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439dfb:
        iVar3 = CheckTmps(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,(DArrayTy *)0x0,
                          pSVar6->field_0032);
        if (0 < iVar3) {
          ActivateTV(this_00,cVar12,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        goto joined_r0x0043a31a;
      }
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1968,0,0,"%s",
                                 "STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_RIGHT");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0043A47C;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_20 = GetObjPtr(local_2c,pAVar1->field_0x4,
                         CONCAT22((short)((uint)((int)pSVar4 * 5) >> 0x10),
                                  *(undefined2 *)&pAVar1->field_0x8),CASE_3);
    uVar5 = local_8;
    cVar12 = (char)local_8;
    if (g_playerRuntime[(int)pSVar4].field324_0x203 == 0) {
      iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[0][0].objectType;
      if (iVar3 == 0) {
LAB_0043a177:
        uVar5 = local_8;
        cVar12 = (char)local_8;
        iVar3 = CheckTmps(cVar12,0,local_20->field_0020,pAVar1->field_0x4,(DArrayTy *)0x0,
                          *(short *)&pAVar1->field_0x8);
        if (0 < iVar3) {
          ActivateTV(this_00,cVar12,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = CONCAT22(extraout_var_03,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar9 = CONCAT31((int3)((uint)extraout_EDX >> 8),pAVar1->field_0x4);
        uVar13 = local_20->field_0020;
        iVar3 = 0;
      }
      else if (iVar3 == 0x3c) {
        iVar3 = CheckTmps(cVar12,0,local_20->field_0020,pAVar1->field_0x4,(DArrayTy *)0x0,
                          *(short *)&pAVar1->field_0x8);
        if (0 < iVar3) {
          ActivateTV(this_00,cVar12,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        PushTV(cVar12,0);
        uVar8 = ResetActivityFromTmp(this_00,cVar12,0,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = CONCAT22(extraout_var_12,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar9 = CONCAT31((int3)((uint)uVar8 >> 8),pAVar1->field_0x4);
        uVar13 = local_20->field_0020;
        iVar3 = 0;
      }
      else {
        if (iVar3 != 0x1ae) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1803,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_MINESET ACT_LEFT");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = CheckTmps(cVar12,0,local_20->field_0020,pAVar1->field_0x4,(DArrayTy *)0x0,
                          *(short *)&pAVar1->field_0x8);
        if (0 < iVar3) {
          ActivateTV(this_00,cVar12,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        if (-1 < iVar3) goto cf_common_join_0043A107;
        PushTV(cVar12,0);
        ResetActivityFromTmp(this_00,cVar12,0,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = CONCAT22(extraout_var_00,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar9 = CONCAT31((int3)((uint)extraout_ECX_02 >> 8),pAVar1->field_0x4);
        uVar13 = local_20->field_0020;
        iVar3 = 0;
      }
    }
    else {
      if (g_playerRuntime[(int)pSVar4].field324_0x203 != 1) {
        iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x182b,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_MINESET wrong panel number");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      g_playerRuntime[(int)pSVar4].field324_0x203 = 0;
      ResetActivityFromTmp(this_00,cVar12,1,0,0);
      uVar5 = local_8;
      iVar3 = g_playerRuntime[(int)pSVar4].tempSlots[0][0].objectType;
      if (iVar3 == 0) goto LAB_0043a177;
      cVar12 = (char)local_8;
      if (iVar3 == 0x3c) {
        iVar3 = CheckTmps(cVar12,0,local_20->field_0020,pAVar1->field_0x4,(DArrayTy *)0x0,
                          *(short *)&pAVar1->field_0x8);
        if (0 < iVar3) {
          ActivateTV(this_00,cVar12,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        uVar8 = PushTV(cVar12,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = CONCAT22(extraout_var_11,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar9 = CONCAT31((int3)((uint)uVar8 >> 8),pAVar1->field_0x4);
        uVar13 = local_20->field_0020;
        iVar3 = 0;
      }
      else {
        if (iVar3 != 0x1ae) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1827,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_MINESET ACT_RIGHT");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = CheckTmps(cVar12,0,local_20->field_0020,pAVar1->field_0x4,(DArrayTy *)0x0,
                          *(short *)&pAVar1->field_0x8);
        if (-1 < iVar3) {
          ActivateTV(this_00,cVar12,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        PushTV(cVar12,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = CONCAT22(extraout_var,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar9 = CONCAT31((int3)((uint)extraout_ECX_01 >> 8),pAVar1->field_0x4);
        uVar13 = local_20->field_0020;
        iVar3 = 0;
      }
    }
  }
  AddObjToTmp2(this_00,(char)uVar5,iVar3,0,uVar13,uVar9,uVar7);
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
cf_common_exit_0043A47C:
  if (((local_24 == 1) &&
      (uVar5 = CONCAT22((short)((uint)&local_14 >> 0x10),*(undefined2 *)&local_28->field_0x8),
      iVar3 = GetCamPoint((short)*(undefined4 *)local_28,
                          CONCAT31((int3)(uVar5 >> 8),local_28->field_0x4),local_28->field_000A,
                          uVar5,&local_18,&local_14,&local_10,&local_1c), iVar3 == 0)) &&
     (iVar3 = FUN_006eb230(PTR_00807598,local_1c,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c
                          ), iVar3 != 1)) {
    thunk_FUN_004a8e00(local_18,local_14,local_10);
    thunk_FUN_004a8f20(1);
    thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
    thunk_FUN_0054b540(PTR_00802a30);
    DAT_0080674c = 2;
    DAT_0080745d = 0;
  }
  SelfCheckObjControl(this_00);
  g_currentExceptionFrame = local_70.previous;
  return;
}

