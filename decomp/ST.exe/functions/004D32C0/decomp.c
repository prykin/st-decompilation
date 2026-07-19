
undefined4 __fastcall FUN_004d32c0(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined2 extraout_var;
  undefined2 uVar6;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar7;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar8;
  undefined4 extraout_EDX;
  undefined2 extraout_var_02;
  int iVar9;
  int iVar10;
  int *piVar11;
  STT3DSprC *pSVar12;
  int iVar13;
  char *pcVar14;
  byte local_7c [64];
  undefined4 local_3c [2];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar10 = 0;
  if (param_1[0xa8] == 0) {
    pSVar12 = (STT3DSprC *)param_1[0xd7];
    if ((*(uint *)&pSVar12->field_0x1c & 0x4000) != 0) {
      iVar4 = *(int *)(pSVar12->field_0020 + 0x210);
      if (iVar4 == 0x15) {
        if (((*(uint *)((int)param_1 + 0x1f1) & 0x4000) == 0) && (param_1[0xbb] == 2)) {
          pSVar12 = (STT3DSprC *)((int)param_1 + 0x1d5);
          thunk_FUN_004abce0(pSVar12,0xe,*(int *)(&DAT_0079104c + param_1[0xda] * 4),
                             *(int *)(&DAT_0079104c + param_1[0xda] * 4),'\0');
          STT3DSprC::SetCurFase(pSVar12,'\x0e',*(undefined4 *)(&DAT_0079104c + param_1[0xda] * 4));
          STT3DSprC::StartShow(pSVar12,0xe,DAT_00802a38->field_00E4);
          thunk_FUN_004acef0(pSVar12,DAT_008073cc);
          iVar10 = STT3DSprC::LoadSequence
                             (pSVar12,0x10,DAT_0080678c,(&PTR_s_tlo_sha_ws_007bb1b4)[param_1[0xdb]],
                              0x1d);
          if (iVar10 != 0) {
            RaiseInternalException
                      (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x25e);
          }
          thunk_FUN_004abce0(pSVar12,0x10,*(int *)(&DAT_0079104c + param_1[0xda] * 4),
                             *(int *)(&DAT_0079104c + param_1[0xda] * 4),'\0');
          STT3DSprC::SetCurFase(pSVar12,'\x10',*(undefined4 *)(&DAT_0079104c + param_1[0xda] * 4));
          STT3DSprC::StartShow(pSVar12,0x10,DAT_00802a38->field_00E4);
          thunk_FUN_004acf50(pSVar12,'\x10');
          iVar10 = 3;
          piVar7 = param_1 + 0xc3;
          do {
            uVar2 = param_1[7] * 0x41c64e6d + 0x3039;
            param_1[7] = uVar2;
            iVar10 = iVar10 + -1;
            *piVar7 = (uVar2 >> 0x10) % 0x65 + 0x19 + DAT_00802a38->field_00E4;
            piVar7 = piVar7 + 4;
          } while (iVar10 != 0);
          if (DAT_00811784 != (void *)0x0) {
            uVar2 = thunk_FUN_004406c0((char)param_1[9]);
            thunk_FUN_005f23d0(DAT_00811784,*(int *)((int)param_1 + 0x25d),
                               *(int *)((int)param_1 + 0x261),*(int *)((int)param_1 + 0x265),
                               CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0xb]),
                               *(int *)((int)param_1 + 0x259),uVar2 & 0xff);
          }
        }
        else if ((param_1[0xbb] == 3) && (param_1[0xb7] == 0)) {
          if ((param_1[0xaa] < 100) || (param_1[0xba] != 0)) {
            pSVar12 = (STT3DSprC *)((int)param_1 + 0x1d5);
            STT3DSprC::StopShow(pSVar12,0xe);
            STT3DSprC::StopShow(pSVar12,0xd);
            STT3DSprC::StopShow(pSVar12,0xc);
            STT3DSprC::StopShow(pSVar12,0x10);
            iVar10 = (**(code **)(*param_1 + 8))();
            if (iVar10 != 0) {
              (**(code **)(*param_1 + 0xe8))(0);
            }
          }
          else {
            if ((*(byte **)(PTR_PTR_007bb198 + (param_1[0xda] * 3 + param_1[0xdb]) * 0xc) !=
                 (byte *)0x0) &&
               (iVar10 = STT3DSprC::LoadSequence
                                   ((STT3DSprC *)((int)param_1 + 0x1d5),0xe,DAT_0080678c,
                                    *(byte **)(PTR_PTR_007bb198 +
                                              (param_1[0xda] * 3 + param_1[0xdb]) * 0xc),0x1d),
               iVar10 != 0)) {
              RaiseInternalException
                        (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x26f);
            }
            if (*(int *)(PTR_PTR_007bb198 + (param_1[0xda] * 3 + param_1[0xdb]) * 0xc + 4) != 0) {
              wsprintfA((LPSTR)local_7c,s__s_1i_007ac908,
                        *(int *)(PTR_PTR_007bb198 + (param_1[0xda] * 3 + param_1[0xdb]) * 0xc + 4),
                        *(undefined4 *)((int)param_1 + 0x26d));
              iVar10 = STT3DSprC::LoadSequence
                                 ((STT3DSprC *)((int)param_1 + 0x1d5),0xd,DAT_0080678c,local_7c,0x1d
                                 );
              if (iVar10 != 0) {
                RaiseInternalException
                          (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x273);
              }
            }
            iVar10 = thunk_FUN_004ab050();
            pSVar12 = (STT3DSprC *)((int)param_1 + 0x1d5);
            iVar10 = *(int *)(PTR_DAT_007b5170 +
                             (iVar10 + (param_1[0xda] * 3 + param_1[0xdb]) * 4) * 8);
            thunk_FUN_004abce0(pSVar12,0xe,iVar10,iVar10,'\0');
            STT3DSprC::SetCurFase(pSVar12,'\x0e',iVar10);
            STT3DSprC::StartShow(pSVar12,0xe,DAT_00802a38->field_00E4);
            if (**(int **)(*(int *)((int)param_1 + 0x1f5) + 0x1d4) < iVar10) {
              iVar10 = 0;
            }
            thunk_FUN_004abce0(pSVar12,0xd,iVar10,iVar10,'\0');
            STT3DSprC::SetCurFase(pSVar12,'\r',iVar10);
            STT3DSprC::StartShow(pSVar12,0xd,DAT_00802a38->field_00E4);
            if (*(byte **)(PTR_PTR_007bb198 + (param_1[0xda] * 3 + param_1[0xdb]) * 0xc + 8) !=
                (byte *)0x0) {
              iVar10 = STT3DSprC::LoadSequence
                                 (pSVar12,0xc,DAT_0080678c,
                                  *(byte **)(PTR_PTR_007bb198 +
                                            (param_1[0xda] * 3 + param_1[0xdb]) * 0xc + 8),0x1d);
              if (iVar10 != 0) {
                RaiseInternalException
                          (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x281);
              }
              iVar10 = thunk_FUN_004ab050();
              iVar10 = *(int *)(PTR_DAT_007b8310 +
                               (iVar10 + (param_1[0xda] * 3 + param_1[0xdb]) * 4) * 8);
              thunk_FUN_004abce0(pSVar12,0xc,iVar10,iVar10,'\0');
              STT3DSprC::SetCurFase(pSVar12,'\f',iVar10);
              STT3DSprC::StartShow(pSVar12,0xc,DAT_00802a38->field_00E4);
            }
            thunk_FUN_004acef0(pSVar12,DAT_008073cc);
            iVar10 = STT3DSprC::LoadSequence
                               (pSVar12,0x10,DAT_0080678c,
                                (&PTR_s_tlo_sha_ws_007bb1b4)[param_1[0xdb]],0x1d);
            if (iVar10 != 0) {
              RaiseInternalException
                        (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x289);
            }
            thunk_FUN_004abce0(pSVar12,0x10,*(int *)(&DAT_0079104c + param_1[0xda] * 4),
                               *(int *)(&DAT_0079104c + param_1[0xda] * 4),'\0');
            STT3DSprC::SetCurFase(pSVar12,'\x10',*(undefined4 *)(&DAT_0079104c + param_1[0xda] * 4))
            ;
            STT3DSprC::StartShow(pSVar12,0x10,DAT_00802a38->field_00E4);
            thunk_FUN_004acf50(pSVar12,'\x10');
          }
          pSVar12 = (STT3DSprC *)((int)param_1 + 0x1d5);
          param_1[0xb7] = 1;
          STT3DSprC::StopShow(pSVar12,*(byte *)(param_1 + 0xbc));
          STT3DSprC::UnLoadSequence(pSVar12,*(byte *)(param_1 + 0xbc));
          thunk_FUN_004ad5e0((int)pSVar12);
          if (param_1[0xdc] != 0) {
            STT3DSprC::StopShow(pSVar12,(char)param_1[0xbc] - 1);
            STT3DSprC::UnLoadSequence(pSVar12,(char)param_1[0xbc] - 1);
          }
        }
      }
      else if (iVar4 == *(int *)(pSVar12->field_0020 + 0x20c)) {
        STT3DSprC::SetCurFase(pSVar12,'\x0e',0);
        STT3DSprC::StopShow((STT3DSprC *)param_1[0xd7],0xe);
        thunk_FUN_004ad430(param_1[0xd7]);
        if (param_1[0xb7] != 0) {
          thunk_FUN_0041c5a0(param_1);
          thunk_FUN_00417d30((int)param_1);
          if (param_1[0xb] == 0) {
            iVar10 = 1;
          }
          else if (param_1[0xb] == 1) {
            iVar10 = 2;
          }
          local_14 = *(uint *)((int)param_1 + 0x261);
          if ((int)local_14 < (int)(local_14 + iVar10)) {
            do {
              iVar4 = *(int *)((int)param_1 + 0x25d);
              if (iVar4 < iVar4 + iVar10) {
                do {
                  thunk_FUN_00496140((short)iVar4,(short)local_14,*(short *)((int)param_1 + 0x265));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < iVar10 + *(int *)((int)param_1 + 0x25d));
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < *(int *)((int)param_1 + 0x261) + iVar10);
          }
          iVar10 = thunk_FUN_004b7520(CONCAT31((int3)(*(Global_sub_004B7520_param_2Enum *)
                                                       ((int)param_1 + 0x259) >> 8),(char)param_1[9]
                                              ),
                                      *(Global_sub_004B7520_param_2Enum *)((int)param_1 + 0x259));
          if (iVar10 != 0) {
            iVar10 = (**(code **)(*param_1 + 0x2c))();
            thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar10 >> 8),(char)param_1[9]),iVar10);
          }
          if ((99 < param_1[0xaa]) && (param_1[0xba] == 0)) {
            STPlaySystemC::CreateGameObject
                      (DAT_00802a38,*(int *)((int)param_1 + 0x245),0,&local_18,(int)param_1 + 0x245,
                       0);
            param_1[0xb9] = 1;
            iVar10 = (**(code **)(*param_1 + 8))();
            uVar6 = 0;
            uVar8 = extraout_var_00;
            if (iVar10 != 0) {
              thunk_FUN_004353b0(CONCAT31((int3)((uint)local_18 >> 8),(char)param_1[9]),
                                 CONCAT22((short)((uint)iVar10 >> 0x10),
                                          *(undefined2 *)((int)param_1 + 0x32)),
                                 CONCAT22(extraout_var_02,*(undefined2 *)(local_18 + 0x32)));
              uVar8 = extraout_var_01;
              uVar6 = extraout_var;
            }
            STAllPlayersC::ReplaceObject
                      (DAT_007fa174,CONCAT31((int3)((uint)local_18 >> 8),(char)param_1[9]),
                       CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x32)),
                       CONCAT22(uVar6,*(undefined2 *)(local_18 + 0x32)));
          }
          local_28 = param_1[2];
          local_34 = ((SystemClassTy *)param_1[3])->systemId;
          local_30 = 0;
          local_2c = 10;
          SystemClassTy::PostMessage((SystemClassTy *)param_1[3],local_3c);
        }
      }
    }
    if (*(int *)(*(int *)((int)param_1 + 0x1f5) + 0x18 + param_1[0xbc] * 0x24) ==
        *(int *)(*(int *)((int)param_1 + 0x1f5) + param_1[0xbc] * 0x24 + 0x14)) {
      switch(param_1[0xbb]) {
      case 0:
        param_1[0xbb] = 1;
        if (*(int *)((int)param_1 + 0x241) == 0) {
          iVar10 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)((int)param_1 + 0x1d5),(-(param_1[0xdc] != 0) & 3U) + 6,
                              DAT_0080678c,(byte *)s_si_emb3_007bf4f4,0x1d);
          if (iVar10 != 0) {
            RaiseInternalException
                      (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x2cf);
          }
          wsprintfA((LPSTR)local_7c,s_si_emb3_id_1d_007bf4e4,param_1[9]);
          iVar10 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)((int)param_1 + 0x1d5),(-(param_1[0xdc] != 0) & 3U) + 5,
                              DAT_0080678c,local_7c,0x1d);
          if (iVar10 != 0) {
            iVar4 = 0x2d1;
LAB_004d3b23:
            RaiseInternalException
                      (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,iVar4);
          }
        }
        else if (*(int *)((int)param_1 + 0x241) == 1) {
          iVar10 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)((int)param_1 + 0x1d5),(-(param_1[0xdc] != 0) & 3U) + 6,
                              DAT_0080678c,(byte *)s_si_emb2_007bf510,0x1d);
          if (iVar10 != 0) {
            RaiseInternalException
                      (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x2d5);
          }
          wsprintfA((LPSTR)local_7c,s_si_emb2_id_1d_007bf500,param_1[9]);
          iVar10 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)((int)param_1 + 0x1d5),(-(param_1[0xdc] != 0) & 3U) + 5,
                              DAT_0080678c,local_7c,0x1d);
          if (iVar10 != 0) {
            iVar4 = 0x2d7;
            goto LAB_004d3b23;
          }
        }
        pSVar12 = (STT3DSprC *)((int)param_1 + 0x1d5);
        iVar10 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
        thunk_FUN_004abce0(pSVar12,*(byte *)(param_1 + 0xbc),*(int *)(param_1[0xd9] + iVar10 * 8),
                           *(int *)(param_1[0xd9] + 4 + iVar10 * 8),'\0');
        STT3DSprC::SetCurFase
                  (pSVar12,(char)param_1[0xbc],
                   *(undefined4 *)
                    (param_1[0xd9] + (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
        STT3DSprC::StartShow(pSVar12,*(byte *)(param_1 + 0xbc),DAT_00802a38->field_00E4);
        iVar10 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
        thunk_FUN_004abce0(pSVar12,(char)param_1[0xbc] - 1,*(int *)(param_1[0xd9] + iVar10 * 8),
                           *(int *)(param_1[0xd9] + 4 + iVar10 * 8),'\0');
        STT3DSprC::SetCurFase
                  (pSVar12,(char)param_1[0xbc] + -1,
                   *(undefined4 *)
                    (param_1[0xd9] + (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
        cVar1 = (char)param_1[0xbc];
        uVar3 = DAT_00802a38->field_00E4;
LAB_004d4378:
        STT3DSprC::StartShow((STT3DSprC *)((int)param_1 + 0x1d5),cVar1 - 1,uVar3);
        break;
      case 1:
        iVar10 = *(int *)((int)param_1 + 0x241) * 0x20;
        param_1[0xbb] = 2;
        pSVar12 = (STT3DSprC *)((int)param_1 + 0x1d5);
        thunk_FUN_004abce0(pSVar12,*(byte *)(param_1 + 0xbc),*(int *)(iVar10 + 0x10 + param_1[0xd9])
                           ,*(int *)(iVar10 + 0x14 + param_1[0xd9]),'\0');
        STT3DSprC::SetCurFase
                  (pSVar12,(char)param_1[0xbc],
                   *(undefined4 *)
                    (param_1[0xd9] + (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
        STT3DSprC::StartShow(pSVar12,*(byte *)(param_1 + 0xbc),DAT_00802a38->field_00E4);
        if (param_1[0xdc] != 0) {
          iVar10 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
          thunk_FUN_004abce0(pSVar12,(char)param_1[0xbc] - 1,*(int *)(param_1[0xd9] + iVar10 * 8),
                             *(int *)(param_1[0xd9] + 4 + iVar10 * 8),'\0');
          STT3DSprC::SetCurFase
                    (pSVar12,(char)param_1[0xbc] + -1,
                     *(undefined4 *)
                      (param_1[0xd9] + (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
          STT3DSprC::StartShow(pSVar12,(char)param_1[0xbc] - 1,DAT_00802a38->field_00E4);
        }
        (**(code **)(*param_1 + 0x90))(3,0x362);
        thunk_FUN_004abce0((void *)param_1[0xd7],0xe,0,
                           **(int **)(*(int *)(param_1[0xd7] + 0x20) + 0x1f8) + -1,'\0');
        STT3DSprC::SetCurFase((STT3DSprC *)param_1[0xd7],'\x0e',0);
        STT3DSprC::StartShow((STT3DSprC *)param_1[0xd7],0xe,DAT_00802a38->field_00E4);
        thunk_FUN_004ad460((void *)param_1[0xd7],0);
        break;
      case 2:
        if (99 < param_1[0xaa]) {
          if ((((param_1[0xba] == 0) && (param_1[0xa9] == 0)) && (param_1[0xa8] == 0)) &&
             (iVar10 = thunk_FUN_004d3290((int)param_1), iVar10 != 0)) {
            param_1[0xbb] = 3;
            if (param_1[0xdc] == 0) {
              (**(code **)(*param_1 + 0x90))(3,0x361);
            }
            iVar10 = *(int *)((int)param_1 + 0x259);
            if (((iVar10 == 0x6c) && (*(int *)((int)param_1 + 0x251) == 3)) ||
               ((0x53 < iVar10 && (iVar10 < 0x5b)))) {
LAB_004d3f38:
              if (param_1[0xdc] != 0) goto LAB_004d3f76;
            }
            else {
              pSVar12 = (STT3DSprC *)((int)param_1 + 0x1d5);
              thunk_FUN_004ac6b0(pSVar12,(char)param_1[0xbc]);
              iVar10 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
              thunk_FUN_004abce0(pSVar12,*(byte *)(param_1 + 0xbc),
                                 *(int *)(param_1[0xd9] + iVar10 * 8),
                                 *(int *)(param_1[0xd9] + 4 + iVar10 * 8),'\0');
              STT3DSprC::SetCurFase
                        (pSVar12,(char)param_1[0xbc],
                         *(undefined4 *)
                          (param_1[0xd9] + (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8)
                        );
              STT3DSprC::StartShow(pSVar12,*(byte *)(param_1 + 0xbc),DAT_00802a38->field_00E4);
              if (param_1[0xdc] != 0) {
                thunk_FUN_004ac6b0(pSVar12,(char)param_1[0xbc] + -1);
                iVar10 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
                thunk_FUN_004abce0(pSVar12,(char)param_1[0xbc] - 1,
                                   *(int *)(param_1[0xd9] + iVar10 * 8),
                                   *(int *)(param_1[0xd9] + 4 + iVar10 * 8),'\0');
                STT3DSprC::SetCurFase
                          (pSVar12,(char)param_1[0xbc] + -1,
                           *(undefined4 *)
                            (param_1[0xd9] +
                            (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
                STT3DSprC::StartShow(pSVar12,(char)param_1[0xbc] - 1,DAT_00802a38->field_00E4);
                goto LAB_004d3f38;
              }
            }
            piVar7 = param_1 + 0xd4;
            piVar11 = param_1 + 0xc2;
            local_14 = 3;
            do {
              if (*piVar11 != 0) {
                *piVar11 = 0;
                thunk_FUN_004ad430(*piVar7);
              }
              piVar7 = piVar7 + 1;
              piVar11 = piVar11 + 4;
              local_14 = local_14 - 1;
            } while (local_14 != 0);
          }
LAB_004d3f76:
          if (((99 < param_1[0xaa]) && (param_1[0xba] == 0)) &&
             ((iVar10 = thunk_FUN_004d3290((int)param_1), iVar10 == 0 &&
              (DAT_00811798 != (void *)0x0)))) {
            thunk_FUN_00621580(DAT_00811798,param_1[9],8);
          }
        }
        break;
      case 3:
        if (((*(uint *)(param_1[0xd7] + 0x1c) & 0x4000) == 0) && (param_1[0xb8] == 0)) {
          pSVar12 = (STT3DSprC *)((int)param_1 + 0x1d5);
          param_1[0xb8] = 1;
          uVar3 = thunk_FUN_004ac910(pSVar12,(char)param_1[0xbc]);
          STT3DSprC::StopShow(pSVar12,*(byte *)(param_1 + 0xbc));
          STT3DSprC::UnLoadSequence(pSVar12,*(byte *)(param_1 + 0xbc));
          if (param_1[0xdc] != 0) {
            STT3DSprC::StopShow(pSVar12,(char)param_1[0xbc] - 1);
            STT3DSprC::UnLoadSequence(pSVar12,(char)param_1[0xbc] - 1);
          }
          (**(code **)(*param_1 + 0x90))(3,0x362);
          thunk_FUN_004abce0((void *)param_1[0xd7],0xe,0,
                             **(int **)(*(int *)(param_1[0xd7] + 0x20) + 0x1f8) + -1,'\0');
          STT3DSprC::SetCurFase((STT3DSprC *)param_1[0xd7],'\x0e',0);
          STT3DSprC::StartShow((STT3DSprC *)param_1[0xd7],0xe,DAT_00802a38->field_00E4);
          thunk_FUN_004ad460((void *)param_1[0xd7],0);
          iVar10 = (-(uint)(param_1[0xdc] != 0) & 3) + 6;
          param_1[0xbd] = iVar10;
          STT3DSprC::UnLoadSequence(pSVar12,(byte)iVar10);
          uVar2 = param_1[0xbd];
          iVar10 = thunk_FUN_004ad650((int)pSVar12);
          uVar5 = thunk_FUN_004ad650(param_1[0xd7]);
          FUN_006ea340(*(void **)((int)param_1 + 0x211),uVar5,iVar10,uVar2);
          param_1[0xbc] = (-(uint)(param_1[0xdc] != 0) & 4) + 7;
          iVar10 = *(int *)((int)param_1 + 0x259);
          if (((iVar10 != 0x6c) || (*(int *)((int)param_1 + 0x251) != 3)) &&
             ((iVar10 < 0x54 || (0x5a < iVar10)))) {
            iVar10 = *(int *)((int)param_1 + 0x241);
            if (param_1[0xdc] == 0) {
              if (iVar10 == 0) {
                iVar10 = STT3DSprC::LoadSequence
                                   (pSVar12,*(byte *)(param_1 + 0xbc),DAT_0080678c,
                                    (byte *)s_tlo_emb2_007ad434,0x1d);
                if (iVar10 != 0) {
                  iVar4 = 0x342;
                  goto LAB_004d428d;
                }
              }
              else if ((iVar10 == 1) &&
                      (iVar10 = STT3DSprC::LoadSequence
                                          (pSVar12,*(byte *)(param_1 + 0xbc),DAT_0080678c,
                                           (byte *)s_tlo_emb3_007ad440,0x1d), iVar10 != 0)) {
                iVar4 = 0x343;
LAB_004d428d:
                RaiseInternalException
                          (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,iVar4);
              }
            }
            else if (iVar10 == 0) {
              iVar10 = STT3DSprC::LoadSequence
                                 (pSVar12,*(byte *)(param_1 + 0xbc),DAT_0080678c,
                                  (byte *)s_si_emb3_007bf4f4,0x1d);
              if (iVar10 != 0) {
                RaiseInternalException
                          (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x334);
              }
              wsprintfA((LPSTR)local_7c,s_si_emb3_id_1d_007bf4e4,param_1[9]);
              iVar10 = STT3DSprC::LoadSequence
                                 (pSVar12,(char)param_1[0xbc] - 1,DAT_0080678c,local_7c,0x1d);
              if (iVar10 != 0) {
                iVar4 = 0x336;
                goto LAB_004d428d;
              }
            }
            else if (iVar10 == 1) {
              iVar10 = STT3DSprC::LoadSequence
                                 (pSVar12,*(byte *)(param_1 + 0xbc),DAT_0080678c,
                                  (byte *)s_si_emb2_007bf510,0x1d);
              if (iVar10 != 0) {
                RaiseInternalException
                          (iVar10,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x33a);
              }
              wsprintfA((LPSTR)local_7c,s_si_emb2_id_1d_007bf500,param_1[9]);
              iVar10 = STT3DSprC::LoadSequence
                                 (pSVar12,(char)param_1[0xbc] - 1,DAT_0080678c,local_7c,0x1d);
              if (iVar10 != 0) {
                iVar4 = 0x33c;
                goto LAB_004d428d;
              }
            }
            thunk_FUN_004ac6b0(pSVar12,(char)param_1[0xbc]);
            iVar10 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
            thunk_FUN_004abce0(pSVar12,*(byte *)(param_1 + 0xbc),
                               *(int *)(param_1[0xd9] + iVar10 * 8),
                               *(int *)(param_1[0xd9] + 4 + iVar10 * 8),'\0');
            STT3DSprC::SetCurFase(pSVar12,(char)param_1[0xbc],uVar3);
            STT3DSprC::StartShow(pSVar12,*(byte *)(param_1 + 0xbc),DAT_00802a38->field_00E4);
            if (param_1[0xdc] != 0) {
              thunk_FUN_004ac6b0(pSVar12,(char)param_1[0xbc] + -1);
              iVar10 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
              thunk_FUN_004abce0(pSVar12,(char)param_1[0xbc] - 1,
                                 *(int *)(param_1[0xd9] + iVar10 * 8),
                                 *(int *)(param_1[0xd9] + 4 + iVar10 * 8),'\0');
              STT3DSprC::SetCurFase(pSVar12,(char)param_1[0xbc] + -1,uVar3);
              cVar1 = (char)param_1[0xbc];
              uVar3 = DAT_00802a38->field_00E4;
              goto LAB_004d4378;
            }
          }
        }
      }
    }
    if ((param_1[0xbb] == 2) && ((*(uint *)((int)param_1 + 0x1f1) & 0x4000) != 0)) {
      if ((param_1[0xaa] < 100) && ((param_1[0xa9] == 0 && (param_1[0xa8] == 0)))) {
        iVar10 = thunk_FUN_004b7520(CONCAT31((int3)(*(Global_sub_004B7520_param_2Enum *)
                                                     ((int)param_1 + 0x259) >> 8),(char)param_1[9]),
                                    *(Global_sub_004B7520_param_2Enum *)((int)param_1 + 0x259));
        if (iVar10 == 0) {
LAB_004d43f5:
          iVar10 = 1;
        }
        else {
          iVar4 = thunk_FUN_004b79c0((char)param_1[9],param_1[6]);
          iVar10 = 0;
          if (iVar4 != 0) goto LAB_004d43f5;
        }
        param_1[0xae] = iVar10;
        uVar2 = thunk_FUN_004406c0((char)param_1[9]);
        local_14 = *(uint *)(&DAT_007e3dc0 + ((uVar2 & 0xff) + param_1[0xda] * 3) * 4);
        if (DAT_0080c51e != 0) {
          uVar2 = 0;
          iVar10 = 0;
          do {
            uVar5 = thunk_FUN_004406c0((char)param_1[9]);
            if (uVar2 < *(uint *)(&DAT_007e3dc0 + ((uVar5 & 0xff) + iVar10) * 4)) {
              uVar2 = thunk_FUN_004406c0((char)param_1[9]);
              uVar2 = *(uint *)(&DAT_007e3dc0 + ((uVar2 & 0xff) + iVar10) * 4);
            }
            iVar10 = iVar10 + 3;
          } while (iVar10 < 0xc6);
          local_14 = (local_14 * 0x5dc) / uVar2;
          if (0x5dc < local_14) {
            local_14 = 0x5dc;
          }
        }
        uVar2 = local_14 / 100;
        if ((param_1[0xae] == 0) && (uVar2 = uVar2 << 2, DAT_00811798 != (void *)0x0)) {
          thunk_FUN_00621580(DAT_00811798,param_1[9],5);
        }
        if (param_1[0xac] + uVar2 <= (uint)DAT_00802a38->field_00E4) {
          param_1[0xac] = DAT_00802a38->field_00E4;
          iVar4 = (param_1[0xda] * 3 + param_1[0xdb]) * 4;
          iVar10 = *(int *)(&DAT_008545ac + iVar4);
          local_14 = iVar10 / 100;
          if ((iVar10 != 0) && (local_14 == 0)) {
            local_14 = 1;
          }
          local_1c = *(int *)(&DAT_007e1c50 + iVar4);
          local_8 = local_1c / 100;
          if ((local_1c != 0) && (local_8 == 0)) {
            local_8 = 1;
          }
          iVar9 = *(int *)(&DAT_007e24fc + iVar4);
          local_c = iVar9 / 100;
          if ((iVar9 != 0) && (local_c == 0)) {
            local_c = 1;
          }
          iVar4 = *(int *)(&DAT_007e3160 + iVar4);
          local_10 = iVar4 / 100;
          if ((iVar4 != 0) && (local_10 == 0)) {
            local_10 = 1;
          }
          if (iVar10 <= (int)(local_14 + param_1[0xb3])) {
            local_14 = iVar10 - param_1[0xb3];
          }
          if (local_1c <= param_1[0xb4] + local_8) {
            local_8 = local_1c - param_1[0xb4];
          }
          if (iVar9 <= param_1[0xb5] + local_c) {
            local_c = iVar9 - param_1[0xb5];
          }
          if (iVar4 <= param_1[0xb6] + local_10) {
            local_10 = iVar4 - param_1[0xb6];
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
          param_1[0xb2] = 1;
          param_1[0xb1] = 1;
          param_1[0xb0] = 1;
          param_1[0xaf] = 1;
          param_1[0xad] = 1;
          if ((local_14 == 0) ||
             (iVar10 = thunk_FUN_004d7b10((char)param_1[9],0), (int)local_14 <= iVar10)) {
            if ((local_8 == 0) ||
               (iVar10 = thunk_FUN_004d7b50((char)param_1[9],0), local_8 <= iVar10)) {
              if ((local_c == 0) ||
                 (iVar10 = thunk_FUN_004d7b90((char)param_1[9],0), local_c <= iVar10)) {
                if ((local_10 != 0) &&
                   (iVar10 = thunk_FUN_004d7bd0((char)param_1[9],0), iVar10 < local_10)) {
                  param_1[0xad] = 0;
                  param_1[0xb2] = 0;
                }
              }
              else {
                param_1[0xad] = 0;
                param_1[0xaf] = 0;
              }
            }
            else {
              param_1[0xad] = 0;
              param_1[0xb0] = 0;
            }
          }
          else {
            param_1[0xad] = 0;
            param_1[0xb1] = 0;
          }
          if (param_1[0xad] == 0) {
            if (DAT_00811798 != (void *)0x0) {
              if (param_1[0xaf] == 0) {
                thunk_FUN_00621580(DAT_00811798,param_1[9],4);
              }
              if (param_1[0xb0] == 0) {
                thunk_FUN_00621580(DAT_00811798,param_1[9],2);
              }
              if (param_1[0xb1] == 0) {
                thunk_FUN_00621580(DAT_00811798,param_1[9],3);
              }
              if (param_1[0xb2] == 0) {
                thunk_FUN_00621580(DAT_00811798,param_1[9],7);
              }
            }
          }
          else {
            param_1[0xaa] = param_1[0xaa] + 1;
            if (local_14 != 0) {
              thunk_FUN_004d7c10((char)param_1[9],0,param_1[6],local_14);
            }
            if (local_8 != 0) {
              thunk_FUN_004d7d30((char)param_1[9],0,param_1[6],local_8);
            }
            if (local_c != 0) {
              thunk_FUN_004d7e50((char)param_1[9],0,param_1[6],local_c);
            }
            if (local_10 != 0) {
              thunk_FUN_004d7f70((char)param_1[9],0,param_1[6],local_10);
            }
            param_1[0xb3] = param_1[0xb3] + local_14;
            param_1[0xb6] = param_1[0xb6] + local_10;
            param_1[0xb4] = param_1[0xb4] + local_8;
            param_1[0xb5] = param_1[0xb5] + local_c;
            if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
              thunk_FUN_004d8b70((char)param_1[9]);
            }
            if (99 < param_1[0xaa]) {
              param_1[0xaa] = 100;
              thunk_FUN_004d7570((char)param_1[9],0,param_1[6]);
              if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
                thunk_FUN_0052af50(0,*(float *)((int)param_1 + 0x1f9),
                                   *(float *)((int)param_1 + 0x1fd));
                uVar2 = thunk_FUN_004406c0((char)param_1[9]);
                uVar2 = uVar2 & 0xff;
                if (uVar2 == 1) {
                  (**(code **)(*param_1 + 0x90))(6,0x62);
                }
                else if (uVar2 == 2) {
                  (**(code **)(*param_1 + 0x90))(6,99);
                }
                else if (uVar2 == 3) {
                  (**(code **)(*param_1 + 0x90))(6,100);
                }
              }
            }
          }
          if (param_1[0xaa] < 100) {
            iVar10 = (param_1[0xda] * 3 + param_1[0xdb]) * 4;
            iVar4 = *(int *)(&DAT_008545ac + iVar10) - param_1[0xb3];
            iVar13 = *(int *)(&DAT_007e1c50 + iVar10) - param_1[0xb4];
            iVar9 = *(int *)(&DAT_007e24fc + iVar10) - param_1[0xb5];
            iVar10 = *(int *)(&DAT_007e3160 + iVar10) - param_1[0xb6];
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            if (iVar13 < 0) {
              iVar13 = 0;
            }
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            if (iVar10 < 0) {
              iVar10 = 0;
            }
            thunk_FUN_004d76e0((char)param_1[9],0,param_1[6],iVar4,iVar13,iVar9,iVar10);
          }
        }
      }
      if (param_1[0xdc] == 0) {
        piVar7 = param_1 + 0xd4;
        piVar11 = param_1 + 0xc2;
        local_14 = 3;
        do {
          if (*piVar11 == 0) {
            if (((((uint)piVar11[1] <= (uint)DAT_00802a38->field_00E4) && (param_1[0xad] != 0)) &&
                (param_1[0xaa] < 100)) && ((param_1[0xa9] == 0 && (param_1[0xa8] == 0)))) {
              (**(code **)(*param_1 + 0x90))(3,0x363);
              *piVar11 = 1;
              uVar2 = param_1[7] * 0x41c64e6d + 0x3039;
              param_1[7] = uVar2;
              piVar11[3] = (uVar2 >> 0x10) % 3 + 1;
              uVar2 = param_1[7] * 0x41c64e6d + 0x3039;
              param_1[7] = uVar2;
              uVar2 = (uVar2 >> 0x10) % *(uint *)(&DAT_00797748 + param_1[0xda] * 0x44);
              piVar11[2] = uVar2;
              iVar10 = param_1[0xda] * 0x44 + uVar2 * 8;
              thunk_FUN_004ad380((void *)*piVar7,
                                 (param_1[0xc0] - *(int *)(&DAT_0079774c + iVar10)) + 0x10,
                                 (param_1[0xc1] - *(int *)(&DAT_00797750 + iVar10)) + 0x15);
              thunk_FUN_004abce0((void *)*piVar7,0xe,0,0x13,'\0');
              STT3DSprC::SetCurFase((STT3DSprC *)*piVar7,'\x0e',0);
              STT3DSprC::StartShow((STT3DSprC *)*piVar7,0xe,DAT_00802a38->field_00E4);
              thunk_FUN_004ad460((void *)*piVar7,0);
            }
          }
          else {
            iVar10 = *(int *)(*piVar7 + 0x20);
            if (*(int *)(iVar10 + 0x210) < *(int *)(iVar10 + 0x20c)) {
              if (*(int *)(iVar10 + 0x210) == *(int *)(iVar10 + 0x208)) {
                (**(code **)(*param_1 + 0x90))(3,0x363);
              }
            }
            else {
              iVar10 = piVar11[3];
              piVar11[3] = iVar10 + -1;
              if (iVar10 + -1 == 0) {
                *piVar11 = 0;
                uVar2 = param_1[7] * 0x41c64e6d + 0x3039;
                param_1[7] = uVar2;
                piVar11[1] = (uVar2 >> 0x10) % 0x65 + 0x19 + DAT_00802a38->field_00E4;
                thunk_FUN_004ad430(*piVar7);
              }
            }
          }
          thunk_FUN_004ac9e0((void *)*piVar7,DAT_00802a38->field_00E4);
          piVar7 = piVar7 + 1;
          piVar11 = piVar11 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    thunk_FUN_004ac9e0((void *)param_1[0xd7],DAT_00802a38->field_00E4);
    if (param_1[0xa8] == 0) {
      (**(code **)(*param_1 + 0xd8))();
      goto LAB_004d4d4f;
    }
  }
  pSVar12 = (STT3DSprC *)((int)param_1 + 0x1d5);
  iVar10 = thunk_FUN_004ac910(pSVar12,'\x06');
  if ((iVar10 < *(int *)(*(int *)((int)param_1 + 0x1f5) + 0xec)) ||
     (iVar10 = thunk_FUN_004ac910(pSVar12,'\a'),
     iVar10 < *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x110))) {
    (**(code **)(*param_1 + 0xd8))();
    iVar10 = thunk_FUN_004ac910(pSVar12,'\x06');
    if (iVar10 == 0x11) {
      STT3DSprC::StopShow(pSVar12,0x10);
      STT3DSprC::StopShow(pSVar12,0xe);
      STT3DSprC::StopShow(pSVar12,0xd);
      STT3DSprC::StopShow(pSVar12,0xc);
      if ((param_1[0xdc] == 0) ||
         (STT3DSprC::StopShow(pSVar12,*(byte *)(param_1 + 0xbc)), param_1[0xdc] == 0)) {
        piVar7 = param_1 + 0xd4;
        iVar10 = 3;
        do {
          STT3DSprC::StopShow((STT3DSprC *)*piVar7,0xe);
          piVar7 = piVar7 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iVar10 = 0;
      uVar2 = thunk_FUN_004406c0((char)param_1[9]);
      thunk_FUN_0062b830((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43),
                         (int)*(short *)((int)param_1 + 0x45),*(undefined4 *)((int)param_1 + 0x259),
                         param_1,0xffffffff,0xffffffff,uVar2 & 0xff,iVar10);
    }
    else {
      iVar10 = thunk_FUN_004ac910(pSVar12,'\x06');
      if (iVar10 == 0x23) {
        if (param_1[0xb] == 1) {
          pcVar14 = s_expl_bbt1_007ad570;
        }
        else {
          pcVar14 = s_expl_bbt0_007ad564;
        }
        iVar10 = STT3DSprC::LoadSequence(pSVar12,7,DAT_00806764,(byte *)pcVar14,0x1d);
        if (iVar10 != 0) {
          return 0xffff;
        }
        STT3DSprC::StartShow(pSVar12,7,DAT_00802a38->field_00E4);
      }
    }
  }
  else {
    local_28 = param_1[2];
    local_34 = *(int *)(param_1[3] + 0x14);
    local_30 = 0;
    local_2c = 10;
    FUN_006e60a0(param_1,local_3c);
  }
LAB_004d4d4f:
  thunk_FUN_004d5470((int)param_1);
  if ((param_1[0xce] != 0) &&
     ((uint)(param_1[0xd1] + param_1[0xd0]) <= (uint)DAT_00802a38->field_00E4)) {
    param_1[0xce] = 0;
  }
  return 0;
}

