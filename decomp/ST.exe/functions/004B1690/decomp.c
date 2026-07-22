
undefined4 __cdecl FUN_004b1690(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  STFishC *local_10;
  int local_c;
  undefined4 local_8;

  if ((((param_1 < 0) || ((int)g_worldGrid.sizeX < param_1 + 1)) || (param_2 < 0)) ||
     ((((int)g_worldGrid.sizeY < param_2 + 1 || (param_3 < 0)) ||
      ((int)g_worldGrid.sizeZ < param_3 + 1)))) {
cf_break_loop_004B1816:
    bVar1 = false;
  }
  else {
    bVar1 = true;
    local_10 = (STFishC *)0x1;
    iVar8 = param_1;
    if (param_1 < param_1 + 1) {
      do {
        iVar5 = param_2;
        if (param_2 < param_2 + 1) {
          do {
            iVar3 = param_3;
            if (param_3 < param_3 + 1) {
              do {
                sVar7 = (short)iVar8;
                if (sVar7 < 0) goto cf_break_loop_004B1816;
                sVar6 = (short)iVar5;
                sVar2 = (short)iVar3;
                if (((((sVar7 < g_worldGrid.sizeX) && (-1 < sVar6)) &&
                     ((sVar6 < g_worldGrid.sizeY &&
                      (((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ)) &&
                       (g_worldGrid.cells
                        [(int)sVar2 * (int)g_worldGrid.planeStride +
                         (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0] !=
                        (STWorldObject *)0x0)))))) || ((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7))))
                   || ((sVar6 < 0 ||
                       (((g_worldGrid.sizeY <= sVar6 || (sVar2 < 0)) ||
                        ((g_worldGrid.sizeZ <= sVar2 ||
                         (g_pathingGrid.cells
                          [(int)sVar6 * (int)g_pathingGrid.sizeX +
                           (int)sVar2 * (int)g_pathingGrid.planeStride + (int)sVar7] != 0))))))))
                goto cf_break_loop_004B1816;
                iVar3 = iVar3 + 1;
              } while (iVar3 < param_3 + 1);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_2 + 1);
        }
        bVar1 = true;
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 1);
    }
  }
  local_8 = (undefined *)0x0;
  if (param_4 == 0xdd) {
    local_8 = &DAT_007907ac;
  }
  else if (param_4 == 0xde) {
    local_8 = &DAT_007907d0;
  }
  if (bVar1) {
    local_c = 1;
    sVar7 = (short)param_3;
    if ((0 < param_3) && (iVar8 = param_1 + -1, iVar8 < param_1 + 2)) {
      do {
        iVar5 = param_2 + -1;
        if (iVar5 < param_2 + 2) {
          param_4 = iVar5 * 0xc;
          do {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)(local_8 + param_4 + param_2 * -0xc + param_1 * -4 + iVar8 * 4 + 0x10) == 1)
            {
              sVar2 = sVar7 + -1;
              sVar6 = (short)iVar8;
              if ((-1 < sVar6) &&
                 ((((((sVar4 = (short)iVar5, sVar6 < g_worldGrid.sizeX && (-1 < sVar4)) &&
                     (sVar4 < g_worldGrid.sizeY)) && ((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ))))
                   && (g_worldGrid.cells
                       [(int)sVar4 * (int)g_worldGrid.sizeX +
                        (int)g_worldGrid.planeStride * (int)sVar2 + (int)sVar6].objects[0] !=
                       (STWorldObject *)0x0)) ||
                  ((((-1 < sVar6 && (sVar6 < g_worldGrid.sizeX)) &&
                    ((-1 < sVar4 &&
                     (((sVar4 < g_worldGrid.sizeY && (-1 < sVar2)) && (sVar2 < g_worldGrid.sizeZ))))
                    )) && (g_pathingGrid.cells
                           [(int)sVar4 * (int)g_pathingGrid.sizeX +
                            (int)g_pathingGrid.planeStride * (int)sVar2 + (int)sVar6] != -1)))))) {
                local_c = 0;
                goto LAB_004b199c;
              }
            }
            iVar5 = iVar5 + 1;
            param_4 = param_4 + 0xc;
          } while (iVar5 < param_2 + 2);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 2);
    }
LAB_004b199c:
    sVar2 = g_worldGrid.sizeX;
    if (((param_5 == 0) && (local_c != 0)) &&
       ((local_c = 0, param_3 < 3 && (local_c = 1, iVar8 = param_1, param_1 < param_1 + 3)))) {
      do {
        if (param_2 < param_2 + 3) {
          iVar5 = param_2;
          do {
            iVar3 = thunk_FUN_004961b0((short)iVar8,(short)iVar5,sVar7 + 1);
            if ((iVar3 == 0) ||
               (iVar3 = thunk_FUN_004961b0((short)iVar8,(short)iVar5,sVar7 + 2), iVar3 == 0)) {
              local_c = 0;
              sVar2 = g_worldGrid.sizeX;
              goto LAB_004b1a39;
            }
            iVar5 = iVar5 + 1;
            sVar2 = g_worldGrid.sizeX;
          } while (iVar5 < param_2 + 3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 3);
    }
LAB_004b1a39:
    bVar1 = true;
    iVar8 = param_1;
    if (param_1 < param_1 + 3) {
      do {
        iVar5 = param_2;
        if (param_2 < param_2 + 3) {
          do {
            iVar3 = param_3;
            if (param_3 < param_3 + 1) {
              do {
                sVar7 = (short)iVar8;
                if ((((sVar7 < 0) || (sVar2 <= sVar7)) || (sVar6 = (short)iVar5, sVar6 < 0)) ||
                   (((g_worldGrid.sizeY <= sVar6 || (sVar4 = (short)iVar3, sVar4 < 0)) ||
                    (g_worldGrid.sizeZ <= sVar4)))) {
                  local_10 = (STFishC *)0x0;
                }
                else {
                  local_10 = (STFishC *)
                             g_worldGrid.cells
                             [(int)sVar6 * (int)sVar2 + (int)sVar4 * (int)g_worldGrid.planeStride +
                              (int)sVar7].objects[1];
                  sVar2 = g_worldGrid.sizeX;
                }
                if ((local_10 != (STFishC *)0x0) && (*(int *)&local_10->field_0x20 != 0xbe)) {
                  bVar1 = false;
                  goto LAB_004b1b6e;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < param_3 + 1);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_2 + 3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 3);
    }
    if (g_dArray_007FA150 != (DArrayTy *)0x0) {
      g_dArray_007FA150->iteratorIndex = 0;
      iVar8 = FUN_006b1190(g_dArray_007FA150,&local_10);
      while (-1 < iVar8) {
        if (local_10 != (STFishC *)0x0) {
          STFishC::sub_004162B0
                    (local_10,(undefined2 *)((int)&param_4 + 2),(undefined2 *)((int)&param_5 + 2),
                     (undefined2 *)((int)&local_8 + 2));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (((param_4._2_2_ == param_1) && (param_5._2_2_ == param_2)) &&
             (local_8._2_2_ == param_3)) {
            bVar1 = false;
          }
        }
        iVar8 = FUN_006b1190(g_dArray_007FA150,&local_10);
      }
    }
LAB_004b1b6e:
    if ((local_c != 0) && (bVar1)) {
      return 1;
    }
  }
  return 0;
}

