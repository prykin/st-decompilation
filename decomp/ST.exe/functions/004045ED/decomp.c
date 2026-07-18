
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl thunk_FUN_00428e50(short *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  float10 fVar17;
  longlong lVar18;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  uint auStack_108 [4];
  int iStack_f8;
  int iStack_f4;
  uint uStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  int iStack_b8;
  undefined8 uStack_b4;
  uint uStack_ac;
  int iStack_a8;
  uint uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int *piStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int *piStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  byte bStack_50;
  undefined3 uStack_4f;
  int iStack_4c;
  int *piStack_48;
  uint *puStack_44;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  byte bStack_9;
  int *piStack_8;
  
  puVar5 = FUN_006b04d0(0x4f2);
  if (puVar5 == (undefined4 *)0x0) {
    piStack_30 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_006dbca0((int)puVar5);
    piStack_30 = piVar6;
    if (piVar6 != (int *)0x0) goto LAB_00428e95;
  }
  piVar6 = piStack_30;
  FUN_006a5e40(-2,DAT_007ed77c,0x7a5fdc,0x24d);
LAB_00428e95:
  dVar1 = ((double)DAT_00807570 * _DAT_00790590) / (double)_DAT_007ac580 + _DAT_007901c0;
  FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar18 = __ftol();
  iVar12 = (int)lVar18;
  uVar11 = iVar12 + 3U & 0xfffffffc;
  dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
  uStack_e8 = uVar11;
  iStack_14 = iVar12;
  fVar17 = FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  uStack_b4 = (double)((float10)_DAT_00790580 / fVar17);
  dVar1 = _DAT_00790570 / uStack_b4 + _DAT_007901c0;
  FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar18 = __ftol();
  uStack_c4 = (uint)lVar18;
  dVar1 = (double)(int)uStack_c4 * uStack_b4 - _DAT_00790580;
  dVar3 = ((double)(int)(uVar11 - iVar12) * (_DAT_00790590 / (double)iStack_14) + _DAT_00790590) -
          _DAT_00790560;
  iStack_14 = uVar11 - iVar12;
  FUN_006dc050(piVar6,0,0,0,uVar11,uStack_c4,0x1f08a9,0xc02c48c6,SUB84(dVar3,0),
               (int)((ulonglong)dVar3 >> 0x20),0,0xc0240000,SUB84(dVar1,0),
               (int)((ulonglong)dVar1 >> 0x20),0x4024000000000000,0x4023ee97865e3540,0);
  piVar6[0x4a] = 0xff;
  piVar6[0x49] = 6;
  iVar12 = 0;
  if (0 < *(int *)((int)param_1 + 0x455)) {
    piStack_40 = (int *)((int)param_1 + 0x459);
    do {
      iVar10 = *piStack_40;
      if (iVar10 != 0) {
        puVar5 = FUN_006aac10(*(uint *)(iVar10 + 0x24));
        *(undefined4 **)(iVar10 + 0x3c) = puVar5;
      }
      iVar12 = iVar12 + 1;
      piStack_40 = piStack_40 + 1;
    } while (iVar12 < *(int *)((int)param_1 + 0x455));
  }
  FUN_006dd610(piVar6,0,0,0x40240000,0,0x40240000);
  uStack_d4 = 0x41200000;
  uStack_d0 = 0x41200000;
  uStack_cc = 0;
  FUN_006e25d0(piVar6,&iStack_f8);
  FUN_006e25d0(piVar6,&iStack_e4);
  piVar6 = piStack_30;
  iStack_c8 = (iStack_f8 >> 0x10) - (iStack_e4 >> 0x10);
  piStack_48 = (int *)0xfffffffb;
  do {
    piVar13 = piStack_48;
    FUN_006e25d0(piVar6,&iStack_e4);
    *(int *)(PTR_DAT_007a5250 + (int)piVar13 * 4) = (iStack_e0 >> 0x10) - (iStack_f4 >> 0x10);
    piStack_48 = (int *)((int)piVar13 + 1);
  } while ((int)piStack_48 < 6);
  iStack_2c = 2;
  piVar13 = &DAT_007f4db8;
  do {
    iStack_14 = iStack_2c + -2;
    uStack_c0 = (double)((float)iStack_2c * _DAT_007904f8);
    uStack_b4 = (double)((float)iStack_14 * _DAT_007904f8);
    FUN_006e25d0(piVar6,&iStack_e4);
    piVar13[-1] = (iStack_e0 >> 0x10) - (iStack_f4 >> 0x10);
    FUN_006e25d0(piVar6,&iStack_e4);
    *piVar13 = (iStack_e0 >> 0x10) - (iStack_f4 >> 0x10);
    FUN_006e25d0(piVar6,&iStack_e4);
    piVar13[1] = (iStack_e0 >> 0x10) - (iStack_f4 >> 0x10);
    piVar13 = piVar13 + 3;
    iStack_2c = iStack_2c + 2;
  } while ((int)piVar13 < 0x7f4dc5);
  iStack_2c._1_3_ = (undefined3)((uint)iStack_2c >> 8);
  iStack_2c = CONCAT31(iStack_2c._1_3_,2);
  uStack_a4 = 0;
  bStack_9 = 1;
  piStack_40 = (int *)0x0;
  do {
    _bStack_50 = CONCAT31(uStack_4f,(byte)iStack_2c >> 1);
    FUN_006dd610(piVar6,(uint)piStack_40,0,0x40240000,0,0x40240000);
    puStack_44 = FUN_006ae290((uint *)0x0,10,0x1c,10);
    DAT_007f4dd0 = 0;
    iStack_90 = 0;
    if (0 < *(int *)((int)param_1 + 0x455)) {
      piStack_28 = (int *)((int)param_1 + 0x459);
      do {
        piVar13 = (int *)*piStack_28;
        if (piVar13 != (int *)0x0) {
          if (DAT_00802a58 != (void *)0x0) {
            uStack_a4 = uStack_a4 + 1;
            uVar11 = uStack_a4 & 0x8000000f;
            bVar16 = uVar11 == 0;
            if ((int)uVar11 < 0) {
              bVar16 = (uVar11 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar16) {
              thunk_FUN_00555040(DAT_00802a58,1,
                                 (int)(uStack_a4 + ((int)uStack_a4 >> 0x1f & 0xfU)) >> 4,(char *)0x0
                                );
            }
          }
          uVar11 = 0;
          while( true ) {
            if ((puStack_44[3] <= uVar11) ||
               (piVar7 = (int *)(puStack_44[2] * uVar11 + puStack_44[7]), piVar7 == (int *)0x0))
            goto LAB_004292e2;
            if (piVar13[10] == *piVar7) break;
            uVar11 = uVar11 + 1;
          }
          if (piVar7 != (int *)0x0) {
            piVar13[6] = uVar11;
            iVar12 = 0;
            if (0 < piVar13[9]) {
              do {
                if ((*(byte *)(piVar7[2] + iVar12) & bStack_50) != 0) {
                  *(byte *)(piVar13[0xf] + iVar12) = *(byte *)(piVar13[0xf] + iVar12) | bStack_50;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < piVar13[9]);
            }
            goto LAB_004293c6;
          }
LAB_004292e2:
          iStack_14 = (int)*(short *)((int)piVar13 + 6);
          iVar12 = piVar13[1];
          piStack_48 = (int *)(int)(short)piVar13[2];
          *(undefined2 *)(piVar13 + 1) = 0;
          *(undefined2 *)((int)piVar13 + 6) = 0;
          *(ushort *)(piVar13 + 2) = (ushort)*(byte *)(piVar13 + 0x12);
          *piVar13 = piVar6[0x50];
          piVar6[0x50] = (int)piVar13;
          piVar6[0x4f] = piVar6[0x4f] + 1;
          FUN_006ddbe0((int)piVar6);
          FUN_006ddd50(piVar6);
          piVar6[0x50] = 0;
          piVar6[0x4f] = 0;
          *(undefined2 *)((int)piVar13 + 6) = (undefined2)iStack_14;
          *(undefined2 *)(piVar13 + 2) = piStack_48._0_2_;
          *(short *)(piVar13 + 1) = (short)iVar12;
          iStack_110 = thunk_FUN_00428b20((int *)piVar6[3],uStack_e8,uStack_c4,auStack_108);
          iStack_114 = piVar13[10];
          iStack_10c = piVar13[0xf];
          uVar11 = FUN_006ae1c0(puStack_44,&iStack_114);
          piVar13[6] = uVar11;
        }
LAB_004293c6:
        piStack_28 = piStack_28 + 1;
        iStack_90 = iStack_90 + 1;
      } while (iStack_90 < *(int *)((int)param_1 + 0x455));
    }
    iStack_38 = (int)*param_1 / 2;
    if (piStack_40 == (int *)0x0) {
      iStack_7c = 1;
      iStack_a8 = 1;
      iStack_6c = 1;
      iStack_74 = 1;
LAB_00429475:
      iStack_8c = 0;
      iStack_84 = 0;
    }
    else if (piStack_40 == (int *)0x1) {
      iStack_7c = 0;
      iStack_8c = -1;
      iStack_a8 = -1;
      iStack_6c = 1;
      iStack_74 = 0;
      iStack_84 = 1;
    }
    else {
      if (piStack_40 == (int *)0x2) {
        iStack_7c = -1;
        iStack_a8 = -1;
        iStack_6c = -1;
        iStack_74 = -1;
        goto LAB_00429475;
      }
      iStack_8c = 1;
      iStack_7c = 0;
      iStack_a8 = 1;
      iStack_6c = -1;
      iStack_74 = 0;
      iStack_84 = -1;
    }
    iStack_80 = iStack_38 * iStack_38;
    iStack_90 = 0;
    if (0 < *(int *)((int)param_1 + 0x455)) {
      piStack_48 = (int *)((int)param_1 + 0x459);
      do {
        iVar12 = *piStack_48;
        iStack_10 = iVar12;
        if (iVar12 != 0) {
          if (DAT_00802a58 != (void *)0x0) {
            uStack_a4 = uStack_a4 + 1;
            uVar11 = uStack_a4 & 0x8000000f;
            bVar16 = uVar11 == 0;
            if ((int)uVar11 < 0) {
              bVar16 = (uVar11 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar16) {
              thunk_FUN_00555040(DAT_00802a58,1,
                                 (int)(uStack_a4 + ((int)uStack_a4 >> 0x1f & 0xfU)) >> 4,(char *)0x0
                                );
            }
          }
          if (*(uint *)(iVar12 + 0x18) < puStack_44[3]) {
            iVar10 = puStack_44[2] * *(uint *)(iVar12 + 0x18) + puStack_44[7];
          }
          else {
            iVar10 = 0;
          }
          iStack_64 = (int)*(short *)(iVar12 + 4) / 2;
          iVar8 = (int)*(short *)(iVar12 + 8);
          iStack_24 = iVar8 - (uint)*(byte *)(iVar12 + 0x48);
          iVar14 = (int)*(short *)(iVar12 + 6) / 2;
          if (((*(ushort *)(iVar12 + 0x4e) & 0x2000) == 0) ||
             (uStack_ac = 0, (*(ushort *)(iVar12 + 0x4e) & 0xf) != 0)) {
            uStack_ac = (uint)*(byte *)(iVar12 + 0x48);
          }
          piStack_28 = (int *)(iVar14 * iStack_38);
          iStack_b8 = iStack_80 * 5;
          iStack_3c = 1;
          piStack_8 = (int *)((int)param_1 + ((int)piStack_28 + iStack_64 + iStack_b8) * 4 + 0x459);
          uStack_34 = 0;
          iStack_1c = 5;
          iStack_14 = iVar14;
          if (iVar8 < 5) {
LAB_0042958f:
            iVar12 = *piStack_8;
            if ((iVar12 == 0) ||
               (iVar14 = (int)*(short *)(iVar12 + 8) - (uint)*(byte *)(iVar12 + 0x48),
               iVar8 + 3 < iVar14)) goto LAB_004296cf;
            if (*(uint *)(iVar12 + 0x18) < puStack_44[3]) {
              iVar12 = puStack_44[2] * *(uint *)(iVar12 + 0x18) + puStack_44[7];
            }
            else {
              iVar12 = 0;
            }
            iStack_60 = *(int *)(iVar12 + 0xc);
            iStack_5c = *(int *)(iVar12 + 0x10) +
                        *(int *)(PTR_DAT_007a5250 + (iVar14 - iStack_24) * 4);
            iStack_58 = *(int *)(iVar12 + 0x14);
            uStack_54 = *(undefined4 *)(iVar12 + 0x18);
            iStack_18 = iVar12;
            iVar14 = FUN_006b0460(&iStack_a0,(int *)(iVar10 + 0xc),&iStack_60);
            if (iVar14 == 0) goto LAB_004296cf;
            if (2 < *(int *)(iStack_10 + 0x24)) {
              iVar14 = *(int *)(iVar10 + 0x14);
              puStack_20 = (undefined4 *)piStack_30[3];
              iVar8 = *(int *)(iVar10 + 0x10);
              iVar2 = *(int *)(iVar10 + 0xc);
              iStack_4c = (((iStack_9c - iStack_5c) * iStack_58 + *(int *)(iVar12 + 4)) - iStack_60)
                          + iStack_a0;
              if (iStack_3c != 0) {
                uVar9 = *(int *)(iVar10 + 0x18) * iVar14;
                puVar5 = *(undefined4 **)(iVar10 + 4);
                puVar15 = puStack_20;
                for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *puVar15 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar15 = puVar15 + 1;
                }
                iStack_3c = 0;
                for (uVar9 = uVar9 & 3; iVar12 = iStack_18, uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
                  puVar5 = (undefined4 *)((int)puVar5 + 1);
                  puVar15 = (undefined4 *)((int)puVar15 + 1);
                }
              }
              uVar11 = thunk_FUN_00428ce0((int)((int)puStack_20 +
                                               iStack_a0 + ((iStack_9c - iVar8) * iVar14 - iVar2)),
                                          *(int *)(iVar10 + 0x14),iStack_4c,*(int *)(iVar12 + 0x14),
                                          iStack_98,iStack_94,*(int *)(iStack_10 + 0x3c),bStack_50);
              uStack_34 = uStack_34 | uVar11;
              goto LAB_004296cf;
            }
            if (iStack_94 < 3) goto LAB_004296cf;
            **(byte **)(iStack_10 + 0x3c) = **(byte **)(iStack_10 + 0x3c) | bStack_50;
            iVar12 = *(int *)(iStack_10 + 0x3c);
LAB_00429d7a:
            *(byte *)(iVar12 + 1) = *(byte *)(iVar12 + 1) | bStack_50;
            iVar12 = iStack_64;
            goto LAB_00429d7d;
          }
LAB_00429715:
          uStack_c0 = (double)CONCAT44(iStack_84 * iStack_38,(undefined4)uStack_c0);
          iStack_14 = iStack_6c * iStack_38;
          piStack_88 = &DAT_007a5248;
          iVar12 = (iStack_7c + iVar14) * iStack_38 + iStack_b8;
          piStack_70 = &DAT_007f4db8;
          do {
            iStack_78 = iVar14;
            iStack_68 = iStack_64;
            if ((((iStack_64 < 0) || (iStack_38 <= iStack_64)) || (iVar14 < 0)) ||
               (iStack_38 <= iVar14)) break;
            if (((-1 < iStack_64 + iStack_8c) && (iStack_64 + iStack_8c < iStack_38)) &&
               ((-1 < iStack_7c + iVar14 &&
                ((iStack_7c + iVar14 < iStack_38 &&
                 (piStack_8 = (int *)((int)param_1 + (iStack_8c + iVar12 + iStack_64) * 4 + 0x459),
                 iStack_24 < 5)))))) {
              iStack_1c = 5 - iStack_24;
              iStack_64 = iVar12;
              do {
                iVar12 = *piStack_8;
                if ((iVar12 != 0) &&
                   ((int)(((int)*(short *)(iStack_10 + 8) - uStack_ac) + *piStack_88) <
                    (int)*(short *)(iVar12 + 8))) {
                  if (*(uint *)(iVar12 + 0x18) < puStack_44[3]) {
                    iVar14 = puStack_44[2] * *(uint *)(iVar12 + 0x18) + puStack_44[7];
                  }
                  else {
                    iVar14 = 0;
                  }
                  iStack_60 = *(int *)(iVar14 + 0xc) - iStack_c8;
                  iStack_5c = *(int *)(iVar14 + 0x10) +
                              *(int *)(PTR_DAT_007a5250 +
                                      (((int)*(short *)(iVar12 + 8) - (uint)*(byte *)(iVar12 + 0x48)
                                       ) - iStack_24) * 4) + piStack_70[-1];
                  iStack_58 = *(int *)(iVar14 + 0x14);
                  uStack_54 = *(undefined4 *)(iVar14 + 0x18);
                  iStack_18 = iVar14;
                  iVar12 = FUN_006b0460(&iStack_a0,(int *)(iVar10 + 0xc),&iStack_60);
                  if (iVar12 != 0) {
                    iVar12 = *(int *)(iVar10 + 0x10);
                    iVar8 = *(int *)(iVar10 + 0x14);
                    puStack_20 = (undefined4 *)piStack_30[3];
                    iVar2 = *(int *)(iVar10 + 0xc);
                    iStack_4c = (((iStack_9c - iStack_5c) * iStack_58 + *(int *)(iVar14 + 4)) -
                                iStack_60) + iStack_a0;
                    if (iStack_3c != 0) {
                      uVar9 = *(int *)(iVar10 + 0x18) * iVar8;
                      puVar5 = *(undefined4 **)(iVar10 + 4);
                      puVar15 = puStack_20;
                      for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                        *puVar15 = *puVar5;
                        puVar5 = puVar5 + 1;
                        puVar15 = puVar15 + 1;
                      }
                      iStack_3c = 0;
                      for (uVar9 = uVar9 & 3; iVar14 = iStack_18, uVar9 != 0; uVar9 = uVar9 - 1) {
                        *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
                        puVar5 = (undefined4 *)((int)puVar5 + 1);
                        puVar15 = (undefined4 *)((int)puVar15 + 1);
                      }
                    }
                    uVar11 = thunk_FUN_00428ce0((int)((int)puStack_20 +
                                                     iStack_a0 +
                                                     ((iStack_9c - iVar12) * iVar8 - iVar2)),
                                                *(int *)(iVar10 + 0x14),iStack_4c,
                                                *(int *)(iVar14 + 0x14),iStack_98,iStack_94,
                                                *(int *)(iStack_10 + 0x3c),(byte)_bStack_50);
                    uStack_34 = uStack_34 | uVar11;
                  }
                }
                piStack_8 = piStack_8 + -iStack_80;
                iStack_1c = iStack_1c + -1;
              } while (iStack_1c != 0);
              iStack_1c = 0;
              iVar12 = iStack_64;
            }
            iStack_64 = iVar12;
            iVar12 = iStack_a8 + iStack_68;
            uStack_b4 = (double)CONCAT44(iVar12,(undefined4)uStack_b4);
            if ((((-1 < iVar12) && (iVar12 < iStack_38)) && (-1 < iStack_6c + iStack_78)) &&
               (iStack_6c + iStack_78 < iStack_38)) {
              piStack_8 = (int *)((int)param_1 +
                                 ((int)piStack_28 + iStack_b8 + iStack_a8 + iStack_68 + iStack_14) *
                                 4 + 0x459);
              iStack_1c = 5;
              if (iStack_24 < 5) {
                do {
                  iVar12 = *piStack_8;
                  if ((iVar12 != 0) &&
                     ((int)(((int)*(short *)(iStack_10 + 8) - uStack_ac) + *piStack_88) <
                      (int)*(short *)(iVar12 + 8))) {
                    if (*(uint *)(iVar12 + 0x18) < puStack_44[3]) {
                      iVar14 = puStack_44[2] * *(uint *)(iVar12 + 0x18) + puStack_44[7];
                    }
                    else {
                      iVar14 = 0;
                    }
                    iStack_60 = *(int *)(iVar14 + 0xc);
                    iStack_5c = *(int *)(iVar14 + 0x10) +
                                *(int *)(PTR_DAT_007a5250 +
                                        (((int)*(short *)(iVar12 + 8) -
                                         (uint)*(byte *)(iVar12 + 0x48)) - iStack_24) * 4) +
                                *piStack_70;
                    iStack_58 = *(int *)(iVar14 + 0x14);
                    uStack_54 = *(undefined4 *)(iVar14 + 0x18);
                    iStack_18 = iVar14;
                    iVar12 = FUN_006b0460(&iStack_a0,(int *)(iVar10 + 0xc),&iStack_60);
                    if (iVar12 != 0) {
                      if (*(int *)(iStack_10 + 0x24) < 3) {
                        if (2 < iStack_94) {
                          **(byte **)(iStack_10 + 0x3c) = **(byte **)(iStack_10 + 0x3c) | bStack_50;
                          iVar12 = *(int *)(iStack_10 + 0x3c);
                          goto LAB_00429d7a;
                        }
                      }
                      else {
                        iVar12 = *(int *)(iVar10 + 0x10);
                        iVar8 = *(int *)(iVar10 + 0x14);
                        puStack_20 = (undefined4 *)piStack_30[3];
                        iVar2 = *(int *)(iVar10 + 0xc);
                        iStack_4c = (((iStack_9c - iStack_5c) * iStack_58 + *(int *)(iVar14 + 4)) -
                                    iStack_60) + iStack_a0;
                        if (iStack_3c != 0) {
                          uVar9 = *(int *)(iVar10 + 0x18) * iVar8;
                          puVar5 = *(undefined4 **)(iVar10 + 4);
                          puVar15 = puStack_20;
                          for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                            *puVar15 = *puVar5;
                            puVar5 = puVar5 + 1;
                            puVar15 = puVar15 + 1;
                          }
                          iStack_3c = 0;
                          for (uVar9 = uVar9 & 3; iVar14 = iStack_18, uVar9 != 0; uVar9 = uVar9 - 1)
                          {
                            *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
                            puVar5 = (undefined4 *)((int)puVar5 + 1);
                            puVar15 = (undefined4 *)((int)puVar15 + 1);
                          }
                        }
                        uVar11 = thunk_FUN_00428ce0((int)((int)puStack_20 +
                                                         iStack_a0 +
                                                         ((iStack_9c - iVar12) * iVar8 - iVar2)),
                                                    *(int *)(iVar10 + 0x14),iStack_4c,
                                                    *(int *)(iVar14 + 0x14),iStack_98,iStack_94,
                                                    *(int *)(iStack_10 + 0x3c),bStack_50);
                        uStack_34 = uStack_34 | uVar11;
                      }
                    }
                  }
                  piStack_8 = piStack_8 + -iStack_80;
                  iStack_1c = iStack_1c + -1;
                } while (iStack_24 < iStack_1c);
              }
            }
            if (((-1 < iStack_74 + iStack_68) && (iStack_74 + iStack_68 < iStack_38)) &&
               ((-1 < iStack_84 + iStack_78 && (iStack_84 + iStack_78 < iStack_38)))) {
              piStack_8 = (int *)((int)param_1 +
                                 ((int)piStack_28 +
                                 iStack_68 + iStack_74 + iStack_b8 + uStack_c0._4_4_) * 4 + 0x459);
              if (iStack_24 < 5) {
                iStack_1c = 5 - iStack_24;
                do {
                  iVar12 = *piStack_8;
                  if ((iVar12 != 0) &&
                     ((int)(((int)*(short *)(iStack_10 + 8) - uStack_ac) + *piStack_88) <
                      (int)*(short *)(iVar12 + 8))) {
                    if (*(uint *)(iVar12 + 0x18) < puStack_44[3]) {
                      iVar14 = puStack_44[2] * *(uint *)(iVar12 + 0x18) + puStack_44[7];
                    }
                    else {
                      iVar14 = 0;
                    }
                    iStack_60 = *(int *)(iVar14 + 0xc) + iStack_c8;
                    iStack_5c = *(int *)(iVar14 + 0x10) +
                                *(int *)(PTR_DAT_007a5250 +
                                        (((int)*(short *)(iVar12 + 8) -
                                         (uint)*(byte *)(iVar12 + 0x48)) - iStack_24) * 4) +
                                piStack_70[1];
                    iStack_58 = *(int *)(iVar14 + 0x14);
                    uStack_54 = *(undefined4 *)(iVar14 + 0x18);
                    iStack_18 = iVar14;
                    iVar12 = FUN_006b0460(&iStack_a0,(int *)(iVar10 + 0xc),&iStack_60);
                    if (iVar12 != 0) {
                      iVar12 = *(int *)(iVar10 + 0x10);
                      iVar8 = *(int *)(iVar10 + 0x14);
                      puStack_20 = (undefined4 *)piStack_30[3];
                      iVar2 = *(int *)(iVar10 + 0xc);
                      iStack_4c = (((iStack_9c - iStack_5c) * iStack_58 + *(int *)(iVar14 + 4)) -
                                  iStack_60) + iStack_a0;
                      if (iStack_3c != 0) {
                        uVar9 = *(int *)(iVar10 + 0x18) * iVar8;
                        puVar5 = *(undefined4 **)(iVar10 + 4);
                        puVar15 = puStack_20;
                        for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                          *puVar15 = *puVar5;
                          puVar5 = puVar5 + 1;
                          puVar15 = puVar15 + 1;
                        }
                        iStack_3c = 0;
                        for (uVar9 = uVar9 & 3; iVar14 = iStack_18, uVar9 != 0; uVar9 = uVar9 - 1) {
                          *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
                          puVar5 = (undefined4 *)((int)puVar5 + 1);
                          puVar15 = (undefined4 *)((int)puVar15 + 1);
                        }
                      }
                      uVar11 = thunk_FUN_00428ce0((int)((int)puStack_20 +
                                                       iStack_a0 +
                                                       ((iStack_9c - iVar12) * iVar8 - iVar2)),
                                                  *(int *)(iVar10 + 0x14),iStack_4c,
                                                  *(int *)(iVar14 + 0x14),iStack_98,iStack_94,
                                                  *(int *)(iStack_10 + 0x3c),(byte)_bStack_50);
                      uStack_34 = uStack_34 | uVar11;
                    }
                  }
                  piStack_8 = piStack_8 + -iStack_80;
                  iStack_1c = iStack_1c + -1;
                } while (iStack_1c != 0);
              }
            }
            iStack_68 = uStack_b4._4_4_;
            piStack_28 = (int *)((int)piStack_28 + iStack_14);
            iVar12 = iStack_64 + iStack_14;
            iVar14 = iStack_78 + iStack_6c;
            piStack_70 = piStack_70 + 3;
            piStack_88 = piStack_88 + 1;
            iStack_64 = uStack_b4._4_4_;
            iStack_78 = iVar14;
          } while ((int)piStack_88 < 0x7a524d);
LAB_00429d7d:
          iStack_64 = iVar12;
          piVar6 = piStack_30;
          if (uStack_34 == 0) {
            iVar12 = 0;
            if (0 < *(int *)(iStack_10 + 0x24)) {
              iVar10 = 0;
              do {
                if ((*(byte *)(*(int *)(iStack_10 + 0x28) + iVar10) & bStack_9) != 0) {
                  *(byte *)(*(int *)(iStack_10 + 0x3c) + iVar12) =
                       *(byte *)(*(int *)(iStack_10 + 0x3c) + iVar12) | (byte)iStack_2c;
                }
                iVar12 = iVar12 + 1;
                iVar10 = iVar10 + 0x1c;
              } while (iVar12 < *(int *)(iStack_10 + 0x24));
            }
          }
          else {
            thunk_FUN_00428dc0((uint *)piStack_30[3],*(int *)(iVar10 + 0x14),*(int *)(iVar10 + 0x18)
                               ,*(int *)(iStack_10 + 0x3c),*(undefined4 *)(iStack_10 + 0x24),
                               (byte)iStack_2c);
          }
        }
        iStack_90 = iStack_90 + 1;
        piStack_48 = piStack_48 + 1;
      } while (iStack_90 < *(int *)((int)param_1 + 0x455));
    }
    puVar4 = puStack_44;
    puStack_44[1] = 0;
    while (uVar11 = puVar4[1], uVar11 < puVar4[3]) {
      iVar12 = puVar4[2] * uVar11 + puVar4[7];
      puVar4[1] = uVar11 + 1;
      if (iVar12 == 0) break;
      FUN_006a5e90(*(undefined4 **)(iVar12 + 4));
    }
    FUN_006ae110((byte *)puVar4);
    bStack_9 = bStack_9 << 1;
    piStack_40 = (int *)((int)piStack_40 + 1);
    iStack_2c = CONCAT31(iStack_2c._1_3_,(byte)iStack_2c << 2);
    if (3 < (int)piStack_40) {
      if (piVar6 != (int *)0x0) {
        FUN_006dbcf0(piVar6);
        FUN_0072e2b0(piVar6);
      }
      return;
    }
  } while( true );
LAB_004296cf:
  piStack_8 = piStack_8 + -iStack_80;
  iVar8 = (int)*(short *)(iStack_10 + 8);
  iStack_1c = iStack_1c + -1;
  iVar14 = iStack_14;
  if (iStack_1c <= iVar8) goto LAB_00429715;
  goto LAB_0042958f;
}

