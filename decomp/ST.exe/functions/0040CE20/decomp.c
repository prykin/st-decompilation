
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0040D540 -> 0040CE20 @ 0040DD1B | 0040D540 -> 0040CE20 @ 0040DDCB
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0040D540 @ 0040DD1B
   -> TEST TEST EAX,EAX | 0040D540 @ 0040DDCB -> TEST TEST EAX,EAX */

int FUN_0040ce20(AnonShape_0040D540_1BB7A4CF *param_1,RecoveredRecordView_0040CE20_65C5764C *param_2
                ,int *param_3,int *param_4,int *param_5,uint *param_6)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int local_EAX_586;
  int local_EAX_617;
  int local_EAX_649;
  int local_EAX_679;
  int local_EAX_710;
  int iVar6;
  int local_EAX_957;
  int local_EAX_989;
  int local_EAX_1022;
  int local_EAX_1053;
  int local_EAX_1085;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int local_1c;
  int local_14;

  psVar2 = g_pathingGrid.cells;
  iVar5 = (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
  iVar8 = (int)param_2->field_0049 * (int)g_pathingGrid.sizeX + param_2->field_004B * iVar5 +
          (int)param_2->field_0047;
  sVar1 = 30000;
  local_14 = 1;
  do {
    if (param_2->field_00A3 - param_2->field_00A7 <= local_14) break;
    local_1c = 0;
    psVar10 = (short *)(param_2->field_009F + (param_2->field_00A7 + local_14) * 0x48);
    do {
      if (*psVar10 == -1) break;

      uVar3 = FUN_006a5eb0((int)param_2->field_0047,(int)param_2->field_0049,
                           (int)param_2->field_004B,(int)*psVar10,(int)psVar10[1],(int)psVar10[2]);
      if ((uVar3 != 0xffe) &&
         ((psVar10[3] < sVar1 ||
          (((psVar10[3] == sVar1 && (uVar3 == param_2->field_00AF)) && (local_14 < 2)))))) {
        iVar9 = (int)*psVar10 - (int)param_2->field_0047;
        iVar7 = (int)psVar10[1] - (int)param_2->field_0049;
        if ((uVar3 & 1) == 0) {
          if (((uVar3 & 0x6000) == 0) || ((uVar3 & 0xffff9fff) == 0xffe)) {
LAB_0040d369:
            *param_3 = (int)*psVar10;
            *param_4 = (int)psVar10[1];
            *param_5 = (int)psVar10[2];
            *param_6 = uVar3;
            sVar1 = psVar10[3];
          }
          else if (((psVar2[iVar8 + ((int)psVar10[2] - (int)param_2->field_004B) * iVar5] & 0xc000U)
                    != 0xc000) &&

                  (iVar4 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                              (int)param_2->field_0047,(int)param_2->field_0049,
                                              (int)psVar10[2]), iVar4 != 0)) {
            if (psVar10[1] == param_2->field_0049) {
              if ((psVar2[iVar8 + iVar9] & 0xc000U) != 0xc000) {

                iVar6 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,(int)*psVar10
                                           ,(int)param_2->field_0049,(int)param_2->field_004B);
joined_r0x0040d327:
                if (iVar6 != 0) goto LAB_0040d369;
              }
            }
            else if ((psVar2[iVar8 + g_pathingGrid.sizeX * iVar7] & 0xc000U) != 0xc000) {

              iVar6 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                         (int)param_2->field_0047,(int)psVar10[1],
                                         (int)param_2->field_004B);
              goto joined_r0x0040d327;
            }
          }
        }
        else if ((((psVar2[iVar8 + iVar9] & 0xc000U) != 0xc000) &&
                 ((psVar2[iVar8 + g_pathingGrid.sizeX * iVar7] & 0xc000U) != 0xc000)) &&

                ((iVar4 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                             (int)param_2->field_0047,(int)psVar10[1],
                                             (int)param_2->field_004B), iVar4 != 0 &&

                 (iVar4 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                             (int)*psVar10,(int)param_2->field_0049,
                                             (int)param_2->field_004B), iVar4 != 0)))) {
          if ((uVar3 & 0x4000) == 0) {
            if ((uVar3 & 0x2000) == 0) goto LAB_0040d369;
            if ((((((psVar2[iVar8 + iVar5] & 0xc000U) != 0xc000) &&
                  ((psVar2[iVar8 + iVar9 + iVar5] & 0xc000U) != 0xc000)) &&
                 (iVar7 = g_pathingGrid.sizeX * iVar7,
                 (psVar2[iVar8 + iVar7 + iVar5] & 0xc000U) != 0xc000)) &&
                (((psVar2[iVar8 + iVar7 + iVar9] & 0xc000U) != 0xc000 &&
                 ((psVar2[iVar8 + iVar9] & 0xc000U) != 0xc000)))) &&
               (((((psVar2[iVar8 + iVar7] & 0xc000U) != 0xc000 &&

                  ((local_EAX_957 =
                         thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                            (int)param_2->field_0047,(int)param_2->field_0049,
                                            param_2->field_004B + 1), local_EAX_957 != 0 &&

                   (local_EAX_989 =
                         thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                            (int)*psVar10,(int)param_2->field_0049,
                                            param_2->field_004B + 1), local_EAX_989 != 0)))) &&

                 (local_EAX_1022 =
                       thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                          (int)param_2->field_0047,(int)psVar10[1],
                                          param_2->field_004B + 1), local_EAX_1022 != 0)) &&

                ((local_EAX_1053 =
                       thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,(int)*psVar10,
                                          (int)psVar10[1],(int)param_2->field_004B),
                 local_EAX_1053 != 0 &&

                 (local_EAX_1085 =
                       thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                          (int)param_2->field_0047,(int)psVar10[1],
                                          (int)param_2->field_004B), local_EAX_1085 != 0)))))) {

              iVar6 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,(int)*psVar10,
                                         (int)param_2->field_0049,(int)param_2->field_004B);
              goto joined_r0x0040d327;
            }
          }
          else if ((((((psVar2[iVar8 - iVar5] & 0xc000U) != 0xc000) &&
                     ((psVar2[iVar8 + (iVar9 - iVar5)] & 0xc000U) != 0xc000)) &&
                    (iVar7 = g_pathingGrid.sizeX * iVar7,
                    (psVar2[iVar8 + (iVar7 - iVar5)] & 0xc000U) != 0xc000)) &&
                   ((((psVar2[iVar8 + iVar7 + iVar9] & 0xc000U) != 0xc000 &&
                     ((psVar2[iVar8 + iVar9] & 0xc000U) != 0xc000)) &&
                    (((psVar2[iVar8 + iVar7] & 0xc000U) != 0xc000 &&

                     ((local_EAX_586 =
                            thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                               (int)param_2->field_0047,(int)param_2->field_0049,
                                               param_2->field_004B + -1), local_EAX_586 != 0 &&

                      (local_EAX_617 =
                            thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                               (int)*psVar10,(int)param_2->field_0049,
                                               param_2->field_004B + -1), local_EAX_617 != 0))))))))

                  && ((local_EAX_649 =
                            thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                               (int)param_2->field_0047,(int)psVar10[1],
                                               param_2->field_004B + -1), local_EAX_649 != 0 &&

                      ((local_EAX_679 =
                             thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                                (int)*psVar10,(int)psVar10[1],
                                                (int)param_2->field_004B), local_EAX_679 != 0 &&

                       (local_EAX_710 =
                             thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                                (int)param_2->field_0047,(int)psVar10[1],
                                                (int)param_2->field_004B), local_EAX_710 != 0))))))
          {

            iVar6 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)param_2,(int)*psVar10,
                                       (int)param_2->field_0049,(int)param_2->field_004B);
            goto joined_r0x0040d327;
          }
        }
      }
      local_1c = local_1c + 1;
      psVar10 = psVar10 + 4;
    } while (local_1c < 9);
    local_14 = local_14 + 1;
  } while (local_14 < 3);
  return (uint)(sVar1 != 30000);
}

