
void thunk_FUN_00413af0(void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  undefined3 extraout_var;
  uint uVar13;
  int *extraout_EDX;
  int *piVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  int iStack_48;
  int iStack_40;
  int iStack_34;
  int iStack_30;
  uint uStack_28;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00790090;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  DAT_007f4d04 = (int *)0x0;
  DAT_007f4cf0 = DAT_007fb280;
  DAT_007f4d2c = (int)DAT_007fb278;
  DAT_007f4d30 = (int)DAT_007fb27a;
  DAT_007f4d34 = (int)DAT_007fb27c;
  if ((DAT_007f4d50 == 0) || (ExceptionList = &pvStack_14, DAT_007f4d54 == 0)) {
    ExceptionList = &pvStack_14;
    FUN_00414980(4000);
  }
  uStack_8 = 0;
  FUN_0072da40();
  iVar7 = DAT_007f4d34 * DAT_007f4d30 * DAT_007f4d2c + 7;
  uVar15 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  DAT_007f4d3c = &stack0xffffff84;
  FUN_0072da40();
  puVar16 = (undefined4 *)&stack0xffffff84;
  for (uVar13 = uVar15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined1 *)puVar16 = 0;
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  uStack_8 = 0xffffffff;
  iVar7 = DAT_007f4d30 * DAT_007f4d2c;
  DAT_007f4d24 = 0;
  DAT_007f4cfc = &stack0xffffff84;
  if (*(ushort *)((int)param_1 + 0x27) != DAT_007f4d4c) {
    DAT_007f4d4c = *(uint *)(*(int *)((int)param_1 + 0x29) + 0xc);
    uStack_28 = 0;
    DAT_007f4cfc = &stack0xffffff84;
    puVar5 = &stack0xffffff84;
    if (0 < (int)DAT_007f4d4c) {
      do {
        DAT_007f4cfc = puVar5;
        iVar9 = *(int *)((int)param_1 + 0x29);
        if (uStack_28 < *(uint *)(iVar9 + 0xc)) {
          psVar8 = (short *)(*(int *)(iVar9 + 8) * uStack_28 + *(int *)(iVar9 + 0x1c));
        }
        else {
          psVar8 = (short *)0x0;
        }
        if (psVar8 == (short *)0x0) break;
        if ((*psVar8 != -1) &&
           (iVar9 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)psVar8 >> 0x10),*psVar8)),
           iVar9 != 0)) {
          iVar12 = *(int *)(iVar9 + 199);
          if (((iVar12 < 0) ||
              (((DAT_007fb278 <= iVar12 || (iVar11 = *(int *)(iVar9 + 0xcb), iVar11 < 0)) ||
               (DAT_007fb27a <= iVar11)))) ||
             ((iVar4 = *(int *)(iVar9 + 0xcf), iVar4 < 0 || (DAT_007fb27c <= iVar4)))) {
            sVar1 = *(short *)(iVar9 + 0x47);
            if ((-1 < sVar1) &&
               (((sVar1 < DAT_007fb278 && (sVar2 = *(short *)(iVar9 + 0x49), -1 < sVar2)) &&
                ((sVar2 < DAT_007fb27a &&
                 ((sVar3 = *(short *)(iVar9 + 0x4b), -1 < sVar3 && (sVar3 < DAT_007fb27c)))))))) {
              uVar13 = sVar3 * iVar7 + sVar2 * DAT_007f4d2c + (int)sVar1 ^ 7;
              DAT_007f4cfc[(int)uVar13 >> 3] =
                   DAT_007f4cfc[(int)uVar13 >> 3] | '\x01' << (uVar13 & 7);
            }
          }
          else {
            uVar13 = iVar4 * iVar7 + iVar12 + iVar11 * DAT_007f4d2c ^ 7;
            DAT_007f4cfc[(int)uVar13 >> 3] = DAT_007f4cfc[(int)uVar13 >> 3] | '\x01' << (uVar13 & 7)
            ;
          }
          DAT_007f4d24 = DAT_007f4d24 + 1;
        }
        uStack_28 = uStack_28 + 1;
        puVar5 = DAT_007f4cfc;
      } while ((int)uStack_28 < (int)DAT_007f4d4c);
    }
  }
  DAT_007f4d04 = (int *)FUN_006aac70((uint)*(ushort *)((int)param_1 + 0x27) * 0x1c);
  DAT_007f4d40 = 0;
  DAT_007f4cf8 = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  iStack_40 = 0;
  DAT_007f4d48 = DAT_007f4d04;
  if ((*(int *)((int)param_1 + 0x4d) == -2) || (*(int *)((int)param_1 + 0x4d) == -3)) {
    iStack_48 = 0;
    uStack_28 = 0;
    piVar14 = extraout_EDX;
    if (*(short *)((int)param_1 + 0x27) != 0) {
      do {
        if (uStack_28 < *(uint *)(param_2 + 0xc)) {
          puVar10 = (undefined2 *)(*(int *)(param_2 + 8) * uStack_28 + *(int *)(param_2 + 0x1c));
        }
        else {
          puVar10 = (undefined2 *)0x0;
        }
        uVar17 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)piVar14 >> 0x10),*puVar10));
        piVar14 = (int *)((ulonglong)uVar17 >> 0x20);
        iVar9 = (int)uVar17;
        if (iVar9 != 0) {
          *(undefined4 *)(iVar9 + 0xb7) = 0;
          if (0 < DAT_007f4d24) {
            iVar12 = *(int *)(iVar9 + 199);
            if (((((iVar12 < 0) || (DAT_007fb278 <= iVar12)) ||
                 (iVar11 = *(int *)(iVar9 + 0xcb), iVar11 < 0)) ||
                ((DAT_007fb27a <= iVar11 || (iVar4 = *(int *)(iVar9 + 0xcf), iVar4 < 0)))) ||
               (DAT_007fb27c <= iVar4)) {
              sVar1 = *(short *)(iVar9 + 0x47);
              if (((-1 < sVar1) && (sVar1 < DAT_007fb278)) &&
                 ((sVar2 = *(short *)(iVar9 + 0x49), -1 < sVar2 &&
                  (((sVar2 < DAT_007fb27a && (sVar3 = *(short *)(iVar9 + 0x4b), -1 < sVar3)) &&
                   (sVar3 < DAT_007fb27c)))))) {
                uStack_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar7 + (int)sVar1;
              }
            }
            else {
              uStack_20 = iVar4 * iVar7 + iVar12 + iVar11 * DAT_007f4d2c;
            }
            if (((byte)DAT_007f4cfc[(int)(uStack_20 ^ 7) >> 3] >> ((uStack_20 ^ 7) & 7) & 1) != 0) {
              DAT_007f4cfc[(int)(uStack_20 ^ 7) >> 3] =
                   DAT_007f4cfc[(int)(uStack_20 ^ 7) >> 3] & ~('\x01' << ((uStack_20 ^ 7) & 7));
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          piVar14 = *(int **)((int)param_1 + 0x59);
          iVar12 = iStack_48;
          if ((uint)*(ushort *)(iVar9 + 0x32) != piVar14[iStack_48 * 4 + 6]) {
            iVar11 = iStack_48;
            do {
              iVar11 = iVar11 + 1;
              if (*piVar14 <= iVar11) {
                iVar11 = 0;
              }
              iVar12 = *piVar14;
            } while ((iVar11 != iStack_48) &&
                    (iVar12 = iVar11, (uint)*(ushort *)(iVar9 + 0x32) != piVar14[iVar11 * 4 + 6]));
          }
          if (iVar12 < *piVar14) {
            DAT_007f4d04[DAT_007f4d40 * 7] = (int)*(short *)(iVar9 + 0x47);
            iStack_30 = iStack_30 + 2 + *(short *)(iVar9 + 0x47) * 4;
            DAT_007f4d04[DAT_007f4d40 * 7 + 1] = (int)*(short *)(iVar9 + 0x49);
            iStack_34 = iStack_34 + 2 + *(short *)(iVar9 + 0x49) * 4;
            DAT_007f4d04[DAT_007f4d40 * 7 + 2] = (int)*(short *)(iVar9 + 0x4b);
            iStack_40 = iStack_40 + 2 + *(short *)(iVar9 + 0x4b) * 4;
            DAT_007f4d04[DAT_007f4d40 * 7 + 6] = uStack_28;
            if (*(int *)((int)param_1 + 0x4d) == -3) {
              *(undefined4 *)(DAT_007f4d3c + DAT_007f4d40 * 0x14) =
                   *(undefined4 *)(*(int *)((int)param_1 + 0x59) + 0xc + iVar12 * 0x10);
              *(undefined4 *)(DAT_007f4d3c + DAT_007f4d40 * 0x14 + 4) =
                   *(undefined4 *)((iVar12 + 1) * 0x10 + *(int *)((int)param_1 + 0x59));
              *(undefined4 *)(DAT_007f4d3c + DAT_007f4d40 * 0x14 + 8) =
                   *(undefined4 *)(*(int *)((int)param_1 + 0x59) + 0x14 + iVar12 * 0x10);
            }
            else {
              DAT_007f4d04[DAT_007f4d40 * 7 + 3] =
                   *(int *)(*(int *)((int)param_1 + 0x59) + 0xc + iVar12 * 0x10);
              DAT_007f4d04[DAT_007f4d40 * 7 + 4] =
                   *(int *)((iVar12 + 1) * 0x10 + *(int *)((int)param_1 + 0x59));
              DAT_007f4d04[DAT_007f4d40 * 7 + 5] =
                   *(int *)(*(int *)((int)param_1 + 0x59) + 0x14 + iVar12 * 0x10);
            }
            iStack_48 = iVar12 + 1;
            piVar14 = *(int **)((int)param_1 + 0x59);
            if (*piVar14 <= iStack_48) {
              iStack_48 = 0;
            }
            DAT_007f4d40 = DAT_007f4d40 + 1;
          }
          else {
            DAT_007f4cf8 = DAT_007f4cf8 + 1;
            DAT_007f4d04[((uint)*(ushort *)((int)param_1 + 0x27) - DAT_007f4cf8) * 7] =
                 (int)*(short *)(iVar9 + 0x47);
            DAT_007f4d04[((uint)*(ushort *)((int)param_1 + 0x27) - DAT_007f4cf8) * 7 + 1] =
                 (int)*(short *)(iVar9 + 0x49);
            DAT_007f4d04[((uint)*(ushort *)((int)param_1 + 0x27) - DAT_007f4cf8) * 7 + 2] =
                 (int)*(short *)(iVar9 + 0x4b);
            piVar14 = DAT_007f4d04;
            DAT_007f4d04[((uint)*(ushort *)((int)param_1 + 0x27) - DAT_007f4cf8) * 7 + 6] =
                 uStack_28;
          }
        }
        uStack_28 = uStack_28 + 1;
      } while ((int)uStack_28 < (int)(uint)*(ushort *)((int)param_1 + 0x27));
    }
  }
  else {
    uStack_28 = 0;
    piVar14 = extraout_EDX;
    if (*(short *)((int)param_1 + 0x27) != 0) {
      do {
        if (uStack_28 < *(uint *)(param_2 + 0xc)) {
          puVar10 = (undefined2 *)(*(int *)(param_2 + 8) * uStack_28 + *(int *)(param_2 + 0x1c));
        }
        else {
          puVar10 = (undefined2 *)0x0;
        }
        uVar17 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)piVar14 >> 0x10),*puVar10));
        piVar14 = (int *)((ulonglong)uVar17 >> 0x20);
        iVar9 = (int)uVar17;
        if (iVar9 != 0) {
          *(undefined4 *)(iVar9 + 0xb7) = 0;
          DAT_007f4d04[DAT_007f4d40 * 7] = (int)*(short *)(iVar9 + 0x47);
          iStack_30 = iStack_30 + 2 + *(short *)(iVar9 + 0x47) * 4;
          DAT_007f4d04[DAT_007f4d40 * 7 + 1] = (int)*(short *)(iVar9 + 0x49);
          iStack_34 = iStack_34 + 2 + *(short *)(iVar9 + 0x49) * 4;
          DAT_007f4d04[DAT_007f4d40 * 7 + 2] = (int)*(short *)(iVar9 + 0x4b);
          iStack_40 = iStack_40 + 2 + *(short *)(iVar9 + 0x4b) * 4;
          piVar14 = (int *)(DAT_007f4d40 * 7);
          DAT_007f4d04[DAT_007f4d40 * 7 + 6] = uStack_28;
          if (0 < DAT_007f4d24) {
            iVar12 = *(int *)(iVar9 + 199);
            if (((iVar12 < 0) || (DAT_007fb278 <= iVar12)) ||
               ((iVar11 = *(int *)(iVar9 + 0xcb), iVar11 < 0 ||
                (((DAT_007fb27a <= iVar11 || (iVar4 = *(int *)(iVar9 + 0xcf), iVar4 < 0)) ||
                 (DAT_007fb27c <= iVar4)))))) {
              sVar1 = *(short *)(iVar9 + 0x47);
              if (((-1 < sVar1) && (sVar1 < DAT_007fb278)) &&
                 ((sVar2 = *(short *)(iVar9 + 0x49), -1 < sVar2 &&
                  (((sVar2 < DAT_007fb27a && (sVar3 = *(short *)(iVar9 + 0x4b), -1 < sVar3)) &&
                   (sVar3 < DAT_007fb27c)))))) {
                uStack_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar7 + (int)sVar1;
              }
            }
            else {
              uStack_20 = iVar4 * iVar7 + iVar12 + iVar11 * DAT_007f4d2c;
            }
            piVar14 = (int *)(uStack_20 ^ 7);
            if (((byte)DAT_007f4cfc[(int)piVar14 >> 3] >> ((uint)piVar14 & 7) & 1) != 0) {
              piVar14 = (int *)(uStack_20 ^ 7);
              DAT_007f4cfc[(int)piVar14 >> 3] =
                   DAT_007f4cfc[(int)piVar14 >> 3] & ~('\x01' << ((uint)piVar14 & 7));
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          DAT_007f4d40 = DAT_007f4d40 + 1;
        }
        uStack_28 = uStack_28 + 1;
      } while ((int)uStack_28 < (int)(uint)*(ushort *)((int)param_1 + 0x27));
    }
  }
  if (DAT_007f4d24 < 0) {
    DAT_007f4d24 = 0;
  }
  DAT_007f4d20 = DAT_007f4d40;
  if (0 < DAT_007f4d40) {
    iVar7 = DAT_007f4d40 / 2;
    DAT_007f4d0c = (iVar7 + iStack_30) / DAT_007f4d40;
    DAT_007f4d10 = (iStack_34 + iVar7) / DAT_007f4d40;
    DAT_007f4d1c = (iVar7 + iStack_40) / DAT_007f4d40;
    cVar6 = FUN_006ad0b0(DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,param_3,param_4);
    DAT_007f4d08 = CONCAT31(extraout_var,cVar6);
    if (DAT_007f4d08 == 0x7f) {
      DAT_007f4d08 = 0;
    }
  }
  if (((*(int *)((int)param_1 + 0x4d) != 0) && ((*(byte *)((int)param_1 + 0x49) & 1) == 0)) &&
     (DAT_007f4d4c == *(ushort *)((int)param_1 + 0x27))) {
    iVar7 = FUN_006db910(DAT_007f4d0c,DAT_007f4d10,param_3 * 4 + 2,param_4 * 4 + 2);
    iVar7 = ((iVar7 * 4 + 0x2d) / 0x5a) * 0x5a;
    iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
    *(int *)((int)param_1 + 0x55) = iVar7;
    if (iVar7 == 0x168) {
      *(undefined4 *)((int)param_1 + 0x55) = 0;
    }
  }
  DAT_007f4d28 = FUN_006db640(*(int *)((int)param_1 + 0x55));
  DAT_007f4d38 = FUN_006db6d0(*(int *)((int)param_1 + 0x55));
  iVar7 = *(int *)((int)param_1 + 0x4d);
  switch(iVar7) {
  case 1:
    thunk_FUN_0040e0f0(param_3,param_4,param_5,0,*(int *)((int)param_1 + 0x51));
    break;
  case 2:
    thunk_FUN_0040fc40(param_3,param_4,param_5,0,*(int *)((int)param_1 + 0x51),0);
    break;
  case 3:
    thunk_FUN_00411260(param_3,param_4,param_5,0,*(int *)((int)param_1 + 0x51),
                       *(uint *)((int)param_1 + 0x55));
    break;
  case 4:
  case 5:
    thunk_FUN_00411e50(param_3,param_4,param_5,0,*(int *)((int)param_1 + 0x51),
                       *(uint *)((int)param_1 + 0x55),(uint)(iVar7 == 4));
    break;
  case -10:
    thunk_FUN_00410dc0(param_3,param_4,2,0,*(int *)((int)param_1 + 0x51));
    break;
  default:
    iVar7 = *(int *)((int)param_1 + 0x51);
    goto LAB_0041463f;
  case -3:
  case -2:
    if (DAT_007f4d20 < 1) {
      iVar7 = 0;
    }
    else {
      iVar7 = thunk_FUN_00412960(param_3,param_4,param_5,0,*(int *)((int)param_1 + 0x55),
                                 *(int *)((int)param_1 + 0x51),*(int *)((int)param_1 + 0x59),
                                 (uint)(iVar7 == -2));
    }
    if ((iVar7 != 0) || (DAT_007f4cf8 < 1)) break;
    DAT_007f4d48 = DAT_007f4d04 + ((uint)*(ushort *)((int)param_1 + 0x27) - DAT_007f4cf8) * 7;
    DAT_007f4d20 = DAT_007f4cf8;
    iVar7 = *(int *)((int)param_1 + 0x55);
    if ((iVar7 < 0x152) && (0x17 < iVar7)) {
      if (iVar7 < 0x125) {
        if (iVar7 < 0xf8) {
          if (iVar7 < 0xcb) {
            if (iVar7 < 0x9e) {
              if (iVar7 < 0x71) {
                DAT_007f4d08 = (0x43 < iVar7) + 1;
                iVar7 = 0;
              }
              else {
                DAT_007f4d08 = 3;
                iVar7 = 0;
              }
            }
            else {
              DAT_007f4d08 = 4;
              iVar7 = 0;
            }
          }
          else {
            DAT_007f4d08 = 5;
            iVar7 = 0;
          }
        }
        else {
          DAT_007f4d08 = 6;
          iVar7 = 0;
        }
      }
      else {
        DAT_007f4d08 = 7;
        iVar7 = 0;
      }
    }
    else {
      DAT_007f4d08 = 0;
      iVar7 = 0;
    }
LAB_0041463f:
    thunk_FUN_00413050(param_3,param_4,param_5,0,iVar7);
  }
  *(uint *)((int)param_1 + 0x49) = *(uint *)((int)param_1 + 0x49) & 0xfffffffe;
  ExceptionList = pvStack_14;
  return;
}

