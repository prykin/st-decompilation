
undefined4 __fastcall FUN_004d32c0(int *param_1)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined2 uVar7;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar8;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar9;
  undefined4 extraout_EDX;
  undefined2 extraout_var_02;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  undefined4 uVar15;
  byte local_7c [64];
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar11 = 0;
  if (param_1[0xa8] == 0) {
    pvVar2 = (void *)param_1[0xd7];
    if ((*(uint *)((int)pvVar2 + 0x1c) & 0x4000) != 0) {
      iVar5 = *(int *)(*(int *)((int)pvVar2 + 0x20) + 0x210);
      if (iVar5 == 0x15) {
        if (((*(uint *)((int)param_1 + 0x1f1) & 0x4000) == 0) && (param_1[0xbb] == 2)) {
          pvVar2 = (void *)((int)param_1 + 0x1d5);
          thunk_FUN_004abce0(pvVar2,0xe,*(int *)(&DAT_0079104c + param_1[0xda] * 4),
                             *(int *)(&DAT_0079104c + param_1[0xda] * 4),'\0');
          thunk_FUN_004abe40(pvVar2,'\x0e',*(undefined4 *)(&DAT_0079104c + param_1[0xda] * 4));
          thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
          thunk_FUN_004acef0(pvVar2,DAT_008073cc);
          iVar11 = thunk_FUN_004ab880(0x10,DAT_0080678c,(&PTR_s_tlo_sha_ws_007bb1b4)[param_1[0xdb]],
                                      0x1d);
          if (iVar11 != 0) {
            FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,0x25e);
          }
          thunk_FUN_004abce0(pvVar2,0x10,*(int *)(&DAT_0079104c + param_1[0xda] * 4),
                             *(int *)(&DAT_0079104c + param_1[0xda] * 4),'\0');
          thunk_FUN_004abe40(pvVar2,'\x10',*(undefined4 *)(&DAT_0079104c + param_1[0xda] * 4));
          thunk_FUN_004ac1a0(0x10,*(undefined4 *)(DAT_00802a38 + 0xe4));
          thunk_FUN_004acf50(pvVar2,'\x10');
          iVar11 = 3;
          piVar8 = param_1 + 0xc3;
          do {
            uVar3 = param_1[7] * 0x41c64e6d + 0x3039;
            param_1[7] = uVar3;
            iVar11 = iVar11 + -1;
            *piVar8 = (uVar3 >> 0x10) % 0x65 + 0x19 + *(int *)(DAT_00802a38 + 0xe4);
            piVar8 = piVar8 + 4;
          } while (iVar11 != 0);
          if (DAT_00811784 != (void *)0x0) {
            uVar3 = thunk_FUN_004406c0((char)param_1[9]);
            thunk_FUN_005f23d0(DAT_00811784,*(int *)((int)param_1 + 0x25d),
                               *(int *)((int)param_1 + 0x261),*(int *)((int)param_1 + 0x265),
                               CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0xb]),
                               *(int *)((int)param_1 + 0x259),uVar3 & 0xff);
          }
        }
        else if ((param_1[0xbb] == 3) && (param_1[0xb7] == 0)) {
          if ((param_1[0xaa] < 100) || (param_1[0xba] != 0)) {
            thunk_FUN_004ac410(0xe);
            thunk_FUN_004ac410(0xd);
            thunk_FUN_004ac410(0xc);
            thunk_FUN_004ac410(0x10);
            iVar11 = (**(code **)(*param_1 + 8))();
            if (iVar11 != 0) {
              (**(code **)(*param_1 + 0xe8))(0);
            }
          }
          else {
            if ((*(byte **)(PTR_PTR_007bb198 + (param_1[0xda] * 3 + param_1[0xdb]) * 0xc) !=
                 (byte *)0x0) &&
               (iVar11 = thunk_FUN_004ab880(0xe,DAT_0080678c,
                                            *(byte **)(PTR_PTR_007bb198 +
                                                      (param_1[0xda] * 3 + param_1[0xdb]) * 0xc),
                                            0x1d), iVar11 != 0)) {
              FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,0x26f);
            }
            if (*(int *)(PTR_PTR_007bb198 + (param_1[0xda] * 3 + param_1[0xdb]) * 0xc + 4) != 0) {
              wsprintfA((LPSTR)local_7c,s__s_1i_007ac908,
                        *(int *)(PTR_PTR_007bb198 + (param_1[0xda] * 3 + param_1[0xdb]) * 0xc + 4),
                        *(undefined4 *)((int)param_1 + 0x26d));
              iVar11 = thunk_FUN_004ab880(0xd,DAT_0080678c,local_7c,0x1d);
              if (iVar11 != 0) {
                FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,0x273);
              }
            }
            iVar11 = thunk_FUN_004ab050();
            pvVar2 = (void *)((int)param_1 + 0x1d5);
            iVar11 = *(int *)(PTR_DAT_007b5170 +
                             (iVar11 + (param_1[0xda] * 3 + param_1[0xdb]) * 4) * 8);
            thunk_FUN_004abce0(pvVar2,0xe,iVar11,iVar11,'\0');
            thunk_FUN_004abe40(pvVar2,'\x0e',iVar11);
            thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
            if (**(int **)(*(int *)((int)param_1 + 0x1f5) + 0x1d4) < iVar11) {
              iVar11 = 0;
            }
            thunk_FUN_004abce0(pvVar2,0xd,iVar11,iVar11,'\0');
            thunk_FUN_004abe40(pvVar2,'\r',iVar11);
            thunk_FUN_004ac1a0(0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
            if (*(byte **)(PTR_PTR_007bb198 + (param_1[0xda] * 3 + param_1[0xdb]) * 0xc + 8) !=
                (byte *)0x0) {
              iVar11 = thunk_FUN_004ab880(0xc,DAT_0080678c,
                                          *(byte **)(PTR_PTR_007bb198 +
                                                    (param_1[0xda] * 3 + param_1[0xdb]) * 0xc + 8),
                                          0x1d);
              if (iVar11 != 0) {
                FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,0x281);
              }
              iVar11 = thunk_FUN_004ab050();
              iVar11 = *(int *)(PTR_DAT_007b8310 +
                               (iVar11 + (param_1[0xda] * 3 + param_1[0xdb]) * 4) * 8);
              thunk_FUN_004abce0(pvVar2,0xc,iVar11,iVar11,'\0');
              thunk_FUN_004abe40(pvVar2,'\f',iVar11);
              thunk_FUN_004ac1a0(0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
            }
            thunk_FUN_004acef0(pvVar2,DAT_008073cc);
            iVar11 = thunk_FUN_004ab880(0x10,DAT_0080678c,
                                        (&PTR_s_tlo_sha_ws_007bb1b4)[param_1[0xdb]],0x1d);
            if (iVar11 != 0) {
              FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,0x289);
            }
            thunk_FUN_004abce0(pvVar2,0x10,*(int *)(&DAT_0079104c + param_1[0xda] * 4),
                               *(int *)(&DAT_0079104c + param_1[0xda] * 4),'\0');
            thunk_FUN_004abe40(pvVar2,'\x10',*(undefined4 *)(&DAT_0079104c + param_1[0xda] * 4));
            thunk_FUN_004ac1a0(0x10,*(undefined4 *)(DAT_00802a38 + 0xe4));
            thunk_FUN_004acf50(pvVar2,'\x10');
          }
          param_1[0xb7] = 1;
          thunk_FUN_004ac410(*(byte *)(param_1 + 0xbc));
          thunk_FUN_004abb30(*(byte *)(param_1 + 0xbc));
          thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
          if (param_1[0xdc] != 0) {
            thunk_FUN_004ac410((char)param_1[0xbc] - 1);
            thunk_FUN_004abb30((char)param_1[0xbc] - 1);
          }
        }
      }
      else if (iVar5 == *(int *)(*(int *)((int)pvVar2 + 0x20) + 0x20c)) {
        thunk_FUN_004abe40(pvVar2,'\x0e',0);
        thunk_FUN_004ac410(0xe);
        thunk_FUN_004ad430(param_1[0xd7]);
        if (param_1[0xb7] != 0) {
          thunk_FUN_0041c5a0(param_1);
          thunk_FUN_00417d30((int)param_1);
          if (param_1[0xb] == 0) {
            iVar11 = 1;
          }
          else if (param_1[0xb] == 1) {
            iVar11 = 2;
          }
          local_14 = *(uint *)((int)param_1 + 0x261);
          if ((int)local_14 < (int)(local_14 + iVar11)) {
            do {
              iVar5 = *(int *)((int)param_1 + 0x25d);
              if (iVar5 < iVar5 + iVar11) {
                do {
                  thunk_FUN_00496140((short)iVar5,(short)local_14,*(short *)((int)param_1 + 0x265));
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iVar11 + *(int *)((int)param_1 + 0x25d));
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < *(int *)((int)param_1 + 0x261) + iVar11);
          }
          iVar11 = thunk_FUN_004b7520(CONCAT31((int3)((uint)*(undefined4 *)((int)param_1 + 0x259) >>
                                                     8),(char)param_1[9]),
                                      *(undefined4 *)((int)param_1 + 0x259));
          if (iVar11 != 0) {
            iVar11 = (**(code **)(*param_1 + 0x2c))();
            thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar11 >> 8),(char)param_1[9]),iVar11);
          }
          if ((99 < param_1[0xaa]) && (param_1[0xba] == 0)) {
            thunk_FUN_0054cc20(*(int *)((int)param_1 + 0x245),0,&local_18,(int)param_1 + 0x245,0);
            param_1[0xb9] = 1;
            iVar11 = (**(code **)(*param_1 + 8))();
            uVar7 = 0;
            uVar9 = extraout_var_00;
            if (iVar11 != 0) {
              thunk_FUN_004353b0(CONCAT31((int3)((uint)local_18 >> 8),(char)param_1[9]),
                                 CONCAT22((short)((uint)iVar11 >> 0x10),
                                          *(undefined2 *)((int)param_1 + 0x32)),
                                 CONCAT22(extraout_var_02,*(undefined2 *)(local_18 + 0x32)));
              uVar9 = extraout_var_01;
              uVar7 = extraout_var;
            }
            thunk_FUN_004354e0(CONCAT31((int3)((uint)local_18 >> 8),(char)param_1[9]),
                               CONCAT22(uVar9,*(undefined2 *)((int)param_1 + 0x32)),
                               CONCAT22(uVar7,*(undefined2 *)(local_18 + 0x32)));
          }
          local_28 = param_1[2];
          local_34 = *(undefined4 *)(param_1[3] + 0x14);
          local_30 = 0;
          local_2c = 10;
          FUN_006e5810(local_3c);
        }
      }
    }
    if (*(int *)(*(int *)((int)param_1 + 0x1f5) + 0x18 + param_1[0xbc] * 0x24) ==
        *(int *)(*(int *)((int)param_1 + 0x1f5) + param_1[0xbc] * 0x24 + 0x14)) {
      switch(param_1[0xbb]) {
      case 0:
        param_1[0xbb] = 1;
        if (*(int *)((int)param_1 + 0x241) == 0) {
          iVar11 = thunk_FUN_004ab880((-(param_1[0xdc] != 0) & 3U) + 6,DAT_0080678c,
                                      (byte *)s_si_emb3_007bf4f4,0x1d);
          if (iVar11 != 0) {
            FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,0x2cf);
          }
          wsprintfA((LPSTR)local_7c,s_si_emb3_id_1d_007bf4e4,param_1[9]);
          iVar11 = thunk_FUN_004ab880((-(param_1[0xdc] != 0) & 3U) + 5,DAT_0080678c,local_7c,0x1d);
          if (iVar11 != 0) {
            uVar4 = 0x2d1;
LAB_004d3b23:
            FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,uVar4);
          }
        }
        else if (*(int *)((int)param_1 + 0x241) == 1) {
          iVar11 = thunk_FUN_004ab880((-(param_1[0xdc] != 0) & 3U) + 6,DAT_0080678c,
                                      (byte *)s_si_emb2_007bf510,0x1d);
          if (iVar11 != 0) {
            FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,0x2d5);
          }
          wsprintfA((LPSTR)local_7c,s_si_emb2_id_1d_007bf500,param_1[9]);
          iVar11 = thunk_FUN_004ab880((-(param_1[0xdc] != 0) & 3U) + 5,DAT_0080678c,local_7c,0x1d);
          if (iVar11 != 0) {
            uVar4 = 0x2d7;
            goto LAB_004d3b23;
          }
        }
        pvVar2 = (void *)((int)param_1 + 0x1d5);
        iVar11 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
        thunk_FUN_004abce0(pvVar2,*(byte *)(param_1 + 0xbc),*(int *)(param_1[0xd9] + iVar11 * 8),
                           *(int *)(param_1[0xd9] + 4 + iVar11 * 8),'\0');
        thunk_FUN_004abe40(pvVar2,(char)param_1[0xbc],
                           *(undefined4 *)
                            (param_1[0xd9] +
                            (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
        thunk_FUN_004ac1a0(*(byte *)(param_1 + 0xbc),*(undefined4 *)(DAT_00802a38 + 0xe4));
        iVar11 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
        thunk_FUN_004abce0(pvVar2,(char)param_1[0xbc] - 1,*(int *)(param_1[0xd9] + iVar11 * 8),
                           *(int *)(param_1[0xd9] + 4 + iVar11 * 8),'\0');
        thunk_FUN_004abe40(pvVar2,(char)param_1[0xbc] + -1,
                           *(undefined4 *)
                            (param_1[0xd9] +
                            (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
        cVar1 = (char)param_1[0xbc];
        uVar4 = *(undefined4 *)(DAT_00802a38 + 0xe4);
LAB_004d4378:
        thunk_FUN_004ac1a0(cVar1 - 1,uVar4);
        break;
      case 1:
        iVar11 = *(int *)((int)param_1 + 0x241) * 0x20;
        param_1[0xbb] = 2;
        pvVar2 = (void *)((int)param_1 + 0x1d5);
        thunk_FUN_004abce0(pvVar2,*(byte *)(param_1 + 0xbc),*(int *)(iVar11 + 0x10 + param_1[0xd9]),
                           *(int *)(iVar11 + 0x14 + param_1[0xd9]),'\0');
        thunk_FUN_004abe40(pvVar2,(char)param_1[0xbc],
                           *(undefined4 *)
                            (param_1[0xd9] +
                            (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
        thunk_FUN_004ac1a0(*(byte *)(param_1 + 0xbc),*(undefined4 *)(DAT_00802a38 + 0xe4));
        if (param_1[0xdc] != 0) {
          iVar11 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
          thunk_FUN_004abce0(pvVar2,(char)param_1[0xbc] - 1,*(int *)(param_1[0xd9] + iVar11 * 8),
                             *(int *)(param_1[0xd9] + 4 + iVar11 * 8),'\0');
          thunk_FUN_004abe40(pvVar2,(char)param_1[0xbc] + -1,
                             *(undefined4 *)
                              (param_1[0xd9] +
                              (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
          thunk_FUN_004ac1a0((char)param_1[0xbc] - 1,*(undefined4 *)(DAT_00802a38 + 0xe4));
        }
        (**(code **)(*param_1 + 0x90))(3,0x362);
        thunk_FUN_004abce0((void *)param_1[0xd7],0xe,0,
                           **(int **)(*(int *)(param_1[0xd7] + 0x20) + 0x1f8) + -1,'\0');
        thunk_FUN_004abe40((void *)param_1[0xd7],'\x0e',0);
        thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
        thunk_FUN_004ad460((void *)param_1[0xd7],0);
        break;
      case 2:
        if (99 < param_1[0xaa]) {
          if ((((param_1[0xba] == 0) && (param_1[0xa9] == 0)) && (param_1[0xa8] == 0)) &&
             (iVar11 = thunk_FUN_004d3290((int)param_1), iVar11 != 0)) {
            param_1[0xbb] = 3;
            if (param_1[0xdc] == 0) {
              (**(code **)(*param_1 + 0x90))(3,0x361);
            }
            iVar11 = *(int *)((int)param_1 + 0x259);
            if (((iVar11 == 0x6c) && (*(int *)((int)param_1 + 0x251) == 3)) ||
               ((0x53 < iVar11 && (iVar11 < 0x5b)))) {
LAB_004d3f38:
              if (param_1[0xdc] != 0) goto LAB_004d3f76;
            }
            else {
              pvVar2 = (void *)((int)param_1 + 0x1d5);
              thunk_FUN_004ac6b0(pvVar2,(char)param_1[0xbc]);
              iVar11 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
              thunk_FUN_004abce0(pvVar2,*(byte *)(param_1 + 0xbc),
                                 *(int *)(param_1[0xd9] + iVar11 * 8),
                                 *(int *)(param_1[0xd9] + 4 + iVar11 * 8),'\0');
              thunk_FUN_004abe40(pvVar2,(char)param_1[0xbc],
                                 *(undefined4 *)
                                  (param_1[0xd9] +
                                  (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
              thunk_FUN_004ac1a0(*(byte *)(param_1 + 0xbc),*(undefined4 *)(DAT_00802a38 + 0xe4));
              if (param_1[0xdc] != 0) {
                thunk_FUN_004ac6b0(pvVar2,(char)param_1[0xbc] + -1);
                iVar11 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
                thunk_FUN_004abce0(pvVar2,(char)param_1[0xbc] - 1,
                                   *(int *)(param_1[0xd9] + iVar11 * 8),
                                   *(int *)(param_1[0xd9] + 4 + iVar11 * 8),'\0');
                thunk_FUN_004abe40(pvVar2,(char)param_1[0xbc] + -1,
                                   *(undefined4 *)
                                    (param_1[0xd9] +
                                    (param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4) * 8));
                thunk_FUN_004ac1a0((char)param_1[0xbc] - 1,*(undefined4 *)(DAT_00802a38 + 0xe4));
                goto LAB_004d3f38;
              }
            }
            piVar8 = param_1 + 0xd4;
            piVar12 = param_1 + 0xc2;
            local_14 = 3;
            do {
              if (*piVar12 != 0) {
                *piVar12 = 0;
                thunk_FUN_004ad430(*piVar8);
              }
              piVar8 = piVar8 + 1;
              piVar12 = piVar12 + 4;
              local_14 = local_14 - 1;
            } while (local_14 != 0);
          }
LAB_004d3f76:
          if (((99 < param_1[0xaa]) && (param_1[0xba] == 0)) &&
             ((iVar11 = thunk_FUN_004d3290((int)param_1), iVar11 == 0 &&
              (DAT_00811798 != (void *)0x0)))) {
            thunk_FUN_00621580(DAT_00811798,param_1[9],8);
          }
        }
        break;
      case 3:
        if (((*(uint *)(param_1[0xd7] + 0x1c) & 0x4000) == 0) && (param_1[0xb8] == 0)) {
          pvVar2 = (void *)((int)param_1 + 0x1d5);
          param_1[0xb8] = 1;
          uVar4 = thunk_FUN_004ac910(pvVar2,(char)param_1[0xbc]);
          thunk_FUN_004ac410(*(byte *)(param_1 + 0xbc));
          thunk_FUN_004abb30(*(byte *)(param_1 + 0xbc));
          if (param_1[0xdc] != 0) {
            thunk_FUN_004ac410((char)param_1[0xbc] - 1);
            thunk_FUN_004abb30((char)param_1[0xbc] - 1);
          }
          (**(code **)(*param_1 + 0x90))(3,0x362);
          thunk_FUN_004abce0((void *)param_1[0xd7],0xe,0,
                             **(int **)(*(int *)(param_1[0xd7] + 0x20) + 0x1f8) + -1,'\0');
          thunk_FUN_004abe40((void *)param_1[0xd7],'\x0e',0);
          thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
          thunk_FUN_004ad460((void *)param_1[0xd7],0);
          iVar11 = (-(uint)(param_1[0xdc] != 0) & 3) + 6;
          param_1[0xbd] = iVar11;
          thunk_FUN_004abb30((byte)iVar11);
          uVar3 = param_1[0xbd];
          iVar11 = thunk_FUN_004ad650((int)pvVar2);
          uVar6 = thunk_FUN_004ad650(param_1[0xd7]);
          FUN_006ea340(*(void **)((int)param_1 + 0x211),uVar6,iVar11,uVar3);
          param_1[0xbc] = (-(uint)(param_1[0xdc] != 0) & 4) + 7;
          iVar11 = *(int *)((int)param_1 + 0x259);
          if (((iVar11 != 0x6c) || (*(int *)((int)param_1 + 0x251) != 3)) &&
             ((iVar11 < 0x54 || (0x5a < iVar11)))) {
            iVar11 = *(int *)((int)param_1 + 0x241);
            if (param_1[0xdc] == 0) {
              if (iVar11 == 0) {
                iVar11 = thunk_FUN_004ab880(*(byte *)(param_1 + 0xbc),DAT_0080678c,
                                            (byte *)s_tlo_emb2_007ad434,0x1d);
                if (iVar11 != 0) {
                  uVar15 = 0x342;
                  goto LAB_004d428d;
                }
              }
              else if ((iVar11 == 1) &&
                      (iVar11 = thunk_FUN_004ab880(*(byte *)(param_1 + 0xbc),DAT_0080678c,
                                                   (byte *)s_tlo_emb3_007ad440,0x1d), iVar11 != 0))
              {
                uVar15 = 0x343;
LAB_004d428d:
                FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,uVar15);
              }
            }
            else if (iVar11 == 0) {
              iVar11 = thunk_FUN_004ab880(*(byte *)(param_1 + 0xbc),DAT_0080678c,
                                          (byte *)s_si_emb3_007bf4f4,0x1d);
              if (iVar11 != 0) {
                FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,0x334);
              }
              wsprintfA((LPSTR)local_7c,s_si_emb3_id_1d_007bf4e4,param_1[9]);
              iVar11 = thunk_FUN_004ab880((char)param_1[0xbc] - 1,DAT_0080678c,local_7c,0x1d);
              if (iVar11 != 0) {
                uVar15 = 0x336;
                goto LAB_004d428d;
              }
            }
            else if (iVar11 == 1) {
              iVar11 = thunk_FUN_004ab880(*(byte *)(param_1 + 0xbc),DAT_0080678c,
                                          (byte *)s_si_emb2_007bf510,0x1d);
              if (iVar11 != 0) {
                FUN_006a5e40(iVar11,DAT_007ed77c,0x7bf4bc,0x33a);
              }
              wsprintfA((LPSTR)local_7c,s_si_emb2_id_1d_007bf500,param_1[9]);
              iVar11 = thunk_FUN_004ab880((char)param_1[0xbc] - 1,DAT_0080678c,local_7c,0x1d);
              if (iVar11 != 0) {
                uVar15 = 0x33c;
                goto LAB_004d428d;
              }
            }
            thunk_FUN_004ac6b0(pvVar2,(char)param_1[0xbc]);
            iVar11 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
            thunk_FUN_004abce0(pvVar2,*(byte *)(param_1 + 0xbc),*(int *)(param_1[0xd9] + iVar11 * 8)
                               ,*(int *)(param_1[0xd9] + 4 + iVar11 * 8),'\0');
            thunk_FUN_004abe40(pvVar2,(char)param_1[0xbc],uVar4);
            thunk_FUN_004ac1a0(*(byte *)(param_1 + 0xbc),*(undefined4 *)(DAT_00802a38 + 0xe4));
            if (param_1[0xdc] != 0) {
              thunk_FUN_004ac6b0(pvVar2,(char)param_1[0xbc] + -1);
              iVar11 = param_1[0xbb] + *(int *)((int)param_1 + 0x241) * 4;
              thunk_FUN_004abce0(pvVar2,(char)param_1[0xbc] - 1,*(int *)(param_1[0xd9] + iVar11 * 8)
                                 ,*(int *)(param_1[0xd9] + 4 + iVar11 * 8),'\0');
              thunk_FUN_004abe40(pvVar2,(char)param_1[0xbc] + -1,uVar4);
              cVar1 = (char)param_1[0xbc];
              uVar4 = *(undefined4 *)(DAT_00802a38 + 0xe4);
              goto LAB_004d4378;
            }
          }
        }
      }
    }
    if ((param_1[0xbb] == 2) && ((*(uint *)((int)param_1 + 0x1f1) & 0x4000) != 0)) {
      if ((param_1[0xaa] < 100) && ((param_1[0xa9] == 0 && (param_1[0xa8] == 0)))) {
        iVar11 = thunk_FUN_004b7520(CONCAT31((int3)((uint)*(undefined4 *)((int)param_1 + 0x259) >> 8
                                                   ),(char)param_1[9]),
                                    *(undefined4 *)((int)param_1 + 0x259));
        if (iVar11 == 0) {
LAB_004d43f5:
          iVar11 = 1;
        }
        else {
          iVar5 = thunk_FUN_004b79c0((char)param_1[9],param_1[6]);
          iVar11 = 0;
          if (iVar5 != 0) goto LAB_004d43f5;
        }
        param_1[0xae] = iVar11;
        uVar3 = thunk_FUN_004406c0((char)param_1[9]);
        local_14 = *(uint *)(&DAT_007e3dc0 + ((uVar3 & 0xff) + param_1[0xda] * 3) * 4);
        if (DAT_0080c51e != 0) {
          uVar3 = 0;
          iVar11 = 0;
          do {
            uVar6 = thunk_FUN_004406c0((char)param_1[9]);
            if (uVar3 < *(uint *)(&DAT_007e3dc0 + ((uVar6 & 0xff) + iVar11) * 4)) {
              uVar3 = thunk_FUN_004406c0((char)param_1[9]);
              uVar3 = *(uint *)(&DAT_007e3dc0 + ((uVar3 & 0xff) + iVar11) * 4);
            }
            iVar11 = iVar11 + 3;
          } while (iVar11 < 0xc6);
          local_14 = (local_14 * 0x5dc) / uVar3;
          if (0x5dc < local_14) {
            local_14 = 0x5dc;
          }
        }
        uVar3 = local_14 / 100;
        if ((param_1[0xae] == 0) && (uVar3 = uVar3 << 2, DAT_00811798 != (void *)0x0)) {
          thunk_FUN_00621580(DAT_00811798,param_1[9],5);
        }
        if (param_1[0xac] + uVar3 <= *(uint *)(DAT_00802a38 + 0xe4)) {
          param_1[0xac] = *(uint *)(DAT_00802a38 + 0xe4);
          iVar5 = (param_1[0xda] * 3 + param_1[0xdb]) * 4;
          iVar11 = *(int *)(&DAT_008545ac + iVar5);
          local_14 = iVar11 / 100;
          if ((iVar11 != 0) && (local_14 == 0)) {
            local_14 = 1;
          }
          local_1c = *(int *)(&DAT_007e1c50 + iVar5);
          local_8 = local_1c / 100;
          if ((local_1c != 0) && (local_8 == 0)) {
            local_8 = 1;
          }
          iVar10 = *(int *)(&DAT_007e24fc + iVar5);
          local_c = iVar10 / 100;
          if ((iVar10 != 0) && (local_c == 0)) {
            local_c = 1;
          }
          iVar5 = *(int *)(&DAT_007e3160 + iVar5);
          local_10 = iVar5 / 100;
          if ((iVar5 != 0) && (local_10 == 0)) {
            local_10 = 1;
          }
          if (iVar11 <= (int)(local_14 + param_1[0xb3])) {
            local_14 = iVar11 - param_1[0xb3];
          }
          if (local_1c <= param_1[0xb4] + local_8) {
            local_8 = local_1c - param_1[0xb4];
          }
          if (iVar10 <= param_1[0xb5] + local_c) {
            local_c = iVar10 - param_1[0xb5];
          }
          if (iVar5 <= param_1[0xb6] + local_10) {
            local_10 = iVar5 - param_1[0xb6];
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
             (iVar11 = thunk_FUN_004d7b10((char)param_1[9],0), (int)local_14 <= iVar11)) {
            if ((local_8 == 0) ||
               (iVar11 = thunk_FUN_004d7b50((char)param_1[9],0), local_8 <= iVar11)) {
              if ((local_c == 0) ||
                 (iVar11 = thunk_FUN_004d7b90((char)param_1[9],0), local_c <= iVar11)) {
                if ((local_10 != 0) &&
                   (iVar11 = thunk_FUN_004d7bd0((char)param_1[9],0), iVar11 < local_10)) {
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
                uVar3 = thunk_FUN_004406c0((char)param_1[9]);
                uVar3 = uVar3 & 0xff;
                if (uVar3 == 1) {
                  (**(code **)(*param_1 + 0x90))(6,0x62);
                }
                else if (uVar3 == 2) {
                  (**(code **)(*param_1 + 0x90))(6,99);
                }
                else if (uVar3 == 3) {
                  (**(code **)(*param_1 + 0x90))(6,100);
                }
              }
            }
          }
          if (param_1[0xaa] < 100) {
            iVar11 = (param_1[0xda] * 3 + param_1[0xdb]) * 4;
            iVar5 = *(int *)(&DAT_008545ac + iVar11) - param_1[0xb3];
            iVar13 = *(int *)(&DAT_007e1c50 + iVar11) - param_1[0xb4];
            iVar10 = *(int *)(&DAT_007e24fc + iVar11) - param_1[0xb5];
            iVar11 = *(int *)(&DAT_007e3160 + iVar11) - param_1[0xb6];
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            if (iVar13 < 0) {
              iVar13 = 0;
            }
            if (iVar10 < 0) {
              iVar10 = 0;
            }
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            thunk_FUN_004d76e0((char)param_1[9],0,param_1[6],iVar5,iVar13,iVar10,iVar11);
          }
        }
      }
      if (param_1[0xdc] == 0) {
        piVar8 = param_1 + 0xd4;
        piVar12 = param_1 + 0xc2;
        local_14 = 3;
        do {
          if (*piVar12 == 0) {
            if (((((uint)piVar12[1] <= *(uint *)(DAT_00802a38 + 0xe4)) && (param_1[0xad] != 0)) &&
                (param_1[0xaa] < 100)) && ((param_1[0xa9] == 0 && (param_1[0xa8] == 0)))) {
              (**(code **)(*param_1 + 0x90))(3,0x363);
              *piVar12 = 1;
              uVar3 = param_1[7] * 0x41c64e6d + 0x3039;
              param_1[7] = uVar3;
              piVar12[3] = (uVar3 >> 0x10) % 3 + 1;
              uVar3 = param_1[7] * 0x41c64e6d + 0x3039;
              param_1[7] = uVar3;
              uVar3 = (uVar3 >> 0x10) % *(uint *)(&DAT_00797748 + param_1[0xda] * 0x44);
              piVar12[2] = uVar3;
              iVar11 = param_1[0xda] * 0x44 + uVar3 * 8;
              thunk_FUN_004ad380((void *)*piVar8,
                                 (param_1[0xc0] - *(int *)(&DAT_0079774c + iVar11)) + 0x10,
                                 (param_1[0xc1] - *(int *)(&DAT_00797750 + iVar11)) + 0x15);
              thunk_FUN_004abce0((void *)*piVar8,0xe,0,0x13,'\0');
              thunk_FUN_004abe40((void *)*piVar8,'\x0e',0);
              thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
              thunk_FUN_004ad460((void *)*piVar8,0);
            }
          }
          else {
            iVar11 = *(int *)(*piVar8 + 0x20);
            if (*(int *)(iVar11 + 0x210) < *(int *)(iVar11 + 0x20c)) {
              if (*(int *)(iVar11 + 0x210) == *(int *)(iVar11 + 0x208)) {
                (**(code **)(*param_1 + 0x90))(3,0x363);
              }
            }
            else {
              iVar11 = piVar12[3];
              piVar12[3] = iVar11 + -1;
              if (iVar11 + -1 == 0) {
                *piVar12 = 0;
                uVar3 = param_1[7] * 0x41c64e6d + 0x3039;
                param_1[7] = uVar3;
                piVar12[1] = (uVar3 >> 0x10) % 0x65 + 0x19 + *(int *)(DAT_00802a38 + 0xe4);
                thunk_FUN_004ad430(*piVar8);
              }
            }
          }
          thunk_FUN_004ac9e0((void *)*piVar8,*(int *)(DAT_00802a38 + 0xe4));
          piVar8 = piVar8 + 1;
          piVar12 = piVar12 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    thunk_FUN_004ac9e0((void *)param_1[0xd7],*(int *)(DAT_00802a38 + 0xe4));
    if (param_1[0xa8] == 0) {
      (**(code **)(*param_1 + 0xd8))();
      goto LAB_004d4d4f;
    }
  }
  pvVar2 = (void *)((int)param_1 + 0x1d5);
  iVar11 = thunk_FUN_004ac910(pvVar2,'\x06');
  if ((iVar11 < *(int *)(*(int *)((int)param_1 + 0x1f5) + 0xec)) ||
     (iVar11 = thunk_FUN_004ac910(pvVar2,'\a'),
     iVar11 < *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x110))) {
    (**(code **)(*param_1 + 0xd8))();
    iVar11 = thunk_FUN_004ac910(pvVar2,'\x06');
    if (iVar11 == 0x11) {
      thunk_FUN_004ac410(0x10);
      thunk_FUN_004ac410(0xe);
      thunk_FUN_004ac410(0xd);
      thunk_FUN_004ac410(0xc);
      if ((param_1[0xdc] == 0) ||
         (thunk_FUN_004ac410(*(byte *)(param_1 + 0xbc)), param_1[0xdc] == 0)) {
        iVar11 = 3;
        do {
          thunk_FUN_004ac410(0xe);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar11 = 0;
      uVar3 = thunk_FUN_004406c0((char)param_1[9]);
      thunk_FUN_0062b830((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43),
                         (int)*(short *)((int)param_1 + 0x45),*(undefined4 *)((int)param_1 + 0x259),
                         param_1,0xffffffff,0xffffffff,uVar3 & 0xff,iVar11);
    }
    else {
      iVar11 = thunk_FUN_004ac910(pvVar2,'\x06');
      if (iVar11 == 0x23) {
        if (param_1[0xb] == 1) {
          pcVar14 = s_expl_bbt1_007ad570;
        }
        else {
          pcVar14 = s_expl_bbt0_007ad564;
        }
        iVar11 = thunk_FUN_004ab880(7,DAT_00806764,(byte *)pcVar14,0x1d);
        if (iVar11 != 0) {
          return 0xffff;
        }
        thunk_FUN_004ac1a0(7,*(undefined4 *)(DAT_00802a38 + 0xe4));
      }
    }
  }
  else {
    local_28 = param_1[2];
    local_34 = *(undefined4 *)(param_1[3] + 0x14);
    local_30 = 0;
    local_2c = 10;
    FUN_006e60a0(param_1,local_3c);
  }
LAB_004d4d4f:
  thunk_FUN_004d5470((int)param_1);
  if ((param_1[0xce] != 0) &&
     ((uint)(param_1[0xd1] + param_1[0xd0]) <= *(uint *)(DAT_00802a38 + 0xe4))) {
    param_1[0xce] = 0;
  }
  return 0;
}

