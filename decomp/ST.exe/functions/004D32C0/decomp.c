
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
  uint uVar2;
  dword dVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined2 uVar7;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  undefined2 uVar10;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  char *text;
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

  iVar12 = 0;
  if (*(int *)&param_1->field_0x2a0 == 0) {
    this = param_1->field_035C;
    if ((this->field_001C & 0x4000) != 0) {
      iVar9 = this->field_0020->field_0210;
      if (iVar9 == 0x15) {
        if (((param_1->field_01F1 & 0x4000) == 0) && (param_1->field_02EC == CASE_2)) {
          puVar15 = &param_1->field_01D5;
          thunk_FUN_004abce0(puVar15,0xe,*(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4)
                             ,*(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
          STT3DSprC::SetCurFase
                    ((STT3DSprC *)puVar15,'\x0e',
                     *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
          STT3DSprC::StartShow((STT3DSprC *)puVar15,0xe,g_playSystem_00802A38->field_00E4);
          STT3DSprC::sub_004ACEF0((STT3DSprC *)puVar15,DAT_008073cc);
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)puVar15,0x10,DAT_0080678c,
                              (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&param_1->field_0x36c],0x1d);
          if (iVar12 != 0) {
            RaiseInternalException
                      (iVar12,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x25e);
          }
          thunk_FUN_004abce0(puVar15,0x10,
                             *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),
                             *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
          STT3DSprC::SetCurFase
                    ((STT3DSprC *)puVar15,'\x10',
                     *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
          STT3DSprC::StartShow((STT3DSprC *)puVar15,0x10,g_playSystem_00802A38->field_00E4);
          STT3DSprC::sub_004ACF50((STT3DSprC *)puVar15,'\x10');
          iVar12 = 3;
          piVar8 = (int *)&param_1->field_0x30c;
          do {
            uVar2 = param_1->field_001C * 0x41c64e6d + 0x3039;
            param_1->field_001C = uVar2;
            iVar12 = iVar12 + -1;
            *piVar8 = (uVar2 >> 0x10) % 0x65 + 0x19 + g_playSystem_00802A38->field_00E4;
            piVar8 = piVar8 + 4;
          } while (iVar12 != 0);
          if (g_manBasis_00811784 != (STManBasisC *)0x0) {
            uVar2 = GetPlayerRaceId(*(char *)&param_1->field_0024);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            thunk_FUN_005f23d0(g_manBasis_00811784,param_1->field_025D,param_1->field_0261,
                               param_1->field_0265,
                               CONCAT31((int3)((uint)extraout_EDX >> 8),
                                        *(undefined1 *)&param_1->field_002C),param_1->field_0259,
                               uVar2 & 0xff);
          }
        }
        else if ((param_1->field_02EC == CASE_3) && (param_1->field_02DC == 0)) {
          if ((*(int *)&param_1->field_0x2a8 < 100) || (param_1->field_02E8 != 0)) {
            puVar15 = &param_1->field_01D5;
            STT3DSprC::StopShow((STT3DSprC *)puVar15,0xe);
            STT3DSprC::StopShow((STT3DSprC *)puVar15,0xd);
            STT3DSprC::StopShow((STT3DSprC *)puVar15,0xc);
            STT3DSprC::StopShow((STT3DSprC *)puVar15,0x10);
            iVar12 = (*param_1->vtable->vfunc_08)();
            if (iVar12 != 0) {
              (*param_1->vtable->SetActivity)(param_1,0);
            }
          }
          else {
            if ((*(char **)(PTR_PTR_007bb198 +
                           (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc
                           ) != (char *)0x0) &&
               (iVar12 = STT3DSprC::LoadSequence
                                   ((STT3DSprC *)&param_1->field_01D5,0xe,DAT_0080678c,
                                    *(char **)(PTR_PTR_007bb198 +
                                              (*(int *)&param_1->field_0x368 * 3 +
                                              *(int *)&param_1->field_0x36c) * 0xc),0x1d),
               iVar12 != 0)) {
              RaiseInternalException
                        (iVar12,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_embryo.cpp",0x26f);
            }
            if (*(int *)(PTR_PTR_007bb198 +
                        (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc +
                        4) != 0) {
              wsprintfA(local_7c,"%s%1i",
                        *(int *)(PTR_PTR_007bb198 +
                                (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c)
                                * 0xc + 4),param_1->field_026D);
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)&param_1->field_01D5,0xd,DAT_0080678c,local_7c,0x1d);
              if (iVar12 != 0) {
                RaiseInternalException
                          (iVar12,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x273);
              }
            }
            iVar12 = thunk_FUN_004ab050();
            puVar15 = &param_1->field_01D5;
            uVar2 = *(uint *)(PTR_DAT_007b5170 +
                             (iVar12 + (*(int *)&param_1->field_0x368 * 3 +
                                       *(int *)&param_1->field_0x36c) * 4) * 8);
            thunk_FUN_004abce0(puVar15,0xe,uVar2,uVar2,'\0');
            STT3DSprC::SetCurFase((STT3DSprC *)puVar15,'\x0e',uVar2);
            STT3DSprC::StartShow((STT3DSprC *)puVar15,0xe,g_playSystem_00802A38->field_00E4);
            if (**(int **)&param_1->field_01F5->field_0x1d4 < (int)uVar2) {
              uVar2 = 0;
            }
            thunk_FUN_004abce0(puVar15,0xd,uVar2,uVar2,'\0');
            STT3DSprC::SetCurFase((STT3DSprC *)puVar15,'\r',uVar2);
            STT3DSprC::StartShow((STT3DSprC *)puVar15,0xd,g_playSystem_00802A38->field_00E4);
            if (*(char **)(PTR_PTR_007bb198 +
                          (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc
                          + 8) != (char *)0x0) {
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar15,0xc,DAT_0080678c,
                                  *(char **)(PTR_PTR_007bb198 +
                                            (*(int *)&param_1->field_0x368 * 3 +
                                            *(int *)&param_1->field_0x36c) * 0xc + 8),0x1d);
              if (iVar12 != 0) {
                RaiseInternalException
                          (iVar12,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x281);
              }
              iVar12 = thunk_FUN_004ab050();
              uVar2 = *(uint *)(PTR_DAT_007b8310 +
                               (iVar12 + (*(int *)&param_1->field_0x368 * 3 +
                                         *(int *)&param_1->field_0x36c) * 4) * 8);
              thunk_FUN_004abce0(puVar15,0xc,uVar2,uVar2,'\0');
              STT3DSprC::SetCurFase((STT3DSprC *)puVar15,'\f',uVar2);
              STT3DSprC::StartShow((STT3DSprC *)puVar15,0xc,g_playSystem_00802A38->field_00E4);
            }
            STT3DSprC::sub_004ACEF0((STT3DSprC *)puVar15,DAT_008073cc);
            iVar12 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)puVar15,0x10,DAT_0080678c,
                                (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&param_1->field_0x36c],0x1d);
            if (iVar12 != 0) {
              RaiseInternalException
                        (iVar12,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_embryo.cpp",0x289);
            }
            thunk_FUN_004abce0(puVar15,0x10,
                               *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),
                               *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
            STT3DSprC::SetCurFase
                      ((STT3DSprC *)puVar15,'\x10',
                       *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
            STT3DSprC::StartShow((STT3DSprC *)puVar15,0x10,g_playSystem_00802A38->field_00E4);
            STT3DSprC::sub_004ACF50((STT3DSprC *)puVar15,'\x10');
          }
          puVar15 = &param_1->field_01D5;
          param_1->field_02DC = 1;
          STT3DSprC::StopShow((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0);
          STT3DSprC::UnLoadSequence((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0);
          thunk_FUN_004ad5e0((int)puVar15);
          if (*(int *)&param_1->field_0x370 != 0) {
            STT3DSprC::StopShow((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 - 1);
            STT3DSprC::UnLoadSequence((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 - 1);
          }
        }
      }
      else if (iVar9 == this->field_0020->field_020C) {
        STT3DSprC::SetCurFase(this,'\x0e',0);
        STT3DSprC::StopShow(param_1->field_035C,0xe);
        thunk_FUN_004ad430((int)param_1->field_035C);
        if (param_1->field_02DC != 0) {
          sub_0041C5A0(param_1);
          TLOBaseTy::sub_00417D30(param_1);
          if (param_1->field_002C == 0) {
            iVar12 = 1;
          }
          else if (param_1->field_002C == 1) {
            iVar12 = 2;
          }
          local_14 = param_1->field_0261;
          if ((int)local_14 < (int)(local_14 + iVar12)) {
            do {
              iVar9 = param_1->field_025D;
              if (iVar9 < iVar9 + iVar12) {
                do {
                  thunk_FUN_00496140((short)iVar9,(short)local_14,*(short *)&param_1->field_0265);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < iVar12 + param_1->field_025D);
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < param_1->field_0261 + iVar12);
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar12 = thunk_FUN_004b7520(CONCAT31((int3)((uint)param_1->field_0259 >> 8),
                                               *(undefined1 *)&param_1->field_0024),
                                      param_1->field_0259);
          if (iVar12 != 0) {
            dVar3 = (*param_1->vtable->slot_2C)(param_1);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            thunk_FUN_004b7710(CONCAT31((int3)(dVar3 >> 8),*(undefined1 *)&param_1->field_0024),
                               dVar3);
          }
          if ((99 < *(int *)&param_1->field_0x2a8) && (param_1->field_02E8 == 0)) {
            STPlaySystemC::CreateGameObject
                      (g_playSystem_00802A38,param_1->field_0245,0,&local_18,&param_1->field_0245,0)
            ;
            param_1->field_02E4 = 1;
            iVar12 = (*param_1->vtable->vfunc_08)();
            uVar7 = 0;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar10 = extraout_var_00;
            if (iVar12 != 0) {
              /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004353b0(CONCAT31((int3)((uint)local_18 >> 8),
                                          *(undefined1 *)&param_1->field_0024),
                                 CONCAT22((short)((uint)iVar12 >> 0x10),param_1->field_0032),
                                 CONCAT22(extraout_var_02,*(undefined2 *)(local_18 + 0x32)));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar10 = extraout_var_01;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar7 = extraout_var;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            STAllPlayersC::ReplaceObject
                      (g_allPlayers_007FA174,*(char *)&param_1->field_0024,
                       CONCAT22(uVar10,param_1->field_0032),
                       CONCAT22(uVar7,*(undefined2 *)(local_18 + 0x32)));
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
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 6,DAT_0080678c,
                              "si_emb3",0x1d);
          if (iVar12 != 0) {
            RaiseInternalException
                      (iVar12,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x2cf);
          }
          wsprintfA(local_7c,"si_emb3_id%1d",param_1->field_0024);
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 5,DAT_0080678c,local_7c
                              ,0x1d);
          if (iVar12 != 0) {
            iVar9 = 0x2d1;
LAB_004d3b23:
            RaiseInternalException
                      (iVar12,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",iVar9);
          }
        }
        else if (param_1->field_0241 == 1) {
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 6,DAT_0080678c,
                              "si_emb2",0x1d);
          if (iVar12 != 0) {
            RaiseInternalException
                      (iVar12,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x2d5);
          }
          wsprintfA(local_7c,"si_emb2_id%1d",param_1->field_0024);
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 5,DAT_0080678c,local_7c
                              ,0x1d);
          if (iVar12 != 0) {
            iVar9 = 0x2d7;
            goto LAB_004d3b23;
          }
        }
        puVar15 = &param_1->field_01D5;
        iVar12 = param_1->field_02EC + param_1->field_0241 * 4;
        thunk_FUN_004abce0(puVar15,*(byte *)&param_1->field_02F0,
                           *(int *)(*(int *)&param_1->field_0x364 + iVar12 * 8),
                           *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar12 * 8),'\0');
        STT3DSprC::SetCurFase
                  ((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        STT3DSprC::StartShow
                  ((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0,
                   g_playSystem_00802A38->field_00E4);
        iVar12 = param_1->field_02EC + param_1->field_0241 * 4;
        thunk_FUN_004abce0(puVar15,*(char *)&param_1->field_02F0 - 1,
                           *(int *)(*(int *)&param_1->field_0x364 + iVar12 * 8),
                           *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar12 * 8),'\0');
        STT3DSprC::SetCurFase
                  ((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 + -1,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        cVar1 = *(char *)&param_1->field_02F0;
        uVar2 = g_playSystem_00802A38->field_00E4;
LAB_004d4378:
        STT3DSprC::StartShow((STT3DSprC *)&param_1->field_01D5,cVar1 - 1,uVar2);
        break;
      case CASE_1:
        iVar12 = param_1->field_0241 * 0x20;
        param_1->field_02EC = CASE_2;
        puVar15 = &param_1->field_01D5;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004abce0(puVar15,*(byte *)&param_1->field_02F0,
                           *(int *)(iVar12 + 0x10 + *(int *)&param_1->field_0x364),
                           *(int *)(iVar12 + 0x14 + *(int *)&param_1->field_0x364),'\0');
        STT3DSprC::SetCurFase
                  ((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        STT3DSprC::StartShow
                  ((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0,
                   g_playSystem_00802A38->field_00E4);
        if (*(int *)&param_1->field_0x370 != 0) {
          iVar12 = param_1->field_02EC + param_1->field_0241 * 4;
          thunk_FUN_004abce0(puVar15,*(char *)&param_1->field_02F0 - 1,
                             *(int *)(*(int *)&param_1->field_0x364 + iVar12 * 8),
                             *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar12 * 8),'\0');
          STT3DSprC::SetCurFase
                    ((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 + -1,
                     *(uint *)(*(int *)&param_1->field_0x364 +
                              (param_1->field_02EC + param_1->field_0241 * 4) * 8));
          STT3DSprC::StartShow
                    ((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 - 1,
                     g_playSystem_00802A38->field_00E4);
        }
        (*param_1->vtable->vfunc_90)(3,0x362);
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
             (iVar12 = thunk_FUN_004d3290((int)param_1), iVar12 != 0)) {
            param_1->field_02EC = CASE_3;
            if (*(int *)&param_1->field_0x370 == 0) {
              (*param_1->vtable->vfunc_90)(3,0x361);
            }
            iVar12 = param_1->field_0259;
            if (((iVar12 == 0x6c) && (param_1->field_0251 == 3)) ||
               ((0x53 < iVar12 && (iVar12 < 0x5b)))) {
LAB_004d3f38:
              if (*(int *)&param_1->field_0x370 != 0) goto LAB_004d3f76;
            }
            else {
              puVar15 = &param_1->field_01D5;
              thunk_FUN_004ac6b0(puVar15,*(char *)&param_1->field_02F0);
              iVar12 = param_1->field_02EC + param_1->field_0241 * 4;
              thunk_FUN_004abce0(puVar15,*(byte *)&param_1->field_02F0,
                                 *(int *)(*(int *)&param_1->field_0x364 + iVar12 * 8),
                                 *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar12 * 8),'\0');
              STT3DSprC::SetCurFase
                        ((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0,
                         *(uint *)(*(int *)&param_1->field_0x364 +
                                  (param_1->field_02EC + param_1->field_0241 * 4) * 8));
              STT3DSprC::StartShow
                        ((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0,
                         g_playSystem_00802A38->field_00E4);
              if (*(int *)&param_1->field_0x370 != 0) {
                thunk_FUN_004ac6b0(puVar15,*(char *)&param_1->field_02F0 + -1);
                iVar12 = param_1->field_02EC + param_1->field_0241 * 4;
                thunk_FUN_004abce0(puVar15,*(char *)&param_1->field_02F0 - 1,
                                   *(int *)(*(int *)&param_1->field_0x364 + iVar12 * 8),
                                   *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar12 * 8),'\0');
                STT3DSprC::SetCurFase
                          ((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 + -1,
                           *(uint *)(*(int *)&param_1->field_0x364 +
                                    (param_1->field_02EC + param_1->field_0241 * 4) * 8));
                STT3DSprC::StartShow
                          ((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 - 1,
                           g_playSystem_00802A38->field_00E4);
                goto LAB_004d3f38;
              }
            }
            piVar8 = (int *)&param_1->field_0x350;
            piVar13 = (int *)&param_1->field_0x308;
            local_14 = 3;
            do {
              if (*piVar13 != 0) {
                *piVar13 = 0;
                thunk_FUN_004ad430(*piVar8);
              }
              piVar8 = piVar8 + 1;
              piVar13 = piVar13 + 4;
              local_14 = local_14 - 1;
            } while (local_14 != 0);
          }
LAB_004d3f76:
          if (((99 < *(int *)&param_1->field_0x2a8) && (param_1->field_02E8 == 0)) &&
             ((iVar12 = thunk_FUN_004d3290((int)param_1), iVar12 == 0 &&
              (DAT_00811798 != (void *)0x0)))) {
            thunk_FUN_00621580(DAT_00811798,param_1->field_0024,8);
          }
        }
        break;
      case CASE_3:
        if (((param_1->field_035C->field_001C & 0x4000) == 0) &&
           (*(int *)&param_1->field_0x2e0 == 0)) {
          puVar15 = &param_1->field_01D5;
          *(undefined4 *)&param_1->field_0x2e0 = 1;
          uVar2 = thunk_FUN_004ac910(puVar15,*(char *)&param_1->field_02F0);
          STT3DSprC::StopShow((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0);
          STT3DSprC::UnLoadSequence((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0);
          if (*(int *)&param_1->field_0x370 != 0) {
            STT3DSprC::StopShow((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 - 1);
            STT3DSprC::UnLoadSequence((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 - 1);
          }
          (*param_1->vtable->vfunc_90)(3,0x362);
          thunk_FUN_004abce0(param_1->field_035C,0xe,0,
                             *(int *)param_1->field_035C->field_0020->field_01F8 + -1,'\0');
          STT3DSprC::SetCurFase(param_1->field_035C,'\x0e',0);
          STT3DSprC::StartShow(param_1->field_035C,0xe,g_playSystem_00802A38->field_00E4);
          thunk_FUN_004ad460(param_1->field_035C,0);
          iVar12 = (-(uint)(*(int *)&param_1->field_0x370 != 0) & 3) + 6;
          param_1->field_02F4 = iVar12;
          STT3DSprC::UnLoadSequence((STT3DSprC *)puVar15,(byte)iVar12);
          uVar6 = param_1->field_02F4;
          iVar12 = thunk_FUN_004ad650((int)puVar15);
          uVar4 = thunk_FUN_004ad650((int)param_1->field_035C);
          FUN_006ea340((void *)param_1->field_0211,uVar4,iVar12,uVar6);
          param_1->field_02F0 = (-(uint)(*(int *)&param_1->field_0x370 != 0) & 4) + 7;
          iVar12 = param_1->field_0259;
          if (((iVar12 != 0x6c) || (param_1->field_0251 != 3)) &&
             ((iVar12 < 0x54 || (0x5a < iVar12)))) {
            iVar12 = param_1->field_0241;
            if (*(int *)&param_1->field_0x370 == 0) {
              if (iVar12 == 0) {
                iVar12 = STT3DSprC::LoadSequence
                                   ((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0,DAT_0080678c,
                                    "tlo_emb2",0x1d);
                if (iVar12 != 0) {
                  iVar9 = 0x342;
                  goto cf_error_exit_004D428D;
                }
              }
              else if ((iVar12 == 1) &&
                      (iVar12 = STT3DSprC::LoadSequence
                                          ((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0,
                                           DAT_0080678c,"tlo_emb3",0x1d), iVar12 != 0)) {
                iVar9 = 0x343;
cf_error_exit_004D428D:
                RaiseInternalException
                          (iVar12,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",iVar9);
              }
            }
            else if (iVar12 == 0) {
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0,DAT_0080678c,
                                  "si_emb3",0x1d);
              if (iVar12 != 0) {
                RaiseInternalException
                          (iVar12,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x334);
              }
              wsprintfA(local_7c,"si_emb3_id%1d",param_1->field_0024);
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 - 1,
                                  DAT_0080678c,local_7c,0x1d);
              if (iVar12 != 0) {
                iVar9 = 0x336;
                goto cf_error_exit_004D428D;
              }
            }
            else if (iVar12 == 1) {
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0,DAT_0080678c,
                                  "si_emb2",0x1d);
              if (iVar12 != 0) {
                RaiseInternalException
                          (iVar12,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x33a);
              }
              wsprintfA(local_7c,"si_emb2_id%1d",param_1->field_0024);
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 - 1,
                                  DAT_0080678c,local_7c,0x1d);
              if (iVar12 != 0) {
                iVar9 = 0x33c;
                goto cf_error_exit_004D428D;
              }
            }
            thunk_FUN_004ac6b0(puVar15,*(char *)&param_1->field_02F0);
            iVar12 = param_1->field_02EC + param_1->field_0241 * 4;
            thunk_FUN_004abce0(puVar15,*(byte *)&param_1->field_02F0,
                               *(int *)(*(int *)&param_1->field_0x364 + iVar12 * 8),
                               *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar12 * 8),'\0');
            STT3DSprC::SetCurFase((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0,uVar2);
            STT3DSprC::StartShow
                      ((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0,
                       g_playSystem_00802A38->field_00E4);
            if (*(int *)&param_1->field_0x370 != 0) {
              thunk_FUN_004ac6b0(puVar15,*(char *)&param_1->field_02F0 + -1);
              iVar12 = param_1->field_02EC + param_1->field_0241 * 4;
              thunk_FUN_004abce0(puVar15,*(char *)&param_1->field_02F0 - 1,
                                 *(int *)(*(int *)&param_1->field_0x364 + iVar12 * 8),
                                 *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar12 * 8),'\0');
              STT3DSprC::SetCurFase((STT3DSprC *)puVar15,*(char *)&param_1->field_02F0 + -1,uVar2);
              cVar1 = *(char *)&param_1->field_02F0;
              uVar2 = g_playSystem_00802A38->field_00E4;
              goto LAB_004d4378;
            }
          }
        }
      }
    }
    if ((param_1->field_02EC == CASE_2) && ((param_1->field_01F1 & 0x4000) != 0)) {
      if ((*(int *)&param_1->field_0x2a8 < 100) &&
         ((*(int *)&param_1->field_0x2a4 == 0 && (*(int *)&param_1->field_0x2a0 == 0)))) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar12 = thunk_FUN_004b7520(CONCAT31((int3)((uint)param_1->field_0259 >> 8),
                                             *(undefined1 *)&param_1->field_0024),
                                    param_1->field_0259);
        if (iVar12 == 0) {
LAB_004d43f5:
          uVar5 = 1;
        }
        else {
          iVar12 = thunk_FUN_004b79c0(*(char *)&param_1->field_0024,param_1->field_0018);
          uVar5 = 0;
          if (iVar12 != 0) goto LAB_004d43f5;
        }
        *(undefined4 *)&param_1->field_0x2b8 = uVar5;
        uVar2 = GetPlayerRaceId(*(char *)&param_1->field_0024);
        local_14 = *(uint *)(&DAT_007e3dc0 +
                            ((uVar2 & 0xff) + *(int *)&param_1->field_0x368 * 3) * 4);
        if (DAT_0080c51e != 0) {
          uVar2 = 0;
          iVar12 = 0;
          do {
            uVar6 = GetPlayerRaceId(*(char *)&param_1->field_0024);
            if (uVar2 < *(uint *)(&DAT_007e3dc0 + ((uVar6 & 0xff) + iVar12) * 4)) {
              uVar2 = GetPlayerRaceId(*(char *)&param_1->field_0024);
              uVar2 = *(uint *)(&DAT_007e3dc0 + ((uVar2 & 0xff) + iVar12) * 4);
            }
            iVar12 = iVar12 + 3;
          } while (iVar12 < 0xc6);
          local_14 = (local_14 * 0x5dc) / uVar2;
          if (0x5dc < local_14) {
            local_14 = 0x5dc;
          }
        }
        uVar2 = local_14 / 100;
        if ((*(int *)&param_1->field_0x2b8 == 0) &&
           (uVar2 = uVar2 << 2, DAT_00811798 != (void *)0x0)) {
          thunk_FUN_00621580(DAT_00811798,param_1->field_0024,5);
        }
        if (*(int *)&param_1->field_0x2b0 + uVar2 <= g_playSystem_00802A38->field_00E4) {
          *(uint *)&param_1->field_0x2b0 = g_playSystem_00802A38->field_00E4;
          iVar9 = (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 4;
          iVar12 = *(int *)(&DAT_008545ac + iVar9);
          local_14 = iVar12 / 100;
          if ((iVar12 != 0) && (local_14 == 0)) {
            local_14 = 1;
          }
          local_1c = *(int *)(&DAT_007e1c50 + iVar9);
          local_8 = local_1c / 100;
          if ((local_1c != 0) && (local_8 == 0)) {
            local_8 = 1;
          }
          iVar11 = *(int *)(&DAT_007e24fc + iVar9);
          local_c = iVar11 / 100;
          if ((iVar11 != 0) && (local_c == 0)) {
            local_c = 1;
          }
          iVar9 = *(int *)(&DAT_007e3160 + iVar9);
          local_10 = iVar9 / 100;
          if ((iVar9 != 0) && (local_10 == 0)) {
            local_10 = 1;
          }
          if (iVar12 <= (int)(local_14 + param_1->field_02CC)) {
            local_14 = iVar12 - param_1->field_02CC;
          }
          if (local_1c <= param_1->field_02D0 + local_8) {
            local_8 = local_1c - param_1->field_02D0;
          }
          if (iVar11 <= param_1->field_02D4 + local_c) {
            local_c = iVar11 - param_1->field_02D4;
          }
          if (iVar9 <= param_1->field_02D8 + local_10) {
            local_10 = iVar9 - param_1->field_02D8;
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
             (iVar12 = thunk_FUN_004d7b10(*(char *)&param_1->field_0024,0), (int)local_14 <= iVar12)
             ) {
            if ((local_8 == 0) ||
               (iVar12 = thunk_FUN_004d7b50(*(char *)&param_1->field_0024,0), local_8 <= iVar12)) {
              if ((local_c == 0) ||
                 (iVar12 = thunk_FUN_004d7b90(*(char *)&param_1->field_0024,0), local_c <= iVar12))
              {
                if ((local_10 != 0) &&
                   (iVar12 = thunk_FUN_004d7bd0(*(char *)&param_1->field_0024,0), iVar12 < local_10)
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
            if (DAT_00811798 != (void *)0x0) {
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
              thunk_FUN_004d7c10(*(char *)&param_1->field_0024,0,param_1->field_0018,local_14);
            }
            if (local_8 != 0) {
              thunk_FUN_004d7d30(*(char *)&param_1->field_0024,0,param_1->field_0018,local_8);
            }
            if (local_c != 0) {
              thunk_FUN_004d7e50(*(char *)&param_1->field_0024,0,param_1->field_0018,local_c);
            }
            if (local_10 != 0) {
              thunk_FUN_004d7f70(*(char *)&param_1->field_0024,0,param_1->field_0018,local_10);
            }
            param_1->field_02CC = param_1->field_02CC + local_14;
            param_1->field_02D8 = param_1->field_02D8 + local_10;
            param_1->field_02D0 = param_1->field_02D0 + local_8;
            param_1->field_02D4 = param_1->field_02D4 + local_c;
            if (param_1->field_0024 == (uint)(byte)param_1->field_0010->field_112D) {
              thunk_FUN_004d8b70((char)param_1->field_0024);
            }
            if (99 < *(int *)&param_1->field_0x2a8) {
              *(undefined4 *)&param_1->field_0x2a8 = 100;
              thunk_FUN_004d7570(*(char *)&param_1->field_0024,0,param_1->field_0018);
              if (param_1->field_0024 == (uint)(byte)param_1->field_0010->field_112D) {
                thunk_FUN_0052af50(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
                uVar2 = GetPlayerRaceId(*(char *)&param_1->field_0024);
                uVar2 = uVar2 & 0xff;
                if (uVar2 == 1) {
                  (*param_1->vtable->vfunc_90)(6,0x62);
                }
                else if (uVar2 == 2) {
                  (*param_1->vtable->vfunc_90)(6,99);
                }
                else if (uVar2 == 3) {
                  (*param_1->vtable->vfunc_90)(6,100);
                }
              }
            }
          }
          if (*(int *)&param_1->field_0x2a8 < 100) {
            iVar12 = (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 4;
            iVar9 = *(int *)(&DAT_008545ac + iVar12) - param_1->field_02CC;
            iVar14 = *(int *)(&DAT_007e1c50 + iVar12) - param_1->field_02D0;
            iVar11 = *(int *)(&DAT_007e24fc + iVar12) - param_1->field_02D4;
            iVar12 = *(int *)(&DAT_007e3160 + iVar12) - param_1->field_02D8;
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            if (iVar14 < 0) {
              iVar14 = 0;
            }
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            if (iVar12 < 0) {
              iVar12 = 0;
            }
            thunk_FUN_004d76e0(*(char *)&param_1->field_0024,0,param_1->field_0018,iVar9,iVar14,
                               iVar11,iVar12);
          }
        }
      }
      if (*(int *)&param_1->field_0x370 == 0) {
        piVar8 = (int *)&param_1->field_0x350;
        piVar13 = (int *)&param_1->field_0x308;
        local_14 = 3;
        do {
          if (*piVar13 == 0) {
            if (((((uint)piVar13[1] <= g_playSystem_00802A38->field_00E4) &&
                 (*(int *)&param_1->field_0x2b4 != 0)) && (*(int *)&param_1->field_0x2a8 < 100)) &&
               ((*(int *)&param_1->field_0x2a4 == 0 && (*(int *)&param_1->field_0x2a0 == 0)))) {
              (*param_1->vtable->vfunc_90)(3,0x363);
              *piVar13 = 1;
              uVar2 = param_1->field_001C * 0x41c64e6d + 0x3039;
              param_1->field_001C = uVar2;
              piVar13[3] = (uVar2 >> 0x10) % 3 + 1;
              uVar2 = param_1->field_001C * 0x41c64e6d + 0x3039;
              param_1->field_001C = uVar2;
              uVar2 = (uVar2 >> 0x10) %
                      *(uint *)(&DAT_00797748 + *(int *)&param_1->field_0x368 * 0x44);
              piVar13[2] = uVar2;
              iVar12 = *(int *)&param_1->field_0x368 * 0x44 + uVar2 * 8;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004ad380((void *)*piVar8,
                                 (param_1->field_0300 - *(int *)(&DAT_0079774c + iVar12)) + 0x10,
                                 (param_1->field_0304 - *(int *)(&DAT_00797750 + iVar12)) + 0x15);
              thunk_FUN_004abce0((void *)*piVar8,0xe,0,0x13,'\0');
              STT3DSprC::SetCurFase((STT3DSprC *)*piVar8,'\x0e',0);
              STT3DSprC::StartShow((STT3DSprC *)*piVar8,0xe,g_playSystem_00802A38->field_00E4);
              thunk_FUN_004ad460((void *)*piVar8,0);
            }
          }
          else {
            iVar12 = *(int *)(*piVar8 + 0x20);
            if (*(int *)(iVar12 + 0x210) < *(int *)(iVar12 + 0x20c)) {
              if (*(int *)(iVar12 + 0x210) == *(int *)(iVar12 + 0x208)) {
                (*param_1->vtable->vfunc_90)(3,0x363);
              }
            }
            else {
              iVar12 = piVar13[3];
              piVar13[3] = iVar12 + -1;
              if (iVar12 + -1 == 0) {
                *piVar13 = 0;
                uVar2 = param_1->field_001C * 0x41c64e6d + 0x3039;
                param_1->field_001C = uVar2;
                piVar13[1] = (uVar2 >> 0x10) % 0x65 + 0x19 + g_playSystem_00802A38->field_00E4;
                thunk_FUN_004ad430(*piVar8);
              }
            }
          }
          thunk_FUN_004ac9e0((void *)*piVar8,g_playSystem_00802A38->field_00E4);
          piVar8 = piVar8 + 1;
          piVar13 = piVar13 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    thunk_FUN_004ac9e0(param_1->field_035C,g_playSystem_00802A38->field_00E4);
    if (*(int *)&param_1->field_0x2a0 == 0) {
      (*param_1->vtable->vfunc_D8)();
      goto LAB_004d4d4f;
    }
  }
  puVar15 = &param_1->field_01D5;
  iVar12 = thunk_FUN_004ac910(puVar15,'\x06');
  if ((iVar12 < *(int *)&param_1->field_01F5->field_0xec) ||
     (iVar12 = thunk_FUN_004ac910(puVar15,'\a'), iVar12 < *(int *)&param_1->field_01F5->field_0x110)
     ) {
    (*param_1->vtable->vfunc_D8)();
    iVar12 = thunk_FUN_004ac910(puVar15,'\x06');
    if (iVar12 == 0x11) {
      STT3DSprC::StopShow((STT3DSprC *)puVar15,0x10);
      STT3DSprC::StopShow((STT3DSprC *)puVar15,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar15,0xd);
      STT3DSprC::StopShow((STT3DSprC *)puVar15,0xc);
      if ((*(int *)&param_1->field_0x370 == 0) ||
         (STT3DSprC::StopShow((STT3DSprC *)puVar15,*(byte *)&param_1->field_02F0),
         *(int *)&param_1->field_0x370 == 0)) {
        puVar15 = (undefined4 *)&param_1->field_0x350;
        iVar12 = 3;
        do {
          STT3DSprC::StopShow((STT3DSprC *)*puVar15,0xe);
          puVar15 = puVar15 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      iVar12 = 0;
      uVar2 = GetPlayerRaceId(*(char *)&param_1->field_0024);
      thunk_FUN_0062b830((int)param_1->field_0041,(int)param_1->field_0043,(int)param_1->field_0045,
                         param_1->field_0259,(int *)param_1,0xffffffff,0xffffffff,uVar2 & 0xff,
                         iVar12);
    }
    else {
      iVar12 = thunk_FUN_004ac910(puVar15,'\x06');
      if (iVar12 == 0x23) {
        if (param_1->field_002C == 1) {
          text = "expl_bbt1";
        }
        else {
          text = "expl_bbt0";
        }
        iVar12 = STT3DSprC::LoadSequence((STT3DSprC *)puVar15,7,DAT_00806764,text,0x1d);
        if (iVar12 != 0) {
          return 0xffff;
        }
        STT3DSprC::StartShow((STT3DSprC *)puVar15,7,g_playSystem_00802A38->field_00E4);
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

