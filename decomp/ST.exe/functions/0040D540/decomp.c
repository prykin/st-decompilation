
int FUN_0040d540(AnonShape_0040D540_1BB7A4CF *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonNested_0040D540_0029_4E1A5CA3 *pAVar4;
  bool bVar5;
  AnonShape_0040CE20_D3328A6B *pAVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar8;
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
  short *psVar9;
  AnonShape_0040CE20_D3328A6B *pAVar10;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined4 *puVar11;
  int iVar12;
  short *psVar13;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_20 = 0;
  local_3c = 0;
  local_40 = 0;
  pAVar6 = (AnonShape_0040CE20_D3328A6B *)thunk_FUN_00423e70(param_1,param_2);
  iVar7 = (int)pAVar6->field_0047;
  if (((iVar7 == *(int *)&pAVar6[1].field_0x7) &&
      ((int)pAVar6->field_0049 == *(int *)&pAVar6[1].field_0xb)) &&
     ((int)pAVar6->field_004B == *(int *)&pAVar6[1].field_0xf)) {
    return 0;
  }
  if (pAVar6->field_009F == 0) {
    iVar7 = FUN_006aadd0(iVar7,(int)pAVar6->field_0049,(int)pAVar6->field_004B,
                         *(int *)&pAVar6[1].field_0x7,*(int *)&pAVar6[1].field_0xb,
                         *(int *)&pAVar6[1].field_0xf);
    return ((*(int *)&pAVar6[1].field_0x3 < iVar7) - 1 & 6) - 6;
  }
  iVar12 = pAVar6->field_00A3;
  if (iVar12 + -1 <= pAVar6->field_00A7) {
    return 0;
  }
  iVar8 = pAVar6->field_009F + -0x48 + iVar12 * 0x48;
  if (((pAVar6->field_0047 == *(short *)(pAVar6->field_009F + -0x48 + iVar12 * 0x48)) &&
      (pAVar6->field_0049 == *(short *)(iVar8 + 2))) &&
     (pAVar6->field_004B == *(short *)(iVar8 + 4))) {
    return 0;
  }
  local_c = (int)SHORT_007fb27a * (int)SHORT_007fb278;
  local_14 = 30000;
  iVar7 = DAT_007fb280 +
          (pAVar6->field_004B * local_c + iVar7 + (int)pAVar6->field_0049 * (int)SHORT_007fb278) * 2
  ;
  local_38 = (int)*(short *)(pAVar6->field_009F + 6 +
                            (pAVar6->field_00A7 * 9 + *(int *)&pAVar6->field_0xab) * 8);
  local_28 = -1;
  local_2c = -1;
  local_30 = -1;
  local_1c = 1;
  while (local_1c < pAVar6->field_00A3 - pAVar6->field_00A7) {
    local_24 = 0;
    psVar13 = (short *)(pAVar6->field_009F + (pAVar6->field_00A7 + local_1c) * 0x48);
    do {
      if (*psVar13 == -1) break;
      local_10 = FUN_006a5eb0((int)pAVar6->field_0047,(int)pAVar6->field_0049,
                              (int)pAVar6->field_004B,(int)*psVar13,(int)psVar13[1],(int)psVar13[2])
      ;
      if ((local_10 != 0xffe) && (local_8 = (int)psVar13[3], local_8 < local_38)) {
        local_44 = local_10 & 0x6000;
        if (local_44 == 0) {
          if ((local_10 & 1) == 0) {
LAB_0040d750:
            local_8 = local_8 + 3;
          }
          else {
            local_8 = local_8 + 4;
          }
        }
        else if ((local_10 & 1) == 0) {
          if ((local_10 & 0xffff9fff) == 0xffe) goto LAB_0040d750;
          local_8 = local_8 + 4;
        }
        else {
          local_8 = local_8 + 5;
        }
        local_34 = local_10 & 1;
        if ((local_8 <= local_14) &&
           (((local_8 != local_14 || ((local_10 == pAVar6->field_00AF && (local_1c < 2)))) &&
            (bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)*psVar13,
                                        (int)psVar13[1],(int)psVar13[2]),
            CONCAT31(extraout_var,bVar5) != 0)))) {
          iVar12 = (int)*psVar13 - (int)pAVar6->field_0047;
          local_18 = (int)psVar13[1] - (int)pAVar6->field_0049;
          if (local_34 == 0) {
            if ((local_44 == 0) || ((local_10 & 0xffff9fff) == 0xffe)) {
LAB_0040dc04:
              if (local_10 != pAVar6->field_00AF) {
                local_44 = *(uint *)&param_1->field_0029->field_0xc;
                local_34 = 0;
                if (0 < (int)local_44) {
                  do {
                    pAVar4 = param_1->field_0029;
                    if ((*(uint *)&pAVar4->field_0xc <= local_34) ||
                       (psVar9 = (short *)(*(int *)&pAVar4->field_0x8 * local_34 +
                                          pAVar4->field_001C), psVar9 == (short *)0x0)) break;
                    if (((*psVar9 != -1) &&
                        ((((pAVar10 = (AnonShape_0040CE20_D3328A6B *)
                                      thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)psVar9 >>
                                                                                 0x10),*psVar9)),
                           pAVar10 != (AnonShape_0040CE20_D3328A6B *)0x0 && (pAVar10 != pAVar6)) &&
                          (iVar12 = *(int *)&pAVar10->field_0x97, iVar12 != 0)) &&
                         (pAVar10->field_009F != 0)))) &&
                       ((((*(short *)(iVar12 + 8) == *psVar13 &&
                          (*(short *)(iVar12 + 10) == psVar13[1])) &&
                         (*(short *)(iVar12 + 0xc) == psVar13[2])) ||
                        ((((local_48 = FUN_006a5eb0((int)pAVar10->field_0047,
                                                    (int)pAVar10->field_0049,
                                                    (int)pAVar10->field_004B,(int)*psVar13,
                                                    (int)psVar13[1],(int)psVar13[2]),
                           local_48 != 0xffe &&
                           ((local_48 != pAVar10->field_00AF ||
                            (*(short *)(pAVar10->field_009F + 6 +
                                       (pAVar10->field_00A7 * 9 + *(int *)&pAVar10->field_0xab) * 8)
                             < local_38)))) &&
                          (bVar5 = thunk_FUN_0040ce20(param_1,pAVar10,&local_4c,&local_50,&local_54,
                                                      &local_48),
                          CONCAT31(extraout_var_16,bVar5) != 0)) &&
                         (((local_4c == *psVar13 && (local_50 == psVar13[1])) &&
                          (local_54 == psVar13[2])))))))) goto LAB_0040dd8a;
                    local_34 = local_34 + 1;
                  } while ((int)local_34 < (int)local_44);
                }
              }
              local_28 = (int)*psVar13;
              local_2c = (int)psVar13[1];
              local_30 = (int)psVar13[2];
              local_3c = local_1c;
              local_20 = local_10;
              local_14 = local_8;
              local_40 = local_24;
              if ((local_24 == 0) && (*(int *)&pAVar6->field_0xab == 0)) goto LAB_0040dde1;
            }
            else if (((*(ushort *)
                        (iVar7 + ((int)psVar13[2] - (int)pAVar6->field_004B) * local_c * 2) & 0xc000
                      ) != 0xc000) &&
                    (bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                (int)pAVar6->field_0047,(int)pAVar6->field_0049,
                                                (int)psVar13[2]),
                    CONCAT31(extraout_var_13,bVar5) != 0)) {
              if (psVar13[1] == pAVar6->field_0049) {
                if ((*(ushort *)(iVar7 + iVar12 * 2) & 0xc000) != 0xc000) {
                  bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)*psVar13,
                                             (int)pAVar6->field_0049,(int)pAVar6->field_004B);
                  iVar12 = CONCAT31(extraout_var_14,bVar5);
joined_r0x0040dbb9:
                  if (iVar12 != 0) goto LAB_0040dc04;
                }
              }
              else if ((*(ushort *)(iVar7 + SHORT_007fb278 * local_18 * 2) & 0xc000) != 0xc000) {
                bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                           (int)pAVar6->field_0047,(int)psVar13[1],
                                           (int)pAVar6->field_004B);
                iVar12 = CONCAT31(extraout_var_15,bVar5);
                goto joined_r0x0040dbb9;
              }
            }
          }
          else if (((((*(ushort *)(iVar7 + iVar12 * 2) & 0xc000) != 0xc000) &&
                    ((*(ushort *)(iVar7 + SHORT_007fb278 * local_18 * 2) & 0xc000) != 0xc000)) &&
                   (bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                               (int)pAVar6->field_0047,(int)psVar13[1],
                                               (int)pAVar6->field_004B),
                   CONCAT31(extraout_var_00,bVar5) != 0)) &&
                  (bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)*psVar13,
                                              (int)pAVar6->field_0049,(int)pAVar6->field_004B),
                  CONCAT31(extraout_var_01,bVar5) != 0)) {
            if ((local_10 & 0x4000) == 0) {
              if ((local_10 & 0x2000) == 0) goto LAB_0040dc04;
              if (((((*(ushort *)(iVar7 + local_c * 2) & 0xc000) != 0xc000) &&
                   ((*(ushort *)(iVar7 + (iVar12 + local_c) * 2) & 0xc000) != 0xc000)) &&
                  ((iVar8 = SHORT_007fb278 * local_18,
                   (*(ushort *)(iVar7 + (iVar8 + local_c) * 2) & 0xc000) != 0xc000 &&
                   (((*(ushort *)(iVar7 + (iVar8 + iVar12) * 2) & 0xc000) != 0xc000 &&
                    ((*(ushort *)(iVar7 + iVar12 * 2) & 0xc000) != 0xc000)))))) &&
                 (((*(ushort *)(iVar7 + iVar8 * 2) & 0xc000) != 0xc000 &&
                  ((((bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                 (int)pAVar6->field_0047,(int)pAVar6->field_0049,
                                                 pAVar6->field_004B + 1),
                     CONCAT31(extraout_var_07,bVar5) != 0 &&
                     (bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)*psVar13
                                                 ,(int)pAVar6->field_0049,pAVar6->field_004B + 1),
                     CONCAT31(extraout_var_08,bVar5) != 0)) &&
                    (bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                (int)pAVar6->field_0047,(int)psVar13[1],
                                                pAVar6->field_004B + 1),
                    CONCAT31(extraout_var_09,bVar5) != 0)) &&
                   ((bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)*psVar13,
                                                (int)psVar13[1],(int)pAVar6->field_004B),
                    CONCAT31(extraout_var_10,bVar5) != 0 &&
                    (bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                (int)pAVar6->field_0047,(int)psVar13[1],
                                                (int)pAVar6->field_004B),
                    CONCAT31(extraout_var_11,bVar5) != 0)))))))) {
                sVar1 = pAVar6->field_004B;
                sVar2 = pAVar6->field_0049;
                sVar3 = *psVar13;
                goto LAB_0040db07;
              }
            }
            else if ((((((*(ushort *)(iVar7 + local_c * -2) & 0xc000) != 0xc000) &&
                       ((*(ushort *)(iVar7 + (iVar12 - local_c) * 2) & 0xc000) != 0xc000)) &&
                      ((iVar8 = SHORT_007fb278 * local_18,
                       (*(ushort *)(iVar7 + (iVar8 - local_c) * 2) & 0xc000) != 0xc000 &&
                       ((((*(ushort *)(iVar7 + (iVar8 + iVar12) * 2) & 0xc000) != 0xc000 &&
                         ((*(ushort *)(iVar7 + iVar12 * 2) & 0xc000) != 0xc000)) &&
                        ((*(ushort *)(iVar7 + iVar8 * 2) & 0xc000) != 0xc000)))))) &&
                     ((bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                  (int)pAVar6->field_0047,(int)pAVar6->field_0049,
                                                  pAVar6->field_004B + -1),
                      CONCAT31(extraout_var_02,bVar5) != 0 &&
                      (bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                  (int)*psVar13,(int)pAVar6->field_0049,
                                                  pAVar6->field_004B + -1),
                      CONCAT31(extraout_var_03,bVar5) != 0)))) &&
                    ((bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                 (int)pAVar6->field_0047,(int)psVar13[1],
                                                 pAVar6->field_004B + -1),
                     CONCAT31(extraout_var_04,bVar5) != 0 &&
                     ((bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                  (int)*psVar13,(int)psVar13[1],
                                                  (int)pAVar6->field_004B),
                      CONCAT31(extraout_var_05,bVar5) != 0 &&
                      (bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                  (int)pAVar6->field_0047,(int)psVar13[1],
                                                  (int)pAVar6->field_004B),
                      CONCAT31(extraout_var_06,bVar5) != 0)))))) {
              sVar1 = pAVar6->field_004B;
              sVar2 = pAVar6->field_0049;
              sVar3 = *psVar13;
LAB_0040db07:
              bVar5 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)sVar3,(int)sVar2
                                         ,(int)sVar1);
              iVar12 = CONCAT31(extraout_var_12,bVar5);
              goto joined_r0x0040dbb9;
            }
          }
        }
      }
LAB_0040dd8a:
      psVar13 = psVar13 + 4;
      local_24 = local_24 + 1;
    } while (local_24 < 9);
    local_1c = local_1c + 1;
    if (2 < local_1c) break;
  }
  if (local_14 == 30000) {
    bVar5 = thunk_FUN_0040ce20(param_1,pAVar6,&local_28,&local_2c,&local_30,&local_20);
    if (CONCAT31(extraout_var_17,bVar5) == 0) {
      return 2;
    }
  }
  else {
LAB_0040dde1:
    if (29999 < local_14) {
      return 2;
    }
  }
  FUN_006a5e90(*(short **)&pAVar6->field_0x97);
  pAVar6->field_00A7 = pAVar6->field_00A7 + local_3c;
  *(int *)&pAVar6->field_0xab = local_40;
  puVar11 = Library::DKW::LIB::FUN_006aac10(0x10);
  *(undefined4 **)&pAVar6->field_0x97 = puVar11;
  if (puVar11 != (undefined4 *)0x0) {
    *(undefined4 *)&pAVar6->field_0x9b = 2;
    *(undefined2 *)(puVar11 + 2) = (undefined2)local_28;
    *(undefined2 *)(*(int *)&pAVar6->field_0x97 + 10) = (undefined2)local_2c;
    *(undefined2 *)(*(int *)&pAVar6->field_0x97 + 0xc) = (undefined2)local_30;
    *(short *)(*(int *)&pAVar6->field_0x97 + 0xe) = (short)local_20;
    pAVar6->field_00AF = (int)(short)local_20;
    return 1;
  }
  return -2;
}

