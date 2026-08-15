#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0040.cpp

// 00402E14 FUN_00402e14
#line 4 "decomp/ST.exe/functions/00402E14/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0064CD80 -> 00402E14 @ 0064CF3E */

void __fastcall st::fn_00402E14(AiEventClassTy *param_1)

{
  AnonShape_0065D030_CB0F82F0 *pAVar1;

  if (param_1 == nullptr) {
    pAVar1 = nullptr;
  }
  else {
    pAVar1 = (AnonShape_0065D030_CB0F82F0 *)&param_1->field_008C;
  }
  st::fn_00402F8B(pAVar1);
  if (param_1->field_05B3 != nullptr) {
    st::fn_006B5570(param_1->field_05B3);
    param_1->field_05B3 = nullptr;
  }
  return;
}

// 00405687 FUN_00405687
#line 4 "decomp/ST.exe/functions/00405687/decomp.c"
undefined4 __fastcall st::fn_00405687(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x4a2)) {
  case 3:
  case 5:
  case 10:
  case 0x2b:
  case 0x2c:
    return 1;
  default:
    return 0;
  }
}

// 0040CC80 FUN_0040cc80
#line 4 "decomp/ST.exe/functions/0040CC80/decomp.c"
int __thiscall st::fn_0040CC80(void *this,uint param_1)

{
  STGameObjC *pSVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int local_8;

  pSVar1 = st::fn_0040286F(this,(ushort)param_1);
  if ((pSVar1 == nullptr) || (pSVar1->field_009F == nullptr)) {
    return -4;
  }
  local_8 = pSVar1->field_00A7;
  param_1 = 0;
  if (-1 < local_8) {
    psVar4 = pSVar1->field_009F + local_8 * 0x24;
    while (-2 < (int)param_1) {
      iVar3 = 0;
      psVar2 = psVar4;
      do {
        if (((*psVar2 == pSVar1->field_0047) && (psVar2[1] == pSVar1->field_0049)) &&
           (psVar2[2] == pSVar1->field_004B)) goto LAB_0040cd0a;
        iVar3 = iVar3 + 1;
        psVar2 = psVar2 + 4;
      } while (iVar3 < 9);
      param_1 = param_1 - 1;
      psVar4 = psVar4 + -0x24;
      local_8 = local_8 + -1;
      if (local_8 < 0) break;
    }
  }
  param_1 = 0;
LAB_0040cd0a:
  iVar5 = 0;
  iVar3 = param_1 + 1 + pSVar1->field_00A7;
  psVar4 = pSVar1->field_009F + iVar3 * 0x24;
  if (iVar3 < (int)pSVar1->field_00A3) {
    iVar3 = st::machine_word_boundary_cast<int>(pSVar1->field_00A3 - iVar3);
    do {
      if (((*psVar4 != psVar4[-0x24]) || (psVar4[1] != psVar4[-0x23])) ||
         (psVar4[2] != psVar4[-0x22])) {
        iVar5 = iVar5 + 1;
      }
      psVar4 = psVar4 + 0x24;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar5;
}

// 0040CDB0 FUN_0040cdb0
#line 4 "decomp/ST.exe/functions/0040CDB0/decomp.c"
void __thiscall st::fn_0040CDB0(void *this,uint param_1)

{
  STGameObjC *pSVar1;

  pSVar1 = st::fn_0040286F(this,(ushort)param_1);
  if (pSVar1 != nullptr) {
    st::fn_006AB060(&pSVar1->field_009F);
    pSVar1->field_00A3 = 0;
    pSVar1->field_00A7 = 0;
    pSVar1->field_00AB = nullptr;
  }
  return;
}

// 0040CE20 FUN_0040ce20
#line 1 "decomp/ST.exe/functions/0040CE20/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0040D540 -> 0040CE20 @ 0040DD1B | 0040D540 -> 0040CE20 @ 0040DDCB
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0040D540 @ 0040DD1B
   -> TEST TEST EAX,EAX | 0040D540 @ 0040DDCB -> TEST TEST EAX,EAX */

int st::fn_0040CE20(AnonShape_0040D540_1BB7A4CF *param_1,AnonShape_0040CE20_D3328A6B *param_2,
                int *param_3,int *param_4,int *param_5,uint *param_6)

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
      uVar3 = st::fn_006A5EB0((int)param_2->field_0047,(int)param_2->field_0049,
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
                  (iVar4 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                              (int)param_2->field_0047,(int)param_2->field_0049,
                                              (int)psVar10[2]), iVar4 != 0)) {
            if (psVar10[1] == param_2->field_0049) {
              if ((psVar2[iVar8 + iVar9] & 0xc000U) != 0xc000) {
                iVar6 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,(int)*psVar10
                                           ,(int)param_2->field_0049,(int)param_2->field_004B);
joined_r0x0040d327:
                if (iVar6 != 0) goto LAB_0040d369;
              }
            }
            else if ((psVar2[iVar8 + g_pathingGrid.sizeX * iVar7] & 0xc000U) != 0xc000) {
              iVar6 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                         (int)param_2->field_0047,(int)psVar10[1],
                                         (int)param_2->field_004B);
              goto joined_r0x0040d327;
            }
          }
        }
        else if ((((psVar2[iVar8 + iVar9] & 0xc000U) != 0xc000) &&
                 ((psVar2[iVar8 + g_pathingGrid.sizeX * iVar7] & 0xc000U) != 0xc000)) &&
                ((iVar4 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                             (int)param_2->field_0047,(int)psVar10[1],
                                             (int)param_2->field_004B), iVar4 != 0 &&
                 (iVar4 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
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
                         st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                            (int)param_2->field_0047,(int)param_2->field_0049,
                                            st::machine_word_boundary_cast<int>(param_2->field_004B + 1)), local_EAX_957 != 0 &&
                   (local_EAX_989 =
                         st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                            (int)*psVar10,(int)param_2->field_0049,
                                            st::machine_word_boundary_cast<int>(param_2->field_004B + 1)), local_EAX_989 != 0)))) &&
                 (local_EAX_1022 =
                       st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                          (int)param_2->field_0047,(int)psVar10[1],
                                          st::machine_word_boundary_cast<int>(param_2->field_004B + 1)), local_EAX_1022 != 0)) &&
                ((local_EAX_1053 =
                       st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,(int)*psVar10,
                                          (int)psVar10[1],(int)param_2->field_004B),
                 local_EAX_1053 != 0 &&
                 (local_EAX_1085 =
                       st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                          (int)param_2->field_0047,(int)psVar10[1],
                                          (int)param_2->field_004B), local_EAX_1085 != 0)))))) {
              iVar6 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,(int)*psVar10,
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
                            st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                               (int)param_2->field_0047,(int)param_2->field_0049,
                                               st::machine_word_boundary_cast<int>(param_2->field_004B + -1)), local_EAX_586 != 0 &&
                      (local_EAX_617 =
                            st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                               (int)*psVar10,(int)param_2->field_0049,
                                               st::machine_word_boundary_cast<int>(param_2->field_004B + -1)), local_EAX_617 != 0))))))))
                  && ((local_EAX_649 =
                            st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                               (int)param_2->field_0047,(int)psVar10[1],
                                               st::machine_word_boundary_cast<int>(param_2->field_004B + -1)), local_EAX_649 != 0 &&
                      ((local_EAX_679 =
                             st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                                (int)*psVar10,(int)psVar10[1],
                                                (int)param_2->field_004B), local_EAX_679 != 0 &&
                       (local_EAX_710 =
                             st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,
                                                (int)param_2->field_0047,(int)psVar10[1],
                                                (int)param_2->field_004B), local_EAX_710 != 0))))))
          {
            iVar6 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)param_2,(int)*psVar10,
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

// 0040D540 FUN_0040d540
#line 1 "decomp/ST.exe/functions/0040D540/decomp.c"

int st::fn_0040D540(AnonShape_0040D540_1BB7A4CF *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  AnonNested_0040D540_0029_4E1A5CA3 *pAVar5;
  short *psVar6;
  STGameObjC *pSVar7;
  int iVar11;
  int iVar8;
  int local_EAX_594;
  int local_EAX_716;
  int local_EAX_747;
  int iVar12;
  int local_EAX_967;
  int local_EAX_999;
  int local_EAX_1032;
  int local_EAX_1063;
  int local_EAX_1095;
  int local_EAX_1324;
  int local_EAX_1356;
  int local_EAX_1389;
  int local_EAX_1420;
  int local_EAX_1452;
  int iVar9;
  int iVar10;
  ushort *puVar13;
  STGameObjC *pSVar14;
  int local_EAX_2011;
  int local_EAX_2187;
  ushort *puVar15;
  int iVar16;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  ushort *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  ushort *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  local_20 = 0;
  local_3c = 0;
  local_40 = nullptr;
  pSVar7 = st::fn_0040286F(param_1,(ushort)param_2);
  psVar6 = g_pathingGrid.cells;
  iVar11 = (int)pSVar7->field_0047;
  if (((iVar11 == pSVar7->field_00BB) && ((int)pSVar7->field_0049 == pSVar7->field_00BF)) &&
     ((int)pSVar7->field_004B == pSVar7->field_00C3)) {
    return 0;
  }
  if (pSVar7->field_009F == nullptr) {
    iVar8 = st::fn_006AADD0(iVar11,(int)pSVar7->field_0049,(int)pSVar7->field_004B,pSVar7->field_00BB,
                         pSVar7->field_00BF,pSVar7->field_00C3);
    return ((pSVar7->field_00B7 < iVar8) - 1 & 6) - 6;
  }
  iVar16 = pSVar7->field_00A3;
  if (iVar16 + -1 <= pSVar7->field_00A7) {
    return 0;
  }
  psVar4 = pSVar7->field_009F;
  if (((pSVar7->field_0047 == psVar4[iVar16 * 0x24 + -0x24]) &&
      (pSVar7->field_0049 == psVar4[iVar16 * 0x24 + -0x23])) &&
     (pSVar7->field_004B == psVar4[iVar16 * 0x24 + -0x22])) {
    return 0;
  }
  local_c = (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
  iVar11 = st::machine_word_boundary_cast<int>(pSVar7->field_004B * local_c +
           iVar11 + (int)pSVar7->field_0049 * (int)g_pathingGrid.sizeX);
  local_14 = 30000;
  local_38 = (int)pSVar7->field_009F[(pSVar7->field_00A7 * 9 + (int)pSVar7->field_00AB) * 4 + 3];
  local_28 = -1;
  local_2c = -1;
  local_30 = -1;
  local_1c = 1;
  while (local_1c < pSVar7->field_00A3 - pSVar7->field_00A7) {
    local_24 = nullptr;
    puVar15 = (ushort *)(pSVar7->field_009F + (pSVar7->field_00A7 + local_1c) * 0x24);
    do {
      if (*puVar15 == 0xffff) break;
      local_10 = st::fn_006A5EB0((int)pSVar7->field_0047,(int)pSVar7->field_0049,
                              (int)pSVar7->field_004B,(int)(short)*puVar15,(int)(short)puVar15[1],
                              (int)(short)puVar15[2]);
      if ((local_10 != 0xffe) && (local_8 = (int)(short)puVar15[3], local_8 < local_38)) {
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
           (((local_8 != local_14 || ((local_10 == pSVar7->field_00AF && (local_1c < 2)))) &&
            (local_EAX_594 =
                  st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,(int)(short)*puVar15
                                     ,(int)(short)puVar15[1],(int)(short)puVar15[2]),
            local_EAX_594 != 0)))) {
          iVar16 = (int)(short)*puVar15 - (int)pSVar7->field_0047;
          local_18 = (int)(short)puVar15[1] - (int)pSVar7->field_0049;
          if (local_34 == 0) {
            if ((local_44 == 0) || ((local_10 & 0xffff9fff) == 0xffe)) {
LAB_0040dc04:
              if (local_10 != pSVar7->field_00AF) {
                local_44 = *(uint *)&param_1->field_0029->field_0xc;
                local_34 = 0;
                if (0 < (int)local_44) {
                  do {
                    pAVar5 = param_1->field_0029;
                    if ((*(uint *)&pAVar5->field_0xc <= local_34) ||
                       (puVar13 = (ushort *)
                                  (*(int *)&pAVar5->field_0x8 * local_34 + pAVar5->field_001C),
                       puVar13 == nullptr)) break;
                    uVar3 = *puVar13;
                    if (((uVar3 != 0xffff) &&
                        ((((pSVar14 = st::fn_0040286F(param_1,uVar3),
                           pSVar14 != nullptr && (pSVar14 != pSVar7)) &&
                          (puVar13 = pSVar14->field_0097, puVar13 != nullptr)) &&
                         (pSVar14->field_009F != nullptr)))) &&
                       ((((puVar13[4] == *puVar15 && (puVar13[5] == puVar15[1])) &&
                         (puVar13[6] == puVar15[2])) ||
                        ((((local_48 = st::fn_006A5EB0((int)pSVar14->field_0047,
                                                    (int)pSVar14->field_0049,
                                                    (int)pSVar14->field_004B,(int)(short)*puVar15,
                                                    (int)(short)puVar15[1],(int)(short)puVar15[2]),
                           local_48 != 0xffe &&
                           ((local_48 != pSVar14->field_00AF ||
                            (pSVar14->field_009F
                             [(pSVar14->field_00A7 * 9 + (int)pSVar14->field_00AB) * 4 + 3] <
                             local_38)))) &&
                          (local_EAX_2011 =
                                st::fn_00402513(param_1,(AnonShape_0040CE20_D3328A6B *)pSVar14,
                                                   &local_4c,&local_50,&local_54,&local_48),
                          local_EAX_2011 != 0)) &&
                         (((local_4c == (short)*puVar15 && (local_50 == (short)puVar15[1])) &&
                          (local_54 == (short)puVar15[2])))))))) goto LAB_0040dd8a;
                    local_34 = local_34 + 1;
                  } while ((int)local_34 < (int)local_44);
                }
              }
              local_28 = (int)(short)*puVar15;
              local_2c = (int)(short)puVar15[1];
              local_30 = (int)(short)puVar15[2];
              local_3c = local_1c;
              local_20 = local_10;
              local_14 = local_8;
              local_40 = local_24;
              if ((local_24 == nullptr) && (pSVar7->field_00AB == nullptr))
              goto LAB_0040dde1;
            }
            else if (((psVar6[iVar11 + ((int)(short)puVar15[2] - (int)pSVar7->field_004B) * local_c]
                      & 0xc000U) != 0xc000) &&
                    (iVar10 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                 (int)pSVar7->field_0047,(int)pSVar7->field_0049,
                                                 (int)(short)puVar15[2]), iVar10 != 0)) {
              if (puVar15[1] == pSVar7->field_0049) {
                if ((psVar6[iVar11 + iVar16] & 0xc000U) != 0xc000) {
                  iVar9 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                             (int)(short)*puVar15,(int)pSVar7->field_0049,
                                             (int)pSVar7->field_004B);
joined_r0x0040dbb9:
                  if (iVar9 != 0) goto LAB_0040dc04;
                }
              }
              else if ((psVar6[iVar11 + g_pathingGrid.sizeX * local_18] & 0xc000U) != 0xc000) {
                iVar9 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                           (int)pSVar7->field_0047,(int)(short)puVar15[1],
                                           (int)pSVar7->field_004B);
                goto joined_r0x0040dbb9;
              }
            }
          }
          else if (((((psVar6[iVar11 + iVar16] & 0xc000U) != 0xc000) &&
                    ((psVar6[iVar11 + g_pathingGrid.sizeX * local_18] & 0xc000U) != 0xc000)) &&
                   (local_EAX_716 =
                         st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                            (int)pSVar7->field_0047,(int)(short)puVar15[1],
                                            (int)pSVar7->field_004B), local_EAX_716 != 0)) &&
                  (local_EAX_747 =
                        st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                           (int)(short)*puVar15,(int)pSVar7->field_0049,
                                           (int)pSVar7->field_004B), local_EAX_747 != 0)) {
            if ((local_10 & 0x4000) == 0) {
              if ((local_10 & 0x2000) == 0) goto LAB_0040dc04;
              if (((((psVar6[iVar11 + local_c] & 0xc000U) != 0xc000) &&
                   ((psVar6[iVar11 + iVar16 + local_c] & 0xc000U) != 0xc000)) &&
                  ((iVar12 = g_pathingGrid.sizeX * local_18,
                   (psVar6[iVar11 + iVar12 + local_c] & 0xc000U) != 0xc000 &&
                   (((psVar6[iVar11 + iVar12 + iVar16] & 0xc000U) != 0xc000 &&
                    ((psVar6[iVar11 + iVar16] & 0xc000U) != 0xc000)))))) &&
                 (((psVar6[iVar11 + iVar12] & 0xc000U) != 0xc000 &&
                  ((((local_EAX_1324 =
                           st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                              (int)pSVar7->field_0047,(int)pSVar7->field_0049,
                                              st::machine_word_boundary_cast<int>(pSVar7->field_004B + 1)), local_EAX_1324 != 0 &&
                     (local_EAX_1356 =
                           st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                              (int)(short)*puVar15,(int)pSVar7->field_0049,
                                              st::machine_word_boundary_cast<int>(pSVar7->field_004B + 1)), local_EAX_1356 != 0)) &&
                    (local_EAX_1389 =
                          st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                             (int)pSVar7->field_0047,(int)(short)puVar15[1],
                                             st::machine_word_boundary_cast<int>(pSVar7->field_004B + 1)), local_EAX_1389 != 0)) &&
                   ((local_EAX_1420 =
                          st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                             (int)(short)*puVar15,(int)(short)puVar15[1],
                                             (int)pSVar7->field_004B), local_EAX_1420 != 0 &&
                    (local_EAX_1452 =
                          st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                             (int)pSVar7->field_0047,(int)(short)puVar15[1],
                                             (int)pSVar7->field_004B), local_EAX_1452 != 0)))))))) {
                sVar1 = pSVar7->field_004B;
                sVar2 = pSVar7->field_0049;
                uVar3 = *puVar15;
                goto LAB_0040db07;
              }
            }
            else if ((((((psVar6[iVar11 - local_c] & 0xc000U) != 0xc000) &&
                       ((psVar6[iVar11 + (iVar16 - local_c)] & 0xc000U) != 0xc000)) &&
                      ((iVar12 = g_pathingGrid.sizeX * local_18,
                       (psVar6[iVar11 + (iVar12 - local_c)] & 0xc000U) != 0xc000 &&
                       ((((psVar6[iVar11 + iVar12 + iVar16] & 0xc000U) != 0xc000 &&
                         ((psVar6[iVar11 + iVar16] & 0xc000U) != 0xc000)) &&
                        ((psVar6[iVar11 + iVar12] & 0xc000U) != 0xc000)))))) &&
                     ((local_EAX_967 =
                            st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                               (int)pSVar7->field_0047,(int)pSVar7->field_0049,
                                               st::machine_word_boundary_cast<int>(pSVar7->field_004B + -1)), local_EAX_967 != 0 &&
                      (local_EAX_999 =
                            st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                               (int)(short)*puVar15,(int)pSVar7->field_0049,
                                               st::machine_word_boundary_cast<int>(pSVar7->field_004B + -1)), local_EAX_999 != 0)))) &&
                    ((local_EAX_1032 =
                           st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                              (int)pSVar7->field_0047,(int)(short)puVar15[1],
                                              st::machine_word_boundary_cast<int>(pSVar7->field_004B + -1)), local_EAX_1032 != 0 &&
                     ((local_EAX_1063 =
                            st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                               (int)(short)*puVar15,(int)(short)puVar15[1],
                                               (int)pSVar7->field_004B), local_EAX_1063 != 0 &&
                      (local_EAX_1095 =
                            st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                               (int)pSVar7->field_0047,(int)(short)puVar15[1],
                                               (int)pSVar7->field_004B), local_EAX_1095 != 0)))))) {
              sVar1 = pSVar7->field_004B;
              sVar2 = pSVar7->field_0049;
              uVar3 = *puVar15;
LAB_0040db07:
              iVar9 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                         (int)(short)uVar3,(int)sVar2,(int)sVar1);
              goto joined_r0x0040dbb9;
            }
          }
        }
      }
LAB_0040dd8a:
      puVar15 = puVar15 + 4;
      local_24 = (ushort *)((int)local_24 + 1);
    } while ((int)local_24 < 9);
    local_1c = local_1c + 1;
    if (2 < local_1c) break;
  }
  if (local_14 == 30000) {
    local_EAX_2187 =
         st::fn_00402513(param_1,(AnonShape_0040CE20_D3328A6B *)pSVar7,&local_28,&local_2c,
                            &local_30,&local_20);
    if (local_EAX_2187 == 0) {
      return 2;
    }
  }
  else {
LAB_0040dde1:
    if (29999 < local_14) {
      return 2;
    }
  }
  st::fn_006A5E90((short *)pSVar7->field_0097);
  pSVar7->field_00A7 = st::machine_word_boundary_cast<int>(pSVar7->field_00A7 + local_3c);
  pSVar7->field_00AB = local_40;
  puVar15 = st::pointer_boundary_cast<ushort *>(st::fn_006AAC10(0x10));
  pSVar7->field_0097 = puVar15;
  if (puVar15 != nullptr) {
    pSVar7->field_009B = 2;
    puVar15[4] = (ushort)local_28;
    pSVar7->field_0097[5] = (ushort)local_2c;
    pSVar7->field_0097[6] = (ushort)local_30;
    pSVar7->field_0097[7] = (ushort)local_20;
    pSVar7->field_00AF = (int)(short)(ushort)local_20;
    return 1;
  }
  return -2;
}

// 0040EB90 FUN_0040eb90
#line 4 "decomp/ST.exe/functions/0040EB90/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 st::fn_0040EB90(void)

{
  alignas(4) byte st_stack_frame[148];

  undefined4 *puVar1;
  int iVar3;
  int iVar5;
  int *piVar6;
  int iVar4;
  int iVar8;
  int iVar2;
  int local_EAX_807;
  int iVar7;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int aiStack_a8 [6];
  undefined4 uStack_90;
  int local_80;
  int local_7c;
  int local_74;
  int local_60;
  int local_54;
  int local_4c;
  int local_48;
  int local_40;
  int local_30;
  int local_28;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  int *piVar10;

  iVar3 = DAT_007f4d20;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_00790040);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  iVar13 = 0;
  uStack_90 = 0x40ebd1;
  DAT_007f4d00 = st::machine_word_boundary_cast<undefined4>((int *)((st_stack_frame + 4) + DAT_007f4d20 * -0xc));
  local_8 = 0xffffffff;
  iVar11 = 0;
  ExceptionList = &local_14;
  if (0 < DAT_007f4d20) {
    iVar9 = 0;
    iVar5 = 0;
    DAT_007f4d00 = st::machine_word_boundary_cast<undefined4>((int *)((st_stack_frame + 4) + DAT_007f4d20 * -0xc));
    ExceptionList = &local_14;
    do {
      *(int *)(iVar9 + 8 + (int)DAT_007f4d00) = DAT_007f4d48 + iVar5;
      iVar11 = iVar11 + 1;
      iVar5 = iVar5 + 0x1c;
      iVar9 = iVar9 + 0xc;
    } while (iVar11 < DAT_007f4d20);
  }
  iVar11 = 0;
  local_74 = 0;
  if (0 < DAT_007f4d20) {
    piVar6 = &g_runtimeRecords_007F4D3C->field_0008;
    local_80 = DAT_007f4d20;
    do {
      iVar11 = iVar11 + 2 + ((RuntimeRecord_007F4D3C_0014 *)(piVar6 + -2))->field_0000 * 4;
      iVar13 = iVar13 + 2 + piVar6[-1] * 4;
      local_74 = local_74 + 2 + *piVar6 * 4;
      piVar6 = piVar6 + 5;
      local_80 = local_80 + -1;
    } while (local_80 != 0);
  }
  iVar5 = DAT_007f4d20 / 2;
  iVar11 = (iVar5 + iVar11) / DAT_007f4d20;
  iVar13 = (iVar5 + iVar13) / DAT_007f4d20;
  iVar5 = (iVar5 + local_74) / DAT_007f4d20;
  local_30 = 30000;
  local_4c = -30000;
  aiStack_a8[iVar3 * -3 + 6] = iVar13;
  aiStack_a8[iVar3 * -3 + 5] = iVar11;
  aiStack_a8[iVar3 * -3 + 4] = DAT_007f4d10;
  aiStack_a8[iVar3 * -3 + 3] = DAT_007f4d0c;
  aiStack_a8[iVar3 * -3 + 2] = 0x40ec90;
  local_7c = st::fn_006ACED8(aiStack_a8[iVar3 * -3 + 3],aiStack_a8[iVar3 * -3 + 4],
                          aiStack_a8[iVar3 * -3 + 5],aiStack_a8[iVar3 * -3 + 6]);
  if (local_7c == 0) {
    local_7c = 1;
  }
  iVar9 = local_7c >> 1;
  local_54 = 0;
  if (0 < DAT_007f4d20) {
    piVar6 = (int *)(DAT_007f4d48 + 4);
    piVar10 = st::pointer_boundary_cast<int *>(DAT_007f4d00);
    do {
      aiStack_a8[iVar3 * -3 + 6] = st::machine_word_boundary_cast<int>(piVar6[1] * 4 + 2);
      aiStack_a8[iVar3 * -3 + 5] = *piVar6 * 4 + 2;
      aiStack_a8[iVar3 * -3 + 4] = st::machine_word_boundary_cast<int>(piVar6[-1] * 4 + 2);
      aiStack_a8[iVar3 * -3 + 3] = iVar5;
      aiStack_a8[iVar3 * -3 + 2] = iVar13;
      aiStack_a8[iVar3 * -3 + 1] = iVar11;
      aiStack_a8[iVar3 * -3] = 0x40ecfa;
      iVar4 = st::fn_006AAE60(aiStack_a8[iVar3 * -3 + 1],aiStack_a8[iVar3 * -3 + 2],
                           aiStack_a8[iVar3 * -3 + 3],aiStack_a8[iVar3 * -3 + 4],
                           aiStack_a8[iVar3 * -3 + 5],aiStack_a8[iVar3 * -3 + 6]);
      *piVar10 = iVar4;
      iVar8 = ((piVar6[-1] * 4 - DAT_007f4d0c) + 2) * (iVar13 - DAT_007f4d10) -
              ((*piVar6 * 4 - DAT_007f4d10) + 2) * (iVar11 - DAT_007f4d0c);
      iVar10 = iVar9;
      if (iVar8 < 0) {
        iVar10 = -iVar9;
      }
      iVar10 = (iVar8 + iVar10) / local_7c;
      piVar10[1] = iVar10;
      if (iVar10 < local_30) {
        local_30 = iVar10;
      }
      if (local_4c < iVar10) {
        local_4c = iVar10;
      }
      local_54 = local_54 + 1;
      piVar10 = piVar10 + 3;
      piVar6 = piVar6 + 7;
    } while (local_54 < DAT_007f4d20);
  }
  local_60 = 30000;
  local_20 = -30000;
  local_54 = 0;
  iVar5 = -30000;
  iVar10 = 30000;
  if (0 < DAT_007f4d20) {
    piVar6 = &g_runtimeRecords_007F4D3C->field_0004;
    do {
      aiStack_a8[iVar3 * -3 + 6] = st::machine_word_boundary_cast<int>(piVar6[1] * 4 + 2);
      aiStack_a8[iVar3 * -3 + 5] = *piVar6 * 4 + 2;
      aiStack_a8[iVar3 * -3 + 4] =
           ((RuntimeRecord_007F4D3C_0014 *)(piVar6 + -1))->field_0000 * 4 + 2;
      aiStack_a8[iVar3 * -3 + 3] = DAT_007f4d1c;
      aiStack_a8[iVar3 * -3 + 2] = DAT_007f4d10;
      aiStack_a8[iVar3 * -3 + 1] = DAT_007f4d0c;
      aiStack_a8[iVar3 * -3] = 0x40edce;
      iVar2 = st::fn_006AAE60(aiStack_a8[iVar3 * -3 + 1],aiStack_a8[iVar3 * -3 + 2],
                           aiStack_a8[iVar3 * -3 + 3],aiStack_a8[iVar3 * -3 + 4],
                           aiStack_a8[iVar3 * -3 + 5],aiStack_a8[iVar3 * -3 + 6]);
      piVar6[2] = iVar2;
      iVar10 = ((((RuntimeRecord_007F4D3C_0014 *)(piVar6 + -1))->field_0000 * 4 - DAT_007f4d0c) + 2)
               * (iVar13 - DAT_007f4d10) -
               ((*piVar6 * 4 - DAT_007f4d10) + 2) * (iVar11 - DAT_007f4d0c);
      iVar5 = iVar9;
      if (iVar10 < 0) {
        iVar5 = -iVar9;
      }
      iVar5 = (iVar10 + iVar5) / local_7c;
      piVar6[3] = iVar5;
      if (iVar5 < local_60) {
        local_60 = iVar5;
      }
      if (local_20 < iVar5) {
        local_20 = iVar5;
      }
      local_54 = local_54 + 1;
      piVar6 = piVar6 + 5;
      iVar5 = local_20;
      iVar10 = local_60;
    } while (local_54 < DAT_007f4d20);
  }
  if (local_4c - local_30 < iVar5 - iVar10) {
    aiStack_a8[iVar3 * -3 + 6] = (int)st::fn_0040F220;
    aiStack_a8[iVar3 * -3 + 5] = 0x14;
    aiStack_a8[iVar3 * -3 + 4] = DAT_007f4d20;
    aiStack_a8[iVar3 * -3 + 3] = (int)g_runtimeRecords_007F4D3C;
    aiStack_a8[iVar3 * -3 + 2] = 0x40ef66;
    st::fn_006ACCD0((RuntimeRecord_007F4D3C_0014 *)aiStack_a8[iVar3 * -3 + 3],
                 (undefined4 *)aiStack_a8[iVar3 * -3 + 4],aiStack_a8[iVar3 * -3 + 5],
                 (callback_006ACCD0_p3 *)aiStack_a8[iVar3 * -3 + 6]);
    local_28 = 0;
    if (0 < DAT_007f4d20) {
      piVar6 = &g_runtimeRecords_007F4D3C->field_0004;
      do {
        iVar13 = 30000;
        local_54 = 0;
        if (0 < DAT_007f4d20) {
          piVar14 = st::pointer_boundary_cast<int *>(DAT_007f4d00 + 2);
          do {
            if (-1 < piVar14[-2]) {
              puVar1 = (undefined4 *)*piVar14;
              aiStack_a8[iVar3 * -3 + 6] = piVar6[1];
              aiStack_a8[iVar3 * -3 + 5] = *piVar6;
              aiStack_a8[iVar3 * -3 + 4] =
                   ((RuntimeRecord_007F4D3C_0014 *)(piVar6 + -1))->field_0000;
              aiStack_a8[iVar3 * -3 + 3] = puVar1[2];
              aiStack_a8[iVar3 * -3 + 2] = puVar1[1];
              aiStack_a8[iVar3 * -3 + 1] = *puVar1;
              aiStack_a8[iVar3 * -3] = 0x40efc0;
              iVar7 = st::fn_006AAE60(aiStack_a8[iVar3 * -3 + 1],aiStack_a8[iVar3 * -3 + 2],
                                   aiStack_a8[iVar3 * -3 + 3],aiStack_a8[iVar3 * -3 + 4],
                                   aiStack_a8[iVar3 * -3 + 5],aiStack_a8[iVar3 * -3 + 6]);
              uVar12 = st::machine_word_boundary_cast<uint>(piVar14[-1] - piVar6[3] >> 0x1f);
              iVar11 = (piVar14[-1] - piVar6[3] ^ uVar12) - uVar12;
              iVar5 = iVar7 + iVar11;
              if ((iVar5 < iVar13) || ((iVar13 == iVar5 && (iVar11 < local_40)))) {
                local_48 = local_54;
                iVar13 = iVar5;
                local_40 = iVar11;
              }
            }
            local_54 = local_54 + 1;
            piVar14 = piVar14 + 3;
          } while (local_54 < DAT_007f4d20);
        }
        *(int *)(DAT_007f4d00[local_48 * 3 + 2] + 0xc) =
             ((RuntimeRecord_007F4D3C_0014 *)(piVar6 + -1))->field_0000;
        *(int *)(DAT_007f4d00[local_48 * 3 + 2] + 0x10) = *piVar6;
        *(int *)(DAT_007f4d00[local_48 * 3 + 2] + 0x14) = piVar6[1];
        DAT_007f4d00[local_48 * 3] = -1;
        local_28 = local_28 + 1;
        piVar6 = piVar6 + 5;
      } while (local_28 < DAT_007f4d20);
    }
  }
  else {
    aiStack_a8[iVar3 * -3 + 6] = (int)st::fn_0040F1D0;
    aiStack_a8[iVar3 * -3 + 5] = 0xc;
    aiStack_a8[iVar3 * -3 + 4] = DAT_007f4d20;
    aiStack_a8[iVar3 * -3 + 3] = (int)DAT_007f4d00;
    aiStack_a8[iVar3 * -3 + 2] = 0x40ee65;
    st::fn_006ACCD0((RuntimeRecord_007F4D3C_0014 *)aiStack_a8[iVar3 * -3 + 3],
                 (undefined4 *)aiStack_a8[iVar3 * -3 + 4],aiStack_a8[iVar3 * -3 + 5],
                 (callback_006ACCD0_p3 *)aiStack_a8[iVar3 * -3 + 6]);
    local_54 = 0;
    if (0 < DAT_007f4d20) {
      piVar6 = st::pointer_boundary_cast<int *>(DAT_007f4d00 + 2);
      do {
        iVar13 = 30000;
        local_28 = 0;
        if (0 < DAT_007f4d20) {
          piVar14 = &g_runtimeRecords_007F4D3C->field_0004;
          do {
            iVar11 = ((RuntimeRecord_007F4D3C_0014 *)(piVar14 + -1))->field_0000;
            if (-1 < iVar11) {
              puVar1 = (undefined4 *)*piVar6;
              aiStack_a8[iVar3 * -3 + 6] = puVar1[2];
              aiStack_a8[iVar3 * -3 + 5] = puVar1[1];
              aiStack_a8[iVar3 * -3 + 4] = *puVar1;
              aiStack_a8[iVar3 * -3 + 3] = piVar14[1];
              aiStack_a8[iVar3 * -3 + 2] = *piVar14;
              aiStack_a8[iVar3 * -3 + 1] = iVar11;
              aiStack_a8[iVar3 * -3] = 0x40eebc;
              local_EAX_807 =
                   st::fn_006AAE60(aiStack_a8[iVar3 * -3 + 1],aiStack_a8[iVar3 * -3 + 2],
                                aiStack_a8[iVar3 * -3 + 3],aiStack_a8[iVar3 * -3 + 4],
                                aiStack_a8[iVar3 * -3 + 5],aiStack_a8[iVar3 * -3 + 6]);
              uVar12 = st::machine_word_boundary_cast<uint>(piVar14[3] - piVar6[-1] >> 0x1f);
              iVar11 = (piVar14[3] - piVar6[-1] ^ uVar12) - uVar12;
              iVar5 = local_EAX_807 + iVar11;
              if ((iVar5 < iVar13) || ((iVar13 == iVar5 && (iVar11 < local_40)))) {
                local_48 = local_28;
                iVar13 = iVar5;
                local_40 = iVar11;
              }
            }
            local_28 = local_28 + 1;
            piVar14 = piVar14 + 5;
          } while (local_28 < DAT_007f4d20);
        }
        *(int *)(*piVar6 + 0xc) = g_runtimeRecords_007F4D3C[local_48].field_0000;
        *(int *)(*piVar6 + 0x10) = g_runtimeRecords_007F4D3C[local_48].field_0004;
        *(int *)(*piVar6 + 0x14) = g_runtimeRecords_007F4D3C[local_48].field_0008;
        g_runtimeRecords_007F4D3C[local_48].field_0000 = -1;
        local_54 = local_54 + 1;
        piVar6 = piVar6 + 3;
      } while (local_54 < DAT_007f4d20);
    }
  }
  ExceptionList = local_14;
  return 0;
}

// 0040F1D0 FUN_0040f1d0
#line 4 "decomp/ST.exe/functions/0040F1D0/decomp.c"
int __cdecl st::fn_0040F1D0(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;

  uVar1 = st::machine_word_boundary_cast<uint>(param_1[1] >> 0x1f);
  uVar2 = st::machine_word_boundary_cast<uint>(param_2[1] >> 0x1f);
  return (((int)((param_2[1] ^ uVar2) - uVar2) / 2 - (int)((param_1[1] ^ uVar1) - uVar1) / 2) -
         *param_1) + *param_2;
}

// 0040F220 FUN_0040f220
#line 4 "decomp/ST.exe/functions/0040F220/decomp.c"
int __cdecl st::fn_0040F220(AnonShape_0040F220_61B59860 *param_1,AnonShape_0040F220_06315B9F *param_2)

{
  uint uVar1;
  uint uVar2;

  uVar1 = (int)param_2->field_0010 >> 0x1f;
  uVar2 = (int)param_1->field_0010 >> 0x1f;
  return ((int)((param_2->field_0010 ^ uVar1) - uVar1) / 2 +
         (param_2->field_000C - param_1->field_000C)) -
         (int)((param_1->field_0010 ^ uVar2) - uVar2) / 2;
}

// 0040F270 FUN_0040f270
#line 4 "decomp/ST.exe/functions/0040F270/decomp.c"
undefined4
st::fn_0040F270(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;

  iVar1 = *param_1;
  iVar2 = *param_2;
  iVar3 = *param_3;
  iVar7 = DAT_007f4d30 * DAT_007f4d2c;
  local_1c = 30000;
  local_14 = 30000;
  local_10 = -1;
  local_c = 1;
  piVar4 = PTR_007f4d50;
  if (1 < DAT_007f4d44) {
    do {
      if ((-1 < local_10) && (local_30 < STField<char>(piVar4,7))) break;
      iVar10 = STField<char>(piVar4,5) + iVar2;
      iVar9 = (char)piVar4[1] + iVar1;
      iVar8 = STField<char>(piVar4,6) + iVar3;
      if ((((-1 < iVar8) &&
           ((((iVar8 < DAT_007f4d34 && (-1 < iVar9)) && (iVar9 < DAT_007f4d2c)) &&
            ((-1 < iVar10 && (iVar10 < DAT_007f4d30)))))) &&
          (uVar5 = iVar8 * iVar7 + iVar9 + DAT_007f4d2c * iVar10,
          *(short *)(DAT_007f4cf0 + uVar5 * 2) == 0)) &&
         (uVar5 = uVar5 ^ 7, (g_bitset_007F4CFC[(int)uVar5 >> 3] >> (uVar5 & 7) & 1) == 0)) {
        iVar6 = st::fn_006AADD0(iVar9,iVar10,iVar8,param_7,param_8,param_9);
        iVar8 = st::fn_006AADD0(iVar9,iVar10,iVar8,param_4,param_5,param_6);
        if ((iVar8 < local_14) || ((iVar8 == local_14 && (iVar6 < local_1c)))) {
          local_10 = local_c;
          local_30 = (int)STField<char>(piVar4,7);
          local_1c = iVar6;
          local_14 = iVar8;
        }
      }
      local_c = local_c + 1;
      piVar4 = piVar4 + 1;
    } while (local_c < DAT_007f4d44);
    if (-1 < local_10) {
      *param_1 = (char)PTR_007f4d50[local_10] + iVar1;
      *param_2 = *(char *)((int)PTR_007f4d50 + local_10 * 4 + 1) + iVar2;
      *param_3 = *(char *)((int)PTR_007f4d50 + local_10 * 4 + 2) + iVar3;
      return 0;
    }
  }
  return 0xfffffffc;
}

// 0040F4D0 FUN_0040f4d0
#line 4 "decomp/ST.exe/functions/0040F4D0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_0040F4D0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  alignas(4) byte st_stack_frame[92];

  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  byte *puVar8;
  byte *puVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  int local_24;

  iVar1 = -(param_2 + 3 & 0xfffffffc);
  pcVar11 = (st_stack_frame + 20) + iVar1;
  pcVar12 = (st_stack_frame + 20) + iVar1;
  puVar8 = (byte *)(param_1);
  puVar9 = (byte *)((st_stack_frame + 20) + iVar1);
  memmove(puVar9, puVar8, param_2); /* compiler REP MOVS byte copy */
  cVar2 = (char)param_2;
  if (param_4 == 0) {
    local_24 = param_3 / 2;
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if (((st_stack_frame + 20))[iVar3 + iVar1] != '\0') {
          local_24 = local_24 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    uVar5 = 0;
    if (0 < param_3) {
      do {
        if (pcVar12[param_3] != '\0') {
          local_24 = local_24 + 1;
        }
        cVar7 = (char)local_24;
        if (*pcVar12 != '\0') {
          cVar7 = cVar7 + cVar2;
        }
        pcVar12[(int)param_1 - (int)((st_stack_frame + 20) + iVar1)] = cVar7;
        if ((uVar5 & 1) != 0) {
          local_24 = local_24 + -1;
        }
        uVar5 = uVar5 + 1;
        pcVar12 = pcVar12 + 1;
      } while ((int)uVar5 < param_3);
    }
    if ((int)uVar5 < (int)(param_2 - param_3)) {
      pcVar12 = (st_stack_frame + 20) + uVar5 + iVar1;
      do {
        if (pcVar12[param_3] != '\0') {
          local_24 = local_24 + 1;
        }
        cVar7 = (char)local_24;
        if (*pcVar12 != '\0') {
          cVar7 = cVar7 + cVar2;
        }
        pcVar12[(int)param_1 - (int)((st_stack_frame + 20) + iVar1)] = cVar7;
        if (((st_stack_frame + 20))[(uVar5 - param_3) + iVar1] != '\0') {
          local_24 = local_24 + -1;
        }
        uVar5 = uVar5 + 1;
        pcVar12 = pcVar12 + 1;
      } while ((int)uVar5 < (int)(param_2 - param_3));
    }
    if ((int)uVar5 < (int)param_2) {
      pcVar12 = (char *)(uVar5 + (int)param_1);
      uVar4 = param_2 - uVar5;
      do {
        if ((uVar4 & 1) == 0) {
          local_24 = local_24 + 1;
        }
        cVar7 = (char)local_24;
        if (pcVar12[(int)((st_stack_frame + 20) + (iVar1 - (int)param_1))] != '\0') {
          cVar7 = cVar2 + cVar7;
        }
        *pcVar12 = cVar7;
        if (((st_stack_frame + 20))[(uVar5 - param_3) + iVar1] != '\0') {
          local_24 = local_24 + -1;
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 - 1;
        pcVar12 = pcVar12 + 1;
      } while ((int)uVar5 < (int)param_2);
    }
  }
  else {
    cVar7 = '\0';
    iVar10 = param_2 - param_3;
    for (iVar3 = iVar10; iVar3 < (int)param_2; iVar3 = iVar3 + 1) {
      if (((st_stack_frame + 20))[iVar3 + iVar1] != '\0') {
        cVar7 = cVar7 + '\x01';
      }
    }
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if (((st_stack_frame + 20))[iVar3 + iVar1] != '\0') {
          cVar7 = cVar7 + '\x01';
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if (pcVar11[param_3] != '\0') {
          cVar7 = cVar7 + '\x01';
        }
        cVar6 = cVar7;
        if (*pcVar11 != '\0') {
          cVar6 = cVar2 + cVar7;
        }
        pcVar11[(int)param_1 - (int)((st_stack_frame + 20) + iVar1)] = cVar6;
        if (((st_stack_frame + 20))[param_2 + (iVar3 - param_3) + iVar1] != '\0') {
          cVar7 = cVar7 + -1;
        }
        iVar3 = iVar3 + 1;
        pcVar11 = pcVar11 + 1;
      } while (iVar3 < param_3);
    }
    if (iVar3 < iVar10) {
      pcVar12 = (st_stack_frame + 20) + iVar3 + iVar1;
      do {
        if (pcVar12[param_3] != '\0') {
          cVar7 = cVar7 + '\x01';
        }
        cVar6 = cVar7;
        if (*pcVar12 != '\0') {
          cVar6 = cVar2 + cVar7;
        }
        pcVar12[(int)param_1 - (int)((st_stack_frame + 20) + iVar1)] = cVar6;
        if (((st_stack_frame + 20))[(iVar3 - param_3) + iVar1] != '\0') {
          cVar7 = cVar7 + -1;
        }
        iVar3 = iVar3 + 1;
        pcVar12 = pcVar12 + 1;
      } while (iVar3 < iVar10);
    }
    if (iVar3 < (int)param_2) {
      pcVar12 = (char *)(iVar3 + (int)param_1);
      do {
        if (((st_stack_frame + 20))[param_3 + (iVar3 - param_2) + iVar1] != '\0') {
          cVar7 = cVar7 + '\x01';
        }
        cVar6 = cVar7;
        if (pcVar12[(int)((st_stack_frame + 20) + (iVar1 - (int)param_1))] != '\0') {
          cVar6 = cVar7 + cVar2;
        }
        *pcVar12 = cVar6;
        if (((st_stack_frame + 20))[(iVar3 - param_3) + iVar1] != '\0') {
          cVar7 = cVar7 + -1;
        }
        iVar3 = iVar3 + 1;
        pcVar12 = pcVar12 + 1;
      } while (iVar3 < (int)param_2);
    }
  }
  return;
}

// 0040F840 FUN_0040f840
#line 1 "decomp/ST.exe/functions/0040F840/decomp.c"

int st::fn_0040F840(byte *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  cVar10 = (char)param_2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == 0) {
    local_14 = 0;
    uVar4 = (uint)*param_1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 30000;
    iVar11 = 1;
    local_c = 1;
    uVar3 = 30000;
    iVar5 = local_8;
    uVar8 = uVar4;
    if (1 < param_2) {
      do {
        uVar4 = (uint)param_1[local_c];
        if (uVar8 == uVar4) {
          iVar11 = iVar11 + 1;
          uVar4 = uVar8;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if ((uVar8 < param_4) ||
             ((param_4 == uVar8 &&
              ((iVar5 < iVar11 ||
               ((iVar5 == iVar11 &&
                (uVar3 = (param_2 / 2 - iVar5 / 2) - local_10, uVar6 = (int)uVar3 >> 0x1f,
                uVar9 = (param_2 / 2 - iVar11 / 2) - local_14, uVar7 = (int)uVar9 >> 0x1f,
                iVar5 = local_8, (int)((uVar9 ^ uVar7) - uVar7) < (int)((uVar3 ^ uVar6) - uVar6)))))
              )))) {
            local_10 = local_14;
            iVar5 = iVar11;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_4 = uVar8;
            local_8 = iVar11;
          }
          iVar11 = 1;
          local_14 = local_c;
        }
        local_c = local_c + 1;
        uVar3 = param_4;
        uVar8 = uVar4;
      } while (local_c < param_2);
    }
    if ((uVar4 < uVar3) ||
       ((uVar3 == uVar4 &&
        ((iVar5 < iVar11 ||
         ((iVar5 == iVar11 &&
          (uVar3 = (param_2 / 2 - iVar5 / 2) - local_10, uVar8 = (int)uVar3 >> 0x1f,
          uVar4 = (param_2 / 2 - iVar11 / 2) - local_14, uVar9 = (int)uVar4 >> 0x1f,
          (int)((uVar4 ^ uVar9) - uVar9) < (int)((uVar3 ^ uVar8) - uVar8))))))))) {
      local_10 = local_14;
      iVar5 = iVar11;
    }
    if (param_2 / 2 <= local_10) {
      iVar5 = iVar5 + -1;
    }
    iVar5 = iVar5 / 2 + local_10;
    if (iVar5 < param_3) {
      iVar11 = 0;
      if (-1 < param_3 + iVar5) {
        do {
          param_1[iVar11] = param_1[iVar11] + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 <= param_3 + iVar5);
      }
    }
    else if (iVar5 < param_2 - param_3) {
      iVar11 = iVar5 - param_3;
      if (iVar11 <= param_3 + iVar5) {
        do {
          param_1[iVar11] = param_1[iVar11] + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 <= param_3 + iVar5);
        param_1[iVar5] = param_1[iVar5] + cVar10;
        return iVar5;
      }
    }
    else {
      iVar11 = iVar5 - param_3;
      if (iVar11 < param_2) {
        do {
          param_1[iVar11] = param_1[iVar11] + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 < param_2);
        param_1[iVar5] = param_1[iVar5] + cVar10;
        return iVar5;
      }
    }
    param_1[iVar5] = param_1[iVar5] + cVar10;
    return iVar5;
  }
  uVar3 = (uint)*param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_4 = 30000;
  iVar11 = 1;
  iVar5 = 0;
  iVar2 = param_2 + -1;
  iVar12 = param_2;
  while ((iVar1 = iVar2, -1 < iVar1 && (param_1[iVar1] == uVar3))) {
    iVar11 = iVar11 + 1;
    iVar5 = iVar1;
    iVar12 = iVar1;
    iVar2 = iVar1 + 1;
  }
  local_c = 1;
  uVar4 = uVar3;
  if (1 < iVar12) {
    do {
      uVar3 = (uint)param_1[local_c];
      if (uVar4 == uVar3) {
        iVar11 = iVar11 + 1;
        uVar3 = uVar4;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((uVar4 < param_4) || ((param_4 == uVar4 && (local_8 < iVar11)))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = uVar4;
          local_10 = iVar5;
          local_8 = iVar11;
        }
        iVar11 = 1;
        iVar5 = local_c;
      }
      local_c = local_c + 1;
      uVar4 = uVar3;
    } while (local_c < iVar12);
  }
  if ((param_4 <= uVar3) && ((param_4 != uVar3 || (iVar11 <= local_8)))) {
    iVar11 = local_8;
    iVar5 = local_10;
  }
  iVar5 = (iVar11 / 2 + iVar5) % param_2;
  if (iVar5 < param_3) {
    for (iVar11 = (iVar5 - param_3) + param_2; iVar11 < param_2; iVar11 = iVar11 + 1) {
      param_1[iVar11] = param_1[iVar11] + 1;
    }
    iVar11 = 0;
    if (-1 < param_3 + iVar5) {
      do {
        param_1[iVar11] = param_1[iVar11] + 1;
        iVar11 = iVar11 + 1;
      } while (iVar11 <= param_3 + iVar5);
      param_1[iVar5] = param_1[iVar5] + cVar10;
      return iVar5;
    }
  }
  else if (iVar5 < param_2 - param_3) {
    for (iVar11 = iVar5 - param_3; iVar11 <= param_3 + iVar5; iVar11 = iVar11 + 1) {
      param_1[iVar11] = param_1[iVar11] + 1;
    }
  }
  else {
    for (iVar11 = iVar5 - param_3; iVar11 < param_2; iVar11 = iVar11 + 1) {
      param_1[iVar11] = param_1[iVar11] + 1;
    }
    iVar11 = 0;
    iVar12 = param_3 + (iVar5 - param_2);
    if (-1 < iVar12) {
      do {
        param_1[iVar11] = param_1[iVar11] + 1;
        iVar11 = iVar11 + 1;
      } while (iVar11 <= iVar12);
      param_1[iVar5] = param_1[iVar5] + cVar10;
      return iVar5;
    }
  }
  param_1[iVar5] = param_1[iVar5] + cVar10;
  return iVar5;
}

