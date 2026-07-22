
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_embryo.cpp
   Diagnostic line evidence: 606 | 623 | 627 | 641 | 649 | 719 | 721 | 725 | 820 | 826 | 834
   (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004d32c0(void *param_1)

{
  char cVar1;
  uint uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined2 uVar6;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  undefined2 uVar9;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int iVar10;
  int iVar11;
  int *piVar12;
  STT3DSprC *pSVar13;
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

  iVar11 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x2a0) == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pSVar13 = *(STT3DSprC **)((int)param_1 + 0x35c);
    if ((pSVar13->field_001C & 0x4000) != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar8 = *(int *)(pSVar13->field_0020 + 0x210);
      if (iVar8 == 0x15) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (((*(uint *)((int)param_1 + 0x1f1) & 0x4000) == 0) &&
           (*(int *)((int)param_1 + 0x2ec) == 2)) {
          pSVar13 = (STT3DSprC *)((int)param_1 + 0x1d5);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_004abce0(pSVar13,0xe,
                             *(int *)(&DAT_0079104c + *(int *)((int)param_1 + 0x368) * 4),
                             *(int *)(&DAT_0079104c + *(int *)((int)param_1 + 0x368) * 4),'\0');
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          STT3DSprC::SetCurFase
                    (pSVar13,'\x0e',*(uint *)(&DAT_0079104c + *(int *)((int)param_1 + 0x368) * 4));
          STT3DSprC::StartShow(pSVar13,0xe,g_playSystem_00802A38->field_00E4);
          STT3DSprC::sub_004ACEF0(pSVar13,DAT_008073cc);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar11 = STT3DSprC::LoadSequence
                             (pSVar13,0x10,DAT_0080678c,
                              (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)((int)param_1 + 0x36c)],0x1d);
          if (iVar11 != 0) {
            RaiseInternalException
                      (iVar11,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x25e);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_004abce0(pSVar13,0x10,
                             *(int *)(&DAT_0079104c + *(int *)((int)param_1 + 0x368) * 4),
                             *(int *)(&DAT_0079104c + *(int *)((int)param_1 + 0x368) * 4),'\0');
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          STT3DSprC::SetCurFase
                    (pSVar13,'\x10',*(uint *)(&DAT_0079104c + *(int *)((int)param_1 + 0x368) * 4));
          STT3DSprC::StartShow(pSVar13,0x10,g_playSystem_00802A38->field_00E4);
          STT3DSprC::sub_004ACF50(pSVar13,'\x10');
          iVar11 = 3;
          piVar7 = (int *)((int)param_1 + 0x30c);
          do {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar2 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)param_1 + 0x1c) = uVar2;
            iVar11 = iVar11 + -1;
            *piVar7 = (uVar2 >> 0x10) % 0x65 + 0x19 + g_playSystem_00802A38->field_00E4;
            piVar7 = piVar7 + 4;
          } while (iVar11 != 0);
          if (g_manBasis_00811784 != (STManBasisC *)0x0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar2 = GetPlayerRaceId(*(char *)((int)param_1 + 0x24));
            /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
            thunk_FUN_005f23d0(g_manBasis_00811784,*(int *)((int)param_1 + 0x25d),
                               *(int *)((int)param_1 + 0x261),*(int *)((int)param_1 + 0x265),
                               CONCAT31((int3)((uint)extraout_EDX >> 8),
                                        *(undefined1 *)((int)param_1 + 0x2c)),
                               *(int *)((int)param_1 + 0x259),uVar2 & 0xff);
          }
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        else if ((*(int *)((int)param_1 + 0x2ec) == 3) && (*(int *)((int)param_1 + 0x2dc) == 0)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((*(int *)((int)param_1 + 0x2a8) < 100) || (*(int *)((int)param_1 + 0x2e8) != 0)) {
            pSVar13 = (STT3DSprC *)((int)param_1 + 0x1d5);
            STT3DSprC::StopShow(pSVar13,0xe);
            STT3DSprC::StopShow(pSVar13,0xd);
            STT3DSprC::StopShow(pSVar13,0xc);
            STT3DSprC::StopShow(pSVar13,0x10);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar11 = (**(code **)(*(int *)param_1 + 8))();
            if (iVar11 != 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*(int *)param_1 + 0xe8))(0);
            }
          }
          else {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((*(char **)(PTR_PTR_007bb198 +
                           (*(int *)((int)param_1 + 0x368) * 3 + *(int *)((int)param_1 + 0x36c)) *
                           0xc) != (char *)0x0) &&
               (iVar11 = STT3DSprC::LoadSequence
                                   ((STT3DSprC *)((int)param_1 + 0x1d5),0xe,DAT_0080678c,
                                    *(char **)(PTR_PTR_007bb198 +
                                              (*(int *)((int)param_1 + 0x368) * 3 +
                                              *(int *)((int)param_1 + 0x36c)) * 0xc),0x1d),
               iVar11 != 0)) {
              RaiseInternalException
                        (iVar11,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_embryo.cpp",0x26f);
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)(PTR_PTR_007bb198 +
                        (*(int *)((int)param_1 + 0x368) * 3 + *(int *)((int)param_1 + 0x36c)) * 0xc
                        + 4) != 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              wsprintfA(local_7c,"%s%1i",
                        *(int *)(PTR_PTR_007bb198 +
                                (*(int *)((int)param_1 + 0x368) * 3 + *(int *)((int)param_1 + 0x36c)
                                ) * 0xc + 4),*(undefined4 *)((int)param_1 + 0x26d));
              iVar11 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)((int)param_1 + 0x1d5),0xd,DAT_0080678c,local_7c,0x1d
                                 );
              if (iVar11 != 0) {
                RaiseInternalException
                          (iVar11,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x273);
              }
            }
            iVar11 = thunk_FUN_004ab050();
            pSVar13 = (STT3DSprC *)((int)param_1 + 0x1d5);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar2 = *(uint *)(PTR_DAT_007b5170 +
                             (iVar11 + (*(int *)((int)param_1 + 0x368) * 3 +
                                       *(int *)((int)param_1 + 0x36c)) * 4) * 8);
            thunk_FUN_004abce0(pSVar13,0xe,uVar2,uVar2,'\0');
            STT3DSprC::SetCurFase(pSVar13,'\x0e',uVar2);
            STT3DSprC::StartShow(pSVar13,0xe,g_playSystem_00802A38->field_00E4);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (**(int **)(*(int *)((int)param_1 + 0x1f5) + 0x1d4) < (int)uVar2) {
              uVar2 = 0;
            }
            thunk_FUN_004abce0(pSVar13,0xd,uVar2,uVar2,'\0');
            STT3DSprC::SetCurFase(pSVar13,'\r',uVar2);
            STT3DSprC::StartShow(pSVar13,0xd,g_playSystem_00802A38->field_00E4);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(char **)(PTR_PTR_007bb198 +
                          (*(int *)((int)param_1 + 0x368) * 3 + *(int *)((int)param_1 + 0x36c)) *
                          0xc + 8) != (char *)0x0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar11 = STT3DSprC::LoadSequence
                                 (pSVar13,0xc,DAT_0080678c,
                                  *(char **)(PTR_PTR_007bb198 +
                                            (*(int *)((int)param_1 + 0x368) * 3 +
                                            *(int *)((int)param_1 + 0x36c)) * 0xc + 8),0x1d);
              if (iVar11 != 0) {
                RaiseInternalException
                          (iVar11,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x281);
              }
              iVar11 = thunk_FUN_004ab050();
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar2 = *(uint *)(PTR_DAT_007b8310 +
                               (iVar11 + (*(int *)((int)param_1 + 0x368) * 3 +
                                         *(int *)((int)param_1 + 0x36c)) * 4) * 8);
              thunk_FUN_004abce0(pSVar13,0xc,uVar2,uVar2,'\0');
              STT3DSprC::SetCurFase(pSVar13,'\f',uVar2);
              STT3DSprC::StartShow(pSVar13,0xc,g_playSystem_00802A38->field_00E4);
            }
            STT3DSprC::sub_004ACEF0(pSVar13,DAT_008073cc);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar11 = STT3DSprC::LoadSequence
                               (pSVar13,0x10,DAT_0080678c,
                                (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)((int)param_1 + 0x36c)],0x1d);
            if (iVar11 != 0) {
              RaiseInternalException
                        (iVar11,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_embryo.cpp",0x289);
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            thunk_FUN_004abce0(pSVar13,0x10,
                               *(int *)(&DAT_0079104c + *(int *)((int)param_1 + 0x368) * 4),
                               *(int *)(&DAT_0079104c + *(int *)((int)param_1 + 0x368) * 4),'\0');
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            STT3DSprC::SetCurFase
                      (pSVar13,'\x10',*(uint *)(&DAT_0079104c + *(int *)((int)param_1 + 0x368) * 4))
            ;
            STT3DSprC::StartShow(pSVar13,0x10,g_playSystem_00802A38->field_00E4);
            STT3DSprC::sub_004ACF50(pSVar13,'\x10');
          }
          pSVar13 = (STT3DSprC *)((int)param_1 + 0x1d5);
          *(undefined4 *)((int)param_1 + 0x2dc) = 1;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          STT3DSprC::StopShow(pSVar13,*(byte *)((int)param_1 + 0x2f0));
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          STT3DSprC::UnLoadSequence(pSVar13,*(byte *)((int)param_1 + 0x2f0));
          thunk_FUN_004ad5e0((int)pSVar13);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)param_1 + 0x370) != 0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            STT3DSprC::StopShow(pSVar13,*(char *)((int)param_1 + 0x2f0) - 1);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            STT3DSprC::UnLoadSequence(pSVar13,*(char *)((int)param_1 + 0x2f0) - 1);
          }
        }
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      else if (iVar8 == *(int *)(pSVar13->field_0020 + 0x20c)) {
        STT3DSprC::SetCurFase(pSVar13,'\x0e',0);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        STT3DSprC::StopShow(*(STT3DSprC **)((int)param_1 + 0x35c),0xe);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004ad430(*(int *)((int)param_1 + 0x35c));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)param_1 + 0x2dc) != 0) {
          STColl3C::sub_0041C5A0(param_1);
          TLOBaseTy::sub_00417D30(param_1);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)param_1 + 0x2c) == 0) {
            iVar11 = 1;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          else if (*(int *)((int)param_1 + 0x2c) == 1) {
            iVar11 = 2;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_14 = *(uint *)((int)param_1 + 0x261);
          if ((int)local_14 < (int)(local_14 + iVar11)) {
            do {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar8 = *(int *)((int)param_1 + 0x25d);
              if (iVar8 < iVar8 + iVar11) {
                do {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  thunk_FUN_00496140((short)iVar8,(short)local_14,*(short *)((int)param_1 + 0x265));
                  iVar8 = iVar8 + 1;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                } while (iVar8 < iVar11 + *(int *)((int)param_1 + 0x25d));
              }
              local_14 = local_14 + 1;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            } while ((int)local_14 < *(int *)((int)param_1 + 0x261) + iVar11);
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar11 = thunk_FUN_004b7520(CONCAT31((int3)(*(Global_sub_004B7520_param_2Enum *)
                                                       ((int)param_1 + 0x259) >> 8),
                                               *(undefined1 *)((int)param_1 + 0x24)),
                                      *(Global_sub_004B7520_param_2Enum *)((int)param_1 + 0x259));
          if (iVar11 != 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar11 = (**(code **)(*(int *)param_1 + 0x2c))();
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar11 >> 8),
                                        *(undefined1 *)((int)param_1 + 0x24)),iVar11);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((99 < *(int *)((int)param_1 + 0x2a8)) && (*(int *)((int)param_1 + 0x2e8) == 0)) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            STPlaySystemC::CreateGameObject
                      (g_playSystem_00802A38,*(int *)((int)param_1 + 0x245),0,&local_18,
                       (int)param_1 + 0x245,0);
            *(undefined4 *)((int)param_1 + 0x2e4) = 1;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar11 = (**(code **)(*(int *)param_1 + 8))();
            uVar6 = 0;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar9 = extraout_var_00;
            if (iVar11 != 0) {
              /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004353b0(CONCAT31((int3)((uint)local_18 >> 8),
                                          *(undefined1 *)((int)param_1 + 0x24)),
                                 CONCAT22((short)((uint)iVar11 >> 0x10),
                                          *(undefined2 *)((int)param_1 + 0x32)),
                                 CONCAT22(extraout_var_02,*(undefined2 *)(local_18 + 0x32)));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar9 = extraout_var_01;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar6 = extraout_var;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            STAllPlayersC::ReplaceObject
                      (g_allPlayers_007FA174,*(char *)((int)param_1 + 0x24),
                       CONCAT22(uVar9,*(undefined2 *)((int)param_1 + 0x32)),
                       CONCAT22(uVar6,*(undefined2 *)(local_18 + 0x32)));
          }
          local_28 = *(undefined4 *)((int)param_1 + 8);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_34 = (*(SystemClassTy **)((int)param_1 + 0xc))->systemId;
          local_30 = 0;
          local_2c = 10;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          SystemClassTy::PostMessage(*(SystemClassTy **)((int)param_1 + 0xc),local_3c);
        }
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*(int *)((int)param_1 + 0x1f5) + 0x18 + *(int *)((int)param_1 + 0x2f0) * 0x24) ==
        *(int *)(*(int *)((int)param_1 + 0x1f5) + *(int *)((int)param_1 + 0x2f0) * 0x24 + 0x14)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      switch(*(undefined4 *)((int)param_1 + 0x2ec)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 0:
        *(undefined4 *)((int)param_1 + 0x2ec) = 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)param_1 + 0x241) == 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar11 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)((int)param_1 + 0x1d5),
                              (-(*(int *)((int)param_1 + 0x370) != 0) & 3U) + 6,DAT_0080678c,
                              "si_emb3",0x1d);
          if (iVar11 != 0) {
            RaiseInternalException
                      (iVar11,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x2cf);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          wsprintfA(local_7c,"si_emb3_id%1d",*(undefined4 *)((int)param_1 + 0x24));
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar11 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)((int)param_1 + 0x1d5),
                              (-(*(int *)((int)param_1 + 0x370) != 0) & 3U) + 5,DAT_0080678c,
                              local_7c,0x1d);
          if (iVar11 != 0) {
            iVar8 = 0x2d1;
LAB_004d3b23:
            RaiseInternalException
                      (iVar11,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",iVar8);
          }
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        else if (*(int *)((int)param_1 + 0x241) == 1) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar11 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)((int)param_1 + 0x1d5),
                              (-(*(int *)((int)param_1 + 0x370) != 0) & 3U) + 6,DAT_0080678c,
                              "si_emb2",0x1d);
          if (iVar11 != 0) {
            RaiseInternalException
                      (iVar11,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x2d5);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          wsprintfA(local_7c,"si_emb2_id%1d",*(undefined4 *)((int)param_1 + 0x24));
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar11 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)((int)param_1 + 0x1d5),
                              (-(*(int *)((int)param_1 + 0x370) != 0) & 3U) + 5,DAT_0080678c,
                              local_7c,0x1d);
          if (iVar11 != 0) {
            iVar8 = 0x2d7;
            goto LAB_004d3b23;
          }
        }
        pSVar13 = (STT3DSprC *)((int)param_1 + 0x1d5);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar11 = *(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004abce0(pSVar13,*(byte *)((int)param_1 + 0x2f0),
                           *(int *)(*(int *)((int)param_1 + 0x364) + iVar11 * 8),
                           *(int *)(*(int *)((int)param_1 + 0x364) + 4 + iVar11 * 8),'\0');
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        STT3DSprC::SetCurFase
                  (pSVar13,*(char *)((int)param_1 + 0x2f0),
                   *(uint *)(*(int *)((int)param_1 + 0x364) +
                            (*(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4) *
                            8));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        STT3DSprC::StartShow
                  (pSVar13,*(byte *)((int)param_1 + 0x2f0),g_playSystem_00802A38->field_00E4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar11 = *(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004abce0(pSVar13,*(char *)((int)param_1 + 0x2f0) - 1,
                           *(int *)(*(int *)((int)param_1 + 0x364) + iVar11 * 8),
                           *(int *)(*(int *)((int)param_1 + 0x364) + 4 + iVar11 * 8),'\0');
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        STT3DSprC::SetCurFase
                  (pSVar13,*(char *)((int)param_1 + 0x2f0) + -1,
                   *(uint *)(*(int *)((int)param_1 + 0x364) +
                            (*(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4) *
                            8));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        cVar1 = *(char *)((int)param_1 + 0x2f0);
        uVar2 = g_playSystem_00802A38->field_00E4;
LAB_004d4378:
        STT3DSprC::StartShow((STT3DSprC *)((int)param_1 + 0x1d5),cVar1 - 1,uVar2);
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 1:
        iVar11 = *(int *)((int)param_1 + 0x241) * 0x20;
        *(undefined4 *)((int)param_1 + 0x2ec) = 2;
        pSVar13 = (STT3DSprC *)((int)param_1 + 0x1d5);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004abce0(pSVar13,*(byte *)((int)param_1 + 0x2f0),
                           *(int *)(iVar11 + 0x10 + *(int *)((int)param_1 + 0x364)),
                           *(int *)(iVar11 + 0x14 + *(int *)((int)param_1 + 0x364)),'\0');
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        STT3DSprC::SetCurFase
                  (pSVar13,*(char *)((int)param_1 + 0x2f0),
                   *(uint *)(*(int *)((int)param_1 + 0x364) +
                            (*(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4) *
                            8));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        STT3DSprC::StartShow
                  (pSVar13,*(byte *)((int)param_1 + 0x2f0),g_playSystem_00802A38->field_00E4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)param_1 + 0x370) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar11 = *(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_004abce0(pSVar13,*(char *)((int)param_1 + 0x2f0) - 1,
                             *(int *)(*(int *)((int)param_1 + 0x364) + iVar11 * 8),
                             *(int *)(*(int *)((int)param_1 + 0x364) + 4 + iVar11 * 8),'\0');
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          STT3DSprC::SetCurFase
                    (pSVar13,*(char *)((int)param_1 + 0x2f0) + -1,
                     *(uint *)(*(int *)((int)param_1 + 0x364) +
                              (*(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4)
                              * 8));
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          STT3DSprC::StartShow
                    (pSVar13,*(char *)((int)param_1 + 0x2f0) - 1,g_playSystem_00802A38->field_00E4);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)param_1 + 0x90))(3,0x362);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004abce0(*(void **)((int)param_1 + 0x35c),0xe,0,
                           **(int **)(*(int *)((int)*(void **)((int)param_1 + 0x35c) + 0x20) + 0x1f8
                                     ) + -1,'\0');
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        STT3DSprC::SetCurFase(*(STT3DSprC **)((int)param_1 + 0x35c),'\x0e',0);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        STT3DSprC::StartShow
                  (*(STT3DSprC **)((int)param_1 + 0x35c),0xe,g_playSystem_00802A38->field_00E4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004ad460(*(void **)((int)param_1 + 0x35c),0);
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 2:
        if (99 < *(int *)((int)param_1 + 0x2a8)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((((*(int *)((int)param_1 + 0x2e8) == 0) && (*(int *)((int)param_1 + 0x2a4) == 0)) &&
              (*(int *)((int)param_1 + 0x2a0) == 0)) &&
             (iVar11 = thunk_FUN_004d3290((int)param_1), iVar11 != 0)) {
            *(undefined4 *)((int)param_1 + 0x2ec) = 3;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)((int)param_1 + 0x370) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*(int *)param_1 + 0x90))(3,0x361);
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar11 = *(int *)((int)param_1 + 0x259);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (((iVar11 == 0x6c) && (*(int *)((int)param_1 + 0x251) == 3)) ||
               ((0x53 < iVar11 && (iVar11 < 0x5b)))) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004d3f38:
              if (*(int *)((int)param_1 + 0x370) != 0) goto LAB_004d3f76;
            }
            else {
              pSVar13 = (STT3DSprC *)((int)param_1 + 0x1d5);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004ac6b0(pSVar13,*(char *)((int)param_1 + 0x2f0));
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar11 = *(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004abce0(pSVar13,*(byte *)((int)param_1 + 0x2f0),
                                 *(int *)(*(int *)((int)param_1 + 0x364) + iVar11 * 8),
                                 *(int *)(*(int *)((int)param_1 + 0x364) + 4 + iVar11 * 8),'\0');
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              STT3DSprC::SetCurFase
                        (pSVar13,*(char *)((int)param_1 + 0x2f0),
                         *(uint *)(*(int *)((int)param_1 + 0x364) +
                                  (*(int *)((int)param_1 + 0x2ec) +
                                  *(int *)((int)param_1 + 0x241) * 4) * 8));
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              STT3DSprC::StartShow
                        (pSVar13,*(byte *)((int)param_1 + 0x2f0),g_playSystem_00802A38->field_00E4);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)((int)param_1 + 0x370) != 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                thunk_FUN_004ac6b0(pSVar13,*(char *)((int)param_1 + 0x2f0) + -1);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar11 = *(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                thunk_FUN_004abce0(pSVar13,*(char *)((int)param_1 + 0x2f0) - 1,
                                   *(int *)(*(int *)((int)param_1 + 0x364) + iVar11 * 8),
                                   *(int *)(*(int *)((int)param_1 + 0x364) + 4 + iVar11 * 8),'\0');
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                STT3DSprC::SetCurFase
                          (pSVar13,*(char *)((int)param_1 + 0x2f0) + -1,
                           *(uint *)(*(int *)((int)param_1 + 0x364) +
                                    (*(int *)((int)param_1 + 0x2ec) +
                                    *(int *)((int)param_1 + 0x241) * 4) * 8));
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                STT3DSprC::StartShow
                          (pSVar13,*(char *)((int)param_1 + 0x2f0) - 1,
                           g_playSystem_00802A38->field_00E4);
                goto LAB_004d3f38;
              }
            }
            piVar7 = (int *)((int)param_1 + 0x350);
            piVar12 = (int *)((int)param_1 + 0x308);
            local_14 = 3;
            do {
              if (*piVar12 != 0) {
                *piVar12 = 0;
                thunk_FUN_004ad430(*piVar7);
              }
              piVar7 = piVar7 + 1;
              piVar12 = piVar12 + 4;
              local_14 = local_14 - 1;
            } while (local_14 != 0);
          }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004d3f76:
          if (((99 < *(int *)((int)param_1 + 0x2a8)) && (*(int *)((int)param_1 + 0x2e8) == 0)) &&
             ((iVar11 = thunk_FUN_004d3290((int)param_1), iVar11 == 0 &&
              (DAT_00811798 != (void *)0x0)))) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            thunk_FUN_00621580(DAT_00811798,*(uint *)((int)param_1 + 0x24),8);
          }
        }
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 3:
        if (((*(uint *)(*(int *)((int)param_1 + 0x35c) + 0x1c) & 0x4000) == 0) &&
           (*(int *)((int)param_1 + 0x2e0) == 0)) {
          pSVar13 = (STT3DSprC *)((int)param_1 + 0x1d5);
          *(undefined4 *)((int)param_1 + 0x2e0) = 1;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar2 = thunk_FUN_004ac910(pSVar13,*(char *)((int)param_1 + 0x2f0));
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          STT3DSprC::StopShow(pSVar13,*(byte *)((int)param_1 + 0x2f0));
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          STT3DSprC::UnLoadSequence(pSVar13,*(byte *)((int)param_1 + 0x2f0));
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)param_1 + 0x370) != 0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            STT3DSprC::StopShow(pSVar13,*(char *)((int)param_1 + 0x2f0) - 1);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            STT3DSprC::UnLoadSequence(pSVar13,*(char *)((int)param_1 + 0x2f0) - 1);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)param_1 + 0x90))(3,0x362);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_004abce0(*(void **)((int)param_1 + 0x35c),0xe,0,
                             **(int **)(*(int *)((int)*(void **)((int)param_1 + 0x35c) + 0x20) +
                                       0x1f8) + -1,'\0');
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          STT3DSprC::SetCurFase(*(STT3DSprC **)((int)param_1 + 0x35c),'\x0e',0);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          STT3DSprC::StartShow
                    (*(STT3DSprC **)((int)param_1 + 0x35c),0xe,g_playSystem_00802A38->field_00E4);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_004ad460(*(void **)((int)param_1 + 0x35c),0);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar11 = (-(uint)(*(int *)((int)param_1 + 0x370) != 0) & 3) + 6;
          *(int *)((int)param_1 + 0x2f4) = iVar11;
          STT3DSprC::UnLoadSequence(pSVar13,(byte)iVar11);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar5 = *(uint *)((int)param_1 + 0x2f4);
          iVar11 = thunk_FUN_004ad650((int)pSVar13);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar3 = thunk_FUN_004ad650(*(int *)((int)param_1 + 0x35c));
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          FUN_006ea340(*(void **)((int)param_1 + 0x211),uVar3,iVar11,uVar5);
          *(uint *)((int)param_1 + 0x2f0) = (-(uint)(*(int *)((int)param_1 + 0x370) != 0) & 4) + 7;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar11 = *(int *)((int)param_1 + 0x259);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (((iVar11 != 0x6c) || (*(int *)((int)param_1 + 0x251) != 3)) &&
             ((iVar11 < 0x54 || (0x5a < iVar11)))) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar11 = *(int *)((int)param_1 + 0x241);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)((int)param_1 + 0x370) == 0) {
              if (iVar11 == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar11 = STT3DSprC::LoadSequence
                                   (pSVar13,*(byte *)((int)param_1 + 0x2f0),DAT_0080678c,
                                    "tlo_emb2",0x1d);
                if (iVar11 != 0) {
                  iVar8 = 0x342;
                  goto cf_error_exit_004D428D;
                }
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              else if ((iVar11 == 1) &&
                      (iVar11 = STT3DSprC::LoadSequence
                                          (pSVar13,*(byte *)((int)param_1 + 0x2f0),DAT_0080678c,
                                           "tlo_emb3",0x1d), iVar11 != 0)) {
                iVar8 = 0x343;
cf_error_exit_004D428D:
                RaiseInternalException
                          (iVar11,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",iVar8);
              }
            }
            else if (iVar11 == 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar11 = STT3DSprC::LoadSequence
                                 (pSVar13,*(byte *)((int)param_1 + 0x2f0),DAT_0080678c,
                                  "si_emb3",0x1d);
              if (iVar11 != 0) {
                RaiseInternalException
                          (iVar11,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x334);
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              wsprintfA(local_7c,"si_emb3_id%1d",*(undefined4 *)((int)param_1 + 0x24));
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar11 = STT3DSprC::LoadSequence
                                 (pSVar13,*(char *)((int)param_1 + 0x2f0) - 1,DAT_0080678c,local_7c,
                                  0x1d);
              if (iVar11 != 0) {
                iVar8 = 0x336;
                goto cf_error_exit_004D428D;
              }
            }
            else if (iVar11 == 1) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar11 = STT3DSprC::LoadSequence
                                 (pSVar13,*(byte *)((int)param_1 + 0x2f0),DAT_0080678c,
                                  "si_emb2",0x1d);
              if (iVar11 != 0) {
                RaiseInternalException
                          (iVar11,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x33a);
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              wsprintfA(local_7c,"si_emb2_id%1d",*(undefined4 *)((int)param_1 + 0x24));
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar11 = STT3DSprC::LoadSequence
                                 (pSVar13,*(char *)((int)param_1 + 0x2f0) - 1,DAT_0080678c,local_7c,
                                  0x1d);
              if (iVar11 != 0) {
                iVar8 = 0x33c;
                goto cf_error_exit_004D428D;
              }
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            thunk_FUN_004ac6b0(pSVar13,*(char *)((int)param_1 + 0x2f0));
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar11 = *(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            thunk_FUN_004abce0(pSVar13,*(byte *)((int)param_1 + 0x2f0),
                               *(int *)(*(int *)((int)param_1 + 0x364) + iVar11 * 8),
                               *(int *)(*(int *)((int)param_1 + 0x364) + 4 + iVar11 * 8),'\0');
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            STT3DSprC::SetCurFase(pSVar13,*(char *)((int)param_1 + 0x2f0),uVar2);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            STT3DSprC::StartShow
                      (pSVar13,*(byte *)((int)param_1 + 0x2f0),g_playSystem_00802A38->field_00E4);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)((int)param_1 + 0x370) != 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004ac6b0(pSVar13,*(char *)((int)param_1 + 0x2f0) + -1);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar11 = *(int *)((int)param_1 + 0x2ec) + *(int *)((int)param_1 + 0x241) * 4;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004abce0(pSVar13,*(char *)((int)param_1 + 0x2f0) - 1,
                                 *(int *)(*(int *)((int)param_1 + 0x364) + iVar11 * 8),
                                 *(int *)(*(int *)((int)param_1 + 0x364) + 4 + iVar11 * 8),'\0');
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              STT3DSprC::SetCurFase(pSVar13,*(char *)((int)param_1 + 0x2f0) + -1,uVar2);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              cVar1 = *(char *)((int)param_1 + 0x2f0);
              uVar2 = g_playSystem_00802A38->field_00E4;
              goto LAB_004d4378;
            }
          }
        }
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)((int)param_1 + 0x2ec) == 2) && ((*(uint *)((int)param_1 + 0x1f1) & 0x4000) != 0))
    {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((*(int *)((int)param_1 + 0x2a8) < 100) &&
         ((*(int *)((int)param_1 + 0x2a4) == 0 && (*(int *)((int)param_1 + 0x2a0) == 0)))) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar11 = thunk_FUN_004b7520(CONCAT31((int3)(*(Global_sub_004B7520_param_2Enum *)
                                                     ((int)param_1 + 0x259) >> 8),
                                             *(undefined1 *)((int)param_1 + 0x24)),
                                    *(Global_sub_004B7520_param_2Enum *)((int)param_1 + 0x259));
        if (iVar11 == 0) {
LAB_004d43f5:
          uVar4 = 1;
        }
        else {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar11 = thunk_FUN_004b79c0(*(char *)((int)param_1 + 0x24),*(int *)((int)param_1 + 0x18));
          uVar4 = 0;
          if (iVar11 != 0) goto LAB_004d43f5;
        }
        *(undefined4 *)((int)param_1 + 0x2b8) = uVar4;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar2 = GetPlayerRaceId(*(char *)((int)param_1 + 0x24));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_14 = *(uint *)(&DAT_007e3dc0 +
                            ((uVar2 & 0xff) + *(int *)((int)param_1 + 0x368) * 3) * 4);
        if (DAT_0080c51e != 0) {
          uVar2 = 0;
          iVar11 = 0;
          do {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar5 = GetPlayerRaceId(*(char *)((int)param_1 + 0x24));
            if (uVar2 < *(uint *)(&DAT_007e3dc0 + ((uVar5 & 0xff) + iVar11) * 4)) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar2 = GetPlayerRaceId(*(char *)((int)param_1 + 0x24));
              uVar2 = *(uint *)(&DAT_007e3dc0 + ((uVar2 & 0xff) + iVar11) * 4);
            }
            iVar11 = iVar11 + 3;
          } while (iVar11 < 0xc6);
          local_14 = (local_14 * 0x5dc) / uVar2;
          if (0x5dc < local_14) {
            local_14 = 0x5dc;
          }
        }
        uVar2 = local_14 / 100;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)((int)param_1 + 0x2b8) == 0) &&
           (uVar2 = uVar2 << 2, DAT_00811798 != (void *)0x0)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_00621580(DAT_00811798,*(uint *)((int)param_1 + 0x24),5);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)param_1 + 0x2b0) + uVar2 <= g_playSystem_00802A38->field_00E4) {
          *(uint *)((int)param_1 + 0x2b0) = g_playSystem_00802A38->field_00E4;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar8 = (*(int *)((int)param_1 + 0x368) * 3 + *(int *)((int)param_1 + 0x36c)) * 4;
          iVar11 = *(int *)(&DAT_008545ac + iVar8);
          local_14 = iVar11 / 100;
          if ((iVar11 != 0) && (local_14 == 0)) {
            local_14 = 1;
          }
          local_1c = *(int *)(&DAT_007e1c50 + iVar8);
          local_8 = local_1c / 100;
          if ((local_1c != 0) && (local_8 == 0)) {
            local_8 = 1;
          }
          iVar10 = *(int *)(&DAT_007e24fc + iVar8);
          local_c = iVar10 / 100;
          if ((iVar10 != 0) && (local_c == 0)) {
            local_c = 1;
          }
          iVar8 = *(int *)(&DAT_007e3160 + iVar8);
          local_10 = iVar8 / 100;
          if ((iVar8 != 0) && (local_10 == 0)) {
            local_10 = 1;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (iVar11 <= (int)(local_14 + *(int *)((int)param_1 + 0x2cc))) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_14 = iVar11 - *(int *)((int)param_1 + 0x2cc);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (local_1c <= *(int *)((int)param_1 + 0x2d0) + local_8) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_8 = local_1c - *(int *)((int)param_1 + 0x2d0);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (iVar10 <= *(int *)((int)param_1 + 0x2d4) + local_c) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_c = iVar10 - *(int *)((int)param_1 + 0x2d4);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (iVar8 <= *(int *)((int)param_1 + 0x2d8) + local_10) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_10 = iVar8 - *(int *)((int)param_1 + 0x2d8);
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
          *(undefined4 *)((int)param_1 + 0x2c8) = 1;
          *(undefined4 *)((int)param_1 + 0x2c4) = 1;
          *(undefined4 *)((int)param_1 + 0x2c0) = 1;
          *(undefined4 *)((int)param_1 + 700) = 1;
          *(undefined4 *)((int)param_1 + 0x2b4) = 1;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((local_14 == 0) ||
             (iVar11 = thunk_FUN_004d7b10(*(char *)((int)param_1 + 0x24),0), (int)local_14 <= iVar11
             )) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((local_8 == 0) ||
               (iVar11 = thunk_FUN_004d7b50(*(char *)((int)param_1 + 0x24),0), local_8 <= iVar11)) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if ((local_c == 0) ||
                 (iVar11 = thunk_FUN_004d7b90(*(char *)((int)param_1 + 0x24),0), local_c <= iVar11))
              {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if ((local_10 != 0) &&
                   (iVar11 = thunk_FUN_004d7bd0(*(char *)((int)param_1 + 0x24),0), iVar11 < local_10
                   )) {
                  *(undefined4 *)((int)param_1 + 0x2b4) = 0;
                  *(undefined4 *)((int)param_1 + 0x2c8) = 0;
                }
              }
              else {
                *(undefined4 *)((int)param_1 + 0x2b4) = 0;
                *(undefined4 *)((int)param_1 + 700) = 0;
              }
            }
            else {
              *(undefined4 *)((int)param_1 + 0x2b4) = 0;
              *(undefined4 *)((int)param_1 + 0x2c0) = 0;
            }
          }
          else {
            *(undefined4 *)((int)param_1 + 0x2b4) = 0;
            *(undefined4 *)((int)param_1 + 0x2c4) = 0;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)param_1 + 0x2b4) == 0) {
            if (DAT_00811798 != (void *)0x0) {
              if (*(int *)((int)param_1 + 700) == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                thunk_FUN_00621580(DAT_00811798,*(uint *)((int)param_1 + 0x24),4);
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)((int)param_1 + 0x2c0) == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                thunk_FUN_00621580(DAT_00811798,*(uint *)((int)param_1 + 0x24),2);
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)((int)param_1 + 0x2c4) == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                thunk_FUN_00621580(DAT_00811798,*(uint *)((int)param_1 + 0x24),3);
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)((int)param_1 + 0x2c8) == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                thunk_FUN_00621580(DAT_00811798,*(uint *)((int)param_1 + 0x24),7);
              }
            }
          }
          else {
            *(int *)((int)param_1 + 0x2a8) = *(int *)((int)param_1 + 0x2a8) + 1;
            if (local_14 != 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004d7c10(*(char *)((int)param_1 + 0x24),0,*(int *)((int)param_1 + 0x18),
                                 local_14);
            }
            if (local_8 != 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004d7d30(*(char *)((int)param_1 + 0x24),0,*(int *)((int)param_1 + 0x18),
                                 local_8);
            }
            if (local_c != 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004d7e50(*(char *)((int)param_1 + 0x24),0,*(int *)((int)param_1 + 0x18),
                                 local_c);
            }
            if (local_10 != 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004d7f70(*(char *)((int)param_1 + 0x24),0,*(int *)((int)param_1 + 0x18),
                                 local_10);
            }
            *(uint *)((int)param_1 + 0x2cc) = *(int *)((int)param_1 + 0x2cc) + local_14;
            *(int *)((int)param_1 + 0x2d8) = *(int *)((int)param_1 + 0x2d8) + local_10;
            *(int *)((int)param_1 + 0x2d0) = *(int *)((int)param_1 + 0x2d0) + local_8;
            *(int *)((int)param_1 + 0x2d4) = *(int *)((int)param_1 + 0x2d4) + local_c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(uint *)((int)param_1 + 0x24) ==
                (uint)*(byte *)(*(int *)((int)param_1 + 0x10) + 0x112d)) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004d8b70((char)*(uint *)((int)param_1 + 0x24));
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (99 < *(int *)((int)param_1 + 0x2a8)) {
              *(undefined4 *)((int)param_1 + 0x2a8) = 100;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004d7570(*(char *)((int)param_1 + 0x24),0,*(int *)((int)param_1 + 0x18));
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(uint *)((int)param_1 + 0x24) ==
                  (uint)*(byte *)(*(int *)((int)param_1 + 0x10) + 0x112d)) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                thunk_FUN_0052af50(0,*(float *)((int)param_1 + 0x1f9),
                                   *(float *)((int)param_1 + 0x1fd));
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                uVar2 = GetPlayerRaceId(*(char *)((int)param_1 + 0x24));
                uVar2 = uVar2 & 0xff;
                if (uVar2 == 1) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  (**(code **)(*(int *)param_1 + 0x90))(6,0x62);
                }
                else if (uVar2 == 2) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  (**(code **)(*(int *)param_1 + 0x90))(6,99);
                }
                else if (uVar2 == 3) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  (**(code **)(*(int *)param_1 + 0x90))(6,100);
                }
              }
            }
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)param_1 + 0x2a8) < 100) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar11 = (*(int *)((int)param_1 + 0x368) * 3 + *(int *)((int)param_1 + 0x36c)) * 4;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar8 = *(int *)(&DAT_008545ac + iVar11) - *(int *)((int)param_1 + 0x2cc);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar14 = *(int *)(&DAT_007e1c50 + iVar11) - *(int *)((int)param_1 + 0x2d0);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar10 = *(int *)(&DAT_007e24fc + iVar11) - *(int *)((int)param_1 + 0x2d4);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar11 = *(int *)(&DAT_007e3160 + iVar11) - *(int *)((int)param_1 + 0x2d8);
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            if (iVar14 < 0) {
              iVar14 = 0;
            }
            if (iVar10 < 0) {
              iVar10 = 0;
            }
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            thunk_FUN_004d76e0(*(char *)((int)param_1 + 0x24),0,*(int *)((int)param_1 + 0x18),iVar8,
                               iVar14,iVar10,iVar11);
          }
        }
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)param_1 + 0x370) == 0) {
        piVar7 = (int *)((int)param_1 + 0x350);
        piVar12 = (int *)((int)param_1 + 0x308);
        local_14 = 3;
        do {
          if (*piVar12 == 0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (((((uint)piVar12[1] <= g_playSystem_00802A38->field_00E4) &&
                 (*(int *)((int)param_1 + 0x2b4) != 0)) && (*(int *)((int)param_1 + 0x2a8) < 100))
               && ((*(int *)((int)param_1 + 0x2a4) == 0 && (*(int *)((int)param_1 + 0x2a0) == 0))))
            {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*(int *)param_1 + 0x90))(3,0x363);
              *piVar12 = 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar2 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
              *(uint *)((int)param_1 + 0x1c) = uVar2;
              piVar12[3] = (uVar2 >> 0x10) % 3 + 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar2 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
              *(uint *)((int)param_1 + 0x1c) = uVar2;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar2 = (uVar2 >> 0x10) %
                      *(uint *)(&DAT_00797748 + *(int *)((int)param_1 + 0x368) * 0x44);
              piVar12[2] = uVar2;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar11 = *(int *)((int)param_1 + 0x368) * 0x44 + uVar2 * 8;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              thunk_FUN_004ad380((void *)*piVar7,
                                 (*(int *)((int)param_1 + 0x300) - *(int *)(&DAT_0079774c + iVar11))
                                 + 0x10,(*(int *)((int)param_1 + 0x304) -
                                        *(int *)(&DAT_00797750 + iVar11)) + 0x15);
              thunk_FUN_004abce0((void *)*piVar7,0xe,0,0x13,'\0');
              STT3DSprC::SetCurFase((STT3DSprC *)*piVar7,'\x0e',0);
              STT3DSprC::StartShow((STT3DSprC *)*piVar7,0xe,g_playSystem_00802A38->field_00E4);
              thunk_FUN_004ad460((void *)*piVar7,0);
            }
          }
          else {
            iVar11 = *(int *)(*piVar7 + 0x20);
            if (*(int *)(iVar11 + 0x210) < *(int *)(iVar11 + 0x20c)) {
              if (*(int *)(iVar11 + 0x210) == *(int *)(iVar11 + 0x208)) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (**(code **)(*(int *)param_1 + 0x90))(3,0x363);
              }
            }
            else {
              iVar11 = piVar12[3];
              piVar12[3] = iVar11 + -1;
              if (iVar11 + -1 == 0) {
                *piVar12 = 0;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                uVar2 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
                *(uint *)((int)param_1 + 0x1c) = uVar2;
                piVar12[1] = (uVar2 >> 0x10) % 0x65 + 0x19 + g_playSystem_00802A38->field_00E4;
                thunk_FUN_004ad430(*piVar7);
              }
            }
          }
          thunk_FUN_004ac9e0((void *)*piVar7,g_playSystem_00802A38->field_00E4);
          piVar7 = piVar7 + 1;
          piVar12 = piVar12 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004ac9e0(*(void **)((int)param_1 + 0x35c),g_playSystem_00802A38->field_00E4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)param_1 + 0x2a0) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)param_1 + 0xd8))();
      goto LAB_004d4d4f;
    }
  }
  pSVar13 = (STT3DSprC *)((int)param_1 + 0x1d5);
  iVar11 = thunk_FUN_004ac910(pSVar13,'\x06');
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar11 < *(int *)(*(int *)((int)param_1 + 0x1f5) + 0xec)) ||
     (iVar11 = thunk_FUN_004ac910(pSVar13,'\a'),
     iVar11 < *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x110))) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0xd8))();
    iVar11 = thunk_FUN_004ac910(pSVar13,'\x06');
    if (iVar11 == 0x11) {
      STT3DSprC::StopShow(pSVar13,0x10);
      STT3DSprC::StopShow(pSVar13,0xe);
      STT3DSprC::StopShow(pSVar13,0xd);
      STT3DSprC::StopShow(pSVar13,0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((*(int *)((int)param_1 + 0x370) == 0) ||
         (STT3DSprC::StopShow(pSVar13,*(byte *)((int)param_1 + 0x2f0)),
         *(int *)((int)param_1 + 0x370) == 0)) {
        puVar15 = (undefined4 *)((int)param_1 + 0x350);
        iVar11 = 3;
        do {
          STT3DSprC::StopShow((STT3DSprC *)*puVar15,0xe);
          puVar15 = puVar15 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar11 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar2 = GetPlayerRaceId(*(char *)((int)param_1 + 0x24));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_0062b830((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43),
                         (int)*(short *)((int)param_1 + 0x45),*(undefined4 *)((int)param_1 + 0x259),
                         param_1,0xffffffff,0xffffffff,uVar2 & 0xff,iVar11);
    }
    else {
      iVar11 = thunk_FUN_004ac910(pSVar13,'\x06');
      if (iVar11 == 0x23) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)param_1 + 0x2c) == 1) {
          text = "expl_bbt1";
        }
        else {
          text = "expl_bbt0";
        }
        iVar11 = STT3DSprC::LoadSequence(pSVar13,7,DAT_00806764,text,0x1d);
        if (iVar11 != 0) {
          return 0xffff;
        }
        STT3DSprC::StartShow(pSVar13,7,g_playSystem_00802A38->field_00E4);
      }
    }
  }
  else {
    local_28 = *(undefined4 *)((int)param_1 + 8);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_34 = *(int *)(*(int *)((int)param_1 + 0xc) + 0x14);
    local_30 = 0;
    local_2c = 10;
    sub_006E60A0(param_1,local_3c);
  }
LAB_004d4d4f:
  thunk_FUN_004d5470((int)param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)param_1 + 0x338) != 0) &&
     ((uint)(*(int *)((int)param_1 + 0x344) + *(int *)((int)param_1 + 0x340)) <=
      g_playSystem_00802A38->field_00E4)) {
    *(undefined4 *)((int)param_1 + 0x338) = 0;
  }
  return 0;
}

