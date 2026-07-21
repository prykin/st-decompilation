
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_embryo.cpp
   Diagnostic line evidence: 606 | 623 | 627 | 641 | 649 | 719 | 721 | 725 | 820 | 826 | 834
   (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004d32c0(STJellyGunC *param_1)

{
  char cVar1;
  STT3DSprC *this;
  int iVar2;
  uint uVar3;
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
  if (param_1[1].field_000C == (SystemClassTy *)0x0) {
    this = *(STT3DSprC **)&param_1[1].field_0xc8;
    if ((this->field_001C & 0x4000) != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar9 = *(int *)(this->field_0020 + 0x210);
      if (iVar9 == 0x15) {
        if (((*(uint *)&param_1->field_0x1f1 & 0x4000) == 0) &&
           (*(int *)&param_1[1].field_0058 == 2)) {
          puVar15 = &param_1->field_01D5;
          thunk_FUN_004abce0(puVar15,0xe,
                             *(int *)(&DAT_0079104c + *(int *)&param_1[1].field_0xd4 * 4),
                             *(int *)(&DAT_0079104c + *(int *)&param_1[1].field_0xd4 * 4),'\0');
          STT3DSprC::SetCurFase
                    ((STT3DSprC *)puVar15,'\x0e',
                     *(uint *)(&DAT_0079104c + *(int *)&param_1[1].field_0xd4 * 4));
          STT3DSprC::StartShow((STT3DSprC *)puVar15,0xe,PTR_00802a38->field_00E4);
          thunk_FUN_004acef0(puVar15,DAT_008073cc);
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)puVar15,0x10,DAT_0080678c,
                              (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&param_1[1].field_0xd8],0x1d);
          if (iVar12 != 0) {
            RaiseInternalException
                      (iVar12,g_overwriteContext_007ED77C,
                       s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x25e);
          }
          thunk_FUN_004abce0(puVar15,0x10,
                             *(int *)(&DAT_0079104c + *(int *)&param_1[1].field_0xd4 * 4),
                             *(int *)(&DAT_0079104c + *(int *)&param_1[1].field_0xd4 * 4),'\0');
          STT3DSprC::SetCurFase
                    ((STT3DSprC *)puVar15,'\x10',
                     *(uint *)(&DAT_0079104c + *(int *)&param_1[1].field_0xd4 * 4));
          STT3DSprC::StartShow((STT3DSprC *)puVar15,0x10,PTR_00802a38->field_00E4);
          thunk_FUN_004acf50(puVar15,'\x10');
          iVar12 = 3;
          piVar8 = (int *)&param_1[1].field_0x78;
          do {
            uVar3 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
            *(uint *)&param_1->field_0x1c = uVar3;
            iVar12 = iVar12 + -1;
            *piVar8 = (uVar3 >> 0x10) % 0x65 + 0x19 + PTR_00802a38->field_00E4;
            piVar8 = piVar8 + 4;
          } while (iVar12 != 0);
          if (DAT_00811784 != (void *)0x0) {
            uVar3 = GetPlayerRaceId(param_1->field_0x24);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            thunk_FUN_005f23d0(DAT_00811784,*(int *)((int)&param_1->field_025A + 3),
                               *(int *)&param_1->field_0x261,*(int *)&param_1->field_0x265,
                               CONCAT31((int3)((uint)extraout_EDX >> 8),param_1->field_0x2c),
                               *(int *)&param_1->field_0x259,uVar3 & 0xff);
          }
        }
        else if ((*(int *)&param_1[1].field_0058 == 3) &&
                (*(int *)((int)&param_1[1].field_0047 + 1) == 0)) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((*(int *)&param_1[1].field_0x14 < 100) ||
             (iVar9._0_2_ = param_1[1].field_0054, iVar9._2_2_ = param_1[1].field_0056, iVar9 != 0))
          {
            puVar15 = &param_1->field_01D5;
            STT3DSprC::StopShow((STT3DSprC *)puVar15,0xe);
            STT3DSprC::StopShow((STT3DSprC *)puVar15,0xd);
            STT3DSprC::StopShow((STT3DSprC *)puVar15,0xc);
            STT3DSprC::StopShow((STT3DSprC *)puVar15,0x10);
            iVar12 = (*param_1->vtable->vfunc_08)();
            if (iVar12 != 0) {
              (*param_1->vtable->vfunc_E8)(0);
            }
          }
          else {
            if ((*(char **)(PTR_PTR_007bb198 +
                           (*(int *)&param_1[1].field_0xd4 * 3 + *(int *)&param_1[1].field_0xd8) *
                           0xc) != (char *)0x0) &&
               (iVar12 = STT3DSprC::LoadSequence
                                   ((STT3DSprC *)&param_1->field_01D5,0xe,DAT_0080678c,
                                    *(char **)(PTR_PTR_007bb198 +
                                              (*(int *)&param_1[1].field_0xd4 * 3 +
                                              *(int *)&param_1[1].field_0xd8) * 0xc),0x1d),
               iVar12 != 0)) {
              RaiseInternalException
                        (iVar12,g_overwriteContext_007ED77C,
                         s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x26f);
            }
            if (*(int *)(PTR_PTR_007bb198 +
                        (*(int *)&param_1[1].field_0xd4 * 3 + *(int *)&param_1[1].field_0xd8) * 0xc
                        + 4) != 0) {
              wsprintfA(local_7c,s__s_1i_007ac908,
                        *(int *)(PTR_PTR_007bb198 +
                                (*(int *)&param_1[1].field_0xd4 * 3 + *(int *)&param_1[1].field_0xd8
                                ) * 0xc + 4),*(undefined4 *)&param_1->field_0x26d);
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)&param_1->field_01D5,0xd,DAT_0080678c,local_7c,0x1d);
              if (iVar12 != 0) {
                RaiseInternalException
                          (iVar12,g_overwriteContext_007ED77C,
                           s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x273);
              }
            }
            iVar12 = thunk_FUN_004ab050();
            puVar15 = &param_1->field_01D5;
            uVar3 = *(uint *)(PTR_DAT_007b5170 +
                             (iVar12 + (*(int *)&param_1[1].field_0xd4 * 3 +
                                       *(int *)&param_1[1].field_0xd8) * 4) * 8);
            thunk_FUN_004abce0(puVar15,0xe,uVar3,uVar3,'\0');
            STT3DSprC::SetCurFase((STT3DSprC *)puVar15,'\x0e',uVar3);
            STT3DSprC::StartShow((STT3DSprC *)puVar15,0xe,PTR_00802a38->field_00E4);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (**(int **)(*(int *)&param_1->field_0x1f5 + 0x1d4) < (int)uVar3) {
              uVar3 = 0;
            }
            thunk_FUN_004abce0(puVar15,0xd,uVar3,uVar3,'\0');
            STT3DSprC::SetCurFase((STT3DSprC *)puVar15,'\r',uVar3);
            STT3DSprC::StartShow((STT3DSprC *)puVar15,0xd,PTR_00802a38->field_00E4);
            if (*(char **)(PTR_PTR_007bb198 +
                          (*(int *)&param_1[1].field_0xd4 * 3 + *(int *)&param_1[1].field_0xd8) *
                          0xc + 8) != (char *)0x0) {
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar15,0xc,DAT_0080678c,
                                  *(char **)(PTR_PTR_007bb198 +
                                            (*(int *)&param_1[1].field_0xd4 * 3 +
                                            *(int *)&param_1[1].field_0xd8) * 0xc + 8),0x1d);
              if (iVar12 != 0) {
                RaiseInternalException
                          (iVar12,g_overwriteContext_007ED77C,
                           s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x281);
              }
              iVar12 = thunk_FUN_004ab050();
              uVar3 = *(uint *)(PTR_DAT_007b8310 +
                               (iVar12 + (*(int *)&param_1[1].field_0xd4 * 3 +
                                         *(int *)&param_1[1].field_0xd8) * 4) * 8);
              thunk_FUN_004abce0(puVar15,0xc,uVar3,uVar3,'\0');
              STT3DSprC::SetCurFase((STT3DSprC *)puVar15,'\f',uVar3);
              STT3DSprC::StartShow((STT3DSprC *)puVar15,0xc,PTR_00802a38->field_00E4);
            }
            thunk_FUN_004acef0(puVar15,DAT_008073cc);
            iVar12 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)puVar15,0x10,DAT_0080678c,
                                (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&param_1[1].field_0xd8],0x1d);
            if (iVar12 != 0) {
              RaiseInternalException
                        (iVar12,g_overwriteContext_007ED77C,
                         s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x289);
            }
            thunk_FUN_004abce0(puVar15,0x10,
                               *(int *)(&DAT_0079104c + *(int *)&param_1[1].field_0xd4 * 4),
                               *(int *)(&DAT_0079104c + *(int *)&param_1[1].field_0xd4 * 4),'\0');
            STT3DSprC::SetCurFase
                      ((STT3DSprC *)puVar15,'\x10',
                       *(uint *)(&DAT_0079104c + *(int *)&param_1[1].field_0xd4 * 4));
            STT3DSprC::StartShow((STT3DSprC *)puVar15,0x10,PTR_00802a38->field_00E4);
            thunk_FUN_004acf50(puVar15,'\x10');
          }
          puVar15 = &param_1->field_01D5;
          *(undefined4 *)((int)&param_1[1].field_0047 + 1) = 1;
          STT3DSprC::StopShow((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1));
          STT3DSprC::UnLoadSequence((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1))
          ;
          thunk_FUN_004ad5e0((int)puVar15);
          if (*(int *)&param_1[1].field_0xdc != 0) {
            STT3DSprC::StopShow((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1) - 1)
            ;
            STT3DSprC::UnLoadSequence
                      ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1) - 1);
          }
        }
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      else if (iVar9 == *(int *)(this->field_0020 + 0x20c)) {
        STT3DSprC::SetCurFase(this,'\x0e',0);
        STT3DSprC::StopShow(*(STT3DSprC **)&param_1[1].field_0xc8,0xe);
        thunk_FUN_004ad430(*(int *)&param_1[1].field_0xc8);
        if (*(int *)((int)&param_1[1].field_0047 + 1) != 0) {
          thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)param_1);
          thunk_FUN_00417d30((int)param_1);
          if (*(int *)&param_1->field_0x2c == 0) {
            iVar12 = 1;
          }
          else if (*(int *)&param_1->field_0x2c == 1) {
            iVar12 = 2;
          }
          local_14 = *(uint *)&param_1->field_0x261;
          if ((int)local_14 < (int)(local_14 + iVar12)) {
            do {
              iVar9 = *(int *)((int)&param_1->field_025A + 3);
              if (iVar9 < iVar9 + iVar12) {
                do {
                  thunk_FUN_00496140((short)iVar9,(short)local_14,*(short *)&param_1->field_0x265);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < iVar12 + *(int *)((int)&param_1->field_025A + 3));
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < *(int *)&param_1->field_0x261 + iVar12);
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar12 = thunk_FUN_004b7520(CONCAT31((int3)(*(Global_sub_004B7520_param_2Enum *)
                                                       &param_1->field_0x259 >> 8),
                                               param_1->field_0x24),
                                      *(Global_sub_004B7520_param_2Enum *)&param_1->field_0x259);
          if (iVar12 != 0) {
            iVar12 = (*param_1->vtable->vfunc_2C)();
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar12 >> 8),param_1->field_0x24),iVar12);
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((99 < *(int *)&param_1[1].field_0x14) &&
             (iVar12._0_2_ = param_1[1].field_0054, iVar12._2_2_ = param_1[1].field_0056,
             iVar12 == 0)) {
            STPlaySystemC::CreateGameObject
                      (PTR_00802a38,*(int *)&param_1->field_0245,0,&local_18,&param_1->field_0245,0)
            ;
            param_1[1].field_0050 = 1;
            param_1[1].field_0052 = 0;
            iVar12 = (*param_1->vtable->vfunc_08)();
            uVar7 = 0;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar10 = extraout_var_00;
            if (iVar12 != 0) {
              /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004353b0(CONCAT31((int3)((uint)local_18 >> 8),param_1->field_0x24),
                                 CONCAT22((short)((uint)iVar12 >> 0x10),
                                          *(undefined2 *)&param_1->field_0x32),
                                 CONCAT22(extraout_var_02,*(undefined2 *)(local_18 + 0x32)));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar10 = extraout_var_01;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar7 = extraout_var;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            STAllPlayersC::ReplaceObject
                      (g_sTAllPlayers_007FA174,param_1->field_0x24,
                       CONCAT22(uVar10,*(undefined2 *)&param_1->field_0x32),
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
    iVar12 = *(int *)((int)&param_1[1].field_005B + 1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*(int *)&param_1->field_0x1f5 + 0x18 + iVar12 * 0x24) ==
        *(int *)(*(int *)&param_1->field_0x1f5 + iVar12 * 0x24 + 0x14)) {
      switch(*(undefined4 *)&param_1[1].field_0058) {
      case 0:
        iVar12 = *(int *)&param_1->field_0x241;
        *(undefined4 *)&param_1[1].field_0058 = 1;
        if (iVar12 == 0) {
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1[1].field_0xdc != 0) & 3U) + 6,DAT_0080678c,
                              s_si_emb3_007bf4f4,0x1d);
          if (iVar12 != 0) {
            RaiseInternalException
                      (iVar12,g_overwriteContext_007ED77C,
                       s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x2cf);
          }
          wsprintfA(local_7c,s_si_emb3_id_1d_007bf4e4,*(undefined4 *)&param_1->field_0x24);
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1[1].field_0xdc != 0) & 3U) + 5,DAT_0080678c,
                              local_7c,0x1d);
          if (iVar12 != 0) {
            iVar9 = 0x2d1;
LAB_004d3b23:
            RaiseInternalException
                      (iVar12,g_overwriteContext_007ED77C,
                       s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,iVar9);
          }
        }
        else if (iVar12 == 1) {
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1[1].field_0xdc != 0) & 3U) + 6,DAT_0080678c,
                              s_si_emb2_007bf510,0x1d);
          if (iVar12 != 0) {
            RaiseInternalException
                      (iVar12,g_overwriteContext_007ED77C,
                       s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x2d5);
          }
          wsprintfA(local_7c,s_si_emb2_id_1d_007bf500,*(undefined4 *)&param_1->field_0x24);
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1[1].field_0xdc != 0) & 3U) + 5,DAT_0080678c,
                              local_7c,0x1d);
          if (iVar12 != 0) {
            iVar9 = 0x2d7;
            goto LAB_004d3b23;
          }
        }
        puVar15 = &param_1->field_01D5;
        iVar12 = *(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4;
        thunk_FUN_004abce0(puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                           *(int *)(*(int *)&param_1[1].field_0xd0 + iVar12 * 8),
                           *(int *)(*(int *)&param_1[1].field_0xd0 + 4 + iVar12 * 8),'\0');
        STT3DSprC::SetCurFase
                  ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1),
                   *(uint *)(*(int *)&param_1[1].field_0xd0 +
                            (*(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4) * 8
                            ));
        STT3DSprC::StartShow
                  ((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                   PTR_00802a38->field_00E4);
        iVar12 = *(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4;
        thunk_FUN_004abce0(puVar15,*(char *)((int)&param_1[1].field_005B + 1) - 1,
                           *(int *)(*(int *)&param_1[1].field_0xd0 + iVar12 * 8),
                           *(int *)(*(int *)&param_1[1].field_0xd0 + 4 + iVar12 * 8),'\0');
        STT3DSprC::SetCurFase
                  ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1) + -1,
                   *(uint *)(*(int *)&param_1[1].field_0xd0 +
                            (*(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4) * 8
                            ));
        cVar1 = *(char *)((int)&param_1[1].field_005B + 1);
        uVar5 = PTR_00802a38->field_00E4;
LAB_004d4378:
        STT3DSprC::StartShow((STT3DSprC *)&param_1->field_01D5,cVar1 - 1,uVar5);
        break;
      case 1:
        iVar12 = *(int *)&param_1->field_0x241 * 0x20;
        *(undefined4 *)&param_1[1].field_0058 = 2;
        puVar15 = &param_1->field_01D5;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004abce0(puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                           *(int *)(iVar12 + 0x10 + *(int *)&param_1[1].field_0xd0),
                           *(int *)(iVar12 + 0x14 + *(int *)&param_1[1].field_0xd0),'\0');
        STT3DSprC::SetCurFase
                  ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1),
                   *(uint *)(*(int *)&param_1[1].field_0xd0 +
                            (*(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4) * 8
                            ));
        STT3DSprC::StartShow
                  ((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                   PTR_00802a38->field_00E4);
        if (*(int *)&param_1[1].field_0xdc != 0) {
          iVar12 = *(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4;
          thunk_FUN_004abce0(puVar15,*(char *)((int)&param_1[1].field_005B + 1) - 1,
                             *(int *)(*(int *)&param_1[1].field_0xd0 + iVar12 * 8),
                             *(int *)(*(int *)&param_1[1].field_0xd0 + 4 + iVar12 * 8),'\0');
          STT3DSprC::SetCurFase
                    ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1) + -1,
                     *(uint *)(*(int *)&param_1[1].field_0xd0 +
                              (*(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4) *
                              8));
          STT3DSprC::StartShow
                    ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1) - 1,
                     PTR_00802a38->field_00E4);
        }
        (*param_1->vtable->vfunc_90)(3,0x362);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004abce0(*(void **)&param_1[1].field_0xc8,0xe,0,
                           **(int **)(*(int *)((int)*(void **)&param_1[1].field_0xc8 + 0x20) + 0x1f8
                                     ) + -1,'\0');
        STT3DSprC::SetCurFase(*(STT3DSprC **)&param_1[1].field_0xc8,'\x0e',0);
        STT3DSprC::StartShow(*(STT3DSprC **)&param_1[1].field_0xc8,0xe,PTR_00802a38->field_00E4);
        thunk_FUN_004ad460(*(void **)&param_1[1].field_0xc8,0);
        break;
      case 2:
        if (99 < *(int *)&param_1[1].field_0x14) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar11._0_2_ = param_1[1].field_0054;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar11._2_2_ = param_1[1].field_0056;
          if ((((iVar11 == 0) && (param_1[1].field_0010 == 0)) &&
              (param_1[1].field_000C == (SystemClassTy *)0x0)) &&
             (iVar12 = thunk_FUN_004d3290((int)param_1), iVar12 != 0)) {
            *(undefined4 *)&param_1[1].field_0058 = 3;
            if (*(int *)&param_1[1].field_0xdc == 0) {
              (*param_1->vtable->vfunc_90)(3,0x361);
            }
            iVar12 = *(int *)&param_1->field_0x259;
            if (((iVar12 == 0x6c) && (*(int *)&param_1->field_0251 == 3)) ||
               ((0x53 < iVar12 && (iVar12 < 0x5b)))) {
LAB_004d3f38:
              if (*(int *)&param_1[1].field_0xdc != 0) goto LAB_004d3f76;
            }
            else {
              puVar15 = &param_1->field_01D5;
              thunk_FUN_004ac6b0(puVar15,*(char *)((int)&param_1[1].field_005B + 1));
              iVar12 = *(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4;
              thunk_FUN_004abce0(puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                                 *(int *)(*(int *)&param_1[1].field_0xd0 + iVar12 * 8),
                                 *(int *)(*(int *)&param_1[1].field_0xd0 + 4 + iVar12 * 8),'\0');
              STT3DSprC::SetCurFase
                        ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1),
                         *(uint *)(*(int *)&param_1[1].field_0xd0 +
                                  (*(int *)&param_1[1].field_0058 +
                                  *(int *)&param_1->field_0x241 * 4) * 8));
              STT3DSprC::StartShow
                        ((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                         PTR_00802a38->field_00E4);
              if (*(int *)&param_1[1].field_0xdc != 0) {
                thunk_FUN_004ac6b0(puVar15,*(char *)((int)&param_1[1].field_005B + 1) + -1);
                iVar12 = *(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4;
                thunk_FUN_004abce0(puVar15,*(char *)((int)&param_1[1].field_005B + 1) - 1,
                                   *(int *)(*(int *)&param_1[1].field_0xd0 + iVar12 * 8),
                                   *(int *)(*(int *)&param_1[1].field_0xd0 + 4 + iVar12 * 8),'\0');
                STT3DSprC::SetCurFase
                          ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1) + -1,
                           *(uint *)(*(int *)&param_1[1].field_0xd0 +
                                    (*(int *)&param_1[1].field_0058 +
                                    *(int *)&param_1->field_0x241 * 4) * 8));
                STT3DSprC::StartShow
                          ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1) - 1,
                           PTR_00802a38->field_00E4);
                goto LAB_004d3f38;
              }
            }
            piVar8 = (int *)&param_1[1].field_0xbc;
            piVar13 = (int *)&param_1[1].field_0x74;
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
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_004d3f76:
          if (((99 < *(int *)&param_1[1].field_0x14) &&
              (iVar14._0_2_ = param_1[1].field_0054, iVar14._2_2_ = param_1[1].field_0056,
              iVar14 == 0)) &&
             ((iVar12 = thunk_FUN_004d3290((int)param_1), iVar12 == 0 &&
              (DAT_00811798 != (void *)0x0)))) {
            thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,8);
          }
        }
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 3:
        if (((*(uint *)(*(int *)&param_1[1].field_0xc8 + 0x1c) & 0x4000) == 0) &&
           (*(int *)((int)&param_1[1].field_004B + 1) == 0)) {
          puVar15 = &param_1->field_01D5;
          *(undefined4 *)((int)&param_1[1].field_004B + 1) = 1;
          uVar3 = thunk_FUN_004ac910(puVar15,*(char *)((int)&param_1[1].field_005B + 1));
          STT3DSprC::StopShow((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1));
          STT3DSprC::UnLoadSequence((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1))
          ;
          if (*(int *)&param_1[1].field_0xdc != 0) {
            STT3DSprC::StopShow((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1) - 1)
            ;
            STT3DSprC::UnLoadSequence
                      ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1) - 1);
          }
          (*param_1->vtable->vfunc_90)(3,0x362);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_004abce0(*(void **)&param_1[1].field_0xc8,0xe,0,
                             **(int **)(*(int *)((int)*(void **)&param_1[1].field_0xc8 + 0x20) +
                                       0x1f8) + -1,'\0');
          STT3DSprC::SetCurFase(*(STT3DSprC **)&param_1[1].field_0xc8,'\x0e',0);
          STT3DSprC::StartShow(*(STT3DSprC **)&param_1[1].field_0xc8,0xe,PTR_00802a38->field_00E4);
          thunk_FUN_004ad460(*(void **)&param_1[1].field_0xc8,0);
          iVar12 = (-(uint)(*(int *)&param_1[1].field_0xdc != 0) & 3) + 6;
          *(int *)((int)&param_1[1].field_005F + 1) = iVar12;
          STT3DSprC::UnLoadSequence((STT3DSprC *)puVar15,(byte)iVar12);
          uVar6 = *(uint *)((int)&param_1[1].field_005F + 1);
          iVar12 = thunk_FUN_004ad650((int)puVar15);
          uVar4 = thunk_FUN_004ad650(*(int *)&param_1[1].field_0xc8);
          FUN_006ea340((void *)param_1->field_0211,uVar4,iVar12,uVar6);
          *(uint *)((int)&param_1[1].field_005B + 1) =
               (-(uint)(*(int *)&param_1[1].field_0xdc != 0) & 4) + 7;
          iVar12 = *(int *)&param_1->field_0x259;
          if (((iVar12 != 0x6c) || (*(int *)&param_1->field_0251 != 3)) &&
             ((iVar12 < 0x54 || (0x5a < iVar12)))) {
            iVar12 = *(int *)&param_1->field_0x241;
            if (*(int *)&param_1[1].field_0xdc == 0) {
              if (iVar12 == 0) {
                iVar12 = STT3DSprC::LoadSequence
                                   ((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                                    DAT_0080678c,s_tlo_emb2_007ad434,0x1d);
                if (iVar12 != 0) {
                  iVar9 = 0x342;
                  goto cf_error_exit_004D428D;
                }
              }
              else if ((iVar12 == 1) &&
                      (iVar12 = STT3DSprC::LoadSequence
                                          ((STT3DSprC *)puVar15,
                                           *(byte *)((int)&param_1[1].field_005B + 1),DAT_0080678c,
                                           s_tlo_emb3_007ad440,0x1d), iVar12 != 0)) {
                iVar9 = 0x343;
cf_error_exit_004D428D:
                RaiseInternalException
                          (iVar12,g_overwriteContext_007ED77C,
                           s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,iVar9);
              }
            }
            else if (iVar12 == 0) {
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                                  DAT_0080678c,s_si_emb3_007bf4f4,0x1d);
              if (iVar12 != 0) {
                RaiseInternalException
                          (iVar12,g_overwriteContext_007ED77C,
                           s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x334);
              }
              wsprintfA(local_7c,s_si_emb3_id_1d_007bf4e4,*(undefined4 *)&param_1->field_0x24);
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar15,
                                  *(char *)((int)&param_1[1].field_005B + 1) - 1,DAT_0080678c,
                                  local_7c,0x1d);
              if (iVar12 != 0) {
                iVar9 = 0x336;
                goto cf_error_exit_004D428D;
              }
            }
            else if (iVar12 == 1) {
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                                  DAT_0080678c,s_si_emb2_007bf510,0x1d);
              if (iVar12 != 0) {
                RaiseInternalException
                          (iVar12,g_overwriteContext_007ED77C,
                           s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x33a);
              }
              wsprintfA(local_7c,s_si_emb2_id_1d_007bf500,*(undefined4 *)&param_1->field_0x24);
              iVar12 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)puVar15,
                                  *(char *)((int)&param_1[1].field_005B + 1) - 1,DAT_0080678c,
                                  local_7c,0x1d);
              if (iVar12 != 0) {
                iVar9 = 0x33c;
                goto cf_error_exit_004D428D;
              }
            }
            thunk_FUN_004ac6b0(puVar15,*(char *)((int)&param_1[1].field_005B + 1));
            iVar12 = *(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4;
            thunk_FUN_004abce0(puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                               *(int *)(*(int *)&param_1[1].field_0xd0 + iVar12 * 8),
                               *(int *)(*(int *)&param_1[1].field_0xd0 + 4 + iVar12 * 8),'\0');
            STT3DSprC::SetCurFase
                      ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1),uVar3);
            STT3DSprC::StartShow
                      ((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1),
                       PTR_00802a38->field_00E4);
            if (*(int *)&param_1[1].field_0xdc != 0) {
              thunk_FUN_004ac6b0(puVar15,*(char *)((int)&param_1[1].field_005B + 1) + -1);
              iVar12 = *(int *)&param_1[1].field_0058 + *(int *)&param_1->field_0x241 * 4;
              thunk_FUN_004abce0(puVar15,*(char *)((int)&param_1[1].field_005B + 1) - 1,
                                 *(int *)(*(int *)&param_1[1].field_0xd0 + iVar12 * 8),
                                 *(int *)(*(int *)&param_1[1].field_0xd0 + 4 + iVar12 * 8),'\0');
              STT3DSprC::SetCurFase
                        ((STT3DSprC *)puVar15,*(char *)((int)&param_1[1].field_005B + 1) + -1,uVar3)
              ;
              cVar1 = *(char *)((int)&param_1[1].field_005B + 1);
              uVar5 = PTR_00802a38->field_00E4;
              goto LAB_004d4378;
            }
          }
        }
      }
    }
    if ((*(int *)&param_1[1].field_0058 == 2) && ((*(uint *)&param_1->field_0x1f1 & 0x4000) != 0)) {
      if ((*(int *)&param_1[1].field_0x14 < 100) &&
         ((param_1[1].field_0010 == 0 && (param_1[1].field_000C == (SystemClassTy *)0x0)))) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar12 = thunk_FUN_004b7520(CONCAT31((int3)(*(Global_sub_004B7520_param_2Enum *)
                                                     &param_1->field_0x259 >> 8),param_1->field_0x24
                                            ),
                                    *(Global_sub_004B7520_param_2Enum *)&param_1->field_0x259);
        if (iVar12 == 0) {
LAB_004d43f5:
          uVar5 = 1;
        }
        else {
          iVar12 = thunk_FUN_004b79c0(param_1->field_0x24,param_1->field_0018);
          uVar5 = 0;
          if (iVar12 != 0) goto LAB_004d43f5;
        }
        *(undefined4 *)&param_1[1].field_0x24 = uVar5;
        uVar3 = GetPlayerRaceId(param_1->field_0x24);
        local_14 = *(uint *)(&DAT_007e3dc0 +
                            ((uVar3 & 0xff) + *(int *)&param_1[1].field_0xd4 * 3) * 4);
        if (DAT_0080c51e != 0) {
          uVar3 = 0;
          iVar12 = 0;
          do {
            uVar6 = GetPlayerRaceId(param_1->field_0x24);
            if (uVar3 < *(uint *)(&DAT_007e3dc0 + ((uVar6 & 0xff) + iVar12) * 4)) {
              uVar3 = GetPlayerRaceId(param_1->field_0x24);
              uVar3 = *(uint *)(&DAT_007e3dc0 + ((uVar3 & 0xff) + iVar12) * 4);
            }
            iVar12 = iVar12 + 3;
          } while (iVar12 < 0xc6);
          local_14 = (local_14 * 0x5dc) / uVar3;
          if (0x5dc < local_14) {
            local_14 = 0x5dc;
          }
        }
        uVar3 = local_14 / 100;
        if ((*(int *)&param_1[1].field_0x24 == 0) &&
           (uVar3 = uVar3 << 2, DAT_00811798 != (void *)0x0)) {
          thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,5);
        }
        if (*(int *)&param_1[1].field_0x1c + uVar3 <= (uint)PTR_00802a38->field_00E4) {
          *(undefined4 *)&param_1[1].field_0x1c = PTR_00802a38->field_00E4;
          iVar9 = (*(int *)&param_1[1].field_0xd4 * 3 + *(int *)&param_1[1].field_0xd8) * 4;
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
          if (iVar12 <= (int)(local_14 + *(int *)&param_1[1].field_0038)) {
            local_14 = iVar12 - *(int *)&param_1[1].field_0038;
          }
          if (local_1c <= *(int *)&param_1[1].field_003C + local_8) {
            local_8 = local_1c - *(int *)&param_1[1].field_003C;
          }
          if (iVar11 <= *(int *)&param_1[1].field_0040 + local_c) {
            local_c = iVar11 - *(int *)&param_1[1].field_0040;
          }
          iVar12 = *(int *)((int)&param_1[1].field_0043 + 1);
          if (iVar9 <= iVar12 + local_10) {
            local_10 = iVar9 - iVar12;
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
          param_1[1].field_0034 = 1;
          param_1[1].field_0036 = 0;
          *(undefined4 *)&param_1[1].field_0x30 = 1;
          *(undefined4 *)&param_1[1].field_0x2c = 1;
          *(undefined4 *)&param_1[1].field_0x28 = 1;
          *(undefined4 *)&param_1[1].field_0x20 = 1;
          if ((local_14 == 0) ||
             (iVar12 = thunk_FUN_004d7b10(param_1->field_0x24,0), (int)local_14 <= iVar12)) {
            if ((local_8 == 0) ||
               (iVar12 = thunk_FUN_004d7b50(param_1->field_0x24,0), local_8 <= iVar12)) {
              if ((local_c == 0) ||
                 (iVar12 = thunk_FUN_004d7b90(param_1->field_0x24,0), local_c <= iVar12)) {
                if ((local_10 != 0) &&
                   (iVar12 = thunk_FUN_004d7bd0(param_1->field_0x24,0), iVar12 < local_10)) {
                  *(undefined4 *)&param_1[1].field_0x20 = 0;
                  param_1[1].field_0034 = 0;
                  param_1[1].field_0036 = 0;
                }
              }
              else {
                *(undefined4 *)&param_1[1].field_0x20 = 0;
                *(undefined4 *)&param_1[1].field_0x28 = 0;
              }
            }
            else {
              *(undefined4 *)&param_1[1].field_0x20 = 0;
              *(undefined4 *)&param_1[1].field_0x2c = 0;
            }
          }
          else {
            *(undefined4 *)&param_1[1].field_0x20 = 0;
            *(undefined4 *)&param_1[1].field_0x30 = 0;
          }
          if (*(int *)&param_1[1].field_0x20 == 0) {
            if (DAT_00811798 != (void *)0x0) {
              if (*(int *)&param_1[1].field_0x28 == 0) {
                thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,4);
              }
              if (*(int *)&param_1[1].field_0x2c == 0) {
                thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,2);
              }
              if (*(int *)&param_1[1].field_0x30 == 0) {
                thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,3);
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar2._0_2_ = param_1[1].field_0034;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar2._2_2_ = param_1[1].field_0036;
              if (iVar2 == 0) {
                thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,7);
              }
            }
          }
          else {
            *(int *)&param_1[1].field_0x14 = *(int *)&param_1[1].field_0x14 + 1;
            if (local_14 != 0) {
              thunk_FUN_004d7c10(param_1->field_0x24,0,param_1->field_0018,local_14);
            }
            if (local_8 != 0) {
              thunk_FUN_004d7d30(param_1->field_0x24,0,param_1->field_0018,local_8);
            }
            if (local_c != 0) {
              thunk_FUN_004d7e50(param_1->field_0x24,0,param_1->field_0018,local_c);
            }
            if (local_10 != 0) {
              thunk_FUN_004d7f70(param_1->field_0x24,0,param_1->field_0018,local_10);
            }
            iVar12 = *(int *)&param_1[1].field_003C;
            iVar9 = *(int *)&param_1[1].field_0040;
            iVar11 = *(int *)((int)&param_1[1].field_0043 + 1);
            *(uint *)&param_1[1].field_0038 = *(int *)&param_1[1].field_0038 + local_14;
            uVar3 = *(uint *)&param_1->field_0x24;
            *(int *)((int)&param_1[1].field_0043 + 1) = iVar11 + local_10;
            iVar11 = param_1->field_0010;
            *(int *)&param_1[1].field_003C = iVar12 + local_8;
            *(int *)&param_1[1].field_0040 = iVar9 + local_c;
            if (uVar3 == *(byte *)(iVar11 + 0x112d)) {
              thunk_FUN_004d8b70((char)uVar3);
            }
            if (99 < *(int *)&param_1[1].field_0x14) {
              *(undefined4 *)&param_1[1].field_0x14 = 100;
              thunk_FUN_004d7570(param_1->field_0x24,0,param_1->field_0018);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
                thunk_FUN_0052af50(0,*(float *)&param_1->field_0x1f9,*(float *)&param_1->field_0x1fd
                                  );
                uVar3 = GetPlayerRaceId(param_1->field_0x24);
                uVar3 = uVar3 & 0xff;
                if (uVar3 == 1) {
                  (*param_1->vtable->vfunc_90)(6,0x62);
                }
                else if (uVar3 == 2) {
                  (*param_1->vtable->vfunc_90)(6,99);
                }
                else if (uVar3 == 3) {
                  (*param_1->vtable->vfunc_90)(6,100);
                }
              }
            }
          }
          if (*(int *)&param_1[1].field_0x14 < 100) {
            iVar12 = (*(int *)&param_1[1].field_0xd4 * 3 + *(int *)&param_1[1].field_0xd8) * 4;
            iVar9 = *(int *)(&DAT_008545ac + iVar12) - *(int *)&param_1[1].field_0038;
            iVar14 = *(int *)(&DAT_007e1c50 + iVar12) - *(int *)&param_1[1].field_003C;
            iVar11 = *(int *)(&DAT_007e24fc + iVar12) - *(int *)&param_1[1].field_0040;
            iVar12 = *(int *)(&DAT_007e3160 + iVar12) - *(int *)((int)&param_1[1].field_0043 + 1);
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
            thunk_FUN_004d76e0(param_1->field_0x24,0,param_1->field_0018,iVar9,iVar14,iVar11,iVar12)
            ;
          }
        }
      }
      if (*(int *)&param_1[1].field_0xdc == 0) {
        piVar8 = (int *)&param_1[1].field_0xbc;
        piVar13 = (int *)&param_1[1].field_0x74;
        local_14 = 3;
        do {
          if (*piVar13 == 0) {
            if (((((uint)piVar13[1] <= (uint)PTR_00802a38->field_00E4) &&
                 (*(int *)&param_1[1].field_0x20 != 0)) && (*(int *)&param_1[1].field_0x14 < 100))
               && ((param_1[1].field_0010 == 0 && (param_1[1].field_000C == (SystemClassTy *)0x0))))
            {
              (*param_1->vtable->vfunc_90)(3,0x363);
              *piVar13 = 1;
              uVar3 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
              *(uint *)&param_1->field_0x1c = uVar3;
              piVar13[3] = (uVar3 >> 0x10) % 3 + 1;
              uVar3 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
              *(uint *)&param_1->field_0x1c = uVar3;
              uVar3 = (uVar3 >> 0x10) %
                      *(uint *)(&DAT_00797748 + *(int *)&param_1[1].field_0xd4 * 0x44);
              piVar13[2] = uVar3;
              iVar12 = *(int *)&param_1[1].field_0xd4 * 0x44 + uVar3 * 8;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004ad380((void *)*piVar8,
                                 (*(int *)&param_1[1].field_0x6c - *(int *)(&DAT_0079774c + iVar12))
                                 + 0x10,(*(int *)&param_1[1].field_0x70 -
                                        *(int *)(&DAT_00797750 + iVar12)) + 0x15);
              thunk_FUN_004abce0((void *)*piVar8,0xe,0,0x13,'\0');
              STT3DSprC::SetCurFase((STT3DSprC *)*piVar8,'\x0e',0);
              STT3DSprC::StartShow((STT3DSprC *)*piVar8,0xe,PTR_00802a38->field_00E4);
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
                uVar3 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
                *(uint *)&param_1->field_0x1c = uVar3;
                piVar13[1] = (uVar3 >> 0x10) % 0x65 + 0x19 + PTR_00802a38->field_00E4;
                thunk_FUN_004ad430(*piVar8);
              }
            }
          }
          thunk_FUN_004ac9e0((void *)*piVar8,PTR_00802a38->field_00E4);
          piVar8 = piVar8 + 1;
          piVar13 = piVar13 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    thunk_FUN_004ac9e0(*(void **)&param_1[1].field_0xc8,PTR_00802a38->field_00E4);
    if (param_1[1].field_000C == (SystemClassTy *)0x0) {
      (*param_1->vtable->vfunc_D8)();
      goto LAB_004d4d4f;
    }
  }
  puVar15 = &param_1->field_01D5;
  iVar12 = thunk_FUN_004ac910(puVar15,'\x06');
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar12 < *(int *)(*(int *)&param_1->field_0x1f5 + 0xec)) ||
     (iVar12 = thunk_FUN_004ac910(puVar15,'\a'),
     iVar12 < *(int *)(*(int *)&param_1->field_0x1f5 + 0x110))) {
    (*param_1->vtable->vfunc_D8)();
    iVar12 = thunk_FUN_004ac910(puVar15,'\x06');
    if (iVar12 == 0x11) {
      STT3DSprC::StopShow((STT3DSprC *)puVar15,0x10);
      STT3DSprC::StopShow((STT3DSprC *)puVar15,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar15,0xd);
      STT3DSprC::StopShow((STT3DSprC *)puVar15,0xc);
      if ((*(int *)&param_1[1].field_0xdc == 0) ||
         (STT3DSprC::StopShow((STT3DSprC *)puVar15,*(byte *)((int)&param_1[1].field_005B + 1)),
         *(int *)&param_1[1].field_0xdc == 0)) {
        puVar15 = (undefined4 *)&param_1[1].field_0xbc;
        iVar12 = 3;
        do {
          STT3DSprC::StopShow((STT3DSprC *)*puVar15,0xe);
          puVar15 = puVar15 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      iVar12 = 0;
      uVar3 = GetPlayerRaceId(param_1->field_0x24);
      thunk_FUN_0062b830((int)param_1->field_0041,(int)param_1->field_0043,(int)param_1->field_0045,
                         *(undefined4 *)&param_1->field_0x259,(int *)param_1,0xffffffff,0xffffffff,
                         uVar3 & 0xff,iVar12);
    }
    else {
      iVar12 = thunk_FUN_004ac910(puVar15,'\x06');
      if (iVar12 == 0x23) {
        if (*(int *)&param_1->field_0x2c == 1) {
          text = s_expl_bbt1_007ad570;
        }
        else {
          text = s_expl_bbt0_007ad564;
        }
        iVar12 = STT3DSprC::LoadSequence((STT3DSprC *)puVar15,7,DAT_00806764,text,0x1d);
        if (iVar12 != 0) {
          return 0xffff;
        }
        STT3DSprC::StartShow((STT3DSprC *)puVar15,7,PTR_00802a38->field_00E4);
      }
    }
  }
  else {
    local_28 = param_1->field_0008;
    local_34 = param_1->field_000C->systemId;
    local_30 = 0;
    local_2c = 10;
    STJellyGunC::sub_006E60A0(param_1,local_3c);
  }
LAB_004d4d4f:
  thunk_FUN_004d5470((int)param_1);
  if ((*(int *)&param_1[1].field_0xa4 != 0) &&
     ((uint)(*(int *)&param_1[1].field_0xb0 + *(int *)&param_1[1].field_0xac) <=
      (uint)PTR_00802a38->field_00E4)) {
    *(undefined4 *)&param_1[1].field_0xa4 = 0;
  }
  return 0;
}

