#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SetActivePanel

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0043AE40 -> 0043AAF0 @ 0043AFDF | 0043AE40 -> 0043AAF0 @ 0043B3A5 | 0043AE40 ->
   0043AAF0 @ 0043B82D | 0043AE40 -> 0043AAF0 @ 0043BAA0 */

void __thiscall
STAllPlayersC::SetActivePanel(STAllPlayersC *this,uint *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  STGameObjC *pSVar7;
  uint uVar8;
  STAllPlayersC_GetObjPtr_param_3Enum SVar9;
  int local_10;
  int local_c;
  int local_8;

  iVar5 = param_2;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (param_1 == (uint *)0x0) {
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    iVar6 = (uint)DAT_0080874d * 0xa62;
    if (g_playerRuntime[DAT_0080874d].field324_0x203 == 0) {
      if (param_2 == 0) {
        return;
      }
      piVar1 = (int *)(param_2 * 0x10 + 0x7f4f83 + iVar6);
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        return;
      }
      if (iVar6 != 0x3c) {
        if (iVar6 == 0x1ae) {
          if (param_3 == 1) {
            pSVar7 = GetObjPtr(this,(char)piVar1[1],(uint)*(ushort *)(piVar1 + 2),CASE_3);
            STFishC::sub_004162B0
                      ((STFishC *)pSVar7,(undefined2 *)&local_10,(undefined2 *)&local_c,
                       (undefined2 *)&local_8);
            iVar5 = FUN_006eb230(PTR_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                                 DAT_00807418,DAT_0080741c);
            if (iVar5 != 1) {
              thunk_FUN_004a8e00(local_10,local_c,local_8);
              thunk_FUN_004a8f20(1);
              thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff
                                );
              thunk_FUN_0054b540(g_cursorClass_00802A30);
              DAT_0080674c = 2;
              DAT_0080745d = 0;
            }
          }
          ActivateTV(this,DAT_0080874d,0,param_2);
          return;
        }
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1a3b,0,0,"%s"
                                   ,"STAllPlayersC::SetActivePanel ACT_LEFT ACT_LEFT invalid game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (((param_3 == 1) &&
          (iVar6 = GetCamPoint(0x3c,CONCAT31((int3)((uint)piVar1 >> 8),(char)piVar1[1]),
                               *(DArrayTy **)((int)piVar1 + 10),
                               CONCAT22((short)((uint)&local_c >> 0x10),(short)piVar1[2]),&local_10,
                               &local_c,&local_8,(uint *)&param_1), iVar6 == 0)) &&
         (iVar6 = FUN_006eb230(PTR_00807598,(uint)param_1,DAT_00807410,DAT_00807414,DAT_00807418,
                               DAT_0080741c), iVar6 != 1)) {
        thunk_FUN_004a8e00(local_10,local_c,local_8);
        thunk_FUN_004a8f20(1);
        thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
        thunk_FUN_0054b540(g_cursorClass_00802A30);
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
    }
    else {
      if (g_playerRuntime[DAT_0080874d].field324_0x203 != 1) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1a6b,0,0,"%s"
                                   ,"STAllPlayersC::SetActivePanel");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto LAB_0043aee4;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(param_2 * 0x10 + 0x7f4f83 + iVar6);
      iVar6 = param_2 * 0x10 + 0x7f4f83 + iVar6;
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 == 0x3c) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (((param_3 == 1) &&
            (uVar8 = CONCAT22((short)((uint)&local_c >> 0x10),*(undefined2 *)(iVar6 + 8)),
            iVar6 = GetCamPoint(0x3c,CONCAT31((int3)(uVar8 >> 8),*(undefined1 *)(iVar6 + 4)),
                                *(DArrayTy **)(iVar6 + 10),uVar8,&local_10,&local_c,&local_8,
                                (uint *)&param_1), iVar6 == 0)) &&
           (iVar6 = FUN_006eb230(PTR_00807598,(uint)param_1,DAT_00807410,DAT_00807414,DAT_00807418,
                                 DAT_0080741c), iVar6 != 1)) {
          thunk_FUN_004a8e00(local_10,local_c,local_8);
          thunk_FUN_004a8f20(1);
          thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
          thunk_FUN_0054b540(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
        bVar4 = DAT_0080874d;
        g_playerRuntime[DAT_0080874d].field324_0x203 = 0;
        ResetActivityFromTmp(this,bVar4,1,0,0);
        ActivateTV(this,DAT_0080874d,0,iVar5);
        return;
      }
      if (iVar2 != 0x1ae) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1a67,0,0,"%s"
                                   ,"STAllPlayersC::SetActivePanel ACT_LEFT ACT_RIGHT invalid game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (param_3 == 1) {
        pSVar7 = GetObjPtr(this,*(char *)(iVar6 + 4),(uint)*(ushort *)(iVar6 + 8),CASE_3);
        STFishC::sub_004162B0
                  ((STFishC *)pSVar7,(undefined2 *)&local_10,(undefined2 *)&local_c,
                   (undefined2 *)&local_8);
        iVar5 = FUN_006eb230(PTR_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,DAT_00807418,
                             DAT_0080741c);
        if (iVar5 != 1) {
          thunk_FUN_004a8e00(local_10,local_c,local_8);
          thunk_FUN_004a8f20(1);
          thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
          thunk_FUN_0054b540(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
      }
      bVar4 = DAT_0080874d;
      g_playerRuntime[DAT_0080874d].field324_0x203 = 0;
      ResetActivityFromTmp(this,bVar4,1,0,0);
      iVar5 = param_2;
    }
    iVar6 = 0;
    goto cf_common_exit_0043BB49;
  }
  if (param_1 != (uint *)0x1) {
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1b2b,0,0,"%s",
                               "STAllPlayersC::SetActivePanel invalid panel number");
    if (iVar5 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
LAB_0043aee4:
  iVar5 = param_2;
  /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
  iVar6 = (uint)DAT_0080874d * 0xa62;
  if (g_playerRuntime[DAT_0080874d].field324_0x203 != 0) {
    if (g_playerRuntime[DAT_0080874d].field324_0x203 != 1) {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1b27,0,0,"%s",
                                 "STAllPlayersC::SetActivePanel");
      if (iVar5 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (param_2 == 0) {
      return;
    }
    piVar1 = (int *)(param_2 * 0x10 + 0x7f4fd3 + iVar6);
    iVar6 = *piVar1;
    if (iVar6 < 0x19b) {
      if (iVar6 == 0x19a) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (((param_3 == 1) &&
            (uVar8 = CONCAT22((short)((uint)&local_c >> 0x10),(short)piVar1[2]),
            iVar6 = GetCamPoint(0x19a,CONCAT31((int3)(uVar8 >> 8),(char)piVar1[1]),
                                *(DArrayTy **)((int)piVar1 + 10),uVar8,&local_10,&local_c,&local_8,
                                (uint *)&param_1), iVar6 == 0)) &&
           (iVar6 = FUN_006eb230(PTR_00807598,(uint)param_1,DAT_00807410,DAT_00807414,DAT_00807418,
                                 DAT_0080741c), iVar6 != 1)) {
          thunk_FUN_004a8e00(local_10,local_c,local_8);
          thunk_FUN_004a8f20(1);
          thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
          thunk_FUN_0054b540(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
        ActivateTV(this,DAT_0080874d,1,iVar5);
        return;
      }
      if (iVar6 == 0) {
        return;
      }
      if (iVar6 == 0x5a) {
        if (param_3 == 1) {
          SVar9 = CASE_4;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_0043b0f1:
          pSVar7 = GetObjPtr(this,(char)piVar1[1],
                             CONCAT22((short)((uint)param_3 >> 0x10),(short)piVar1[2]),SVar9);
          STFishC::sub_004162B0
                    ((STFishC *)pSVar7,(undefined2 *)&local_10,(undefined2 *)&local_c,
                     (undefined2 *)&local_8);
          iVar5 = FUN_006eb230(PTR_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                               DAT_00807418,DAT_0080741c);
          if (iVar5 != 1) {
            thunk_FUN_004a8e00(local_10,local_c,local_8);
            thunk_FUN_004a8f20(1);
            thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
            thunk_FUN_0054b540(g_cursorClass_00802A30);
            DAT_0080674c = 2;
            DAT_0080745d = 0;
            iVar6 = 1;
            iVar5 = param_2;
            goto cf_common_exit_0043BB49;
          }
        }
        goto cf_common_exit_0043B686;
      }
      if (iVar6 != 0x172) {
LAB_0043b0af:
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1ac4,0,0,"%s"
                                   ,"STAllPlayersC::SetActivePanel ACT_RIGHT ACT_RIGHT invalid game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (param_3 != 1) goto cf_common_exit_0043B294;
      SVar9 = CASE_2;
    }
    else {
      if (iVar6 != 0x1a4) {
        if (iVar6 != 0x1b8) goto LAB_0043b0af;
        if (param_3 == 1) {
          SVar9 = CASE_6;
          goto LAB_0043b0f1;
        }
        goto cf_common_exit_0043B686;
      }
      if (param_3 != 1) goto cf_common_exit_0043B294;
      SVar9 = CASE_5;
    }
    pSVar7 = GetObjPtr(this,(char)piVar1[1],(uint)*(ushort *)(piVar1 + 2),SVar9);
    STFishC::sub_004162B0
              ((STFishC *)pSVar7,(undefined2 *)&local_10,(undefined2 *)&local_c,
               (undefined2 *)&local_8);
    iVar5 = FUN_006eb230(PTR_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,DAT_00807418,
                         DAT_0080741c);
    if (iVar5 != 1) {
      thunk_FUN_004a8e00(local_10,local_c,local_8);
      thunk_FUN_004a8f20(1);
      thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
      thunk_FUN_0054b540(g_cursorClass_00802A30);
      DAT_0080674c = 2;
      DAT_0080745d = 0;
    }
cf_common_exit_0043B294:
    ActivateTV(this,DAT_0080874d,1,param_2);
    return;
  }
  piVar1 = (int *)(param_2 * 0x10 + 0x7f4fd3 + iVar6);
  iVar6 = *piVar1;
  if (iVar6 < 0x19b) {
    if (iVar6 == 0x19a) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (((param_3 == 1) &&
          (uVar8 = CONCAT22((short)((uint)&local_c >> 0x10),(short)piVar1[2]),
          iVar6 = GetCamPoint(0x19a,CONCAT31((int3)(uVar8 >> 8),(char)piVar1[1]),
                              *(DArrayTy **)((int)piVar1 + 10),uVar8,&local_10,&local_c,&local_8,
                              (uint *)&param_1), iVar6 == 0)) &&
         (iVar6 = FUN_006eb230(PTR_00807598,(uint)param_1,DAT_00807410,DAT_00807414,DAT_00807418,
                               DAT_0080741c), iVar6 != 1)) {
        thunk_FUN_004a8e00(local_10,local_c,local_8);
        thunk_FUN_004a8f20(1);
        thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
        thunk_FUN_0054b540(g_cursorClass_00802A30);
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
      bVar4 = DAT_0080874d;
      g_playerRuntime[DAT_0080874d].field324_0x203 = 1;
      ResetActivityFromTmp(this,bVar4,0,0,0);
      ActivateTV(this,DAT_0080874d,1,iVar5);
      return;
    }
    if (iVar6 == 0) {
      return;
    }
    if (iVar6 == 0x5a) {
      if (param_3 == 1) {
        SVar9 = CASE_4;
LAB_0043b2fe:
        pSVar7 = GetObjPtr(this,(char)piVar1[1],(uint)*(ushort *)(piVar1 + 2),SVar9);
        STFishC::sub_004162B0
                  ((STFishC *)pSVar7,(undefined2 *)&local_10,(undefined2 *)&local_c,
                   (undefined2 *)&local_8);
        iVar5 = FUN_006eb230(PTR_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,DAT_00807418,
                             DAT_0080741c);
joined_r0x0043b5ec:
        if (iVar5 != 1) {
          thunk_FUN_004a8e00(local_10,local_c,local_8);
          thunk_FUN_004a8f20(1);
LAB_0043b630:
          thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
          thunk_FUN_0054b540(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
      }
    }
    else {
      if (iVar6 != 0x172) {
LAB_0043b4a2:
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1b23,0,0,"%s"
                                   ,"STAllPlayersC::SetActivePanel ACT_RIGHT ACT_LEFT invalid game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (param_3 == 1) {
        SVar9 = CASE_2;
        goto LAB_0043b2fe;
      }
    }
  }
  else if (iVar6 == 0x1a4) {
    if (param_3 == 1) {
      pSVar7 = GetObjPtr(this,(char)piVar1[1],(uint)*(ushort *)(piVar1 + 2),CASE_5);
      STFishC::sub_004162B0
                ((STFishC *)pSVar7,(undefined2 *)&local_10,(undefined2 *)&local_c,
                 (undefined2 *)&local_8);
      iVar5 = FUN_006eb230(PTR_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,DAT_00807418,
                           DAT_0080741c);
      goto joined_r0x0043b5ec;
    }
  }
  else {
    if (iVar6 != 0x1b8) goto LAB_0043b4a2;
    if (param_3 == 1) {
      pSVar7 = GetObjPtr(this,(char)piVar1[1],(uint)*(ushort *)(piVar1 + 2),CASE_6);
      STFishC::sub_004162B0
                ((STFishC *)pSVar7,(undefined2 *)&local_10,(undefined2 *)&local_c,
                 (undefined2 *)&local_8);
      iVar5 = FUN_006eb230(PTR_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,DAT_00807418,
                           DAT_0080741c);
      if (iVar5 != 1) {
        thunk_FUN_004a8e00(local_10,local_c,local_8);
        thunk_FUN_004a8f20(1);
        goto LAB_0043b630;
      }
    }
  }
  bVar4 = DAT_0080874d;
  g_playerRuntime[DAT_0080874d].field324_0x203 = 1;
  ResetActivityFromTmp(this,bVar4,0,0,0);
cf_common_exit_0043B686:
  iVar6 = 1;
  iVar5 = param_2;
cf_common_exit_0043BB49:
  ActivateTV(this,DAT_0080874d,iVar6,iVar5);
  return;
}

