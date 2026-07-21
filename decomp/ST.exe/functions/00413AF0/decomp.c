
void FUN_00413af0(void *param_1,DArrayTy *param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int *extraout_EDX;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  int local_48;
  int local_40;
  int local_34;
  int local_30;
  uint local_28;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_00790090;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  DAT_007f4d04 = (int *)0x0;
  DAT_007f4cf0 = g_pathingGrid.cells;
  DAT_007f4d2c = (int)g_pathingGrid.sizeX;
  DAT_007f4d30 = (int)g_pathingGrid.sizeY;
  DAT_007f4d34 = (int)g_pathingGrid.sizeZ;
  if ((DAT_007f4d50 == 0) || (ExceptionList = &local_14, DAT_007f4d54 == 0)) {
    ExceptionList = &local_14;
    FUN_00414980(4000);
  }
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  iVar6 = DAT_007f4d34 * DAT_007f4d30 * DAT_007f4d2c + 7;
  uVar14 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
  DAT_007f4d3c = &stack0xffffff84;
  Library::MSVCRT::FUN_0072da40();
  puVar15 = (undefined4 *)&stack0xffffff84;
  for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  local_8 = 0xffffffff;
  iVar6 = DAT_007f4d30 * DAT_007f4d2c;
  DAT_007f4d24 = 0;
  DAT_007f4cfc = &stack0xffffff84;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(ushort *)((int)param_1 + 0x27) != DAT_007f4d4c) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DAT_007f4d4c = *(uint *)(*(int *)((int)param_1 + 0x29) + 0xc);
    local_28 = 0;
    DAT_007f4cfc = &stack0xffffff84;
    puVar5 = &stack0xffffff84;
    if (0 < (int)DAT_007f4d4c) {
      do {
        DAT_007f4cfc = puVar5;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar8 = *(int *)((int)param_1 + 0x29);
        if (local_28 < *(uint *)(iVar8 + 0xc)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          psVar7 = (short *)(*(int *)(iVar8 + 8) * local_28 + *(int *)(iVar8 + 0x1c));
        }
        else {
          psVar7 = (short *)0x0;
        }
        if (psVar7 == (short *)0x0) break;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if ((*psVar7 != -1) &&
           (iVar8 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)psVar7 >> 0x10),*psVar7)),
           iVar8 != 0)) {
          iVar11 = *(int *)(iVar8 + 199);
          if (((iVar11 < 0) ||
              (((g_pathingGrid.sizeX <= iVar11 || (iVar10 = *(int *)(iVar8 + 0xcb), iVar10 < 0)) ||
               (g_pathingGrid.sizeY <= iVar10)))) ||
             ((iVar4 = *(int *)(iVar8 + 0xcf), iVar4 < 0 || (g_pathingGrid.sizeZ <= iVar4)))) {
            sVar1 = *(short *)(iVar8 + 0x47);
            if ((-1 < sVar1) &&
               (((sVar1 < g_pathingGrid.sizeX && (sVar2 = *(short *)(iVar8 + 0x49), -1 < sVar2)) &&
                ((sVar2 < g_pathingGrid.sizeY &&
                 ((sVar3 = *(short *)(iVar8 + 0x4b), -1 < sVar3 && (sVar3 < g_pathingGrid.sizeZ)))))
                ))) {
              uVar12 = sVar3 * iVar6 + sVar2 * DAT_007f4d2c + (int)sVar1 ^ 7;
              DAT_007f4cfc[(int)uVar12 >> 3] =
                   DAT_007f4cfc[(int)uVar12 >> 3] | '\x01' << (uVar12 & 7);
            }
          }
          else {
            uVar12 = iVar4 * iVar6 + iVar11 + iVar10 * DAT_007f4d2c ^ 7;
            DAT_007f4cfc[(int)uVar12 >> 3] = DAT_007f4cfc[(int)uVar12 >> 3] | '\x01' << (uVar12 & 7)
            ;
          }
          DAT_007f4d24 = DAT_007f4d24 + 1;
        }
        local_28 = local_28 + 1;
        puVar5 = DAT_007f4cfc;
      } while ((int)local_28 < (int)DAT_007f4d4c);
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  DAT_007f4d04 = (int *)Library::DKW::LIB::FUN_006aac70
                                  ((uint)*(ushort *)((int)param_1 + 0x27) * 0x1c);
  DAT_007f4d40 = 0;
  DAT_007f4cf8 = 0;
  local_30 = 0;
  local_34 = 0;
  local_40 = 0;
  DAT_007f4d48 = DAT_007f4d04;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)param_1 + 0x4d) == -2) || (*(int *)((int)param_1 + 0x4d) == -3)) {
    local_48 = 0;
    local_28 = 0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    piVar13 = extraout_EDX;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)((int)param_1 + 0x27) != 0) {
      do {
        if (local_28 < param_2->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_2, local_28) (runtime stride) */
          puVar9 = (undefined2 *)(param_2->elementSize * local_28 + (int)param_2->data);
        }
        else {
          puVar9 = (undefined2 *)0x0;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar16 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)piVar13 >> 0x10),*puVar9));
        piVar13 = (int *)((ulonglong)uVar16 >> 0x20);
        iVar8 = (int)uVar16;
        if (iVar8 != 0) {
          *(undefined4 *)(iVar8 + 0xb7) = 0;
          if (0 < DAT_007f4d24) {
            iVar11 = *(int *)(iVar8 + 199);
            if (((((iVar11 < 0) || (g_pathingGrid.sizeX <= iVar11)) ||
                 (iVar10 = *(int *)(iVar8 + 0xcb), iVar10 < 0)) ||
                ((g_pathingGrid.sizeY <= iVar10 || (iVar4 = *(int *)(iVar8 + 0xcf), iVar4 < 0)))) ||
               (g_pathingGrid.sizeZ <= iVar4)) {
              sVar1 = *(short *)(iVar8 + 0x47);
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = *(short *)(iVar8 + 0x49), -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = *(short *)(iVar8 + 0x4b), -1 < sVar3))
                   && (sVar3 < g_pathingGrid.sizeZ)))))) {
                local_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar6 + (int)sVar1;
              }
            }
            else {
              local_20 = iVar4 * iVar6 + iVar11 + iVar10 * DAT_007f4d2c;
            }
            if (((byte)DAT_007f4cfc[(int)(local_20 ^ 7) >> 3] >> ((local_20 ^ 7) & 7) & 1) != 0) {
              DAT_007f4cfc[(int)(local_20 ^ 7) >> 3] =
                   DAT_007f4cfc[(int)(local_20 ^ 7) >> 3] & ~('\x01' << ((local_20 ^ 7) & 7));
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          piVar13 = *(int **)((int)param_1 + 0x59);
          iVar11 = local_48;
          if ((uint)*(ushort *)(iVar8 + 0x32) != piVar13[local_48 * 4 + 6]) {
            iVar10 = local_48;
            do {
              iVar10 = iVar10 + 1;
              if (*piVar13 <= iVar10) {
                iVar10 = 0;
              }
              iVar11 = *piVar13;
            } while ((iVar10 != local_48) &&
                    (iVar11 = iVar10, (uint)*(ushort *)(iVar8 + 0x32) != piVar13[iVar10 * 4 + 6]));
          }
          if (iVar11 < *piVar13) {
            DAT_007f4d04[DAT_007f4d40 * 7] = (int)*(short *)(iVar8 + 0x47);
            local_30 = local_30 + 2 + *(short *)(iVar8 + 0x47) * 4;
            DAT_007f4d04[DAT_007f4d40 * 7 + 1] = (int)*(short *)(iVar8 + 0x49);
            local_34 = local_34 + 2 + *(short *)(iVar8 + 0x49) * 4;
            DAT_007f4d04[DAT_007f4d40 * 7 + 2] = (int)*(short *)(iVar8 + 0x4b);
            local_40 = local_40 + 2 + *(short *)(iVar8 + 0x4b) * 4;
            DAT_007f4d04[DAT_007f4d40 * 7 + 6] = local_28;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)((int)param_1 + 0x4d) == -3) {
              *(undefined4 *)(DAT_007f4d3c + DAT_007f4d40 * 0x14) =
                   *(undefined4 *)(*(int *)((int)param_1 + 0x59) + 0xc + iVar11 * 0x10);
              *(undefined4 *)(DAT_007f4d3c + DAT_007f4d40 * 0x14 + 4) =
                   *(undefined4 *)((iVar11 + 1) * 0x10 + *(int *)((int)param_1 + 0x59));
              *(undefined4 *)(DAT_007f4d3c + DAT_007f4d40 * 0x14 + 8) =
                   *(undefined4 *)(*(int *)((int)param_1 + 0x59) + 0x14 + iVar11 * 0x10);
            }
            else {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              DAT_007f4d04[DAT_007f4d40 * 7 + 3] =
                   *(int *)(*(int *)((int)param_1 + 0x59) + 0xc + iVar11 * 0x10);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              DAT_007f4d04[DAT_007f4d40 * 7 + 4] =
                   *(int *)((iVar11 + 1) * 0x10 + *(int *)((int)param_1 + 0x59));
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              DAT_007f4d04[DAT_007f4d40 * 7 + 5] =
                   *(int *)(*(int *)((int)param_1 + 0x59) + 0x14 + iVar11 * 0x10);
            }
            local_48 = iVar11 + 1;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            piVar13 = *(int **)((int)param_1 + 0x59);
            if (*piVar13 <= local_48) {
              local_48 = 0;
            }
            DAT_007f4d40 = DAT_007f4d40 + 1;
          }
          else {
            DAT_007f4cf8 = DAT_007f4cf8 + 1;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            DAT_007f4d04[((uint)*(ushort *)((int)param_1 + 0x27) - DAT_007f4cf8) * 7] =
                 (int)*(short *)(iVar8 + 0x47);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            DAT_007f4d04[((uint)*(ushort *)((int)param_1 + 0x27) - DAT_007f4cf8) * 7 + 1] =
                 (int)*(short *)(iVar8 + 0x49);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            DAT_007f4d04[((uint)*(ushort *)((int)param_1 + 0x27) - DAT_007f4cf8) * 7 + 2] =
                 (int)*(short *)(iVar8 + 0x4b);
            piVar13 = DAT_007f4d04;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            DAT_007f4d04[((uint)*(ushort *)((int)param_1 + 0x27) - DAT_007f4cf8) * 7 + 6] = local_28
            ;
          }
        }
        local_28 = local_28 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while ((int)local_28 < (int)(uint)*(ushort *)((int)param_1 + 0x27));
    }
  }
  else {
    local_28 = 0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    piVar13 = extraout_EDX;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)((int)param_1 + 0x27) != 0) {
      do {
        if (local_28 < param_2->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_2, local_28) (runtime stride) */
          puVar9 = (undefined2 *)(param_2->elementSize * local_28 + (int)param_2->data);
        }
        else {
          puVar9 = (undefined2 *)0x0;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar16 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)piVar13 >> 0x10),*puVar9));
        piVar13 = (int *)((ulonglong)uVar16 >> 0x20);
        iVar8 = (int)uVar16;
        if (iVar8 != 0) {
          *(undefined4 *)(iVar8 + 0xb7) = 0;
          DAT_007f4d04[DAT_007f4d40 * 7] = (int)*(short *)(iVar8 + 0x47);
          local_30 = local_30 + 2 + *(short *)(iVar8 + 0x47) * 4;
          DAT_007f4d04[DAT_007f4d40 * 7 + 1] = (int)*(short *)(iVar8 + 0x49);
          local_34 = local_34 + 2 + *(short *)(iVar8 + 0x49) * 4;
          DAT_007f4d04[DAT_007f4d40 * 7 + 2] = (int)*(short *)(iVar8 + 0x4b);
          local_40 = local_40 + 2 + *(short *)(iVar8 + 0x4b) * 4;
          piVar13 = (int *)(DAT_007f4d40 * 7);
          DAT_007f4d04[DAT_007f4d40 * 7 + 6] = local_28;
          if (0 < DAT_007f4d24) {
            iVar11 = *(int *)(iVar8 + 199);
            if (((iVar11 < 0) || (g_pathingGrid.sizeX <= iVar11)) ||
               ((iVar10 = *(int *)(iVar8 + 0xcb), iVar10 < 0 ||
                (((g_pathingGrid.sizeY <= iVar10 || (iVar4 = *(int *)(iVar8 + 0xcf), iVar4 < 0)) ||
                 (g_pathingGrid.sizeZ <= iVar4)))))) {
              sVar1 = *(short *)(iVar8 + 0x47);
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = *(short *)(iVar8 + 0x49), -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = *(short *)(iVar8 + 0x4b), -1 < sVar3))
                   && (sVar3 < g_pathingGrid.sizeZ)))))) {
                local_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar6 + (int)sVar1;
              }
            }
            else {
              local_20 = iVar4 * iVar6 + iVar11 + iVar10 * DAT_007f4d2c;
            }
            piVar13 = (int *)(local_20 ^ 7);
            if (((byte)DAT_007f4cfc[(int)piVar13 >> 3] >> ((uint)piVar13 & 7) & 1) != 0) {
              piVar13 = (int *)(local_20 ^ 7);
              DAT_007f4cfc[(int)piVar13 >> 3] =
                   DAT_007f4cfc[(int)piVar13 >> 3] & ~('\x01' << ((uint)piVar13 & 7));
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          DAT_007f4d40 = DAT_007f4d40 + 1;
        }
        local_28 = local_28 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while ((int)local_28 < (int)(uint)*(ushort *)((int)param_1 + 0x27));
    }
  }
  if (DAT_007f4d24 < 0) {
    DAT_007f4d24 = 0;
  }
  DAT_007f4d20 = DAT_007f4d40;
  if (0 < DAT_007f4d40) {
    iVar6 = DAT_007f4d40 / 2;
    DAT_007f4d0c = (iVar6 + local_30) / DAT_007f4d40;
    DAT_007f4d10 = (local_34 + iVar6) / DAT_007f4d40;
    DAT_007f4d1c = (iVar6 + local_40) / DAT_007f4d40;
    DAT_007f4d08 = FUN_006ad0b0(DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,param_3,param_4);
    if (DAT_007f4d08 == 0x7f) {
      DAT_007f4d08 = 0;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)((int)param_1 + 0x4d) != 0) && ((*(byte *)((int)param_1 + 0x49) & 1) == 0)) &&
     (DAT_007f4d4c == *(ushort *)((int)param_1 + 0x27))) {
    iVar6 = FUN_006db910(DAT_007f4d0c,DAT_007f4d10,param_3 * 4 + 2,param_4 * 4 + 2);
    iVar6 = ((iVar6 * 4 + 0x2d) / 0x5a) * 0x5a;
    iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
    *(int *)((int)param_1 + 0x55) = iVar6;
    if (iVar6 == 0x168) {
      *(undefined4 *)((int)param_1 + 0x55) = 0;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  DAT_007f4d28 = Library::DKW::STR::FUN_006db640(*(int *)((int)param_1 + 0x55));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  DAT_007f4d38 = FUN_006db6d0(*(int *)((int)param_1 + 0x55));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar6 = *(int *)((int)param_1 + 0x4d);
  switch(iVar6) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
    thunk_FUN_0040e0f0(param_3,param_4,param_5,0,*(int *)((int)param_1 + 0x51));
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 2:
    thunk_FUN_0040fc40(param_3,param_4,param_5,0,*(int *)((int)param_1 + 0x51),0);
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 3:
    thunk_FUN_00411260(param_3,param_4,param_5,0,*(int *)((int)param_1 + 0x51),
                       *(uint *)((int)param_1 + 0x55));
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 4:
  case 5:
    thunk_FUN_00411e50(param_3,param_4,param_5,0,*(int *)((int)param_1 + 0x51),
                       *(uint *)((int)param_1 + 0x55),(uint)(iVar6 == 4));
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case -10:
    thunk_FUN_00410dc0(param_3,param_4,2,0,*(int *)((int)param_1 + 0x51));
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  default:
    iVar6 = *(int *)((int)param_1 + 0x51);
    goto LAB_0041463f;
  case -3:
  case -2:
    if (DAT_007f4d20 < 1) {
      iVar6 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar6 = thunk_FUN_00412960(param_3,param_4,param_5,0,*(int *)((int)param_1 + 0x55),
                                 *(int *)((int)param_1 + 0x51),
                                 *(AnonShape_00412960_B35D15BC **)((int)param_1 + 0x59),
                                 (uint)(iVar6 == -2));
    }
    if ((iVar6 != 0) || (DAT_007f4cf8 < 1)) break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DAT_007f4d48 = DAT_007f4d04 + ((uint)*(ushort *)((int)param_1 + 0x27) - DAT_007f4cf8) * 7;
    DAT_007f4d20 = DAT_007f4cf8;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar6 = *(int *)((int)param_1 + 0x55);
    if ((iVar6 < 0x152) && (0x17 < iVar6)) {
      if (iVar6 < 0x125) {
        if (iVar6 < 0xf8) {
          if (iVar6 < 0xcb) {
            if (iVar6 < 0x9e) {
              if (iVar6 < 0x71) {
                DAT_007f4d08 = (0x43 < iVar6) + 1;
                iVar6 = 0;
              }
              else {
                DAT_007f4d08 = 3;
                iVar6 = 0;
              }
            }
            else {
              DAT_007f4d08 = 4;
              iVar6 = 0;
            }
          }
          else {
            DAT_007f4d08 = 5;
            iVar6 = 0;
          }
        }
        else {
          DAT_007f4d08 = 6;
          iVar6 = 0;
        }
      }
      else {
        DAT_007f4d08 = 7;
        iVar6 = 0;
      }
    }
    else {
      DAT_007f4d08 = 0;
      iVar6 = 0;
    }
LAB_0041463f:
    thunk_FUN_00413050(param_3,param_4,param_5,0,iVar6);
  }
  *(uint *)((int)param_1 + 0x49) = *(uint *)((int)param_1 + 0x49) & 0xfffffffe;
  ExceptionList = local_14;
  return;
}

