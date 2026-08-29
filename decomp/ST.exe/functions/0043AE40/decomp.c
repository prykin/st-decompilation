#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SetActivePanel

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0043AE40 -> 006EB230 @ 0043B010 | 0043AE40 -> 006EB230 @ 0043B3D6 | 0043AE40 ->
   006EB230 @ 0043B85E | 0043AE40 -> 006EB230 @ 0043BAD2 */

void __thiscall
STAllPlayersC::SetActivePanel(STAllPlayersC *this,uint param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar4;
  int local_EAX_58;
  int local_EAX_151;
  int iVar6;
  int local_EAX_227;
  int local_EAX_645;
  STGameObjC *pSVar7;
  int iVar8;
  int local_EAX_1656;
  int local_EAX_2197;
  int iVar5;
  uint uVar9;
  STAllPlayersC_GetObjPtr_param_3Enum SVar10;
  int local_10;
  int local_c;
  int local_8;

  iVar8 = param_2;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (param_1 == 0) {
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar6 = (uint)DAT_0080874d * 0xa62;
    if (g_packedRecords_A62x8[DAT_0080874d].field200_0x203 == 0) {
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
            /* ST_CALLSITE[0043B99C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
            pSVar7 = GetObjPtr(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),CASE_3);
            /* ST_CALLSITE[0043B9B1]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            STFishC::sub_004162B0
                      ((STFishC *)pSVar7,(short *)&local_10,(short *)&local_c,(short *)&local_8);

            iVar8 = Library::Ourlib::ST3DSPR::SprInRect
                              (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,
                               DAT_00807414,DAT_00807418,DAT_0080741c);
            if (iVar8 != 1) {
              thunk_FUN_004a8e00(local_10,local_c,local_8);
              thunk_FUN_004a8f20(1);
              SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::thunk_FUN_00567510
                        ((RecoveredReceiver_00567510 *)&g_sound,DAT_008073d8,DAT_008073dc,
                         DAT_008073fc,DAT_0080743c & 0xff);
              /* ST_CALLSITE[0043BA39]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
              CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
              DAT_0080674c = 2;
              DAT_0080745d = 0;
            }
          }
          /* ST_CALLSITE[0043BA61]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
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
      if (((param_3 == 1) &&
          /* ST_CALLSITE[0043BAA0]: CALL 0x004024f0; direct=004024F0 STAllPlayersC::GetCamPoint */
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          (iVar6 = GetCamPoint(0x3c,STReplaceLowByte((uint32_t)(piVar1), (uint8_t)((char)piVar1[1])),
                               STField<DArrayTy *>(piVar1,10),
                               CONCAT22((short)((uint)&local_c >> 0x10),(short)piVar1[2]),&local_10,
                               &local_c,&local_8,&param_1), iVar6 == 0)) &&

         (iVar6 = Library::Ourlib::ST3DSPR::SprInRect
                            (g_sT3DSMAPContext_00807598,param_1,DAT_00807410,DAT_00807414,
                             DAT_00807418,DAT_0080741c), iVar6 != 1)) {
        thunk_FUN_004a8e00(local_10,local_c,local_8);
        thunk_FUN_004a8f20(1);
        SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::thunk_FUN_00567510
                  ((RecoveredReceiver_00567510 *)&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                   DAT_0080743c & 0xff);
        /* ST_CALLSITE[0043BB2D]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
        CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
    }
    else {
      if (g_packedRecords_A62x8[DAT_0080874d].field200_0x203 != 1) {

        local_EAX_151 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1a6b,0,0,"%s",
                                "STAllPlayersC::SetActivePanel");
        if (local_EAX_151 != 0) {
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
            (uVar9 = CONCAT22((short)((uint)&local_c >> 0x10),STField<undefined2>(iVar6,0x8)),
            /* ST_CALLSITE[0043B82D]: CALL 0x004024f0; direct=004024F0 STAllPlayersC::GetCamPoint */
            iVar6 = GetCamPoint(0x3c,STReplaceLowByte((uint32_t)(uVar9), (uint8_t)(STField<undefined1>(iVar6,0x4))),
                                *(DArrayTy **)(iVar6 + 10),uVar9,&local_10,&local_c,&local_8,
                                &param_1), iVar6 == 0)) &&

           (iVar6 = Library::Ourlib::ST3DSPR::SprInRect
                              (g_sT3DSMAPContext_00807598,param_1,DAT_00807410,DAT_00807414,
                               DAT_00807418,DAT_0080741c), iVar6 != 1)) {
          thunk_FUN_004a8e00(local_10,local_c,local_8);
          thunk_FUN_004a8f20(1);
          SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::thunk_FUN_00567510
                    ((RecoveredReceiver_00567510 *)&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                     DAT_0080743c & 0xff);
          /* ST_CALLSITE[0043B8BB]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
          CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
        bVar4 = DAT_0080874d;
        g_packedRecords_A62x8[DAT_0080874d].field200_0x203 = 0;
        /* ST_CALLSITE[0043B8FF]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
        ResetActivityFromTmp(this,bVar4,1,0,0);
        /* ST_CALLSITE[0043B90F]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,DAT_0080874d,0,iVar8);
        return;
      }
      if (iVar2 != 0x1ae) {

        local_EAX_2197 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1a67,0,0,"%s",
                                "STAllPlayersC::SetActivePanel ACT_LEFT ACT_RIGHT invalid game type");
        if (local_EAX_2197 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (param_3 == 1) {
        /* ST_CALLSITE[0043B70C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
        pSVar7 = GetObjPtr(this,STField<char>(iVar6,0x4),STField<ushort>(iVar6,0x8),CASE_3);
        /* ST_CALLSITE[0043B721]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0
                  ((STFishC *)pSVar7,(short *)&local_10,(short *)&local_c,(short *)&local_8);

        iVar8 = Library::Ourlib::ST3DSPR::SprInRect
                          (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                           DAT_00807418,DAT_0080741c);
        if (iVar8 != 1) {
          thunk_FUN_004a8e00(local_10,local_c,local_8);
          thunk_FUN_004a8f20(1);
          SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::thunk_FUN_00567510
                    ((RecoveredReceiver_00567510 *)&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                     DAT_0080743c & 0xff);
          /* ST_CALLSITE[0043B7AA]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
          CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
      }
      bVar4 = DAT_0080874d;
      g_packedRecords_A62x8[DAT_0080874d].field200_0x203 = 0;
      /* ST_CALLSITE[0043B7EE]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
      ResetActivityFromTmp(this,bVar4,1,0,0);
      iVar8 = param_2;
    }
    iVar6 = 0;
    goto cf_common_exit_0043BB49;
  }
  if (param_1 != 1) {

    local_EAX_58 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1b2b,0,0,
                                      "%s","STAllPlayersC::SetActivePanel invalid panel number");
    if (local_EAX_58 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
LAB_0043aee4:
  iVar8 = param_2;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  iVar6 = (uint)DAT_0080874d * 0xa62;
  if (g_packedRecords_A62x8[DAT_0080874d].field200_0x203 != 0) {
    if (g_packedRecords_A62x8[DAT_0080874d].field200_0x203 != 1) {

      local_EAX_227 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1b27,0,0,"%s",
                              "STAllPlayersC::SetActivePanel");
      if (local_EAX_227 == 0) {
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
            (uVar9 = CONCAT22((short)((uint)&local_c >> 0x10),(short)piVar1[2]),
            /* ST_CALLSITE[0043AFDF]: CALL 0x004024f0; direct=004024F0 STAllPlayersC::GetCamPoint */
            iVar6 = GetCamPoint(0x19a,STReplaceLowByte((uint32_t)(uVar9), (uint8_t)((char)piVar1[1])),
                                STField<DArrayTy *>(piVar1,10),uVar9,&local_10,&local_c,&local_8,
                                &param_1), iVar6 == 0)) &&

           (iVar6 = Library::Ourlib::ST3DSPR::SprInRect
                              (g_sT3DSMAPContext_00807598,param_1,DAT_00807410,DAT_00807414,
                               DAT_00807418,DAT_0080741c), iVar6 != 1)) {
          thunk_FUN_004a8e00(local_10,local_c,local_8);
          thunk_FUN_004a8f20(1);
          SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::thunk_FUN_00567510
                    ((RecoveredReceiver_00567510 *)&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                     DAT_0080743c & 0xff);
          /* ST_CALLSITE[0043B06D]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
          CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
        /* ST_CALLSITE[0043B090]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,DAT_0080874d,1,iVar8);
        return;
      }
      if (iVar6 == 0) {
        return;
      }
      if (iVar6 == 0x5a) {
        if (param_3 == 1) {
          SVar10 = CASE_4;
LAB_0043b0f1:
          /* ST_CALLSITE[0043B0FC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
          pSVar7 = GetObjPtr(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),SVar10);
          /* ST_CALLSITE[0043B111]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0
                    ((STFishC *)pSVar7,(short *)&local_10,(short *)&local_c,(short *)&local_8);

          iVar8 = Library::Ourlib::ST3DSPR::SprInRect
                            (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414
                             ,DAT_00807418,DAT_0080741c);
          if (iVar8 != 1) {
            thunk_FUN_004a8e00(local_10,local_c,local_8);
            thunk_FUN_004a8f20(1);
            SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::thunk_FUN_00567510
                      ((RecoveredReceiver_00567510 *)&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc
                       ,DAT_0080743c & 0xff);
            /* ST_CALLSITE[0043B19E]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
            CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
            DAT_0080674c = 2;
            DAT_0080745d = 0;
            iVar6 = 1;
            iVar8 = param_2;
            goto cf_common_exit_0043BB49;
          }
        }
        goto cf_common_exit_0043B686;
      }
      if (iVar6 != 0x172) {
LAB_0043b0af:

        local_EAX_645 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1ac4,0,0,"%s",
                                "STAllPlayersC::SetActivePanel ACT_RIGHT ACT_RIGHT invalid game type");
        if (local_EAX_645 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (param_3 != 1) goto cf_common_exit_0043B294;
      SVar10 = CASE_2;
    }
    else {
      if (iVar6 != 0x1a4) {
        if (iVar6 != 0x1b8) goto LAB_0043b0af;
        if (param_3 == 1) {
          SVar10 = CASE_6;
          goto LAB_0043b0f1;
        }
        goto cf_common_exit_0043B686;
      }
      if (param_3 != 1) goto cf_common_exit_0043B294;
      SVar10 = CASE_5;
    }
    /* ST_CALLSITE[0043B1DE]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
    pSVar7 = GetObjPtr(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),SVar10);
    /* ST_CALLSITE[0043B1F3]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    STFishC::sub_004162B0((STFishC *)pSVar7,(short *)&local_10,(short *)&local_c,(short *)&local_8);

    iVar8 = Library::Ourlib::ST3DSPR::SprInRect
                      (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                       DAT_00807418,DAT_0080741c);
    if (iVar8 != 1) {
      thunk_FUN_004a8e00(local_10,local_c,local_8);
      thunk_FUN_004a8f20(1);
      SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::thunk_FUN_00567510
                ((RecoveredReceiver_00567510 *)&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                 DAT_0080743c & 0xff);
      /* ST_CALLSITE[0043B27B]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
      CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
      DAT_0080674c = 2;
      DAT_0080745d = 0;
    }
cf_common_exit_0043B294:
    /* ST_CALLSITE[0043B2A2]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
    ActivateTV(this,DAT_0080874d,1,param_2);
    return;
  }
  piVar1 = (int *)(param_2 * 0x10 + 0x7f4fd3 + iVar6);
  iVar6 = *piVar1;
  if (iVar6 < 0x19b) {
    if (iVar6 == 0x19a) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (((param_3 == 1) &&
          (uVar9 = CONCAT22((short)((uint)&local_c >> 0x10),(short)piVar1[2]),
          /* ST_CALLSITE[0043B3A5]: CALL 0x004024f0; direct=004024F0 STAllPlayersC::GetCamPoint */
          iVar6 = GetCamPoint(0x19a,STReplaceLowByte((uint32_t)(uVar9), (uint8_t)((char)piVar1[1])),
                              STField<DArrayTy *>(piVar1,10),uVar9,&local_10,&local_c,&local_8,
                              &param_1), iVar6 == 0)) &&

         (iVar6 = Library::Ourlib::ST3DSPR::SprInRect
                            (g_sT3DSMAPContext_00807598,param_1,DAT_00807410,DAT_00807414,
                             DAT_00807418,DAT_0080741c), iVar6 != 1)) {
        thunk_FUN_004a8e00(local_10,local_c,local_8);
        thunk_FUN_004a8f20(1);
        SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::thunk_FUN_00567510
                  ((RecoveredReceiver_00567510 *)&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                   DAT_0080743c & 0xff);
        /* ST_CALLSITE[0043B433]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
        CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
      bVar4 = DAT_0080874d;
      g_packedRecords_A62x8[DAT_0080874d].field200_0x203 = 1;
      /* ST_CALLSITE[0043B474]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
      ResetActivityFromTmp(this,bVar4,0,0,0);
      /* ST_CALLSITE[0043B483]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
      ActivateTV(this,DAT_0080874d,1,iVar8);
      return;
    }
    if (iVar6 == 0) {
      return;
    }
    if (iVar6 == 0x5a) {
      if (param_3 == 1) {
        SVar10 = CASE_4;
LAB_0043b2fe:
        /* ST_CALLSITE[0043B309]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
        pSVar7 = GetObjPtr(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),SVar10);
        /* ST_CALLSITE[0043B31E]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0
                  ((STFishC *)pSVar7,(short *)&local_10,(short *)&local_c,(short *)&local_8);

        iVar8 = Library::Ourlib::ST3DSPR::SprInRect
                          (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                           DAT_00807418,DAT_0080741c);
joined_r0x0043b5ec:
        if (iVar8 != 1) {
          thunk_FUN_004a8e00(local_10,local_c,local_8);
          thunk_FUN_004a8f20(1);
LAB_0043b630:
          SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::thunk_FUN_00567510
                    ((RecoveredReceiver_00567510 *)&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                     DAT_0080743c & 0xff);
          /* ST_CALLSITE[0043B640]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
          CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
      }
    }
    else {
      if (iVar6 != 0x172) {
LAB_0043b4a2:

        local_EAX_1656 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1b23,0,0,"%s",
                                "STAllPlayersC::SetActivePanel ACT_RIGHT ACT_LEFT invalid game type");
        if (local_EAX_1656 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (param_3 == 1) {
        SVar10 = CASE_2;
        goto LAB_0043b2fe;
      }
    }
  }
  else if (iVar6 == 0x1a4) {
    if (param_3 == 1) {
      /* ST_CALLSITE[0043B5A3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
      pSVar7 = GetObjPtr(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),CASE_5);
      /* ST_CALLSITE[0043B5B8]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      STFishC::sub_004162B0
                ((STFishC *)pSVar7,(short *)&local_10,(short *)&local_c,(short *)&local_8);

      iVar8 = Library::Ourlib::ST3DSPR::SprInRect
                        (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                         DAT_00807418,DAT_0080741c);
      goto joined_r0x0043b5ec;
    }
  }
  else {
    if (iVar6 != 0x1b8) goto LAB_0043b4a2;
    if (param_3 == 1) {
      /* ST_CALLSITE[0043B4EF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
      pSVar7 = GetObjPtr(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),CASE_6);
      /* ST_CALLSITE[0043B504]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      STFishC::sub_004162B0
                ((STFishC *)pSVar7,(short *)&local_10,(short *)&local_c,(short *)&local_8);

      iVar8 = Library::Ourlib::ST3DSPR::SprInRect
                        (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                         DAT_00807418,DAT_0080741c);
      if (iVar8 != 1) {
        thunk_FUN_004a8e00(local_10,local_c,local_8);
        thunk_FUN_004a8f20(1);
        goto LAB_0043b630;
      }
    }
  }
  bVar4 = DAT_0080874d;
  g_packedRecords_A62x8[DAT_0080874d].field200_0x203 = 1;
  /* ST_CALLSITE[0043B681]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
  ResetActivityFromTmp(this,bVar4,0,0,0);
cf_common_exit_0043B686:
  iVar6 = 1;
  iVar8 = param_2;
cf_common_exit_0043BB49:
  /* ST_CALLSITE[0043BB52]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
  ActivateTV(this,DAT_0080874d,iVar6,iVar8);
  return;
}

