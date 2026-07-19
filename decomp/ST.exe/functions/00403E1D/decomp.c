
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
thunk_FUN_00424e10(void *this,int param_1,float param_2,float param_3,float param_4,int param_5,
                  int param_6,int *param_7)

{
  uint *puVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  uint *puVar13;
  byte bVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  short *psVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  uint *puVar24;
  byte *pbVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  int iStack_140;
  byte *pbStack_138;
  int iStack_12c;
  int iStack_f0;
  uint *puStack_dc;
  uint uStack_d8;
  int iStack_d4;
  int iStack_d0;
  uint uStack_c8;
  int iStack_c4;
  float fStack_c0;
  uint uStack_b4;
  uint *puStack_a8;
  uint *puStack_a4;
  short *psStack_a0;
  int iStack_9c;
  byte *pbStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  float fStack_68;
  uint *puStack_64;
  int iStack_60;
  int iStack_54;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  char cStack_40;
  char *pcStack_3c;
  byte *pbStack_38;
  uint uStack_34;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar17 = param_6;
  iVar22 = param_5;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00790540;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xfffffea0;
  iStack_4c = 0;
  iStack_48 = 0;
  iStack_54 = 0;
  iStack_c4 = 0;
  iStack_d4 = 0;
  fStack_68 = 0.0;
  fStack_c0 = 0.0;
  iStack_d0 = 0;
  iStack_9c = 0;
  puStack_a8 = (uint *)0x0;
  iStack_2c = 0;
  ExceptionList = &pvStack_14;
  puVar9 = &stack0xfffffea0;
  if ((*(int *)((int)this + 0x358) != 0) &&
     (ExceptionList = &pvStack_14, puVar9 = &stack0xfffffea0, param_1 != 0)) {
    fStack_84 = param_2;
    fStack_80 = param_3;
    uStack_7c = 0;
    ExceptionList = &pvStack_14;
    iVar10 = FUN_006e25d0(this,&iStack_78);
    if (iVar10 != 1) {
      if ((((*(int *)((int)this + 0x30) <= *(int *)((int)this + 0x3d8) + (iStack_78 >> 0x10)) &&
           ((iStack_78 >> 0x10) - *(int *)((int)this + 0x3d8) < *(int *)((int)this + 0x38))) &&
          (*(int *)((int)this + 0x34) <= *(int *)((int)this + 0x3d4) + (iStack_74 >> 0x10))) &&
         ((iStack_74 >> 0x10) - *(int *)((int)this + 0x3d0) < *(int *)((int)this + 0x3c))) {
        fStack_84 = (float)param_5 * (float)*(double *)((int)this + 0x368) + fStack_84;
        iVar11 = FUN_006e25d0(this,&iStack_78);
        iVar10 = 1;
        if (iVar11 != 1) {
          fStack_80 = (float)param_6 * (float)*(double *)((int)this + 0x368) + fStack_80;
          iVar11 = FUN_006e25d0(this,&iStack_78);
          iVar10 = 1;
          if (iVar11 != 1) {
            fStack_84 = param_2;
            iVar11 = FUN_006e25d0(this,&iStack_78);
            iVar10 = 1;
            if (iVar11 != 1) {
              fStack_84 = param_2;
              fStack_80 = param_3;
              uStack_7c = 0x424751eb;
              iVar11 = FUN_006e25d0(this,&iStack_78);
              iVar10 = 1;
              if (iVar11 != 1) {
                fStack_84 = (float)param_5 * (float)*(double *)((int)this + 0x368) + fStack_84;
                iVar11 = FUN_006e25d0(this,&iStack_78);
                iVar10 = 1;
                if (iVar11 != 1) {
                  fStack_80 = (float)param_6 * (float)*(double *)((int)this + 0x368) + fStack_80;
                  iVar11 = FUN_006e25d0(this,&iStack_78);
                  iVar10 = 1;
                  if (iVar11 != 1) {
                    fStack_84 = param_2;
                    iVar10 = FUN_006e25d0(this,&iStack_78);
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar9 = puStack_1c;
    if (iVar10 != 0) {
      iStack_28 = (int)(param_5 + 7 + (param_5 + 7 >> 0x1f & 7U)) >> 3;
      dVar2 = (double)(param_2 / (float)*(double *)((int)this + 0x368));
      FUN_0072e150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
      lVar27 = __ftol();
      fStack_68 = param_2 - (float)(int)lVar27 * (float)*(double *)((int)this + 0x368);
      iVar10 = (int)lVar27 - *(int *)((int)this + 0x374);
      iStack_c4 = 0;
      if (*(int *)((int)this + 0x370) < iVar10 + param_5) {
        param_5 = *(int *)((int)this + 0x370) - iVar10;
        iStack_2c = 1;
      }
      if (iVar10 < 0) {
        iStack_c4 = -iVar10;
        param_5 = param_5 + iVar10;
        iStack_2c = 1;
      }
      dVar2 = (double)(param_3 / (float)*(double *)((int)this + 0x368));
      iStack_48 = iVar10;
      FUN_0072e150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
      lVar27 = __ftol();
      fStack_c0 = param_3 - (float)(int)lVar27 * (float)*(double *)((int)this + 0x368);
      iStack_54 = (int)lVar27 - *(int *)((int)this + 0x378);
      iStack_d4 = 0;
      if (*(int *)((int)this + 0x370) < param_6 + iStack_54) {
        param_6 = *(int *)((int)this + 0x370) - iStack_54;
        iStack_2c = 1;
      }
      if (iStack_54 < 0) {
        iStack_d4 = -iStack_54;
        param_6 = param_6 + iStack_54;
        iStack_2c = 1;
      }
      puVar9 = puStack_1c;
      if ((0 < param_5) && (0 < param_6)) {
        FUN_0072e150(SUB84((double)(param_4 * _DAT_00790538),0),
                     (uint)((ulonglong)(double)(param_4 * _DAT_00790538) >> 0x20));
        lVar27 = __ftol();
        iStack_60 = (int)lVar27;
        if ((((param_7[7] != 0) &&
             ((pbVar25 = (byte *)param_7[8], pbVar25 != (byte *)0x0 && (param_7[6] == param_1)))) &&
            (iStack_c4 == param_7[2])) && (iStack_d4 == param_7[3])) {
          iVar11 = *(int *)((int)this + 0x374);
          iVar18 = *param_7;
          if ((iVar11 + iVar10 == iVar18) && (iStack_54 + *(int *)((int)this + 0x378) == param_7[1])
             ) {
            if (((float)param_7[4] == fStack_68) && ((float)param_7[5] == fStack_c0)) {
              ExceptionList = pvStack_14;
              return 2;
            }
            param_7[4] = (int)fStack_68;
            param_7[5] = (int)fStack_c0;
            ExceptionList = pvStack_14;
            return 1;
          }
          if (((param_7[7] == 1) && ((*pbVar25 & 4) == 0)) && (iStack_2c == 0)) {
            iVar4 = *(int *)(pbVar25 + 4);
            psVar5 = *(short **)(pbVar25 + 8);
            iVar6 = *(int *)((int)this + 0x378);
            iVar7 = param_7[1];
            psVar19 = psVar5 + 1;
            cVar3 = *(char *)(*(int *)((int)this + 0x37c) * (*psVar19 - iVar6) +
                              *(int *)((int)this + 0x38c) + (*psVar5 - iVar11));
            iStack_f0 = 0;
            if (0 < iVar4) {
              do {
                psVar19[-1] = psVar19[-1] +
                              ((((short)iVar11 - (short)iVar18) + (short)iVar10) -
                              *(short *)((int)this + 0x374));
                *psVar19 = *psVar19 +
                           ((((short)iVar6 - (short)iVar7) + (short)iStack_54) -
                           *(short *)((int)this + 0x378));
                if ((*(byte *)(psVar19 + 2) & 2) != 0) {
                  psVar19[-1] = psVar19[-1] + -1;
                }
                if ((*(byte *)(psVar19 + 2) & 1) != 0) {
                  *psVar19 = *psVar19 + -1;
                }
                if (*(char *)((int)*psVar19 * *(int *)((int)this + 0x37c) + (int)psVar19[-1] +
                             *(int *)((int)this + 0x38c)) != cVar3) break;
                iStack_f0 = iStack_f0 + 1;
                psVar19 = psVar19 + 4;
              } while (iStack_f0 < iVar4);
            }
            if (iVar4 <= iStack_f0) {
              psStack_a0 = (short *)FUN_006aac70(iVar4 * 8);
              iVar22 = 0;
              if (0 < iVar4) {
                psVar19 = psVar5 + 1;
                do {
                  uVar28 = CONCAT44(0xffffffff,(uint)*(byte *)(psVar19 + 2)) & 0xffffffff00000003;
                  thunk_FUN_004248d0(this,(int)psStack_a0,iVar22,(int)psVar19[-1],(int)*psVar19,
                                     (uint)uVar28,(uint)(uVar28 >> 0x20));
                  iVar22 = iVar22 + 1;
                  psVar19 = psVar19 + 4;
                } while (iVar22 < iVar4);
              }
              FUN_006a5e90((undefined4 *)psVar5);
              *(short **)(param_7[8] + 8) = psStack_a0;
              *param_7 = iStack_48 + *(int *)((int)this + 0x374);
              param_7[1] = iStack_54 + *(int *)((int)this + 0x378);
              param_7[4] = (int)fStack_68;
              param_7[5] = (int)fStack_c0;
              ExceptionList = pvStack_14;
              return 0;
            }
          }
        }
        uStack_8 = 0;
        FUN_0072da40();
        puStack_1c = &stack0xfffffea0;
        puStack_64 = (uint *)&stack0xfffffea0;
        puVar23 = (undefined4 *)&stack0xfffffea0;
        for (uVar15 = (uint)(iVar22 * 4 * iVar17) >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar23 = 0;
          puVar23 = puVar23 + 1;
        }
        for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined1 *)puVar23 = 0;
          puVar23 = (undefined4 *)((int)puVar23 + 1);
        }
        uStack_8 = 0xffffffff;
        pcStack_3c = (char *)((iStack_54 + iStack_d4) * *(int *)((int)this + 0x37c) +
                              *(int *)((int)this + 0x38c) + iStack_c4 + iStack_48);
        puStack_dc = (uint *)(&stack0xfffffea0 + (iVar22 * iStack_d4 + iStack_c4) * 4);
        iStack_140 = param_6 + -1;
        iVar10 = iStack_c4 >> 3;
        if (0 < iStack_140) {
          bVar14 = (byte)iStack_c4 & 7;
          uVar15 = 0x40 >> bVar14;
          pbVar25 = (byte *)(iStack_28 * iStack_d4 + iVar10 + 1 + param_1);
          pbStack_138 = (byte *)((iStack_d4 + 1) * iStack_28 + iVar10 + 1 + param_1);
          puVar13 = puStack_dc;
          do {
            puVar13 = puVar13 + iVar22;
            iStack_12c = param_5 + -1;
            pcVar12 = pcStack_3c + *(int *)((int)this + 0x37c);
            uStack_d8 = (uint)pbVar25[-1];
            uStack_b4 = (uint)pbStack_138[-1];
            pbStack_94 = pbStack_138;
            uStack_50 = 0x80 >> bVar14;
            uStack_34 = uVar15;
            pbVar20 = pbVar25;
            if (uVar15 == 0) {
              uStack_50 = 0x100;
              uStack_34 = 0x80;
              uStack_d8 = (uint)CONCAT11(pbVar25[-1],*pbVar25);
              pbVar20 = pbVar25 + 1;
              uStack_b4 = (uint)CONCAT11(pbStack_138[-1],*pbStack_138);
              pbStack_94 = pbStack_138 + 1;
            }
            if ((uStack_50 & uStack_d8) != 0) {
              cStack_40 = *pcStack_3c;
              if (((1 < param_5) && ((uStack_34 & uStack_d8) != 0)) &&
                 (*pcStack_3c == pcStack_3c[1])) {
                *puStack_dc = *puStack_dc | 1;
                puVar13[1 - iVar22] = puVar13[1 - iVar22] | 0x10;
              }
              if (((uStack_50 & uStack_b4) != 0) && (cStack_40 == *pcVar12)) {
                *puStack_dc = *puStack_dc | 0x40;
                *puVar13 = *puVar13 | 4;
              }
              if (((1 < param_5) && ((uStack_34 & uStack_b4) != 0)) && (cStack_40 == pcVar12[1])) {
                *puStack_dc = *puStack_dc | 0x80;
                puVar13[1] = puVar13[1] | 8;
              }
            }
            pcVar8 = pcStack_3c;
            iVar11 = 1;
            if (1 < iStack_12c) {
              puVar16 = puVar13 + (1 - iVar22);
              puVar24 = puVar13 + 2;
              do {
                uStack_c8 = uStack_50;
                uStack_50 = uStack_34;
                uStack_34 = (int)uStack_34 >> 1;
                if (uStack_34 == 0) {
                  uStack_c8 = 0x200;
                  uStack_50 = 0x100;
                  uStack_34 = 0x80;
                  uStack_d8 = uStack_d8 << 8 | (uint)*pbVar20;
                  pbVar20 = pbVar20 + 1;
                  pbStack_38 = pbVar20;
                  uStack_b4 = uStack_b4 << 8 | (uint)*pbStack_94;
                  pbStack_94 = pbStack_94 + 1;
                }
                if ((uStack_50 & uStack_d8) != 0) {
                  cStack_40 = pcVar8[iVar11];
                  if (((uStack_34 & uStack_d8) != 0) && (pcVar8[iVar11] == pcStack_3c[iVar11 + 1]))
                  {
                    *puVar16 = *puVar16 | 1;
                    puVar1 = (uint *)(((int)puStack_dc - (int)puVar13) + (int)puVar24);
                    *puVar1 = *puVar1 | 0x10;
                  }
                  if (((uStack_c8 & uStack_b4) != 0) && (cStack_40 == pcVar12[iVar11 + -1])) {
                    *puVar16 = *puVar16 | 0x20;
                    puVar24[-2] = puVar24[-2] | 2;
                  }
                  if (((uStack_50 & uStack_b4) != 0) && (cStack_40 == pcVar12[iVar11])) {
                    *puVar16 = *puVar16 | 0x40;
                    puVar24[-1] = puVar24[-1] | 4;
                  }
                  if (((uStack_34 & uStack_b4) != 0) && (cStack_40 == pcVar12[iVar11 + 1])) {
                    *puVar16 = *puVar16 | 0x80;
                    *puVar24 = *puVar24 | 8;
                  }
                }
                iVar11 = iVar11 + 1;
                puVar16 = puVar16 + 1;
                puVar24 = puVar24 + 1;
              } while (iVar11 < param_5 + -1);
            }
            if ((1 < param_5) && ((uStack_34 & uStack_d8) != 0)) {
              cVar3 = pcStack_3c[iVar11];
              if (((uStack_50 & uStack_b4) != 0) && (cVar3 == pcVar12[iVar11 + -1])) {
                puStack_dc[iVar11] = puStack_dc[iVar11] | 0x20;
                puVar13[iVar11 + -1] = puVar13[iVar11 + -1] | 2;
              }
              if (((uStack_34 & uStack_b4) != 0) && (cVar3 == pcVar12[iVar11])) {
                puStack_dc[iVar11] = puStack_dc[iVar11] | 0x40;
                puVar13[iVar11] = puVar13[iVar11] | 4;
              }
            }
            pcStack_3c = pcStack_3c + *(int *)((int)this + 0x37c);
            puStack_dc = puStack_dc + iVar22;
            pbStack_138 = pbStack_138 + iStack_28;
            pbVar25 = pbVar25 + iStack_28;
            iStack_140 = iStack_140 + -1;
          } while (iStack_140 != 0);
        }
        pbVar25 = (byte *)(iVar10 + param_1 + (iStack_d4 + -1 + param_6) * iStack_28);
        uVar21 = (uint)*pbVar25;
        pbVar20 = pbVar25 + 1;
        bVar14 = (byte)iStack_c4 & 7;
        uVar26 = 0x80 >> bVar14;
        uVar15 = 0x40 >> bVar14;
        if (uVar15 == 0) {
          uVar26 = 0x100;
          uVar15 = 0x80;
          uVar21 = (uint)CONCAT11(*pbVar25,*pbVar20);
          pbVar20 = pbVar25 + 2;
        }
        if (((((uVar21 & uVar26) != 0) && (1 < param_5)) && ((uVar21 & uVar15) != 0)) &&
           (*pcStack_3c == pcStack_3c[1])) {
          *puStack_dc = *puStack_dc | 1;
          puStack_dc[1] = puStack_dc[1] | 0x10;
        }
        iVar10 = 1;
        if (1 < param_5 + -1) {
          do {
            puVar13 = puStack_dc + 1;
            uVar26 = (int)uVar15 >> 1;
            if (uVar26 == 0) {
              uVar15 = 0x100;
              uVar26 = 0x80;
              uVar21 = uVar21 << 8 | (uint)*pbVar20;
              pbVar20 = pbVar20 + 1;
            }
            if ((((uVar21 & uVar15) != 0) && ((uVar21 & uVar26) != 0)) &&
               (pcStack_3c[iVar10] == pcStack_3c[iVar10 + 1])) {
              *puVar13 = *puVar13 | 1;
              puStack_dc[2] = puStack_dc[2] | 0x10;
            }
            iVar10 = iVar10 + 1;
            uVar15 = uVar26;
            puStack_dc = puVar13;
          } while (iVar10 < param_5 + -1);
        }
        iVar17 = iVar17 + -1;
LAB_0042596f:
        iVar11 = iStack_9c;
        iVar18 = 0;
        puStack_dc = puStack_64;
        if (0 < iVar17) {
          do {
            iVar10 = 0;
            puVar13 = puStack_dc;
            if (0 < iVar22) {
              do {
                uVar15 = *puVar13;
                if (((uVar15 != 0) && ((uVar15 & 0x200) == 0)) && (((byte)uVar15 & 0x55) != 0x55))
                break;
                iVar10 = iVar10 + 1;
                puVar13 = puVar13 + 1;
              } while (iVar10 < iVar22);
            }
            if (iVar10 < iVar22) goto LAB_004259c4;
            puStack_dc = puStack_dc + iVar22;
            iVar18 = iVar18 + 1;
          } while (iVar18 < iVar17);
        }
        if (iVar22 <= iVar10) {
          puVar9 = puStack_1c;
          if (iStack_d0 == 0) {
            FUN_006ab060(&puStack_a8);
            puVar9 = puStack_1c;
          }
          goto LAB_004267d5;
        }
LAB_004259c4:
        puStack_dc = puStack_dc + iVar10;
        bVar14 = *(byte *)((iVar18 + iStack_54) * *(int *)((int)this + 0x37c) +
                           *(int *)((int)this + 0x38c) + iVar10 + iStack_48);
        uStack_24 = bVar14 & 0xf;
        if (iStack_9c <= iStack_d0) {
          puVar13 = (uint *)FUN_006acf50(puStack_a8,(iStack_9c * 3 + 0x1e) * 4);
          if (puVar13 == (uint *)0x0) {
LAB_0042678e:
            iStack_4c = -2;
            puVar9 = puStack_1c;
            goto LAB_004267d5;
          }
          iStack_9c = iVar11 + 10;
          puStack_a8 = puVar13;
        }
        uVar15 = 0;
        puStack_a8[iStack_d0 * 3] = 0;
        psStack_a0 = (short *)0x0;
        iStack_90 = 0;
        iStack_44 = 0;
        uStack_8c = 0x10;
        uStack_50 = *puStack_dc;
        *puStack_dc = uStack_50 | 0x100;
        do {
          if (200 < iStack_90) {
            if ((short *)puStack_a8[iStack_d0 * 3 + -1] != psStack_a0) {
              FUN_006ab060(&psStack_a0);
            }
            if (0 < iStack_d0) {
              iVar22 = 0;
              do {
                FUN_006a5e90(*(undefined4 **)(iVar22 + 8 + (int)puStack_a8));
                iVar22 = iVar22 + 0xc;
                iStack_d0 = iStack_d0 + -1;
              } while (iStack_d0 != 0);
            }
            FUN_006ab060(&puStack_a8);
            iStack_d0 = 0;
            puVar9 = puStack_1c;
            break;
          }
          if (iStack_44 + -1 <= (int)uVar15) {
            psStack_a0 = (short *)FUN_006acf50((undefined4 *)psStack_a0,iStack_44 * 8 + 0x50);
            if (psStack_a0 == (short *)0x0) goto LAB_0042678e;
            puStack_a8[iStack_d0 * 3 + 2] = (uint)psStack_a0;
            iStack_44 = iStack_44 + 10;
          }
          iStack_90 = iStack_90 + 1;
          *puStack_dc = *puStack_dc | 0x200;
          switch(uStack_8c) {
          case 1:
            if ((uStack_50 & 0x80) == 0) {
              if ((uStack_50 & 1) == 0) {
                if ((uStack_50 & 2) != 0) goto LAB_00426273;
                if ((uStack_50 & 4) != 0) {
LAB_00426157:
                  if ((int)uStack_24 <= iStack_60) {
                    uVar21 = 3;
                    goto LAB_00426163;
                  }
                  goto LAB_00426186;
                }
                if ((uStack_50 & 8) != 0) {
LAB_004261a9:
                  if ((int)uStack_24 <= iStack_60) {
                    uVar29 = 0x200000003;
                    goto LAB_004261b5;
                  }
                  goto LAB_004261d8;
                }
                if ((uStack_50 & 0x10) != 0) {
LAB_00426205:
                  if (iStack_60 < (int)uStack_24) goto LAB_004263c4;
                  uVar21 = 3;
                  uVar26 = 2;
                  goto LAB_00426215;
                }
              }
              else {
                if ((((int)uStack_24 <= iStack_60) && (iVar18 < iVar17)) &&
                   ((puStack_dc[iVar22] != 0 && ((puStack_dc[iVar22] & 0x10) == 0)))) {
                  uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                              iVar18 + iStack_54,1,0xffffffff);
                }
                puStack_dc = puStack_dc + 1;
                iVar10 = iVar10 + 1;
              }
            }
            else {
LAB_00425fac:
              if ((int)uStack_24 <= iStack_60) {
                uVar26 = 0xffffffff;
                uVar21 = 1;
LAB_004265cd:
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,uVar21,uVar26);
              }
LAB_00426606:
              puStack_dc = puStack_dc + iVar22 + 1;
              iVar10 = iVar10 + 1;
              iVar18 = iVar18 + 1;
              uStack_8c = 0x80;
            }
            break;
          case 2:
            if ((uStack_50 & 0x80) != 0) {
              if ((int)uStack_24 <= iStack_60) {
                uVar29 = 0xffffffff00000003;
LAB_0042605b:
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,(uint)uVar29,
                                            (uint)((ulonglong)uVar29 >> 0x20));
              }
              goto LAB_00426606;
            }
            if ((uStack_50 & 1) == 0) {
              if ((uStack_50 & 2) == 0) {
                if ((uStack_50 & 4) != 0) goto LAB_00426157;
                if ((uStack_50 & 8) != 0) goto LAB_004261a9;
                if ((uStack_50 & 0x10) != 0) goto LAB_00426205;
                if ((uStack_50 & 0x20) != 0) {
                  if ((int)uStack_24 <= iStack_60) {
                    uVar21 = 3;
                    goto LAB_00426527;
                  }
                  goto LAB_0042654a;
                }
              }
              else {
                if (((((int)uStack_24 <= iStack_60) && (iVar10 < iVar22 + -1)) &&
                    (puStack_dc[1] != 0)) && ((puStack_dc[1] & 0x20) == 0)) {
                  uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                              iVar18 + iStack_54,3,0xffffffff);
                }
                puStack_dc = puStack_dc + (1 - iVar22);
                iVar10 = iVar10 + 1;
                iVar18 = iVar18 + -1;
              }
            }
            else {
              if ((int)uStack_24 <= iStack_60) {
                uVar29 = 0xffffffff00000003;
LAB_004260a9:
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,(uint)uVar29,
                                            (uint)((ulonglong)uVar29 >> 0x20));
              }
LAB_004260cc:
              puStack_dc = puStack_dc + 1;
              iVar10 = iVar10 + 1;
              uStack_8c = 1;
            }
            break;
          case 4:
            if ((uStack_50 & 2) == 0) {
              if ((uStack_50 & 4) == 0) {
                if ((uStack_50 & 8) != 0) goto LAB_00426339;
                if ((uStack_50 & 0x10) != 0) {
                  if ((int)uStack_24 <= iStack_60) {
                    uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                                iVar18 + iStack_54,2,0xffffffff);
                  }
                  goto LAB_004263c4;
                }
                if ((uStack_50 & 0x20) != 0) {
                  if ((int)uStack_24 <= iStack_60) {
                    uVar29 = 2;
                    goto LAB_004263eb;
                  }
                  goto LAB_0042640e;
                }
                if ((uStack_50 & 0x40) != 0) {
                  if ((int)uStack_24 <= iStack_60) {
                    uVar29 = 2;
                    goto LAB_00425e40;
                  }
                  goto LAB_00425e63;
                }
              }
              else {
                if ((((int)uStack_24 <= iStack_60) && (iVar10 < iVar22 + -1)) &&
                   ((puStack_dc[1] != 0 && ((puStack_dc[1] & 0x40) == 0)))) {
                  uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                              iVar18 + iStack_54,3,0xffffffff);
                }
                puStack_dc = puStack_dc + -iVar22;
                iVar18 = iVar18 + -1;
              }
            }
            else {
LAB_00426273:
              if ((int)uStack_24 <= iStack_60) {
                uVar21 = 3;
                uVar26 = 0xffffffff;
LAB_0042627f:
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,uVar21,uVar26);
              }
LAB_004262a2:
              puStack_dc = puStack_dc + (1 - iVar22);
              iVar10 = iVar10 + 1;
              iVar18 = iVar18 + -1;
              uStack_8c = 2;
            }
            break;
          case 8:
            if ((uStack_50 & 2) != 0) {
              if ((int)uStack_24 <= iStack_60) {
                uVar21 = 2;
                uVar26 = 0xffffffff;
                goto LAB_0042627f;
              }
              goto LAB_004262a2;
            }
            if ((uStack_50 & 4) == 0) {
              if ((uStack_50 & 8) == 0) {
                if ((uStack_50 & 0x10) != 0) {
                  if (iStack_60 < (int)uStack_24) goto LAB_004263c4;
                  uVar21 = 2;
                  uVar26 = 0xffffffff;
                  goto LAB_00426215;
                }
                if ((uStack_50 & 0x20) == 0) {
                  if ((uStack_50 & 0x40) != 0) {
                    if ((int)uStack_24 <= iStack_60) {
                      uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                                  iVar18 + iStack_54,2,0);
                    }
                    iVar11 = iVar22 * 4;
                    goto LAB_00425e6c;
                  }
                  if ((uStack_50 & 0x80) != 0) {
                    if (iStack_60 < (int)uStack_24) goto LAB_00426606;
                    uVar21 = 2;
                    uVar26 = 1;
                    goto LAB_004265cd;
                  }
                }
                else {
                  if ((int)uStack_24 <= iStack_60) {
                    uVar21 = 2;
LAB_00426527:
                    uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                                iVar18 + iStack_54,uVar21,0);
                  }
LAB_0042654a:
                  puStack_dc = puStack_dc + iVar22 + -1;
                  iVar10 = iVar10 + -1;
                  iVar18 = iVar18 + 1;
                  uStack_8c = 0x20;
                }
              }
              else {
                if ((((int)uStack_24 <= iStack_60) && (iVar10 < iVar22 + -1)) &&
                   ((puStack_dc[-iVar22] != 0 && ((puStack_dc[-iVar22] & 0x80) == 0)))) {
                  uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                              iVar18 + iStack_54,2,0xffffffff);
                }
                puStack_dc = puStack_dc + (-1 - iVar22);
                iVar10 = iVar10 + -1;
                iVar18 = iVar18 + -1;
              }
            }
            else {
              if ((int)uStack_24 <= iStack_60) {
                uVar21 = 2;
LAB_00426163:
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,uVar21,0xffffffff);
              }
LAB_00426186:
              iVar11 = iVar22 << 2;
LAB_0042618f:
              puStack_dc = (uint *)((int)puStack_dc - iVar11);
              iVar18 = iVar18 + -1;
              uStack_8c = 4;
            }
            break;
          case 0x10:
            if ((uStack_50 & 8) == 0) {
              if ((uStack_50 & 0x10) == 0) {
                if ((uStack_50 & 0x20) != 0) {
                  if ((int)uStack_24 <= iStack_60) {
                    uVar21 = 0;
                    goto LAB_00425b8a;
                  }
                  goto LAB_00425bad;
                }
                if ((uStack_50 & 0x40) != 0) {
LAB_00425bc3:
                  if ((int)uStack_24 <= iStack_60) {
                    uVar29 = 0xffffffff00000000;
                    goto LAB_00425e40;
                  }
                  goto LAB_00425e63;
                }
                if ((uStack_50 & 0x80) != 0) {
LAB_00425bdc:
                  if ((int)uStack_24 <= iStack_60) {
                    uVar29 = 0x100000000;
                    goto LAB_0042605b;
                  }
                  goto LAB_00426606;
                }
                if ((uStack_50 & 1) != 0) {
LAB_00425bf9:
                  if ((int)uStack_24 <= iStack_60) {
                    uVar29 = 0x100000000;
                    goto LAB_004260a9;
                  }
                  goto LAB_004260cc;
                }
              }
              else {
                if (((((int)uStack_24 <= iStack_60) && (0 < iVar18)) && (puStack_dc[-iVar22] != 0))
                   && ((puStack_dc[-iVar22] & 1) == 0)) {
                  uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                              iVar18 + iStack_54,2,0xffffffff);
                }
                puStack_dc = puStack_dc + -1;
                iVar10 = iVar10 + -1;
              }
            }
            else {
LAB_00426339:
              if ((int)uStack_24 <= iStack_60) {
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,2,0xffffffff);
              }
              puStack_dc = puStack_dc + (-1 - iVar22);
              iVar10 = iVar10 + -1;
              iVar18 = iVar18 + -1;
              uStack_8c = 8;
            }
            break;
          case 0x20:
            if ((uStack_50 & 8) == 0) {
              if ((uStack_50 & 0x10) == 0) {
                if ((uStack_50 & 0x20) == 0) {
                  if ((uStack_50 & 0x40) != 0) goto LAB_00425bc3;
                  if ((uStack_50 & 0x80) != 0) goto LAB_00425bdc;
                  if ((uStack_50 & 1) != 0) goto LAB_00425bf9;
                  if ((uStack_50 & 2) != 0) {
                    if ((int)uStack_24 <= iStack_60) {
                      uVar21 = 0;
                      uVar26 = 3;
                      goto LAB_0042627f;
                    }
                    goto LAB_004262a2;
                  }
                }
                else {
                  if ((((int)uStack_24 <= iStack_60) && (0 < iVar10)) &&
                     ((puStack_dc[-1] != 0 && ((puStack_dc[-1] & 2) == 0)))) {
                    uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                                iVar18 + iStack_54,0,0xffffffff);
                  }
                  puStack_dc = puStack_dc + iVar22 + -1;
                  iVar10 = iVar10 + -1;
                  iVar18 = iVar18 + 1;
                }
              }
              else if (iStack_60 < (int)uStack_24) {
LAB_004263c4:
                puStack_dc = puStack_dc + -1;
                iVar10 = iVar10 + -1;
                uStack_8c = 0x10;
              }
              else {
                uVar21 = 0;
                uVar26 = 0xffffffff;
LAB_00426215:
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,uVar21,uVar26);
                puStack_dc = puStack_dc + -1;
                iVar10 = iVar10 + -1;
                uStack_8c = 0x10;
              }
            }
            else {
              if ((int)uStack_24 <= iStack_60) {
                uVar29 = 0xffffffff00000000;
LAB_004261b5:
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,(uint)uVar29,
                                            (uint)((ulonglong)uVar29 >> 0x20));
              }
LAB_004261d8:
              puStack_dc = puStack_dc + (-1 - iVar22);
              iVar10 = iVar10 + -1;
              iVar18 = iVar18 + -1;
              uStack_8c = 8;
            }
            break;
          case 0x40:
            if ((uStack_50 & 0x20) == 0) {
              if ((uStack_50 & 0x40) == 0) {
                if ((uStack_50 & 0x80) != 0) goto LAB_00425fac;
                if ((uStack_50 & 1) == 0) {
                  if ((uStack_50 & 2) == 0) {
                    if ((uStack_50 & 4) != 0) {
LAB_00425dd3:
                      if ((int)uStack_24 <= iStack_60) {
                        uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                                    iVar18 + iStack_54,1,3);
                      }
                      iVar11 = iVar22 * 4;
                      goto LAB_0042618f;
                    }
                  }
                  else {
LAB_00425d75:
                    if ((int)uStack_24 <= iStack_60) {
                      uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                                  iVar18 + iStack_54,1,3);
                    }
                    puStack_dc = puStack_dc + (1 - iVar22);
                    iVar10 = iVar10 + 1;
                    iVar18 = iVar18 + -1;
                    uStack_8c = 2;
                  }
                }
                else {
LAB_00425eeb:
                  if (iStack_60 < (int)uStack_24) goto LAB_004260cc;
                  uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                              iVar18 + iStack_54,1,0xffffffff);
                  puStack_dc = puStack_dc + 1;
                  iVar10 = iVar10 + 1;
                  uStack_8c = 1;
                }
              }
              else {
                if ((((int)uStack_24 <= iStack_60) && (0 < iVar10)) &&
                   ((puStack_dc[-1] != 0 && ((puStack_dc[-1] & 4) == 0)))) {
                  uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                              iVar18 + iStack_54,0,0xffffffff);
                }
                puStack_dc = puStack_dc + iVar22;
                iVar18 = iVar18 + 1;
              }
            }
            else {
              if ((int)uStack_24 <= iStack_60) {
                uVar29 = 0xffffffff00000000;
LAB_004263eb:
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,(uint)uVar29,
                                            (uint)((ulonglong)uVar29 >> 0x20));
              }
LAB_0042640e:
              iVar11 = iVar22 << 2;
LAB_00426417:
              puStack_dc = (uint *)((int)puStack_dc + iVar11 + -4);
              iVar10 = iVar10 + -1;
              iVar18 = iVar18 + 1;
              uStack_8c = 0x20;
            }
            break;
          case 0x80:
            if ((uStack_50 & 0x20) != 0) {
              if ((int)uStack_24 <= iStack_60) {
                uVar21 = 1;
LAB_00425b8a:
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,uVar21,0xffffffff);
              }
LAB_00425bad:
              iVar11 = iVar22 * 4;
              goto LAB_00426417;
            }
            if ((uStack_50 & 0x40) == 0) {
              if ((uStack_50 & 0x80) == 0) {
                if ((uStack_50 & 1) != 0) goto LAB_00425eeb;
                if ((uStack_50 & 2) != 0) goto LAB_00425d75;
                if ((uStack_50 & 4) != 0) goto LAB_00425dd3;
                if ((uStack_50 & 8) != 0) {
                  if ((int)uStack_24 <= iStack_60) {
                    uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                                iVar18 + iStack_54,1,2);
                  }
                  puStack_dc = puStack_dc + (-1 - iVar22);
                  iVar10 = iVar10 + -1;
                  iVar18 = iVar18 + -1;
                  uStack_8c = 8;
                }
              }
              else {
                if (((((int)uStack_24 <= iStack_60) && (0 < iVar10)) && (puStack_dc[-1] != 0)) &&
                   ((puStack_dc[-1] & 8) == 0)) {
                  uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                              iVar18 + iStack_54,1,0xffffffff);
                }
                puStack_dc = puStack_dc + iVar22 + 1;
                iVar10 = iVar10 + 1;
                iVar18 = iVar18 + 1;
              }
            }
            else {
              if ((int)uStack_24 <= iStack_60) {
                uVar29 = 0xffffffff00000001;
LAB_00425e40:
                uVar15 = thunk_FUN_004248d0(this,(int)psStack_a0,uVar15,iVar10 + iStack_48,
                                            iVar18 + iStack_54,(uint)uVar29,
                                            (uint)((ulonglong)uVar29 >> 0x20));
              }
LAB_00425e63:
              iVar11 = iVar22 << 2;
LAB_00425e6c:
              puStack_dc = (uint *)((int)puStack_dc + iVar11);
              iVar18 = iVar18 + 1;
              uStack_8c = 0x40;
            }
          }
          if (((uStack_50 & 0x100) != 0) && ((*puStack_dc & 0x200) != 0)) goto LAB_00426637;
          uStack_50 = *puStack_dc;
        } while( true );
      }
    }
  }
LAB_004267d5:
  puStack_1c = puVar9;
  if (iStack_4c == 0) {
    puStack_a4 = puStack_a8;
    if ((param_7[7] != 0) && (puVar13 = (uint *)param_7[8], puVar13 != (uint *)0x0)) {
      iVar22 = 0;
      puStack_a8 = puVar13;
      if (0 < param_7[7]) {
        do {
          FUN_006a5e90((undefined4 *)puStack_a8[2]);
          puStack_a8 = puStack_a8 + 3;
          iVar22 = iVar22 + 1;
        } while (iVar22 < param_7[7]);
      }
      FUN_006ab060(param_7 + 8);
      puStack_a8 = puStack_a4;
    }
    *param_7 = *(int *)((int)this + 0x374) + iStack_48;
    param_7[1] = *(int *)((int)this + 0x378) + iStack_54;
    param_7[2] = iStack_c4;
    param_7[3] = iStack_d4;
    param_7[4] = (int)fStack_68;
    param_7[5] = (int)fStack_c0;
    param_7[6] = param_1;
    param_7[7] = iStack_d0;
    param_7[8] = (int)puStack_a8;
    if ((0 < iStack_d0) && ((iStack_2c != 0 || (1 < iStack_d0)))) {
      *puStack_a8 = *puStack_a8 | 4;
    }
    ExceptionList = pvStack_14;
    return 0;
  }
  if (0 < iStack_d0) {
    iVar22 = 0;
    do {
      FUN_006a5e90(*(undefined4 **)(iVar22 + 8 + (int)puStack_a8));
      iVar22 = iVar22 + 0xc;
      iStack_d0 = iStack_d0 + -1;
    } while (iStack_d0 != 0);
  }
  FUN_006a5e90(puStack_a8);
  iVar22 = iStack_4c;
  RaiseInternalException(iStack_4c,DAT_007ed77c,s_E____titans_wlad_Td3dshad_cpp_007a5208,0x560);
  ExceptionList = pvStack_14;
  return iVar22;
LAB_00426637:
  if ((((psStack_a0[uVar15 * 4 + -4] == psStack_a0[4]) &&
       ((psStack_a0[uVar15 * 4 + -3] == psStack_a0[5] &&
        (uVar21 = (int)psStack_a0[uVar15 * 4 + -2] - (int)psStack_a0[6] >> 0x1f,
        (int)(((int)psStack_a0[uVar15 * 4 + -2] - (int)psStack_a0[6] ^ uVar21) - uVar21) < 3)))) ||
      ((psStack_a0[uVar15 * 4 + -8] == *psStack_a0 &&
       ((psStack_a0[uVar15 * 4 + -7] == psStack_a0[1] &&
        (uVar21 = (int)psStack_a0[uVar15 * 4 + -6] - (int)psStack_a0[2] >> 0x1f,
        (int)(((int)psStack_a0[uVar15 * 4 + -6] - (int)psStack_a0[2] ^ uVar21) - uVar21) < 3))))))
     || ((psStack_a0[uVar15 * 4 + -4] == *psStack_a0 &&
         ((psStack_a0[uVar15 * 4 + -3] == psStack_a0[1] &&
          (uVar21 = (int)psStack_a0[uVar15 * 4 + -2] - (int)psStack_a0[2] >> 0x1f,
          (int)(((int)psStack_a0[uVar15 * 4 + -2] - (int)psStack_a0[2] ^ uVar21) - uVar21) < 3))))))
  {
    uVar15 = uVar15 - 1;
  }
  if ((int)uVar15 < 3) {
    FUN_006a5e90((undefined4 *)psStack_a0);
    iStack_2c = 1;
  }
  else {
    puStack_a8[iStack_d0 * 3 + 1] = uVar15;
    if ((bVar14 & 0x80) != 0) {
      puStack_a8[iStack_d0 * 3] = puStack_a8[iStack_d0 * 3] | 1;
    }
    iStack_d0 = iStack_d0 + 1;
  }
  goto LAB_0042596f;
}

