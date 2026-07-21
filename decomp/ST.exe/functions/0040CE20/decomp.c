
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0040D540 -> 0040CE20 @ 0040DD1B | 0040D540 -> 0040CE20 @ 0040DDCB */

bool FUN_0040ce20(AnonShape_0040D540_1BB7A4CF *param_1,AnonShape_0040CE20_D3328A6B *param_2,
                 int *param_3,int *param_4,int *param_5,uint *param_6)

{
  short sVar1;
  short *psVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int local_1c;
  int local_14;
  
  psVar2 = g_pathingGrid.cells;
  iVar5 = (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
  iVar7 = (int)param_2->field_0049 * (int)g_pathingGrid.sizeX + param_2->field_004B * iVar5 +
          (int)param_2->field_0047;
  sVar1 = 30000;
  local_14 = 1;
  do {
    if (param_2->field_00A3 - param_2->field_00A7 <= local_14) break;
    local_1c = 0;
    psVar9 = (short *)(param_2->field_009F + (param_2->field_00A7 + local_14) * 0x48);
    do {
      if (*psVar9 == -1) break;
      uVar4 = FUN_006a5eb0((int)param_2->field_0047,(int)param_2->field_0049,
                           (int)param_2->field_004B,(int)*psVar9,(int)psVar9[1],(int)psVar9[2]);
      if ((uVar4 != 0xffe) &&
         ((psVar9[3] < sVar1 ||
          (((psVar9[3] == sVar1 && (uVar4 == param_2->field_00AF)) && (local_14 < 2)))))) {
        iVar8 = (int)*psVar9 - (int)param_2->field_0047;
        iVar6 = (int)psVar9[1] - (int)param_2->field_0049;
        if ((uVar4 & 1) == 0) {
          if (((uVar4 & 0x6000) == 0) || ((uVar4 & 0xffff9fff) == 0xffe)) {
LAB_0040d369:
            *param_3 = (int)*psVar9;
            *param_4 = (int)psVar9[1];
            *param_5 = (int)psVar9[2];
            *param_6 = uVar4;
            sVar1 = psVar9[3];
          }
          else if (((psVar2[iVar7 + ((int)psVar9[2] - (int)param_2->field_004B) * iVar5] & 0xc000U)
                    != 0xc000) &&
                  (bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,
                                              (int)param_2->field_0047,(int)param_2->field_0049,
                                              (int)psVar9[2]), CONCAT31(extraout_var_13,bVar3) != 0)
                  ) {
            if (psVar9[1] == param_2->field_0049) {
              if ((psVar2[iVar7 + iVar8] & 0xc000U) != 0xc000) {
                bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,(int)*psVar9,
                                           (int)param_2->field_0049,(int)param_2->field_004B);
                iVar6 = CONCAT31(extraout_var_14,bVar3);
joined_r0x0040d327:
                if (iVar6 != 0) goto LAB_0040d369;
              }
            }
            else if ((psVar2[iVar7 + g_pathingGrid.sizeX * iVar6] & 0xc000U) != 0xc000) {
              bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,
                                         (int)param_2->field_0047,(int)psVar9[1],
                                         (int)param_2->field_004B);
              iVar6 = CONCAT31(extraout_var_15,bVar3);
              goto joined_r0x0040d327;
            }
          }
        }
        else if ((((psVar2[iVar7 + iVar8] & 0xc000U) != 0xc000) &&
                 ((psVar2[iVar7 + g_pathingGrid.sizeX * iVar6] & 0xc000U) != 0xc000)) &&
                ((bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,
                                             (int)param_2->field_0047,(int)psVar9[1],
                                             (int)param_2->field_004B),
                 CONCAT31(extraout_var,bVar3) != 0 &&
                 (bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,(int)*psVar9,
                                             (int)param_2->field_0049,(int)param_2->field_004B),
                 CONCAT31(extraout_var_00,bVar3) != 0)))) {
          if ((uVar4 & 0x4000) == 0) {
            if ((uVar4 & 0x2000) == 0) goto LAB_0040d369;
            if ((((((psVar2[iVar7 + iVar5] & 0xc000U) != 0xc000) &&
                  ((psVar2[iVar7 + iVar8 + iVar5] & 0xc000U) != 0xc000)) &&
                 (iVar6 = g_pathingGrid.sizeX * iVar6,
                 (psVar2[iVar7 + iVar6 + iVar5] & 0xc000U) != 0xc000)) &&
                (((psVar2[iVar7 + iVar6 + iVar8] & 0xc000U) != 0xc000 &&
                 ((psVar2[iVar7 + iVar8] & 0xc000U) != 0xc000)))) &&
               (((((psVar2[iVar7 + iVar6] & 0xc000U) != 0xc000 &&
                  ((bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,
                                               (int)param_2->field_0047,(int)param_2->field_0049,
                                               param_2->field_004B + 1),
                   CONCAT31(extraout_var_07,bVar3) != 0 &&
                   (bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,(int)*psVar9,
                                               (int)param_2->field_0049,param_2->field_004B + 1),
                   CONCAT31(extraout_var_08,bVar3) != 0)))) &&
                 (bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,
                                             (int)param_2->field_0047,(int)psVar9[1],
                                             param_2->field_004B + 1),
                 CONCAT31(extraout_var_09,bVar3) != 0)) &&
                ((bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,(int)*psVar9,
                                             (int)psVar9[1],(int)param_2->field_004B),
                 CONCAT31(extraout_var_10,bVar3) != 0 &&
                 (bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,
                                             (int)param_2->field_0047,(int)psVar9[1],
                                             (int)param_2->field_004B),
                 CONCAT31(extraout_var_11,bVar3) != 0)))))) {
              bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,(int)*psVar9,
                                         (int)param_2->field_0049,(int)param_2->field_004B);
              iVar6 = CONCAT31(extraout_var_12,bVar3);
              goto joined_r0x0040d327;
            }
          }
          else if ((((((psVar2[iVar7 - iVar5] & 0xc000U) != 0xc000) &&
                     ((psVar2[iVar7 + (iVar8 - iVar5)] & 0xc000U) != 0xc000)) &&
                    (iVar6 = g_pathingGrid.sizeX * iVar6,
                    (psVar2[iVar7 + (iVar6 - iVar5)] & 0xc000U) != 0xc000)) &&
                   ((((psVar2[iVar7 + iVar6 + iVar8] & 0xc000U) != 0xc000 &&
                     ((psVar2[iVar7 + iVar8] & 0xc000U) != 0xc000)) &&
                    (((psVar2[iVar7 + iVar6] & 0xc000U) != 0xc000 &&
                     ((bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,
                                                  (int)param_2->field_0047,(int)param_2->field_0049,
                                                  param_2->field_004B + -1),
                      CONCAT31(extraout_var_01,bVar3) != 0 &&
                      (bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,
                                                  (int)*psVar9,(int)param_2->field_0049,
                                                  param_2->field_004B + -1),
                      CONCAT31(extraout_var_02,bVar3) != 0)))))))) &&
                  ((bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,
                                               (int)param_2->field_0047,(int)psVar9[1],
                                               param_2->field_004B + -1),
                   CONCAT31(extraout_var_03,bVar3) != 0 &&
                   ((bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,(int)*psVar9,
                                                (int)psVar9[1],(int)param_2->field_004B),
                    CONCAT31(extraout_var_04,bVar3) != 0 &&
                    (bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,
                                                (int)param_2->field_0047,(int)psVar9[1],
                                                (int)param_2->field_004B),
                    CONCAT31(extraout_var_05,bVar3) != 0)))))) {
            bVar3 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)param_2,(int)*psVar9,
                                       (int)param_2->field_0049,(int)param_2->field_004B);
            iVar6 = CONCAT31(extraout_var_06,bVar3);
            goto joined_r0x0040d327;
          }
        }
      }
      local_1c = local_1c + 1;
      psVar9 = psVar9 + 4;
    } while (local_1c < 9);
    local_14 = local_14 + 1;
  } while (local_14 < 3);
  return sVar1 != 30000;
}

