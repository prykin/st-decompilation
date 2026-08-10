#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_embryo.cpp
   Diagnostic line evidence: 606 | 623 | 627 | 641 | 649 | 719 | 721 | 725 | 820 | 826 | 834
   (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STSwitchEnumApplier] Switch target field_02EC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_02ECState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __fastcall FUN_004d32c0(TLOBaseTy *param_1)

{
  char cVar1;
  STT3DSprC *this;
  int local_EAX_406;
  int iVar10;
  int local_EAX_956;
  dword dVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined2 uVar5;
  int local_EAX_3601;
  uint uVar3;
  undefined4 uVar4;
  int uVar2;
  int uVar6;
  int local_EAX_4514;
  int local_EAX_5536;
  int local_EAX_6643;
  int *piVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  undefined2 uVar8;
  int iVar7;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int iVar9;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  char *text;
  uint uVar16;
  CHAR local_7c [64];
  undefined4 local_3c [2];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar11 = 0;
  if (*(int *)&param_1->field_0x2a0 == 0) {
    this = param_1->field_035C;
    if ((this->field_001C & 0x4000) != 0) {
      iVar7 = this->field_0020->field_0210;
      if (iVar7 == 0x15) {
        if (((param_1->field_01F1 & 0x4000) == 0) && (param_1->field_02EC == CASE_2)) {
          puVar12 = &param_1->field_01D5;
          thunk_FUN_004abce0(puVar12,0xe,*(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4)
                             ,*(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
          STT3DSprC::SetCurFase
                    ((STT3DSprC *)puVar12,'\x0e',
                     *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
          STT3DSprC::StartShow((STT3DSprC *)puVar12,0xe,g_playSystem_00802A38->field_00E4);
          STT3DSprC::sub_004ACEF0((STT3DSprC *)puVar12,PTR_008073cc);
          iVar11 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)puVar12,0x10,PTR_0080678c,
                              (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&param_1->field_0x36c],CASE_1D);
          if (iVar11 != 0) {
            RaiseInternalException
                      (iVar11,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x25e);
          }
          thunk_FUN_004abce0(puVar12,0x10,
                             *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),
                             *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
          STT3DSprC::SetCurFase
                    ((STT3DSprC *)puVar12,'\x10',
                     *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
          STT3DSprC::StartShow((STT3DSprC *)puVar12,0x10,g_playSystem_00802A38->field_00E4);
          STT3DSprC::sub_004ACF50((STT3DSprC *)puVar12,'\x10');
          iVar11 = 3;
          piVar6 = (int *)&param_1->field_0x30c;
          do {
            uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
            param_1->field_001C = uVar13;
            iVar11 = iVar11 + -1;
            *piVar6 = (uVar13 >> 0x10) % 0x65 + 0x19 + g_playSystem_00802A38->field_00E4;
            piVar6 = piVar6 + 4;
          } while (iVar11 != 0);
          if (g_manBasis_00811784 != nullptr) {
            local_EAX_406 = LookupRecordByte(*(char *)&param_1->field_0024);
            local_EAX_406 = (int)(byte)local_EAX_406;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            thunk_FUN_005f23d0(g_manBasis_00811784,param_1->field_025D,param_1->field_0261,
                               param_1->field_0265,
                               STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(*(undefined1 *)&param_1->field_002C)),param_1->field_0259,
                               local_EAX_406);
          }
        }
        else if ((param_1->field_02EC == CASE_3) && (param_1->field_02DC == 0)) {
          if ((*(int *)&param_1->field_0x2a8 < 100) || (param_1->field_02E8 != 0)) {
            puVar12 = &param_1->field_01D5;
            STT3DSprC::StopShow((STT3DSprC *)puVar12,0xe);
            STT3DSprC::StopShow((STT3DSprC *)puVar12,0xd);
            STT3DSprC::StopShow((STT3DSprC *)puVar12,0xc);
            STT3DSprC::StopShow((STT3DSprC *)puVar12,0x10);
            iVar11 = param_1->vfunc_08();
            if (iVar11 != 0) {
              param_1->SetActivity(0);
            }
          }
          else {
            if ((*(char **)(PTR_PTR_007bb198 +
                           (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc
                           ) != nullptr) &&
               (iVar11 = STT3DSprC::LoadSequence
                                   ((STT3DSprC *)&param_1->field_01D5,0xe,PTR_0080678c,
                                    *(char **)(PTR_PTR_007bb198 +
                                              (*(int *)&param_1->field_0x368 * 3 +
                                              *(int *)&param_1->field_0x36c) * 0xc),CASE_1D),
               iVar11 != 0)) {
              RaiseInternalException
                        (iVar11,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_embryo.cpp",0x26f);
            }
            if (*(int *)(PTR_PTR_007bb198 +
                        (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc +
                        4) != 0) {
              wsprintfA(local_7c,"%s%1i",
                        *(int *)(PTR_PTR_007bb198 +
                                (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c)
                                * 0xc + 4),param_1->field_026D);
              iVar11 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)&param_1->field_01D5,0xd,PTR_0080678c,local_7c,
                                  CASE_1D);
              if (iVar11 != 0) {
                RaiseInternalException
                          (iVar11,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x273);
              }
            }
            iVar10 = thunk_FUN_004ab050();
            puVar12 = &param_1->field_01D5;
            uVar13 = *(uint *)(PTR_DAT_007b5170 +
                              (iVar10 + (*(int *)&param_1->field_0x368 * 3 +
                                        *(int *)&param_1->field_0x36c) * 4) * 8);
            thunk_FUN_004abce0(puVar12,0xe,uVar13,uVar13,'\0');
            STT3DSprC::SetCurFase((STT3DSprC *)puVar12,'\x0e',uVar13);
            STT3DSprC::StartShow((STT3DSprC *)puVar12,0xe,g_playSystem_00802A38->field_00E4);
            if (**(int **)&param_1->field_01F5->field_0x1d4 < (int)uVar13) {
              uVar13 = 0;
            }
            thunk_FUN_004abce0(puVar12,0xd,uVar13,uVar13,'\0');
            STT3DSprC::SetCurFase((STT3DSprC *)puVar12,'\r',uVar13);
            STT3DSprC::StartShow((STT3DSprC *)puVar12,0xd,g_playSystem_00802A38->field_00E4);
            if (*(char **)(PTR_PTR_007bb198 +
                          (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc
                          + 8) != nullptr) {
              iVar11 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar12,0xc,PTR_0080678c,
                                  *(char **)(PTR_PTR_007bb198 +
                                            (*(int *)&param_1->field_0x368 * 3 +
                                            *(int *)&param_1->field_0x36c) * 0xc + 8),CASE_1D);
              if (iVar11 != 0) {
                RaiseInternalException
                          (iVar11,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x281);
              }
              local_EAX_956 = thunk_FUN_004ab050();
              uVar13 = *(uint *)(PTR_DAT_007b8310 +
                                (local_EAX_956 +
                                (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c)
                                * 4) * 8);
              thunk_FUN_004abce0(puVar12,0xc,uVar13,uVar13,'\0');
              STT3DSprC::SetCurFase((STT3DSprC *)puVar12,'\f',uVar13);
              STT3DSprC::StartShow((STT3DSprC *)puVar12,0xc,g_playSystem_00802A38->field_00E4);
            }
            STT3DSprC::sub_004ACEF0((STT3DSprC *)puVar12,PTR_008073cc);
            iVar11 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)puVar12,0x10,PTR_0080678c,
                                (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&param_1->field_0x36c],CASE_1D);
            if (iVar11 != 0) {
              RaiseInternalException
                        (iVar11,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_embryo.cpp",0x289);
            }
            thunk_FUN_004abce0(puVar12,0x10,
                               *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),
                               *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
            STT3DSprC::SetCurFase
                      ((STT3DSprC *)puVar12,'\x10',
                       *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
            STT3DSprC::StartShow((STT3DSprC *)puVar12,0x10,g_playSystem_00802A38->field_00E4);
            STT3DSprC::sub_004ACF50((STT3DSprC *)puVar12,'\x10');
          }
          puVar12 = &param_1->field_01D5;
          param_1->field_02DC = 1;
          STT3DSprC::StopShow((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0);
          STT3DSprC::UnLoadSequence((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0);
          thunk_FUN_004ad5e0((STT3DSprC *)puVar12);
          if (*(int *)&param_1->field_0x370 != 0) {
            STT3DSprC::StopShow((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1);
            STT3DSprC::UnLoadSequence((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1);
          }
        }
      }
      else if (iVar7 == this->field_0020->field_020C) {
        STT3DSprC::SetCurFase(this,'\x0e',0);
        STT3DSprC::StopShow(param_1->field_035C,0xe);
        thunk_FUN_004ad430(param_1->field_035C);
        if (param_1->field_02DC != 0) {
          sub_0041C5A0(param_1);
          TLOBaseTy::sub_00417D30(param_1);
          if (param_1->field_002C == 0) {
            iVar11 = 1;
          }
          else if (param_1->field_002C == 1) {
            iVar11 = 2;
          }
          local_14 = param_1->field_0261;
          if ((int)local_14 < (int)(local_14 + iVar11)) {
            do {
              iVar7 = param_1->field_025D;
              if (iVar7 < iVar7 + iVar11) {
                do {
                  thunk_FUN_00496140((short)iVar7,(short)local_14,*(short *)&param_1->field_0265);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar11 + param_1->field_025D);
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < param_1->field_0261 + iVar11);
          }
          iVar11 = thunk_FUN_004b7520(STReplaceLowByte((uint32_t)(param_1->field_0259), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                                      param_1->field_0259);
          if (iVar11 != 0) {
            dVar2 = param_1->slot_2C();
            thunk_FUN_004b7710(STReplaceLowByte((uint32_t)(dVar2), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                               dVar2);
          }
          if ((99 < *(int *)&param_1->field_0x2a8) && (param_1->field_02E8 == 0)) {
            STPlaySystemC::CreateGameObject
                      (g_playSystem_00802A38,param_1->field_0245,0,&local_18,&param_1->field_0245,0);
            param_1->field_02E4 = 1;
            iVar11 = param_1->vfunc_08();
            uVar5 = 0;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar8 = extraout_var_00;
            if (iVar11 != 0) {
              /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004353b0(STReplaceLowByte((uint32_t)(local_18), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                                 STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(param_1->field_0032)),
                                 CONCAT22(extraout_var_02,*(undefined2 *)(local_18 + 0x32)));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar8 = extraout_var_01;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar5 = extraout_var;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            STAllPlayersC::ReplaceObject
                      (g_allPlayers_007FA174,*(char *)&param_1->field_0024,
                       CONCAT22(uVar8,param_1->field_0032),
                       CONCAT22(uVar5,*(undefined2 *)(local_18 + 0x32)));
          }
          local_28 = param_1->field_0008;
          local_34 = param_1->field_000C->systemId;
          local_30 = 0;
          local_2c = 10;
          SystemClassTy::PostMessage(param_1->field_000C,local_3c);
        }
      }
    }
    if (*(int *)(&param_1->field_01F5->field_0x18 + param_1->field_02F0 * 0x24) ==
        *(int *)(&param_1->field_01F5->field_0x14 + param_1->field_02F0 * 0x24)) {
      switch(param_1->field_02EC) {
      case CASE_0:
        param_1->field_02EC = CASE_1;
        if (param_1->field_0241 == 0) {
          iVar11 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 6,PTR_0080678c,
                              "si_emb3",CASE_1D);
          if (iVar11 != 0) {
            RaiseInternalException
                      (iVar11,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x2cf);
          }
          wsprintfA(local_7c,"si_emb3_id%1d",param_1->field_0024);
          iVar11 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 5,PTR_0080678c,local_7c
                              ,CASE_1D);
          if (iVar11 != 0) {
            iVar7 = 0x2d1;
LAB_004d3b23:
            RaiseInternalException
                      (iVar11,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",iVar7);
          }
        }
        else if (param_1->field_0241 == 1) {
          iVar11 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 6,PTR_0080678c,
                              "si_emb2",CASE_1D);
          if (iVar11 != 0) {
            RaiseInternalException
                      (iVar11,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x2d5);
          }
          wsprintfA(local_7c,"si_emb2_id%1d",param_1->field_0024);
          iVar11 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 5,PTR_0080678c,local_7c
                              ,CASE_1D);
          if (iVar11 != 0) {
            iVar7 = 0x2d7;
            goto LAB_004d3b23;
          }
        }
        puVar12 = &param_1->field_01D5;
        iVar11 = param_1->field_02EC + param_1->field_0241 * 4;
        thunk_FUN_004abce0(puVar12,*(byte *)&param_1->field_02F0,
                           *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                           *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
        STT3DSprC::SetCurFase
                  ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        STT3DSprC::StartShow
                  ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,
                   g_playSystem_00802A38->field_00E4);
        iVar11 = param_1->field_02EC + param_1->field_0241 * 4;
        thunk_FUN_004abce0(puVar12,*(char *)&param_1->field_02F0 - 1,
                           *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                           *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
        STT3DSprC::SetCurFase
                  ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 + -1,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        cVar1 = *(char *)&param_1->field_02F0;
        uVar13 = g_playSystem_00802A38->field_00E4;
LAB_004d4378:
        STT3DSprC::StartShow((STT3DSprC *)&param_1->field_01D5,cVar1 - 1,uVar13);
        break;
      case CASE_1:
        iVar11 = param_1->field_0241 * 0x20;
        param_1->field_02EC = CASE_2;
        puVar12 = &param_1->field_01D5;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004abce0(puVar12,*(byte *)&param_1->field_02F0,
                           *(int *)(iVar11 + 0x10 + *(int *)&param_1->field_0x364),
                           *(int *)(iVar11 + 0x14 + *(int *)&param_1->field_0x364),'\0');
        STT3DSprC::SetCurFase
                  ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        STT3DSprC::StartShow
                  ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,
                   g_playSystem_00802A38->field_00E4);
        if (*(int *)&param_1->field_0x370 != 0) {
          iVar11 = param_1->field_02EC + param_1->field_0241 * 4;
          thunk_FUN_004abce0(puVar12,*(char *)&param_1->field_02F0 - 1,
                             *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                             *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
          STT3DSprC::SetCurFase
                    ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 + -1,
                     *(uint *)(*(int *)&param_1->field_0x364 +
                              (param_1->field_02EC + param_1->field_0241 * 4) * 8));
          STT3DSprC::StartShow
                    ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1,
                     g_playSystem_00802A38->field_00E4);
        }
        param_1->vfunc_90(3,0x362);
        thunk_FUN_004abce0(param_1->field_035C,0xe,0,
                           *(int *)param_1->field_035C->field_0020->field_01F8 + -1,'\0');
        STT3DSprC::SetCurFase(param_1->field_035C,'\x0e',0);
        STT3DSprC::StartShow(param_1->field_035C,0xe,g_playSystem_00802A38->field_00E4);
        thunk_FUN_004ad460(param_1->field_035C,0);
        break;
      case CASE_2:
        if (99 < *(int *)&param_1->field_0x2a8) {
          if ((((param_1->field_02E8 == 0) && (*(int *)&param_1->field_0x2a4 == 0)) &&
              (*(int *)&param_1->field_0x2a0 == 0)) &&
             (iVar11 = thunk_FUN_004d3290((int)param_1), iVar11 != 0)) {
            param_1->field_02EC = CASE_3;
            if (*(int *)&param_1->field_0x370 == 0) {
              param_1->vfunc_90(3,0x361);
            }
            iVar11 = param_1->field_0259;
            if (((iVar11 == 0x6c) && (param_1->field_0251 == 3)) ||
               ((0x53 < iVar11 && (iVar11 < 0x5b)))) {
LAB_004d3f38:
              if (*(int *)&param_1->field_0x370 != 0) goto LAB_004d3f76;
            }
            else {
              puVar12 = &param_1->field_01D5;
              thunk_FUN_004ac6b0(puVar12,*(char *)&param_1->field_02F0);
              iVar11 = param_1->field_02EC + param_1->field_0241 * 4;
              thunk_FUN_004abce0(puVar12,*(byte *)&param_1->field_02F0,
                                 *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                                 *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
              STT3DSprC::SetCurFase
                        ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0,
                         *(uint *)(*(int *)&param_1->field_0x364 +
                                  (param_1->field_02EC + param_1->field_0241 * 4) * 8));
              STT3DSprC::StartShow
                        ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,
                         g_playSystem_00802A38->field_00E4);
              if (*(int *)&param_1->field_0x370 != 0) {
                thunk_FUN_004ac6b0(puVar12,*(char *)&param_1->field_02F0 + -1);
                iVar11 = param_1->field_02EC + param_1->field_0241 * 4;
                thunk_FUN_004abce0(puVar12,*(char *)&param_1->field_02F0 - 1,
                                   *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                                   *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
                STT3DSprC::SetCurFase
                          ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 + -1,
                           *(uint *)(*(int *)&param_1->field_0x364 +
                                    (param_1->field_02EC + param_1->field_0241 * 4) * 8));
                STT3DSprC::StartShow
                          ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1,
                           g_playSystem_00802A38->field_00E4);
                goto LAB_004d3f38;
              }
            }
            puVar12 = (undefined4 *)&param_1->field_0x350;
            piVar6 = (int *)&param_1->field_0x308;
            local_14 = 3;
            do {
              if (*piVar6 != 0) {
                *piVar6 = 0;
                thunk_FUN_004ad430((STT3DSprC *)*puVar12);
              }
              puVar12 = puVar12 + 1;
              piVar6 = piVar6 + 4;
              local_14 = local_14 - 1;
            } while (local_14 != 0);
          }
LAB_004d3f76:
          if (((99 < *(int *)&param_1->field_0x2a8) && (param_1->field_02E8 == 0)) &&
             ((iVar11 = thunk_FUN_004d3290((int)param_1), iVar11 == 0 &&
              (DAT_00811798 != nullptr)))) {
            thunk_FUN_00621580(DAT_00811798,param_1->field_0024,8);
          }
        }
        break;
      case CASE_3:
        if (((param_1->field_035C->field_001C & 0x4000) == 0) &&
           (*(int *)&param_1->field_0x2e0 == 0)) {
          puVar12 = &param_1->field_01D5;
          *(undefined4 *)&param_1->field_0x2e0 = 1;
          uVar13 = thunk_FUN_004ac910(puVar12,*(char *)&param_1->field_02F0);
          STT3DSprC::StopShow((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0);
          STT3DSprC::UnLoadSequence((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0);
          if (*(int *)&param_1->field_0x370 != 0) {
            STT3DSprC::StopShow((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1);
            STT3DSprC::UnLoadSequence((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1);
          }
          param_1->vfunc_90(3,0x362);
          thunk_FUN_004abce0(param_1->field_035C,0xe,0,
                             *(int *)param_1->field_035C->field_0020->field_01F8 + -1,'\0');
          STT3DSprC::SetCurFase(param_1->field_035C,'\x0e',0);
          STT3DSprC::StartShow(param_1->field_035C,0xe,g_playSystem_00802A38->field_00E4);
          thunk_FUN_004ad460(param_1->field_035C,0);
          iVar11 = (-(uint)(*(int *)&param_1->field_0x370 != 0) & 3) + 6;
          param_1->field_02F4 = iVar11;
          STT3DSprC::UnLoadSequence((STT3DSprC *)puVar12,(byte)iVar11);
          uVar16 = param_1->field_02F4;
          local_EAX_3601 = thunk_FUN_004ad650((STT3DSprC *)puVar12);
          uVar3 = thunk_FUN_004ad650(param_1->field_035C);
          FUN_006ea340((void *)param_1->field_0211,uVar3,local_EAX_3601,uVar16);
          param_1->field_02F0 = (-(uint)(*(int *)&param_1->field_0x370 != 0) & 4) + 7;
          iVar11 = param_1->field_0259;
          if (((iVar11 != 0x6c) || (param_1->field_0251 != 3)) &&
             ((iVar11 < 0x54 || (0x5a < iVar11)))) {
            iVar11 = param_1->field_0241;
            if (*(int *)&param_1->field_0x370 == 0) {
              if (iVar11 == 0) {
                iVar11 = STT3DSprC::LoadSequence
                                   ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,PTR_0080678c,
                                    "tlo_emb2",CASE_1D);
                if (iVar11 != 0) {
                  iVar7 = 0x342;
                  goto cf_error_exit_004D428D;
                }
              }
              else if ((iVar11 == 1) &&
                      (iVar11 = STT3DSprC::LoadSequence
                                          ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,
                                           PTR_0080678c,"tlo_emb3",CASE_1D), iVar11 != 0))
              {
                iVar7 = 0x343;
cf_error_exit_004D428D:
                RaiseInternalException
                          (iVar11,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",iVar7);
              }
            }
            else if (iVar11 == 0) {
              iVar11 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,PTR_0080678c,
                                  "si_emb3",CASE_1D);
              if (iVar11 != 0) {
                RaiseInternalException
                          (iVar11,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x334);
              }
              wsprintfA(local_7c,"si_emb3_id%1d",param_1->field_0024);
              iVar11 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1,
                                  PTR_0080678c,local_7c,CASE_1D);
              if (iVar11 != 0) {
                iVar7 = 0x336;
                goto cf_error_exit_004D428D;
              }
            }
            else if (iVar11 == 1) {
              iVar11 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,PTR_0080678c,
                                  "si_emb2",CASE_1D);
              if (iVar11 != 0) {
                RaiseInternalException
                          (iVar11,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x33a);
              }
              wsprintfA(local_7c,"si_emb2_id%1d",param_1->field_0024);
              iVar11 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1,
                                  PTR_0080678c,local_7c,CASE_1D);
              if (iVar11 != 0) {
                iVar7 = 0x33c;
                goto cf_error_exit_004D428D;
              }
            }
            thunk_FUN_004ac6b0(puVar12,*(char *)&param_1->field_02F0);
            iVar11 = param_1->field_02EC + param_1->field_0241 * 4;
            thunk_FUN_004abce0(puVar12,*(byte *)&param_1->field_02F0,
                               *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                               *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
            STT3DSprC::SetCurFase((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0,uVar13);
            STT3DSprC::StartShow
                      ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,
                       g_playSystem_00802A38->field_00E4);
            if (*(int *)&param_1->field_0x370 != 0) {
              thunk_FUN_004ac6b0(puVar12,*(char *)&param_1->field_02F0 + -1);
              iVar11 = param_1->field_02EC + param_1->field_0241 * 4;
              thunk_FUN_004abce0(puVar12,*(char *)&param_1->field_02F0 - 1,
                                 *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                                 *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
              STT3DSprC::SetCurFase((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 + -1,uVar13);
              cVar1 = *(char *)&param_1->field_02F0;
              uVar13 = g_playSystem_00802A38->field_00E4;
              goto LAB_004d4378;
            }
          }
        }
      }
    }
    if ((param_1->field_02EC == CASE_2) && ((param_1->field_01F1 & 0x4000) != 0)) {
      if ((*(int *)&param_1->field_0x2a8 < 100) &&
         ((*(int *)&param_1->field_0x2a4 == 0 && (*(int *)&param_1->field_0x2a0 == 0)))) {
        iVar11 = thunk_FUN_004b7520(STReplaceLowByte((uint32_t)(param_1->field_0259), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                                    param_1->field_0259);
        if (iVar11 == 0) {
LAB_004d43f5:
          uVar4 = 1;
        }
        else {
          iVar11 = thunk_FUN_004b79c0(*(char *)&param_1->field_0024,(int)param_1->field_0018);
          uVar4 = 0;
          if (iVar11 != 0) goto LAB_004d43f5;
        }
        *(undefined4 *)&param_1->field_0x2b8 = uVar4;
        uVar2 = LookupRecordByte(*(char *)&param_1->field_0024);
        local_14 = *(uint *)(&DAT_007e3dc0 +
                            ((uint)(byte)uVar2 + *(int *)&param_1->field_0x368 * 3) * 4);
        if (DAT_0080c51e != 0) {
          uVar13 = 0;
          iVar11 = 0;
          do {
            uVar6 = LookupRecordByte(*(char *)&param_1->field_0024);
            uVar6 = (int)(byte)uVar6;
            if (uVar13 < *(uint *)(&DAT_007e3dc0 + (uVar6 + iVar11) * 4)) {
              local_EAX_4514 = LookupRecordByte(*(char *)&param_1->field_0024);
              local_EAX_4514 = (int)(byte)local_EAX_4514;
              uVar13 = *(uint *)(&DAT_007e3dc0 + (local_EAX_4514 + iVar11) * 4);
            }
            iVar11 = iVar11 + 3;
          } while (iVar11 < 0xc6);
          local_14 = (local_14 * 0x5dc) / uVar13;
          if (0x5dc < local_14) {
            local_14 = 0x5dc;
          }
        }
        uVar13 = local_14 / 100;
        if ((*(int *)&param_1->field_0x2b8 == 0) &&
           (uVar13 = uVar13 << 2, DAT_00811798 != nullptr)) {
          thunk_FUN_00621580(DAT_00811798,param_1->field_0024,5);
        }
        if (*(int *)&param_1->field_0x2b0 + uVar13 <= g_playSystem_00802A38->field_00E4) {
          *(uint *)&param_1->field_0x2b0 = g_playSystem_00802A38->field_00E4;
          iVar7 = (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 4;
          iVar11 = *(int *)(&DAT_008545ac + iVar7);
          local_14 = iVar11 / 100;
          if ((iVar11 != 0) && (local_14 == 0)) {
            local_14 = 1;
          }
          local_1c = *(int *)(&DAT_007e1c50 + iVar7);
          local_8 = local_1c / 100;
          if ((local_1c != 0) && (local_8 == 0)) {
            local_8 = 1;
          }
          iVar9 = *(int *)(&DAT_007e24fc + iVar7);
          local_c = iVar9 / 100;
          if ((iVar9 != 0) && (local_c == 0)) {
            local_c = 1;
          }
          iVar7 = *(int *)(&DAT_007e3160 + iVar7);
          local_10 = iVar7 / 100;
          if ((iVar7 != 0) && (local_10 == 0)) {
            local_10 = 1;
          }
          if (iVar11 <= (int)(local_14 + param_1->field_02CC)) {
            local_14 = iVar11 - param_1->field_02CC;
          }
          if (local_1c <= param_1->field_02D0 + local_8) {
            local_8 = local_1c - param_1->field_02D0;
          }
          if (iVar9 <= param_1->field_02D4 + local_c) {
            local_c = iVar9 - param_1->field_02D4;
          }
          if (iVar7 <= param_1->field_02D8 + local_10) {
            local_10 = iVar7 - param_1->field_02D8;
          }
          if ((int)local_14 < 0) {
            local_14 = 0;
          }
          if (local_8 < 0) {
            local_8 = 0;
          }
          if (local_c < 0) {
            local_c = 0;
          }
          if (local_10 < 0) {
            local_10 = 0;
          }
          *(undefined4 *)&param_1->field_0x2c8 = 1;
          *(undefined4 *)&param_1->field_0x2c4 = 1;
          *(undefined4 *)&param_1->field_0x2c0 = 1;
          *(undefined4 *)&param_1->field_0x2bc = 1;
          *(undefined4 *)&param_1->field_0x2b4 = 1;
          if ((local_14 == 0) ||
             (iVar11 = thunk_FUN_004d7b10(*(char *)&param_1->field_0024,0), (int)local_14 <= iVar11)
             ) {
            if ((local_8 == 0) ||
               (iVar11 = thunk_FUN_004d7b50(*(char *)&param_1->field_0024,0), local_8 <= iVar11)) {
              if ((local_c == 0) ||
                 (iVar11 = thunk_FUN_004d7b90(*(char *)&param_1->field_0024,0), local_c <= iVar11))
              {
                if ((local_10 != 0) &&
                   (iVar11 = thunk_FUN_004d7bd0(*(char *)&param_1->field_0024,0), iVar11 < local_10)
                   ) {
                  *(undefined4 *)&param_1->field_0x2b4 = 0;
                  *(undefined4 *)&param_1->field_0x2c8 = 0;
                }
              }
              else {
                *(undefined4 *)&param_1->field_0x2b4 = 0;
                *(undefined4 *)&param_1->field_0x2bc = 0;
              }
            }
            else {
              *(undefined4 *)&param_1->field_0x2b4 = 0;
              *(undefined4 *)&param_1->field_0x2c0 = 0;
            }
          }
          else {
            *(undefined4 *)&param_1->field_0x2b4 = 0;
            *(undefined4 *)&param_1->field_0x2c4 = 0;
          }
          if (*(int *)&param_1->field_0x2b4 == 0) {
            if (DAT_00811798 != nullptr) {
              if (*(int *)&param_1->field_0x2bc == 0) {
                thunk_FUN_00621580(DAT_00811798,param_1->field_0024,4);
              }
              if (*(int *)&param_1->field_0x2c0 == 0) {
                thunk_FUN_00621580(DAT_00811798,param_1->field_0024,2);
              }
              if (*(int *)&param_1->field_0x2c4 == 0) {
                thunk_FUN_00621580(DAT_00811798,param_1->field_0024,3);
              }
              if (*(int *)&param_1->field_0x2c8 == 0) {
                thunk_FUN_00621580(DAT_00811798,param_1->field_0024,7);
              }
            }
          }
          else {
            *(int *)&param_1->field_0x2a8 = *(int *)&param_1->field_0x2a8 + 1;
            if (local_14 != 0) {
              thunk_FUN_004d7c10(*(char *)&param_1->field_0024,0,(int)param_1->field_0018,local_14);
            }
            if (local_8 != 0) {
              thunk_FUN_004d7d30(*(char *)&param_1->field_0024,0,(int)param_1->field_0018,local_8);
            }
            if (local_c != 0) {
              thunk_FUN_004d7e50(*(char *)&param_1->field_0024,0,(int)param_1->field_0018,local_c);
            }
            if (local_10 != 0) {
              thunk_FUN_004d7f70(*(char *)&param_1->field_0024,0,(int)param_1->field_0018,local_10);
            }
            param_1->field_02CC = param_1->field_02CC + local_14;
            param_1->field_02D8 = param_1->field_02D8 + local_10;
            param_1->field_02D0 = param_1->field_02D0 + local_8;
            param_1->field_02D4 = param_1->field_02D4 + local_c;
            if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
              thunk_FUN_004d8b70((char)param_1->field_0024);
            }
            if (99 < *(int *)&param_1->field_0x2a8) {
              *(undefined4 *)&param_1->field_0x2a8 = 100;
              thunk_FUN_004d7570(*(char *)&param_1->field_0024,0,param_1->field_0018);
              if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
                thunk_FUN_0052af50(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
                local_EAX_5536 = LookupRecordByte(*(char *)&param_1->field_0024);
                local_EAX_5536 = (int)(byte)local_EAX_5536;
                if (local_EAX_5536 == 1) {
                  param_1->vfunc_90(6,0x62);
                }
                else if (local_EAX_5536 == 2) {
                  param_1->vfunc_90(6,99);
                }
                else if (local_EAX_5536 == 3) {
                  param_1->vfunc_90(6,100);
                }
              }
            }
          }
          if (*(int *)&param_1->field_0x2a8 < 100) {
            iVar11 = (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 4;
            iVar7 = *(int *)(&DAT_008545ac + iVar11) - param_1->field_02CC;
            iVar15 = *(int *)(&DAT_007e1c50 + iVar11) - param_1->field_02D0;
            iVar9 = *(int *)(&DAT_007e24fc + iVar11) - param_1->field_02D4;
            iVar11 = *(int *)(&DAT_007e3160 + iVar11) - param_1->field_02D8;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            if (iVar15 < 0) {
              iVar15 = 0;
            }
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            thunk_FUN_004d76e0(*(char *)&param_1->field_0024,0,param_1->field_0018,iVar7,iVar15,
                               iVar9,iVar11);
          }
        }
      }
      if (*(int *)&param_1->field_0x370 == 0) {
        piVar6 = (int *)&param_1->field_0x350;
        piVar14 = (int *)&param_1->field_0x308;
        local_14 = 3;
        do {
          if (*piVar14 == 0) {
            if (((((uint)piVar14[1] <= g_playSystem_00802A38->field_00E4) &&
                 (*(int *)&param_1->field_0x2b4 != 0)) && (*(int *)&param_1->field_0x2a8 < 100)) &&
               ((*(int *)&param_1->field_0x2a4 == 0 && (*(int *)&param_1->field_0x2a0 == 0)))) {
              param_1->vfunc_90(3,0x363);
              *piVar14 = 1;
              uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
              param_1->field_001C = uVar13;
              piVar14[3] = (uVar13 >> 0x10) % 3 + 1;
              uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
              param_1->field_001C = uVar13;
              uVar13 = (uVar13 >> 0x10) %
                       *(uint *)(&DAT_00797748 + *(int *)&param_1->field_0x368 * 0x44);
              piVar14[2] = uVar13;
              iVar11 = *(int *)&param_1->field_0x368 * 0x44 + uVar13 * 8;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004ad380((void *)*piVar6,
                                 (param_1->field_0300 - *(int *)(&DAT_0079774c + iVar11)) + 0x10,
                                 (param_1->field_0304 - *(int *)(&DAT_00797750 + iVar11)) + 0x15);
              thunk_FUN_004abce0((void *)*piVar6,0xe,0,0x13,'\0');
              STT3DSprC::SetCurFase((STT3DSprC *)*piVar6,'\x0e',0);
              STT3DSprC::StartShow((STT3DSprC *)*piVar6,0xe,g_playSystem_00802A38->field_00E4);
              thunk_FUN_004ad460((void *)*piVar6,0);
            }
          }
          else {
            iVar11 = *(int *)(*piVar6 + 0x20);
            if (*(int *)(iVar11 + 0x210) < *(int *)(iVar11 + 0x20c)) {
              if (*(int *)(iVar11 + 0x210) == *(int *)(iVar11 + 0x208)) {
                param_1->vfunc_90(3,0x363);
              }
            }
            else {
              iVar11 = piVar14[3];
              piVar14[3] = iVar11 + -1;
              if (iVar11 + -1 == 0) {
                *piVar14 = 0;
                uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
                param_1->field_001C = uVar13;
                piVar14[1] = (uVar13 >> 0x10) % 0x65 + 0x19 + g_playSystem_00802A38->field_00E4;
                thunk_FUN_004ad430((STT3DSprC *)*piVar6);
              }
            }
          }
          thunk_FUN_004ac9e0((void *)*piVar6,g_playSystem_00802A38->field_00E4);
          piVar6 = piVar6 + 1;
          piVar14 = piVar14 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    thunk_FUN_004ac9e0(param_1->field_035C,g_playSystem_00802A38->field_00E4);
    if (*(int *)&param_1->field_0x2a0 == 0) {
      param_1->vfunc_D8();
      goto LAB_004d4d4f;
    }
  }
  puVar12 = &param_1->field_01D5;
  iVar11 = thunk_FUN_004ac910(puVar12,'\x06');
  if ((iVar11 < *(int *)&param_1->field_01F5->field_0xec) ||
     (iVar11 = thunk_FUN_004ac910(puVar12,'\a'), iVar11 < *(int *)&param_1->field_01F5->field_0x110)
     ) {
    param_1->vfunc_D8();
    iVar11 = thunk_FUN_004ac910(puVar12,'\x06');
    if (iVar11 == 0x11) {
      STT3DSprC::StopShow((STT3DSprC *)puVar12,0x10);
      STT3DSprC::StopShow((STT3DSprC *)puVar12,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar12,0xd);
      STT3DSprC::StopShow((STT3DSprC *)puVar12,0xc);
      if ((*(int *)&param_1->field_0x370 == 0) ||
         (STT3DSprC::StopShow((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0),
         *(int *)&param_1->field_0x370 == 0)) {
        puVar12 = (undefined4 *)&param_1->field_0x350;
        iVar11 = 3;
        do {
          STT3DSprC::StopShow((STT3DSprC *)*puVar12,0xe);
          puVar12 = puVar12 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar11 = 0;
      local_EAX_6643 = LookupRecordByte(*(char *)&param_1->field_0024);
      local_EAX_6643 = (int)(byte)local_EAX_6643;
      thunk_FUN_0062b830((int)param_1->field_0041,(int)param_1->field_0043,(int)param_1->field_0045,
                         param_1->field_0259,(int *)param_1,0xffffffff,0xffffffff,local_EAX_6643,
                         iVar11);
    }
    else {
      iVar11 = thunk_FUN_004ac910(puVar12,'\x06');
      if (iVar11 == 0x23) {
        if (param_1->field_002C == 1) {
          text = "expl_bbt1";
        }
        else {
          text = "expl_bbt0";
        }
        iVar11 = STT3DSprC::LoadSequence((STT3DSprC *)puVar12,7,PTR_00806764,text,CASE_1D);
        if (iVar11 != 0) {
          return 0xffff;
        }
        STT3DSprC::StartShow((STT3DSprC *)puVar12,7,g_playSystem_00802A38->field_00E4);
      }
    }
  }
  else {
    local_28 = param_1->field_0008;
    local_34 = param_1->field_000C->systemId;
    local_30 = 0;
    local_2c = 10;
    sub_006E60A0(param_1,local_3c);
  }
LAB_004d4d4f:
  thunk_FUN_004d5470((int)param_1);
  if ((param_1->field_0338 != 0) &&
     ((uint)(param_1->field_0344 + param_1->field_0340) <= g_playSystem_00802A38->field_00E4)) {
    param_1->field_0338 = 0;
  }
  return 0;
}

