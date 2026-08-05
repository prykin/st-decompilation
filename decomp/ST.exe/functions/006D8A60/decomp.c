
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006CEF60 -> 006D8A60 @ 006CF8D7 */

void FUN_006d8a60(uint *param_1,int param_2,byte *param_3,int param_4,uint param_5,uint param_6,
                 int param_7,undefined *param_8,uint param_9,AnonShape_006D8A60_CD460E10 *param_10,
                 undefined *param_11,byte *param_12,int param_13,int param_14,uint param_15)

{
  byte *pbVar1;
  undefined1 *puVar2;
  short sVar3;
  uint uVar4;
  undefined1 *puVar5;
  AnonShape_006D8A60_CD460E10 AVar6;
  AnonShape_006D8A60_CD460E10 AVar7;
  AnonShape_006D8A60_CD460E10 AVar8;
  char cVar9;
  int iVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  uint uVar13;
  AnonShape_006D8A60_CD460E10 AVar14;
  AnonShape_006D8A60_CD460E10 *pAVar15;
  AnonShape_006D8A60_CD460E10 *pAVar17;
  uint *puVar18;
  byte bVar19;
  byte bVar20;
  undefined *puVar21;
  uint uVar22;
  byte *pbVar23;
  byte local_14;
  char local_10;
  uint local_8;
  uint *pAVar16;

  if (((int)param_6 < 1) || (param_7 < 1)) {
    return;
  }
  puVar5 = &param_10->field_0x0 + param_9;
  local_14 = (char)puVar5 - 1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_12 != nullptr) &&
     (param_12 = param_12 + param_13 * param_15 + (param_14 >> 3), param_11 == nullptr)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_11 = &DAT_007ee300;
  }
  if ((int)param_5 < 1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = (AnonShape_006D8A60_CD460E10 *)(param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16);
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = (AnonShape_006D8A60_CD460E10 *)FUN_006cfe10(param_3,param_5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar3 = *(short *)(param_3 + 0x12);
LAB_006d8b04:
  pAVar17 = (AnonShape_006D8A60_CD460E10 *)param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_7 = param_7 + -1;
  local_8 = (uint)*(byte *)param_10;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
  iVar10 = param_4;
  if (local_8 != 0) {
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar22 = local_8 & 0x7f;
        if (iVar10 < (int)uVar22) goto LAB_006d8b50;
        bVar20 = *(byte *)param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
        iVar10 = iVar10 - uVar22;
        local_8 = (uint)bVar20;
      }
      uVar22 = local_8 & 0x3f;
      if (iVar10 < (int)uVar22) break;
      if ((local_8 & 0x40) == 0) {
        pbVar23 = (byte *)((int)&param_10->field_0x0 + uVar22);
        local_8 = (uint)*pbVar23;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (AnonShape_006D8A60_CD460E10 *)(pbVar23 + 1);
        iVar10 = iVar10 - uVar22;
      }
      else {
        local_8 = (uint)param_10->field_0001;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
        iVar10 = iVar10 - uVar22;
      }
    }
LAB_006d8b50:
    uVar22 = uVar22 - iVar10;
    bVar20 = (byte)local_8;
    if ((bVar20 & 0xc0) == 0x80) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_10 = (AnonShape_006D8A60_CD460E10 *)((int)&param_10->field_0x0 + iVar10);
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_15 = param_6;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_8 == nullptr) {
      if ((int)uVar22 <= (int)param_6) {
        do {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 - uVar22;
          if ((local_8 & 0x80) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar22);
          }
          else if (0 < (int)uVar22) {
            do {
              bVar20 = *(byte *)param_10;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = (uint)bVar20;
              if (((int)param_5 < (int)param_9) || ((int)puVar5 <= (int)param_5)) {
                *(byte *)param_1 = bVar20;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
          if ((int)param_15 < 1) {
            uVar22 = 0;
            break;
          }
          local_8 = (uint)*(byte *)param_10;
          uVar22 = local_8 & 0x7f;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
        } while ((int)uVar22 <= (int)param_15);
      }
      uVar22 = uVar22 - param_15;
      pAVar15 = param_10;
      if ((local_8 & 0x80) == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + param_15);
      }
      else if (0 < (int)param_15) {
        do {
          bVar20 = *(byte *)param_10;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = (uint)bVar20;
          if (((int)param_5 < (int)param_9) || ((int)puVar5 <= (int)param_5)) {
            *(byte *)param_1 = bVar20;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 - 1;
          pAVar15 = param_10;
        } while (param_15 != 0);
      }
    }
    else {
      local_10 = (char)uVar22;
      if ((param_3[0xd] & 3) == 1) {
        bVar20 = bVar20 & 0xc0;
        if ((local_8 & 0x80) == 0) {
          bVar20 = 0;
        }
        uVar22 = (uint)(byte)(bVar20 + local_10);
        uVar13 = param_6;
        pAVar16 = (AnonShape_006D8A60_CD460E10 *)param_1;
        do {
          if ((uVar22 & 0x80) == 0) {
            if ((int)uVar13 < (int)uVar22) goto cf_common_join_006D8DA5;
            uVar13 = uVar13 - uVar22;
            pAVar17 = (AnonShape_006D8A60_CD460E10 *)((int)&pAVar16->field_0x0 + uVar22);
          }
          else if ((uVar22 & 0x40) == 0) {
            uVar22 = uVar22 & 0x3f;
            if ((int)uVar13 < (int)uVar22) goto cf_common_join_006D8DA5;
            uVar13 = uVar13 - uVar22;
            bVar20 = *(byte *)param_10;
            if ((bVar20 < (byte)param_9) || (local_14 < bVar20)) {
              if (3 < uVar22) {
                if (((uint)pAVar16 & 1) != 0) {
                  uVar22 = uVar22 - 1;
                  *(byte *)pAVar16 = *(byte *)param_10;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                  pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0001;
                }
                if (((uint)pAVar16 & 2) != 0) {
                  bVar20 = param_10->field_0001;
                  uVar22 = uVar22 - 2;
                  pAVar16->field_0x0 = param_10->field_0x0;
                  pAVar16->field_0001 = bVar20;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
                  pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0002;
                }
                while (3 < (int)uVar22) {
                  AVar14 = *param_10;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = param_10 + 1;
                  *pAVar16 = AVar14;
                  pAVar16 = pAVar16 + 1;
                  uVar22 = uVar22 - 4;
                }
                pAVar17 = pAVar16;
                if (uVar22 == 0) goto LAB_006d8d94;
              }
              if ((char)uVar22 != '\x01') {
                if ((char)uVar22 != '\x02') {
                  pAVar16->field_0002 = param_10->field_0002;
                }
                pAVar16->field_0001 = param_10->field_0001;
              }
              bVar20 = *(byte *)param_10;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (AnonShape_006D8A60_CD460E10 *)((int)&param_10->field_0x0 + uVar22);
              *(byte *)pAVar16 = bVar20;
              pAVar17 = (AnonShape_006D8A60_CD460E10 *)(&pAVar16->field_0x0 + uVar22);
            }
            else {
              AVar14 = *(AnonShape_006D8A60_CD460E10 *)((uint)pAVar16 & 0xfffffffc);
              if (((uint)pAVar16 & 3) == 0) {
LAB_006d8cab:
                bVar20 = (byte)uVar22;
                while ('\x03' < (char)bVar20) {
                  bVar19 = *(byte *)param_10;
                  pbVar23 = &param_10->field_0001;
                  pbVar1 = &param_10->field_0002;
                  puVar2 = &param_10->field_0x3;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = param_10 + 1;
                  *pAVar16 = (AnonShape_006D8A60_CD460E10)
                             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                             (CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar23,AVar14.field_0001) +
                                                        param_9 * -0x100],
                                                param_8[(uint)CONCAT11(bVar19,AVar14._0_1_) +
                                                        param_9 * -0x100]),
                                       CONCAT11(param_8[(uint)CONCAT11(*puVar2,AVar14._3_1_) +
                                                        param_9 * -0x100],
                                                param_8[(uint)CONCAT11(*pbVar1,AVar14.field_0002) +
                                                        param_9 * -0x100])) << 0x10 |
                             (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar23,AVar14.field_0001) +
                                                    param_9 * -0x100],
                                            param_8[(uint)CONCAT11(bVar19,AVar14._0_1_) +
                                                    param_9 * -0x100]));
                  AVar14 = pAVar16[1];
                  pAVar16 = pAVar16 + 1;
                  bVar20 = bVar20 - 4;
                }
                uVar22 = (uint)bVar20;
                pAVar15 = param_10;
                pAVar17 = pAVar16;
                if (bVar20 == 0) goto LAB_006d8d94;
              }
              else {
                AVar14 = (AnonShape_006D8A60_CD460E10)((uint)AVar14 >> (((byte)pAVar16 & 3) << 3));
                pAVar15 = param_10;
                if (3 < uVar22) {
                  if (((uint)pAVar16 & 1) != 0) {
                    uVar22 = (uint)(byte)((char)uVar22 - 1);
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    *(undefined *)pAVar16 =
                         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                         param_8[(uint)CONCAT11(bVar20,AVar14._0_1_) + param_9 * -0x100];
                    AVar14 = (AnonShape_006D8A60_CD460E10)((uint)AVar14 >> 8);
                    pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0001;
                  }
                  if (((uint)pAVar16 & 2) != 0) {
                    bVar20 = *(byte *)param_10;
                    pbVar23 = &param_10->field_0001;
                    uVar22 = (uint)(byte)((char)uVar22 - 2);
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
                    *(ushort *)pAVar16 =
                         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                         CONCAT11(param_8[(uint)CONCAT11(*pbVar23,AVar14.field_0001) +
                                          param_9 * -0x100],
                                  param_8[(uint)CONCAT11(bVar20,AVar14._0_1_) + param_9 * -0x100]);
                    pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0002;
                  }
                  AVar14 = *pAVar16;
                  goto LAB_006d8cab;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (AnonShape_006D8A60_CD460E10 *)&pAVar15->field_0001;
              pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0001;
              *(undefined *)pAVar16 =
                   /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                   param_8[(uint)CONCAT11(*(byte *)pAVar15,AVar14._0_1_) + param_9 * -0x100];
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar12 = AVar14._1_2_;
              if (uVar22 != 1) {
                if (((uint)pAVar17 & 3) == 0) {
                  uVar12 = SUB42(*pAVar17,0);
                }
                bVar20 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (AnonShape_006D8A60_CD460E10 *)&pAVar15->field_0002;
                pbVar23 = &pAVar16->field_0002;
                *(undefined *)pAVar17 =
                     /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                     param_8[(uint)CONCAT11(bVar20,(char)uVar12) + param_9 * -0x100];
                uVar11 = (undefined1)((ushort)uVar12 >> 8);
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)pbVar23;
                if (uVar22 != 2) {
                  if (((uint)pbVar23 & 3) == 0) {
                    uVar11 = (undefined1)*(undefined4 *)pbVar23;
                  }
                  bVar20 = *(byte *)param_10;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = (AnonShape_006D8A60_CD460E10 *)&pAVar15->field_0x3;
                  pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0x3;
                  *pbVar23 = param_8[(uint)CONCAT11(bVar20,uVar11) + param_9 * -0x100];
                }
              }
            }
          }
          else {
            bVar20 = *(byte *)param_10;
            uVar22 = uVar22 & 0xffffff3f;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            AVar14._0_2_ = CONCAT11(bVar20,bVar20);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            AVar14._2_2_ = 0;
            if ((int)uVar13 < (int)uVar22) goto cf_common_join_006D8DA5;
            uVar13 = uVar13 - uVar22;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
            if (3 < uVar22) {
              if (((uint)pAVar16 & 1) != 0) {
                *(byte *)pAVar16 = bVar20;
                pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0001;
                uVar22 = uVar22 - 1;
              }
              if (((uint)pAVar16 & 2) != 0) {
                *(ushort *)pAVar16 = AVar14._0_2_;
                pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0002;
                uVar22 = uVar22 - 2;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              AVar14._2_2_ = AVar14._0_2_;
              while (3 < (int)uVar22) {
                *pAVar16 = AVar14;
                pAVar16 = pAVar16 + 1;
                uVar22 = uVar22 - 4;
              }
              pAVar17 = pAVar16;
              if (uVar22 == 0) goto LAB_006d8d94;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            bVar20 = AVar14._0_1_;
            if ((char)uVar22 != '\x01') {
              if ((char)uVar22 != '\x02') {
                pAVar16->field_0002 = bVar20;
              }
              pAVar16->field_0001 = bVar20;
            }
            *(byte *)pAVar16 = bVar20;
            pAVar17 = (AnonShape_006D8A60_CD460E10 *)(&pAVar16->field_0x0 + uVar22);
          }
LAB_006d8d94:
          uVar22 = 0;
          pAVar16 = pAVar17;
          if ((int)uVar13 < 1) goto cf_common_join_006D8DA5;
          uVar22 = (uint)*(byte *)param_10;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
          local_8 = uVar22;
        } while( true );
      }
      if ((param_3[0xd] & 3) == 2) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_12 == nullptr) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (param_11 == nullptr) {
            bVar20 = bVar20 & 0xc0;
            if ((local_8 & 0x80) == 0) {
              bVar20 = 0;
            }
            uVar22 = (uint)(byte)(bVar20 + local_10);
            uVar13 = param_6;
            do {
              if ((uVar22 & 0x80) == 0) {
                if ((int)uVar13 < (int)uVar22) goto cf_common_join_006D958E;
                uVar13 = uVar13 - uVar22;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar22);
              }
              else if ((uVar22 & 0x40) == 0) {
                uVar22 = uVar22 & 0x3f;
                if ((int)uVar13 < (int)uVar22) goto cf_common_join_006D958E;
                uVar13 = uVar13 - uVar22;
                if (3 < uVar22) {
                  if (((uint)param_1 & 1) != 0) {
                    uVar22 = uVar22 - 1;
                    *(byte *)param_1 = *(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                  }
                  if (((uint)param_1 & 2) != 0) {
                    bVar20 = param_10->field_0001;
                    uVar22 = uVar22 - 2;
                    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 = param_10->field_0x0;
                    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = bVar20;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
                  }
                  while (3 < (int)uVar22) {
                    AVar14 = *param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = param_10 + 1;
                    *param_1 = (uint)AVar14;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = param_1 + 1;
                    uVar22 = uVar22 - 4;
                  }
                  if (uVar22 == 0) goto LAB_006d957d;
                }
                if ((char)uVar22 != '\x01') {
                  if ((char)uVar22 != '\x02') {
                    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = param_10->field_0002;
                  }
                  ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = param_10->field_0001;
                }
                bVar20 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (AnonShape_006D8A60_CD460E10 *)((int)&param_10->field_0x0 + uVar22);
                *(byte *)param_1 = bVar20;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar22);
              }
              else {
                bVar20 = *(byte *)param_10;
                uVar22 = uVar22 & 0xffffff3f;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                AVar7._0_2_ = CONCAT11(bVar20,bVar20);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                AVar7._2_2_ = 0;
                if ((int)uVar13 < (int)uVar22) goto cf_common_join_006D958E;
                uVar13 = uVar13 - uVar22;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                if ((bVar20 < (byte)param_9) || (local_14 < bVar20)) {
                  if (3 < uVar22) {
                    if (((uint)param_1 & 1) != 0) {
                      *(byte *)param_1 = bVar20;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                      uVar22 = uVar22 - 1;
                    }
                    if (((uint)param_1 & 2) != 0) {
                      *(ushort *)param_1 = AVar7._0_2_;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
                      uVar22 = uVar22 - 2;
                    }
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    AVar7._2_2_ = AVar7._0_2_;
                    while (3 < (int)uVar22) {
                      *param_1 = (uint)AVar7;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                      uVar22 = uVar22 - 4;
                    }
                    if (uVar22 == 0) goto LAB_006d957d;
                  }
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  bVar20 = AVar7._0_1_;
                  if ((char)uVar22 != '\x01') {
                    if ((char)uVar22 != '\x02') {
                      ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = bVar20;
                    }
                    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = bVar20;
                  }
                  *(byte *)param_1 = bVar20;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar22);
                }
                else {
                  AVar14 = *(AnonShape_006D8A60_CD460E10 *)((uint)param_1 & 0xfffffffc);
                  if (((uint)param_1 & 3) == 0) {
LAB_006d9450:
                    bVar20 = (byte)uVar22;
                    while ('\x03' < (char)bVar20) {
                      *param_1 = CONCAT22(CONCAT11(param_8[(uint)AVar14 >> 8 & 0xff],
                                                   /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                                   param_8[(uint)AVar14 & 0xff]),
                                          CONCAT11(param_8[(uint)AVar14 >> 0x18],
                                                   param_8[(uint)AVar14 >> 0x10 & 0xff])) << 0x10 |
                                 (uint)CONCAT11(param_8[(uint)AVar14 >> 8 & 0xff],
                                                param_8[(uint)AVar14 & 0xff]);
                      AVar14 = *(AnonShape_006D8A60_CD460E10 *)(param_1 + 1);
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                      bVar20 = bVar20 - 4;
                    }
                    uVar22 = (uint)bVar20;
                    if (bVar20 == 0) goto LAB_006d957d;
                  }
                  else {
                    AVar14 = (AnonShape_006D8A60_CD460E10)
                             ((uint)AVar14 >> (((byte)param_1 & 3) << 3));
                    if (3 < uVar22) {
                      if (((uint)param_1 & 1) != 0) {
                        uVar22 = (uint)(byte)((char)uVar22 - 1);
                        *(undefined *)param_1 = param_8[(uint)AVar14 & 0xff];
                        AVar14 = (AnonShape_006D8A60_CD460E10)((uint)AVar14 >> 8);
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                      }
                      if (((uint)param_1 & 2) != 0) {
                        uVar22 = (uint)(byte)((char)uVar22 - 2);
                        *(ushort *)param_1 =
                             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                             CONCAT11(param_8[(uint)AVar14 >> 8 & 0xff],param_8[(uint)AVar14 & 0xff]
                                     );
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
                      }
                      AVar14 = (AnonShape_006D8A60_CD460E10)*param_1;
                      goto LAB_006d9450;
                    }
                  }
                  if ((char)uVar22 != '\x01') {
                    if ((char)uVar22 != '\x02') {
                      uVar4 = (uint)AVar14 >> 0x10;
                      AVar14 = (AnonShape_006D8A60_CD460E10)((uint)AVar14 & 0xffff);
                      ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = param_8[uVar4 & 0xff];
                    }
                    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 =
                         param_8[(uint)AVar14 >> 8 & 0xff];
                  }
                  *(undefined *)param_1 = param_8[(uint)AVar14 & 0xff];
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar22);
                }
              }
LAB_006d957d:
              uVar22 = 0;
              if ((int)uVar13 < 1) goto cf_common_join_006D958E;
              uVar22 = (uint)*(byte *)param_10;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              local_8 = uVar22;
            } while( true );
          }
          if ((int)uVar22 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar22;
              if ((local_8 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar22);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar22) {
                  do {
                    pbVar23 = &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                    bVar20 = *(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    uVar22 = uVar22 - 1;
                    *(undefined *)param_1 = param_11[bVar20];
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (uint *)pbVar23;
                  } while (uVar22 != 0);
                }
              }
              else {
                bVar20 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar20;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  if (0 < (int)uVar22) {
                    do {
                      pbVar23 = &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                      uVar22 = uVar22 - 1;
                      *(undefined *)param_1 = param_8[*(byte *)param_1];
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (uint *)pbVar23;
                    } while (uVar22 != 0);
                  }
                }
                else if (0 < (int)uVar22) {
                  do {
                    *(undefined *)param_1 = param_11[param_5];
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
              }
              if ((int)param_15 < 1) {
                uVar22 = 0;
                break;
              }
              bVar20 = *(byte *)param_10;
              local_8 = (uint)bVar20;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if ((bVar20 & 0x80) == 0) {
                uVar22 = local_8 & 0x7f;
              }
              else {
                uVar22 = local_8 & 0x3f;
              }
            } while ((int)uVar22 <= (int)param_15);
          }
          uVar22 = uVar22 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          pAVar15 = param_10;
          if ((local_8 & 0x40) == 0) {
            pAVar17 = (AnonShape_006D8A60_CD460E10 *)param_1;
            if (0 < (int)param_15) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)&pAVar17->field_0001;
                *(undefined *)pAVar17 = param_11[*(byte *)param_10];
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)param_1;
                pAVar15 = param_10;
              } while (param_15 != 0);
            }
          }
          else if (0 < (int)param_15) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)*(byte *)param_10;
            pAVar17 = (AnonShape_006D8A60_CD460E10 *)param_1;
            pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)&pAVar17->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)pAVar17 = param_8[*(byte *)pAVar17];
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)param_1;
              } while (param_15 != 0);
            }
            else {
              do {
                *(undefined *)param_1 = param_11[param_5];
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
            }
          }
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (uint *)param_12;
          uVar13 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar22 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar22;
              if ((local_8 & 0x80) == 0) {
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)(&pAVar17->field_0x0 + uVar22);
                uVar13 = ((uVar13 & 0xff) << 8) >> ((byte)uVar22 & 7);
                if (uVar13 < 0x81) {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)param_1 + 1);
                }
                else {
                  uVar13 = uVar13 >> 8 & 0xff;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)((int)param_1 + ((int)uVar22 >> 3));
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar22 - 1)) {
                  do {
                    if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                      *(undefined *)pAVar17 = param_11[*(byte *)param_10];
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    }
                    pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar17->field_0001;
                    bVar20 = (byte)uVar13 >> 1;
                    if (bVar20 == 0) {
                      bVar20 = 0x80;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (uint *)((int)param_1 + 1);
                    }
                    uVar13 = (uint)bVar20;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
              }
              else {
                pbVar23 = &param_10->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)*(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (AnonShape_006D8A60_CD460E10 *)pbVar23;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  uVar13 = ((uVar13 & 0xff) << 8) >> ((byte)uVar22 & 7);
                  if (uVar13 < 0x81) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (uint *)((int)param_1 + 1);
                  }
                  else {
                    uVar13 = uVar13 >> 8 & 0xff;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)param_1 + ((int)uVar22 >> 3));
                  pAVar15 = pAVar17;
                  if (-1 < (int)(uVar22 - 1)) {
                    do {
                      pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar15->field_0001;
                      uVar22 = uVar22 - 1;
                      *(undefined *)pAVar15 = param_8[*(byte *)pAVar15];
                      pAVar15 = pAVar17;
                    } while (uVar22 != 0);
                  }
                }
                else {
                  bVar20 = param_11[param_5];
                  if (-1 < (int)(uVar22 - 1)) {
                    do {
                      if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                        *(byte *)pAVar17 = bVar20;
                      }
                      pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar17->field_0001;
                      bVar19 = (byte)uVar13 >> 1;
                      if (bVar19 == 0) {
                        bVar19 = 0x80;
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (uint *)((int)param_1 + 1);
                      }
                      uVar13 = (uint)bVar19;
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar22 = 0;
                break;
              }
              bVar20 = *(byte *)param_10;
              local_8 = (uint)bVar20;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if ((bVar20 & 0x80) == 0) {
                uVar22 = local_8 & 0x7f;
              }
              else {
                uVar22 = local_8 & 0x3f;
              }
            } while ((int)uVar22 <= (int)param_15);
          }
          uVar22 = uVar22 - param_15;
          if ((local_8 & 0x80) == 0) {
LAB_006d9a18:
            pAVar17 = (AnonShape_006D8A60_CD460E10 *)(&pAVar17->field_0x0 + param_15);
          }
          else if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15 - 1)) {
              do {
                if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                  *(undefined *)pAVar17 = param_11[*(byte *)param_10];
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                }
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar17->field_0001;
                bVar20 = (byte)uVar13 >> 1;
                uVar13 = (uint)bVar20;
                if (bVar20 == 0) {
                  uVar13 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)param_1 + 1);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (uint *)pAVar17;
              pAVar15 = param_10;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15) {
            pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)*(byte *)param_10;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_10 = pAVar15;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)&pAVar17->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)pAVar17 = param_8[*(byte *)pAVar17];
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)param_1;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
            }
            else {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = (uint)(byte)param_11[param_5];
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                  *(undefined *)pAVar17 = param_11[param_5];
                }
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar17->field_0001;
                bVar20 = (byte)uVar13 >> 1;
                uVar13 = (uint)bVar20;
                if (bVar20 == 0) {
                  uVar13 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)param_1 + 1);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (uint *)pAVar17;
            }
            goto cf_common_join_006D9EAC;
          }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_join_006D9A1A:
          param_12 = param_12 + param_13;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (uint *)pAVar17;
          pAVar15 = param_10;
        }
      }
      else {
        if (param_12 != nullptr) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (uint *)param_12;
          uVar13 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar22 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar22;
              if ((local_8 & 0x80) == 0) {
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)(&pAVar17->field_0x0 + uVar22);
                uVar13 = ((uVar13 & 0xff) << 8) >> ((byte)uVar22 & 7);
                if (uVar13 < 0x81) {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)param_1 + 1);
                }
                else {
                  uVar13 = uVar13 >> 8 & 0xff;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)((int)param_1 + ((int)uVar22 >> 3));
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar22 - 1)) {
                  do {
                    pbVar23 = &param_10->field_0001;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)*(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    if (param_5 == param_9) {
                      bVar20 = param_8[*(byte *)pAVar17];
LAB_006d9875:
                      *(byte *)pAVar17 = bVar20;
                    }
                    else if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                      bVar20 = param_11[param_5];
                      goto LAB_006d9875;
                    }
                    pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar17->field_0001;
                    bVar20 = (byte)uVar13 >> 1;
                    if (bVar20 == 0) {
                      bVar20 = 0x80;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (uint *)((int)param_1 + 1);
                    }
                    uVar13 = (uint)bVar20;
                    uVar22 = uVar22 - 1;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (AnonShape_006D8A60_CD460E10 *)pbVar23;
                  } while (uVar22 != 0);
                }
              }
              else {
                pbVar23 = &param_10->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)*(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (AnonShape_006D8A60_CD460E10 *)pbVar23;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  uVar13 = ((uVar13 & 0xff) << 8) >> ((byte)uVar22 & 7);
                  if (uVar13 < 0x81) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (uint *)((int)param_1 + 1);
                  }
                  else {
                    uVar13 = uVar13 >> 8 & 0xff;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)param_1 + ((int)uVar22 >> 3));
                  pAVar15 = pAVar17;
                  if (-1 < (int)(uVar22 - 1)) {
                    do {
                      pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar15->field_0001;
                      uVar22 = uVar22 - 1;
                      *(undefined *)pAVar15 = param_8[*(byte *)pAVar15];
                      pAVar15 = pAVar17;
                    } while (uVar22 != 0);
                  }
                }
                else {
                  bVar20 = param_11[param_5];
                  if (-1 < (int)(uVar22 - 1)) {
                    do {
                      if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                        *(byte *)pAVar17 = bVar20;
                      }
                      pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar17->field_0001;
                      bVar19 = (byte)uVar13 >> 1;
                      if (bVar19 == 0) {
                        bVar19 = 0x80;
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (uint *)((int)param_1 + 1);
                      }
                      uVar13 = (uint)bVar19;
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar22 = 0;
                break;
              }
              bVar20 = *(byte *)param_10;
              local_8 = (uint)bVar20;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if ((bVar20 & 0x80) == 0) {
                uVar22 = local_8 & 0x7f;
              }
              else {
                uVar22 = local_8 & 0x3f;
              }
            } while ((int)uVar22 <= (int)param_15);
          }
          uVar22 = uVar22 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9a18;
          if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15 - 1)) {
              do {
                pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)*(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  bVar20 = param_8[*(byte *)pAVar17];
LAB_006d99e9:
                  *(byte *)pAVar17 = bVar20;
                }
                else if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                  bVar20 = param_11[param_5];
                  goto LAB_006d99e9;
                }
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar17->field_0001;
                bVar20 = (byte)uVar13 >> 1;
                uVar13 = (uint)bVar20;
                if (bVar20 == 0) {
                  uVar13 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)param_1 + 1);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = pAVar15;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (uint *)pAVar17;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15) {
            pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)*(byte *)param_10;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_10 = pAVar15;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)&pAVar17->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)pAVar17 = param_8[*(byte *)pAVar17];
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)param_1;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
            }
            else {
              bVar20 = param_11[param_5];
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                  *(byte *)pAVar17 = bVar20;
                }
                pAVar17 = (AnonShape_006D8A60_CD460E10 *)&pAVar17->field_0001;
                bVar19 = (byte)uVar13 >> 1;
                uVar13 = (uint)bVar19;
                if (bVar19 == 0) {
                  uVar13 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)param_1 + 1);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (uint *)pAVar17;
            }
            goto cf_common_join_006D9EAC;
          }
          goto cf_common_join_006D9A1A;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_11 == nullptr) {
          if ((int)uVar22 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar22;
              if ((local_8 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)((int)param_1 + uVar22);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar22) {
                  do {
                    bVar20 = *(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)bVar20;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    if (param_5 == param_9) {
                      bVar20 = param_8[(byte)*param_1];
                    }
                    *(byte *)param_1 = bVar20;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (uint *)((int)param_1 + 1);
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
              }
              else {
                bVar20 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar20;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  puVar18 = param_1;
                  if (0 < (int)uVar22) {
                    do {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (uint *)((int)puVar18 + 1);
                      uVar22 = uVar22 - 1;
                      *(undefined *)puVar18 = param_8[(byte)*puVar18];
                      puVar18 = param_1;
                    } while (uVar22 != 0);
                  }
                }
                else if (0 < (int)uVar22) {
                  puVar18 = param_1;
                  for (uVar13 = uVar22 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *puVar18 = CONCAT22(CONCAT11(bVar20,bVar20),CONCAT11(bVar20,bVar20));
                    puVar18 = puVar18 + 1;
                  }
                  for (uVar13 = uVar22 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *(byte *)puVar18 = bVar20;
                    puVar18 = (uint *)((int)puVar18 + 1);
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)param_1 + uVar22);
                }
              }
              if ((int)param_15 < 1) {
                uVar22 = 0;
                break;
              }
              bVar20 = *(byte *)param_10;
              local_8 = (uint)bVar20;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if ((bVar20 & 0x80) == 0) {
                uVar22 = local_8 & 0x7f;
              }
              else {
                uVar22 = local_8 & 0x3f;
              }
            } while ((int)uVar22 <= (int)param_15);
          }
          uVar22 = uVar22 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          pAVar15 = param_10;
          if ((local_8 & 0x40) == 0) {
            if (0 < (int)param_15) {
              do {
                bVar20 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar20;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  bVar20 = param_8[(byte)*param_1];
                }
                *(byte *)param_1 = bVar20;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)((int)param_1 + 1);
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                pAVar15 = param_10;
              } while (param_15 != 0);
            }
          }
          else if (0 < (int)param_15) {
            bVar20 = *(byte *)param_10;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)bVar20;
            puVar18 = param_1;
            pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)((int)puVar18 + 1);
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)puVar18 = param_8[(byte)*puVar18];
                puVar18 = param_1;
              } while (param_15 != 0);
            }
            else {
              for (uVar13 = param_15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar18 = CONCAT22(CONCAT11(bVar20,bVar20),CONCAT11(bVar20,bVar20));
                puVar18 = puVar18 + 1;
              }
              for (uVar13 = param_15 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(byte *)puVar18 = bVar20;
                puVar18 = (uint *)((int)puVar18 + 1);
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (uint *)((int)param_1 + param_15);
            }
          }
        }
        else {
          if ((int)uVar22 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar22;
              if ((local_8 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)((int)param_1 + uVar22);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar22) {
                  do {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)*(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    puVar21 = param_11;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    if (param_5 == param_9) {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_5 = (uint)(byte)*param_1;
                      puVar21 = param_8;
                    }
                    *(undefined *)param_1 = puVar21[param_5];
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (uint *)((int)param_1 + 1);
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
              }
              else {
                bVar20 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar20;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  if (0 < (int)uVar22) {
                    do {
                      puVar18 = (uint *)((int)param_1 + 1);
                      uVar22 = uVar22 - 1;
                      *(undefined *)param_1 = param_8[(byte)*param_1];
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = puVar18;
                    } while (uVar22 != 0);
                  }
                }
                else {
                  bVar20 = param_11[param_5];
                  if (0 < (int)uVar22) {
                    puVar18 = param_1;
                    for (uVar13 = uVar22 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                      *puVar18 = CONCAT22(CONCAT11(bVar20,bVar20),CONCAT11(bVar20,bVar20));
                      puVar18 = puVar18 + 1;
                    }
                    for (uVar13 = uVar22 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                      *(byte *)puVar18 = bVar20;
                      puVar18 = (uint *)((int)puVar18 + 1);
                    }
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (uint *)((int)param_1 + uVar22);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar22 = 0;
                break;
              }
              bVar20 = *(byte *)param_10;
              local_8 = (uint)bVar20;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if ((bVar20 & 0x80) == 0) {
                uVar22 = local_8 & 0x7f;
              }
              else {
                uVar22 = local_8 & 0x3f;
              }
            } while ((int)uVar22 <= (int)param_15);
          }
          uVar22 = uVar22 - param_15;
          if ((local_8 & 0x80) == 0) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_006d9c24:
            param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + param_15);
            pAVar15 = param_10;
          }
          else {
            pAVar15 = param_10;
            if ((local_8 & 0x40) == 0) {
              if (0 < (int)param_15) {
                do {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_5 = (uint)*(byte *)param_10;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                  puVar21 = param_11;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  if (param_5 == param_9) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)(byte)*param_1;
                    puVar21 = param_8;
                  }
                  *(undefined *)param_1 = puVar21[param_5];
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)param_1 + 1);
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_15 = param_15 - 1;
                  pAVar15 = param_10;
                } while (param_15 != 0);
              }
            }
            else if (0 < (int)param_15) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = (uint)*(byte *)param_10;
              puVar18 = param_1;
              pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if (param_5 == param_9) {
                do {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (uint *)((int)puVar18 + 1);
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_15 = param_15 - 1;
                  *(undefined *)puVar18 = param_8[(byte)*puVar18];
                  puVar18 = param_1;
                } while (param_15 != 0);
              }
              else {
                uVar11 = param_11[param_5];
                for (uVar13 = param_15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *puVar18 = CONCAT22(CONCAT11(uVar11,uVar11),CONCAT11(uVar11,uVar11));
                  puVar18 = puVar18 + 1;
                }
                for (uVar13 = param_15 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined1 *)puVar18 = uVar11;
                  puVar18 = (uint *)((int)puVar18 + 1);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (uint *)((int)param_1 + param_15);
              }
            }
          }
        }
      }
    }
    goto cf_common_join_006D9EAC;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (uint *)((int)param_1 + param_2);
  goto LAB_006d9f11;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_join_006D8DA5:
  param_1 = (uint *)pAVar16;
  pAVar15 = param_10;
  if ((int)uVar13 < 1) goto cf_common_join_006D9EAC;
  uVar22 = uVar22 - uVar13;
  if ((local_8 & 0x80) == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (uint *)((int)&pAVar16->field_0x0 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) != 0) {
    bVar20 = *(byte *)param_10;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    AVar6._0_2_ = CONCAT11(bVar20,bVar20);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    AVar6._2_2_ = 0;
    pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
    if (3 < (int)uVar13) {
      if (((uint)pAVar16 & 1) != 0) {
        *(byte *)pAVar16 = bVar20;
        pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0001;
        uVar13 = uVar13 - 1;
      }
      if (((uint)pAVar16 & 2) != 0) {
        *(ushort *)pAVar16 = AVar6._0_2_;
        pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0002;
        uVar13 = uVar13 - 2;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      AVar6._2_2_ = AVar6._0_2_;
      while (3 < (int)uVar13) {
        *pAVar16 = AVar6;
        pAVar16 = pAVar16 + 1;
        uVar13 = uVar13 - 4;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (uint *)pAVar16;
      if (uVar13 == 0) goto cf_common_join_006D9EAC;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    bVar20 = AVar6._0_1_;
    if ((char)uVar13 != '\x01') {
      if ((char)uVar13 != '\x02') {
        pAVar16->field_0002 = bVar20;
      }
      pAVar16->field_0001 = bVar20;
    }
    *(byte *)pAVar16 = bVar20;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (uint *)(&pAVar16->field_0x0 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  bVar20 = *(byte *)param_10;
  if ((bVar20 < (byte)param_9) || (local_14 < bVar20)) {
    if (3 < (int)uVar13) {
      if (((uint)pAVar16 & 1) != 0) {
        *(byte *)pAVar16 = *(byte *)param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
        pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0001;
        uVar13 = uVar13 - 1;
      }
      if (((uint)pAVar16 & 2) != 0) {
        bVar20 = param_10->field_0001;
        pAVar16->field_0x0 = param_10->field_0x0;
        pAVar16->field_0001 = bVar20;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
        pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0002;
        uVar13 = uVar13 - 2;
      }
      while (3 < (int)uVar13) {
        AVar14 = *param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = param_10 + 1;
        *pAVar16 = AVar14;
        pAVar16 = pAVar16 + 1;
        uVar13 = uVar13 - 4;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (uint *)pAVar16;
      pAVar15 = param_10;
      if (uVar13 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar13 != '\x01') {
      if ((char)uVar13 != '\x02') {
        pAVar16->field_0002 = param_10->field_0002;
      }
      pAVar16->field_0001 = param_10->field_0001;
    }
    *(byte *)pAVar16 = *(byte *)param_10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (uint *)((int)&pAVar16->field_0x0 + uVar13);
    pAVar15 = (AnonShape_006D8A60_CD460E10 *)((int)&param_10->field_0x0 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  AVar14 = *(AnonShape_006D8A60_CD460E10 *)((uint)pAVar16 & 0xfffffffc);
  if (((uint)pAVar16 & 3) == 0) {
LAB_006d8e9b:
    cVar9 = (char)uVar13;
    while ('\x03' < cVar9) {
      bVar20 = *(byte *)param_10;
      pbVar23 = &param_10->field_0001;
      pbVar1 = &param_10->field_0002;
      puVar2 = &param_10->field_0x3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_10 = param_10 + 1;
      *pAVar16 = (AnonShape_006D8A60_CD460E10)
                 /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                 (CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar23,AVar14.field_0001) +
                                            param_9 * -0x100],
                                    param_8[(uint)CONCAT11(bVar20,AVar14._0_1_) + param_9 * -0x100])
                           ,CONCAT11(param_8[(uint)CONCAT11(*puVar2,AVar14._3_1_) + param_9 * -0x100
                                            ],param_8[(uint)CONCAT11(*pbVar1,AVar14.field_0002) +
                                                      param_9 * -0x100])) << 0x10 |
                 (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar23,AVar14.field_0001) +
                                        param_9 * -0x100],
                                param_8[(uint)CONCAT11(bVar20,AVar14._0_1_) + param_9 * -0x100]));
      AVar14 = pAVar16[1];
      pAVar16 = pAVar16 + 1;
      cVar9 = cVar9 + -4;
    }
    uVar13 = STReplaceLowByte((uint32_t)(uVar13), (uint8_t)(cVar9));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (uint *)pAVar16;
    pAVar15 = param_10;
    if (cVar9 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    AVar14 = (AnonShape_006D8A60_CD460E10)((uint)AVar14 >> (((byte)pAVar16 & 3) << 3));
    if (3 < uVar13) {
      if (((uint)pAVar16 & 1) != 0) {
        uVar13 = STReplaceLowByte((uint32_t)(uVar13), (uint8_t)((char)uVar13 + -1));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
        *(undefined *)pAVar16 = param_8[(uint)CONCAT11(bVar20,AVar14._0_1_) + param_9 * -0x100];
        AVar14 = (AnonShape_006D8A60_CD460E10)((uint)AVar14 >> 8);
        pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0001;
      }
      if (((uint)pAVar16 & 2) != 0) {
        bVar20 = *(byte *)param_10;
        pbVar23 = &param_10->field_0001;
        uVar13 = STReplaceLowByte((uint32_t)(uVar13), (uint8_t)((char)uVar13 + -2));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
        *(ushort *)pAVar16 =
             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
             CONCAT11(param_8[(uint)CONCAT11(*pbVar23,AVar14.field_0001) + param_9 * -0x100],
                      param_8[(uint)CONCAT11(bVar20,AVar14._0_1_) + param_9 * -0x100]);
        pAVar16 = (AnonShape_006D8A60_CD460E10 *)&pAVar16->field_0002;
      }
      AVar14 = *pAVar16;
      goto LAB_006d8e9b;
    }
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (uint *)&pAVar16->field_0001;
  *(undefined *)pAVar16 = param_8[(uint)CONCAT11(*(byte *)param_10,AVar14._0_1_) + param_9 * -0x100]
  ;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  uVar12 = AVar14._1_2_;
  pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
  if (uVar13 != 1) {
    if (((uint)param_1 & 3) == 0) {
      uVar12 = (undefined2)*param_1;
    }
    pbVar23 = &pAVar16->field_0002;
    *(undefined *)param_1 =
         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
         param_8[(uint)CONCAT11(param_10->field_0001,(char)uVar12) + param_9 * -0x100];
    uVar11 = (undefined1)((ushort)uVar12 >> 8);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (uint *)pbVar23;
    pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
    if (uVar13 != 2) {
      if (((uint)pbVar23 & 3) == 0) {
        uVar11 = (undefined1)*(undefined4 *)pbVar23;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (uint *)&pAVar16->field_0x3;
      *pbVar23 = param_8[(uint)CONCAT11(param_10->field_0002,uVar11) + param_9 * -0x100];
      pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0x3;
    }
  }
  goto cf_common_join_006D9EAC;
cf_common_join_006D958E:
  pAVar15 = param_10;
  if ((int)uVar13 < 1) goto cf_common_join_006D9EAC;
  uVar22 = uVar22 - uVar13;
  if ((local_8 & 0x80) == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) == 0) {
    if (3 < (int)uVar13) {
      if (((uint)param_1 & 1) != 0) {
        *(byte *)param_1 = *(byte *)param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
        uVar13 = uVar13 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        bVar20 = param_10->field_0001;
        ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 = param_10->field_0x0;
        ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = bVar20;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
        uVar13 = uVar13 - 2;
      }
      while (3 < (int)uVar13) {
        AVar14 = *param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = param_10 + 1;
        *param_1 = (uint)AVar14;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
        uVar13 = uVar13 - 4;
      }
      pAVar15 = param_10;
      if (uVar13 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar13 != '\x01') {
      if ((char)uVar13 != '\x02') {
        ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = param_10->field_0002;
      }
      ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = param_10->field_0001;
    }
    *(byte *)param_1 = *(byte *)param_10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar13);
    pAVar15 = (AnonShape_006D8A60_CD460E10 *)((int)&param_10->field_0x0 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  bVar20 = *(byte *)param_10;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  AVar8._0_2_ = CONCAT11(bVar20,bVar20);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  AVar8._2_2_ = 0;
  pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
  if ((bVar20 < (byte)param_9) || (local_14 < bVar20)) {
    if (3 < (int)uVar13) {
      if (((uint)param_1 & 1) != 0) {
        *(byte *)param_1 = bVar20;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
        uVar13 = uVar13 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        *(ushort *)param_1 = AVar8._0_2_;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
        uVar13 = uVar13 - 2;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      AVar8._2_2_ = AVar8._0_2_;
      while (3 < (int)uVar13) {
        *param_1 = (uint)AVar8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
        uVar13 = uVar13 - 4;
      }
      if (uVar13 == 0) goto cf_common_join_006D9EAC;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    bVar20 = AVar8._0_1_;
    if ((char)uVar13 != '\x01') {
      if ((char)uVar13 != '\x02') {
        ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = bVar20;
      }
      ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = bVar20;
    }
    *(byte *)param_1 = bVar20;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  AVar14 = *(AnonShape_006D8A60_CD460E10 *)((uint)param_1 & 0xfffffffc);
  if (((uint)param_1 & 3) == 0) {
LAB_006d9621:
    cVar9 = (char)uVar13;
    while ('\x03' < cVar9) {
      *param_1 = CONCAT22(CONCAT11(param_8[(uint)AVar14 >> 8 & 0xff],param_8[(uint)AVar14 & 0xff]),
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          CONCAT11(param_8[(uint)AVar14 >> 0x18],
                                   param_8[(uint)AVar14 >> 0x10 & 0xff])) << 0x10 |
                 (uint)CONCAT11(param_8[(uint)AVar14 >> 8 & 0xff],param_8[(uint)AVar14 & 0xff]);
      AVar14 = *(AnonShape_006D8A60_CD460E10 *)(param_1 + 1);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
      cVar9 = cVar9 + -4;
    }
    uVar13 = STReplaceLowByte((uint32_t)(uVar13), (uint8_t)(cVar9));
    if (cVar9 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    AVar14 = (AnonShape_006D8A60_CD460E10)((uint)AVar14 >> (((byte)param_1 & 3) << 3));
    if (3 < uVar13) {
      if (((uint)param_1 & 1) != 0) {
        uVar13 = STReplaceLowByte((uint32_t)(uVar13), (uint8_t)((char)uVar13 + -1));
        pAVar15 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
        *(undefined *)param_1 = param_8[(uint)AVar14 & 0xff];
        AVar14 = (AnonShape_006D8A60_CD460E10)((uint)AVar14 >> 8);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
      }
      if (((uint)param_1 & 2) != 0) {
        uVar13 = STReplaceLowByte((uint32_t)(uVar13), (uint8_t)((char)uVar13 + -2));
        *(ushort *)param_1 =
             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
             CONCAT11(param_8[(uint)AVar14 >> 8 & 0xff],param_8[(uint)AVar14 & 0xff]);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (uint *)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
      }
      AVar14 = (AnonShape_006D8A60_CD460E10)*param_1;
      goto LAB_006d9621;
    }
  }
  if ((char)uVar13 != '\x01') {
    if ((char)uVar13 != '\x02') {
      uVar4 = (uint)AVar14 >> 0x10;
      AVar14 = (AnonShape_006D8A60_CD460E10)((uint)AVar14 & 0xffff);
      ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = param_8[uVar4 & 0xff];
    }
    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = param_8[(uint)AVar14 >> 8 & 0xff];
  }
  *(undefined *)param_1 = param_8[(uint)AVar14 & 0xff];
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (uint *)(&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar13);
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_join_006D9EAC:
  param_10 = pAVar15;
  bVar20 = (byte)local_8;
  iVar10 = (sVar3 - param_4) - param_6;
  if ((int)uVar22 < iVar10) {
    do {
      iVar10 = iVar10 - uVar22;
      if (((byte)local_8 & 0xc0) == 0x80) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (AnonShape_006D8A60_CD460E10 *)(&param_10->field_0x0 + uVar22);
      }
      bVar20 = *(byte *)param_10;
      local_8 = (uint)bVar20;
      uVar22 = local_8;
      pAVar17 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
      if (((bVar20 & 0x80) != 0) && (uVar22 = local_8 & 0x3f, (bVar20 & 0x40) != 0)) {
        pAVar17 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_10 = pAVar17;
    } while ((int)uVar22 < iVar10);
  }
  if ((bVar20 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = (AnonShape_006D8A60_CD460E10 *)(&param_10->field_0x0 + iVar10);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (uint *)((int)param_1 + (param_2 - param_6));
LAB_006d9f11:
  if (param_7 < 1) {
    return;
  }
  goto LAB_006d8b04;
}

