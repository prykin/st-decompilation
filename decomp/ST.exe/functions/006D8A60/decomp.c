
void FUN_006d8a60(AnonShape_006D8A60_D503343B *param_1,int param_2,byte *param_3,int param_4,
                 uint param_5,uint param_6,int param_7,undefined *param_8,uint param_9,
                 AnonShape_006D8A60_CD460E10 *param_10,undefined *param_11,byte *param_12,
                 int param_13,int param_14,uint param_15)

{
  byte *pbVar1;
  short sVar2;
  uint uVar3;
  undefined1 *puVar4;
  AnonShape_006D8A60_CD460E10 AVar5;
  AnonShape_006D8A60_CD460E10 AVar6;
  AnonShape_006D8A60_CD460E10 AVar7;
  AnonShape_006D8A60_D503343B AVar8;
  AnonShape_006D8A60_D503343B AVar9;
  AnonShape_006D8A60_D503343B AVar10;
  AnonShape_006D8A60_D503343B AVar11;
  char cVar12;
  int iVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  uint uVar16;
  AnonShape_006D8A60_CD460E10 AVar17;
  AnonShape_006D8A60_CD460E10 *pAVar18;
  AnonShape_006D8A60_CD460E10 *pAVar19;
  undefined1 *puVar20;
  AnonShape_006D8A60_D503343B *pAVar21;
  byte bVar22;
  byte bVar23;
  undefined *puVar24;
  uint uVar25;
  AnonShape_006D8A60_CD460E10 *pAVar26;
  byte *pbVar27;
  byte local_14;
  char local_10;
  uint local_8;
  
  if (((int)param_6 < 1) || (param_7 < 1)) {
    return;
  }
  puVar4 = &param_10->field_0x0 + param_9;
  local_14 = (char)puVar4 - 1;
  if ((param_12 != (byte *)0x0) &&
     (param_12 = param_12 + param_13 * param_15 + (param_14 >> 3), param_11 == (undefined *)0x0)) {
    param_11 = &DAT_007ee300;
  }
  if ((int)param_5 < 1) {
    param_10 = (AnonShape_006D8A60_CD460E10 *)(param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16);
  }
  else {
    param_10 = (AnonShape_006D8A60_CD460E10 *)FUN_006cfe10(param_3,param_5);
  }
  sVar2 = *(short *)(param_3 + 0x12);
LAB_006d8b04:
  pAVar19 = (AnonShape_006D8A60_CD460E10 *)param_1;
  param_7 = param_7 + -1;
  local_8 = (uint)*(byte *)param_10;
  param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
  iVar13 = param_4;
  if (local_8 != 0) {
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar25 = local_8 & 0x7f;
        if (iVar13 < (int)uVar25) goto LAB_006d8b50;
        bVar23 = *(byte *)param_10;
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
        iVar13 = iVar13 - uVar25;
        local_8 = (uint)bVar23;
      }
      uVar25 = local_8 & 0x3f;
      if (iVar13 < (int)uVar25) break;
      if ((local_8 & 0x40) == 0) {
        pbVar27 = (byte *)((int)&param_10->field_0x0 + uVar25);
        local_8 = (uint)*pbVar27;
        param_10 = (AnonShape_006D8A60_CD460E10 *)(pbVar27 + 1);
        iVar13 = iVar13 - uVar25;
      }
      else {
        local_8 = (uint)param_10->field_0001;
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
        iVar13 = iVar13 - uVar25;
      }
    }
LAB_006d8b50:
    uVar25 = uVar25 - iVar13;
    bVar23 = (byte)local_8;
    if ((bVar23 & 0xc0) == 0x80) {
      param_10 = (AnonShape_006D8A60_CD460E10 *)((int)&param_10->field_0x0 + iVar13);
    }
    param_15 = param_6;
    if (param_8 == (undefined *)0x0) {
      if ((int)uVar25 <= (int)param_6) {
        do {
          param_15 = param_15 - uVar25;
          if ((local_8 & 0x80) == 0) {
            param_1 = (AnonShape_006D8A60_D503343B *)
                      ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar25);
          }
          else if (0 < (int)uVar25) {
            do {
              bVar23 = *(byte *)param_10;
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              param_5 = (uint)bVar23;
              if (((int)param_5 < (int)param_9) || ((int)puVar4 <= (int)param_5)) {
                *(byte *)param_1 = bVar23;
              }
              param_1 = (AnonShape_006D8A60_D503343B *)
                        &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
          }
          if ((int)param_15 < 1) {
            uVar25 = 0;
            break;
          }
          local_8 = (uint)*(byte *)param_10;
          uVar25 = local_8 & 0x7f;
          param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
        } while ((int)uVar25 <= (int)param_15);
      }
      uVar25 = uVar25 - param_15;
      pAVar18 = param_10;
      if ((local_8 & 0x80) == 0) {
        param_1 = (AnonShape_006D8A60_D503343B *)
                  ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + param_15);
      }
      else if (0 < (int)param_15) {
        do {
          bVar23 = *(byte *)param_10;
          param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
          param_5 = (uint)bVar23;
          if (((int)param_5 < (int)param_9) || ((int)puVar4 <= (int)param_5)) {
            *(byte *)param_1 = bVar23;
          }
          param_1 = (AnonShape_006D8A60_D503343B *)
                    &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
          param_15 = param_15 - 1;
          pAVar18 = param_10;
        } while (param_15 != 0);
      }
    }
    else {
      local_10 = (char)uVar25;
      if ((param_3[0xd] & 3) == 1) {
        bVar23 = bVar23 & 0xc0;
        if ((local_8 & 0x80) == 0) {
          bVar23 = 0;
        }
        uVar25 = (uint)(byte)(bVar23 + local_10);
        uVar16 = param_6;
        do {
          if ((uVar25 & 0x80) == 0) {
            if ((int)uVar16 < (int)uVar25) goto cf_common_join_006D8DA5;
            uVar16 = uVar16 - uVar25;
            pAVar18 = (AnonShape_006D8A60_CD460E10 *)((int)&pAVar19->field_0x0 + uVar25);
          }
          else if ((uVar25 & 0x40) == 0) {
            uVar25 = uVar25 & 0x3f;
            if ((int)uVar16 < (int)uVar25) goto cf_common_join_006D8DA5;
            uVar16 = uVar16 - uVar25;
            bVar23 = *(byte *)param_10;
            if ((bVar23 < (byte)param_9) || (local_14 < bVar23)) {
              if (3 < uVar25) {
                if (((uint)pAVar19 & 1) != 0) {
                  uVar25 = uVar25 - 1;
                  *(byte *)pAVar19 = *(byte *)param_10;
                  param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                  pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                }
                if (((uint)pAVar19 & 2) != 0) {
                  bVar23 = param_10->field_0001;
                  uVar25 = uVar25 - 2;
                  pAVar19->field_0x0 = param_10->field_0x0;
                  pAVar19->field_0001 = bVar23;
                  param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
                  pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0002;
                }
                while (3 < (int)uVar25) {
                  AVar17 = *param_10;
                  param_10 = param_10 + 1;
                  *pAVar19 = AVar17;
                  pAVar19 = pAVar19 + 1;
                  uVar25 = uVar25 - 4;
                }
                pAVar18 = pAVar19;
                if (uVar25 == 0) goto LAB_006d8d94;
              }
              if ((char)uVar25 != '\x01') {
                if ((char)uVar25 != '\x02') {
                  pAVar19->field_0002 = param_10->field_0002;
                }
                pAVar19->field_0001 = param_10->field_0001;
              }
              bVar23 = *(byte *)param_10;
              param_10 = (AnonShape_006D8A60_CD460E10 *)((int)&param_10->field_0x0 + uVar25);
              *(byte *)pAVar19 = bVar23;
              pAVar18 = (AnonShape_006D8A60_CD460E10 *)((int)&pAVar19->field_0x0 + uVar25);
            }
            else {
              AVar17 = *(AnonShape_006D8A60_CD460E10 *)((uint)pAVar19 & 0xfffffffc);
              if (((uint)pAVar19 & 3) == 0) {
LAB_006d8cab:
                bVar23 = (byte)uVar25;
                while ('\x03' < (char)bVar23) {
                  bVar22 = *(byte *)param_10;
                  pbVar27 = &param_10->field_0001;
                  pbVar1 = &param_10->field_0002;
                  puVar20 = &param_10->field_0x3;
                  param_10 = param_10 + 1;
                  *pAVar19 = (AnonShape_006D8A60_CD460E10)
                             (CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar27,AVar17.field_0001) +
                                                        param_9 * -0x100],
                                                param_8[(uint)CONCAT11(bVar22,AVar17._0_1_) +
                                                        param_9 * -0x100]),
                                       CONCAT11(param_8[(uint)CONCAT11(*puVar20,AVar17._3_1_) +
                                                        param_9 * -0x100],
                                                param_8[(uint)CONCAT11(*pbVar1,AVar17.field_0002) +
                                                        param_9 * -0x100])) << 0x10 |
                             (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar27,AVar17.field_0001) +
                                                    param_9 * -0x100],
                                            param_8[(uint)CONCAT11(bVar22,AVar17._0_1_) +
                                                    param_9 * -0x100]));
                  AVar17 = pAVar19[1];
                  pAVar19 = pAVar19 + 1;
                  bVar23 = bVar23 - 4;
                }
                uVar25 = (uint)bVar23;
                pAVar26 = param_10;
                pAVar18 = pAVar19;
                if (bVar23 == 0) goto LAB_006d8d94;
              }
              else {
                AVar17 = (AnonShape_006D8A60_CD460E10)((uint)AVar17 >> (((byte)pAVar19 & 3) << 3));
                pAVar26 = param_10;
                if (3 < uVar25) {
                  if (((uint)pAVar19 & 1) != 0) {
                    uVar25 = (uint)(byte)((char)uVar25 - 1);
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    *(undefined *)pAVar19 =
                         param_8[(uint)CONCAT11(bVar23,AVar17._0_1_) + param_9 * -0x100];
                    AVar17 = (AnonShape_006D8A60_CD460E10)((uint)AVar17 >> 8);
                    pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                  }
                  if (((uint)pAVar19 & 2) != 0) {
                    bVar23 = *(byte *)param_10;
                    pbVar27 = &param_10->field_0001;
                    uVar25 = (uint)(byte)((char)uVar25 - 2);
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
                    *(ushort *)pAVar19 =
                         CONCAT11(param_8[(uint)CONCAT11(*pbVar27,AVar17.field_0001) +
                                          param_9 * -0x100],
                                  param_8[(uint)CONCAT11(bVar23,AVar17._0_1_) + param_9 * -0x100]);
                    pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0002;
                  }
                  AVar17 = *pAVar19;
                  goto LAB_006d8cab;
                }
              }
              param_10 = (AnonShape_006D8A60_CD460E10 *)&pAVar26->field_0001;
              pAVar18 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
              *(undefined *)pAVar19 =
                   param_8[(uint)CONCAT11(*(byte *)pAVar26,AVar17._0_1_) + param_9 * -0x100];
              uVar15 = AVar17._1_2_;
              if (uVar25 != 1) {
                if (((uint)pAVar18 & 3) == 0) {
                  uVar15 = SUB42(*pAVar18,0);
                }
                bVar23 = *(byte *)param_10;
                param_10 = (AnonShape_006D8A60_CD460E10 *)&pAVar26->field_0002;
                pbVar27 = &pAVar19->field_0002;
                *(undefined *)pAVar18 =
                     param_8[(uint)CONCAT11(bVar23,(char)uVar15) + param_9 * -0x100];
                uVar14 = (undefined1)((ushort)uVar15 >> 8);
                pAVar18 = (AnonShape_006D8A60_CD460E10 *)pbVar27;
                if (uVar25 != 2) {
                  if (((uint)pbVar27 & 3) == 0) {
                    uVar14 = (undefined1)*(undefined4 *)pbVar27;
                  }
                  bVar23 = *(byte *)param_10;
                  param_10 = (AnonShape_006D8A60_CD460E10 *)&pAVar26->field_0x3;
                  pAVar18 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0x3;
                  *pbVar27 = param_8[(uint)CONCAT11(bVar23,uVar14) + param_9 * -0x100];
                }
              }
            }
          }
          else {
            bVar23 = *(byte *)param_10;
            uVar25 = uVar25 & 0xffffff3f;
            AVar17._0_2_ = CONCAT11(bVar23,bVar23);
            AVar17._2_2_ = 0;
            if ((int)uVar16 < (int)uVar25) goto cf_common_join_006D8DA5;
            uVar16 = uVar16 - uVar25;
            param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
            if (3 < uVar25) {
              if (((uint)pAVar19 & 1) != 0) {
                *(byte *)pAVar19 = bVar23;
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                uVar25 = uVar25 - 1;
              }
              if (((uint)pAVar19 & 2) != 0) {
                *(ushort *)pAVar19 = AVar17._0_2_;
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0002;
                uVar25 = uVar25 - 2;
              }
              AVar17._2_2_ = AVar17._0_2_;
              while (3 < (int)uVar25) {
                *pAVar19 = AVar17;
                pAVar19 = pAVar19 + 1;
                uVar25 = uVar25 - 4;
              }
              pAVar18 = pAVar19;
              if (uVar25 == 0) goto LAB_006d8d94;
            }
            bVar23 = AVar17._0_1_;
            if ((char)uVar25 != '\x01') {
              if ((char)uVar25 != '\x02') {
                pAVar19->field_0002 = bVar23;
              }
              pAVar19->field_0001 = bVar23;
            }
            *(byte *)pAVar19 = bVar23;
            pAVar18 = (AnonShape_006D8A60_CD460E10 *)((int)&pAVar19->field_0x0 + uVar25);
          }
LAB_006d8d94:
          uVar25 = 0;
          pAVar19 = pAVar18;
          if ((int)uVar16 < 1) goto cf_common_join_006D8DA5;
          uVar25 = (uint)*(byte *)param_10;
          param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
          local_8 = uVar25;
        } while( true );
      }
      if ((param_3[0xd] & 3) == 2) {
        if (param_12 == (byte *)0x0) {
          if (param_11 == (undefined *)0x0) {
            bVar23 = bVar23 & 0xc0;
            if ((local_8 & 0x80) == 0) {
              bVar23 = 0;
            }
            uVar25 = (uint)(byte)(bVar23 + local_10);
            uVar16 = param_6;
            do {
              if ((uVar25 & 0x80) == 0) {
                if ((int)uVar16 < (int)uVar25) goto cf_common_join_006D958E;
                uVar16 = uVar16 - uVar25;
                param_1 = (AnonShape_006D8A60_D503343B *)
                          ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar25);
              }
              else if ((uVar25 & 0x40) == 0) {
                uVar25 = uVar25 & 0x3f;
                if ((int)uVar16 < (int)uVar25) goto cf_common_join_006D958E;
                uVar16 = uVar16 - uVar25;
                if (3 < uVar25) {
                  if (((uint)param_1 & 1) != 0) {
                    uVar25 = uVar25 - 1;
                    *(byte *)param_1 = *(byte *)param_10;
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    param_1 = (AnonShape_006D8A60_D503343B *)
                              &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                  }
                  if (((uint)param_1 & 2) != 0) {
                    bVar23 = param_10->field_0001;
                    uVar25 = uVar25 - 2;
                    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 = param_10->field_0x0;
                    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = bVar23;
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
                    param_1 = (AnonShape_006D8A60_D503343B *)
                              &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
                  }
                  while (3 < (int)uVar25) {
                    AVar17 = *param_10;
                    param_10 = param_10 + 1;
                    *param_1 = (AnonShape_006D8A60_D503343B)AVar17;
                    param_1 = param_1 + 1;
                    uVar25 = uVar25 - 4;
                  }
                  if (uVar25 == 0) goto LAB_006d957d;
                }
                if ((char)uVar25 != '\x01') {
                  if ((char)uVar25 != '\x02') {
                    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = param_10->field_0002;
                  }
                  ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = param_10->field_0001;
                }
                bVar23 = *(byte *)param_10;
                param_10 = (AnonShape_006D8A60_CD460E10 *)((int)&param_10->field_0x0 + uVar25);
                *(byte *)param_1 = bVar23;
                param_1 = (AnonShape_006D8A60_D503343B *)
                          ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar25);
              }
              else {
                bVar23 = *(byte *)param_10;
                uVar25 = uVar25 & 0xffffff3f;
                AVar6._0_2_ = CONCAT11(bVar23,bVar23);
                AVar6._2_2_ = 0;
                if ((int)uVar16 < (int)uVar25) goto cf_common_join_006D958E;
                uVar16 = uVar16 - uVar25;
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                if ((bVar23 < (byte)param_9) || (local_14 < bVar23)) {
                  if (3 < uVar25) {
                    if (((uint)param_1 & 1) != 0) {
                      *(byte *)param_1 = bVar23;
                      param_1 = (AnonShape_006D8A60_D503343B *)
                                &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                      uVar25 = uVar25 - 1;
                    }
                    if (((uint)param_1 & 2) != 0) {
                      *(ushort *)param_1 = AVar6._0_2_;
                      param_1 = (AnonShape_006D8A60_D503343B *)
                                &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
                      uVar25 = uVar25 - 2;
                    }
                    AVar6._2_2_ = AVar6._0_2_;
                    while (3 < (int)uVar25) {
                      *param_1 = (AnonShape_006D8A60_D503343B)AVar6;
                      param_1 = param_1 + 1;
                      uVar25 = uVar25 - 4;
                    }
                    if (uVar25 == 0) goto LAB_006d957d;
                  }
                  bVar23 = AVar6._0_1_;
                  if ((char)uVar25 != '\x01') {
                    if ((char)uVar25 != '\x02') {
                      ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = bVar23;
                    }
                    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = bVar23;
                  }
                  *(byte *)param_1 = bVar23;
                  param_1 = (AnonShape_006D8A60_D503343B *)
                            ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar25);
                }
                else {
                  AVar17 = *(AnonShape_006D8A60_CD460E10 *)((uint)param_1 & 0xfffffffc);
                  if (((uint)param_1 & 3) == 0) {
LAB_006d9450:
                    bVar23 = (byte)uVar25;
                    while ('\x03' < (char)bVar23) {
                      *param_1 = (AnonShape_006D8A60_D503343B)
                                 (CONCAT22(CONCAT11(param_8[(uint)AVar17 >> 8 & 0xff],
                                                    param_8[(uint)AVar17 & 0xff]),
                                           CONCAT11(param_8[(uint)AVar17 >> 0x18],
                                                    param_8[(uint)AVar17 >> 0x10 & 0xff])) << 0x10 |
                                 (uint)CONCAT11(param_8[(uint)AVar17 >> 8 & 0xff],
                                                param_8[(uint)AVar17 & 0xff]));
                      AVar17 = *(AnonShape_006D8A60_CD460E10 *)(param_1 + 1);
                      param_1 = param_1 + 1;
                      bVar23 = bVar23 - 4;
                    }
                    uVar25 = (uint)bVar23;
                    if (bVar23 == 0) goto LAB_006d957d;
                  }
                  else {
                    AVar17 = (AnonShape_006D8A60_CD460E10)
                             ((uint)AVar17 >> (((byte)param_1 & 3) << 3));
                    if (3 < uVar25) {
                      if (((uint)param_1 & 1) != 0) {
                        uVar25 = (uint)(byte)((char)uVar25 - 1);
                        *(undefined *)param_1 = param_8[(uint)AVar17 & 0xff];
                        AVar17 = (AnonShape_006D8A60_CD460E10)((uint)AVar17 >> 8);
                        param_1 = (AnonShape_006D8A60_D503343B *)
                                  &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                      }
                      if (((uint)param_1 & 2) != 0) {
                        uVar25 = (uint)(byte)((char)uVar25 - 2);
                        *(ushort *)param_1 =
                             CONCAT11(param_8[(uint)AVar17 >> 8 & 0xff],param_8[(uint)AVar17 & 0xff]
                                     );
                        param_1 = (AnonShape_006D8A60_D503343B *)
                                  &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
                      }
                      AVar17 = *(AnonShape_006D8A60_CD460E10 *)param_1;
                      goto LAB_006d9450;
                    }
                  }
                  if ((char)uVar25 != '\x01') {
                    if ((char)uVar25 != '\x02') {
                      uVar3 = (uint)AVar17 >> 0x10;
                      AVar17 = (AnonShape_006D8A60_CD460E10)((uint)AVar17 & 0xffff);
                      ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = param_8[uVar3 & 0xff];
                    }
                    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 =
                         param_8[(uint)AVar17 >> 8 & 0xff];
                  }
                  *(undefined *)param_1 = param_8[(uint)AVar17 & 0xff];
                  param_1 = (AnonShape_006D8A60_D503343B *)
                            ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar25);
                }
              }
LAB_006d957d:
              uVar25 = 0;
              if ((int)uVar16 < 1) goto cf_common_join_006D958E;
              uVar25 = (uint)*(byte *)param_10;
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              local_8 = uVar25;
            } while( true );
          }
          if ((int)uVar25 <= (int)param_6) {
            do {
              param_15 = param_15 - uVar25;
              if ((local_8 & 0x80) == 0) {
                param_1 = (AnonShape_006D8A60_D503343B *)
                          ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar25);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar25) {
                  do {
                    pbVar27 = &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                    bVar23 = *(byte *)param_10;
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    uVar25 = uVar25 - 1;
                    *(undefined *)param_1 = param_11[bVar23];
                    param_1 = (AnonShape_006D8A60_D503343B *)pbVar27;
                  } while (uVar25 != 0);
                }
              }
              else {
                bVar23 = *(byte *)param_10;
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                param_5 = (uint)bVar23;
                if (param_5 == param_9) {
                  if (0 < (int)uVar25) {
                    do {
                      pbVar27 = &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                      uVar25 = uVar25 - 1;
                      *(undefined *)param_1 = param_8[*(byte *)param_1];
                      param_1 = (AnonShape_006D8A60_D503343B *)pbVar27;
                    } while (uVar25 != 0);
                  }
                }
                else if (0 < (int)uVar25) {
                  do {
                    *(undefined *)param_1 = param_11[param_5];
                    param_1 = (AnonShape_006D8A60_D503343B *)
                              &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
              }
              if ((int)param_15 < 1) {
                uVar25 = 0;
                break;
              }
              bVar23 = *(byte *)param_10;
              local_8 = (uint)bVar23;
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if ((bVar23 & 0x80) == 0) {
                uVar25 = local_8 & 0x7f;
              }
              else {
                uVar25 = local_8 & 0x3f;
              }
            } while ((int)uVar25 <= (int)param_15);
          }
          uVar25 = uVar25 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          pAVar18 = param_10;
          if ((local_8 & 0x40) == 0) {
            pAVar19 = (AnonShape_006D8A60_CD460E10 *)param_1;
            if (0 < (int)param_15) {
              do {
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar19->field_0001;
                *(undefined *)pAVar19 = param_11[*(byte *)param_10];
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                param_15 = param_15 - 1;
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)param_1;
                pAVar18 = param_10;
              } while (param_15 != 0);
            }
          }
          else if (0 < (int)param_15) {
            param_5 = (uint)*(byte *)param_10;
            pAVar19 = (AnonShape_006D8A60_CD460E10 *)param_1;
            pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
            if (param_5 == param_9) {
              do {
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar19->field_0001;
                param_15 = param_15 - 1;
                *(undefined *)pAVar19 = param_8[*(byte *)pAVar19];
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)param_1;
              } while (param_15 != 0);
            }
            else {
              do {
                *(undefined *)param_1 = param_11[param_5];
                param_1 = (AnonShape_006D8A60_D503343B *)
                          &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
                param_15 = param_15 - 1;
              } while (param_15 != 0);
            }
          }
        }
        else {
          param_1 = (AnonShape_006D8A60_D503343B *)param_12;
          uVar16 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar25 <= (int)param_6) {
            do {
              param_15 = param_15 - uVar25;
              if ((local_8 & 0x80) == 0) {
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)((int)&pAVar19->field_0x0 + uVar25);
                uVar16 = ((uVar16 & 0xff) << 8) >> ((byte)uVar25 & 7);
                if (uVar16 < 0x81) {
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                else {
                  uVar16 = uVar16 >> 8 & 0xff;
                }
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + ((int)uVar25 >> 3));
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar25 - 1)) {
                  do {
                    if ((*(byte *)param_1 & (byte)uVar16) != 0) {
                      *(undefined *)pAVar19 = param_11[*(byte *)param_10];
                      param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    }
                    pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                    bVar23 = (byte)uVar16 >> 1;
                    if (bVar23 == 0) {
                      bVar23 = 0x80;
                      param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    }
                    uVar16 = (uint)bVar23;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
              }
              else {
                pbVar27 = &param_10->field_0001;
                param_5 = (uint)*(byte *)param_10;
                param_10 = (AnonShape_006D8A60_CD460E10 *)pbVar27;
                if (param_5 == param_9) {
                  uVar16 = ((uVar16 & 0xff) << 8) >> ((byte)uVar25 & 7);
                  if (uVar16 < 0x81) {
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  }
                  else {
                    uVar16 = uVar16 >> 8 & 0xff;
                  }
                  param_1 = (AnonShape_006D8A60_D503343B *)
                            (&param_1->field_0x0 + ((int)uVar25 >> 3));
                  pAVar18 = pAVar19;
                  if (-1 < (int)(uVar25 - 1)) {
                    do {
                      pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar18->field_0001;
                      uVar25 = uVar25 - 1;
                      *(undefined *)pAVar18 = param_8[*(byte *)pAVar18];
                      pAVar18 = pAVar19;
                    } while (uVar25 != 0);
                  }
                }
                else {
                  bVar23 = param_11[param_5];
                  if (-1 < (int)(uVar25 - 1)) {
                    do {
                      if ((*(byte *)param_1 & (byte)uVar16) != 0) {
                        *(byte *)pAVar19 = bVar23;
                      }
                      pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                      bVar22 = (byte)uVar16 >> 1;
                      if (bVar22 == 0) {
                        bVar22 = 0x80;
                        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                      }
                      uVar16 = (uint)bVar22;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar25 = 0;
                break;
              }
              bVar23 = *(byte *)param_10;
              local_8 = (uint)bVar23;
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if ((bVar23 & 0x80) == 0) {
                uVar25 = local_8 & 0x7f;
              }
              else {
                uVar25 = local_8 & 0x3f;
              }
            } while ((int)uVar25 <= (int)param_15);
          }
          uVar25 = uVar25 - param_15;
          if ((local_8 & 0x80) == 0) {
LAB_006d9a18:
            pAVar19 = (AnonShape_006D8A60_CD460E10 *)((int)&pAVar19->field_0x0 + param_15);
          }
          else if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15 - 1)) {
              do {
                if ((*(byte *)param_1 & (byte)uVar16) != 0) {
                  *(undefined *)pAVar19 = param_11[*(byte *)param_10];
                  param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                }
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                bVar23 = (byte)uVar16 >> 1;
                uVar16 = (uint)bVar23;
                if (bVar23 == 0) {
                  uVar16 = 0x80;
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              param_1 = (AnonShape_006D8A60_D503343B *)pAVar19;
              pAVar18 = param_10;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15) {
            pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
            param_5 = (uint)*(byte *)param_10;
            param_10 = pAVar18;
            if (param_5 == param_9) {
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar19->field_0001;
                param_15 = param_15 - 1;
                *(undefined *)pAVar19 = param_8[*(byte *)pAVar19];
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)param_1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
            }
            else {
              param_5 = (uint)(byte)param_11[param_5];
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((*(byte *)param_1 & (byte)uVar16) != 0) {
                  *(undefined *)pAVar19 = param_11[param_5];
                }
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                bVar23 = (byte)uVar16 >> 1;
                uVar16 = (uint)bVar23;
                if (bVar23 == 0) {
                  uVar16 = 0x80;
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              param_1 = (AnonShape_006D8A60_D503343B *)pAVar19;
            }
            goto cf_common_join_006D9EAC;
          }
cf_common_join_006D9A1A:
          param_12 = param_12 + param_13;
          param_1 = (AnonShape_006D8A60_D503343B *)pAVar19;
          pAVar18 = param_10;
        }
      }
      else {
        if (param_12 != (byte *)0x0) {
          param_1 = (AnonShape_006D8A60_D503343B *)param_12;
          uVar16 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar25 <= (int)param_6) {
            do {
              param_15 = param_15 - uVar25;
              if ((local_8 & 0x80) == 0) {
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)((int)&pAVar19->field_0x0 + uVar25);
                uVar16 = ((uVar16 & 0xff) << 8) >> ((byte)uVar25 & 7);
                if (uVar16 < 0x81) {
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                else {
                  uVar16 = uVar16 >> 8 & 0xff;
                }
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + ((int)uVar25 >> 3));
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar25 - 1)) {
                  do {
                    pbVar27 = &param_10->field_0001;
                    param_5 = (uint)*(byte *)param_10;
                    if (param_5 == param_9) {
                      bVar23 = param_8[*(byte *)pAVar19];
LAB_006d9875:
                      *(byte *)pAVar19 = bVar23;
                    }
                    else if ((*(byte *)param_1 & (byte)uVar16) != 0) {
                      bVar23 = param_11[param_5];
                      goto LAB_006d9875;
                    }
                    pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                    bVar23 = (byte)uVar16 >> 1;
                    if (bVar23 == 0) {
                      bVar23 = 0x80;
                      param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    }
                    uVar16 = (uint)bVar23;
                    uVar25 = uVar25 - 1;
                    param_10 = (AnonShape_006D8A60_CD460E10 *)pbVar27;
                  } while (uVar25 != 0);
                }
              }
              else {
                pbVar27 = &param_10->field_0001;
                param_5 = (uint)*(byte *)param_10;
                param_10 = (AnonShape_006D8A60_CD460E10 *)pbVar27;
                if (param_5 == param_9) {
                  uVar16 = ((uVar16 & 0xff) << 8) >> ((byte)uVar25 & 7);
                  if (uVar16 < 0x81) {
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  }
                  else {
                    uVar16 = uVar16 >> 8 & 0xff;
                  }
                  param_1 = (AnonShape_006D8A60_D503343B *)
                            (&param_1->field_0x0 + ((int)uVar25 >> 3));
                  pAVar18 = pAVar19;
                  if (-1 < (int)(uVar25 - 1)) {
                    do {
                      pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar18->field_0001;
                      uVar25 = uVar25 - 1;
                      *(undefined *)pAVar18 = param_8[*(byte *)pAVar18];
                      pAVar18 = pAVar19;
                    } while (uVar25 != 0);
                  }
                }
                else {
                  bVar23 = param_11[param_5];
                  if (-1 < (int)(uVar25 - 1)) {
                    do {
                      if ((*(byte *)param_1 & (byte)uVar16) != 0) {
                        *(byte *)pAVar19 = bVar23;
                      }
                      pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                      bVar22 = (byte)uVar16 >> 1;
                      if (bVar22 == 0) {
                        bVar22 = 0x80;
                        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                      }
                      uVar16 = (uint)bVar22;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar25 = 0;
                break;
              }
              bVar23 = *(byte *)param_10;
              local_8 = (uint)bVar23;
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if ((bVar23 & 0x80) == 0) {
                uVar25 = local_8 & 0x7f;
              }
              else {
                uVar25 = local_8 & 0x3f;
              }
            } while ((int)uVar25 <= (int)param_15);
          }
          uVar25 = uVar25 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9a18;
          if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15 - 1)) {
              do {
                pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                param_5 = (uint)*(byte *)param_10;
                if (param_5 == param_9) {
                  bVar23 = param_8[*(byte *)pAVar19];
LAB_006d99e9:
                  *(byte *)pAVar19 = bVar23;
                }
                else if ((*(byte *)param_1 & (byte)uVar16) != 0) {
                  bVar23 = param_11[param_5];
                  goto LAB_006d99e9;
                }
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                bVar23 = (byte)uVar16 >> 1;
                uVar16 = (uint)bVar23;
                if (bVar23 == 0) {
                  uVar16 = 0x80;
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                param_15 = param_15 - 1;
                param_10 = pAVar18;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              param_1 = (AnonShape_006D8A60_D503343B *)pAVar19;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15) {
            pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
            param_5 = (uint)*(byte *)param_10;
            param_10 = pAVar18;
            if (param_5 == param_9) {
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar19->field_0001;
                param_15 = param_15 - 1;
                *(undefined *)pAVar19 = param_8[*(byte *)pAVar19];
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)param_1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
            }
            else {
              bVar23 = param_11[param_5];
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((*(byte *)param_1 & (byte)uVar16) != 0) {
                  *(byte *)pAVar19 = bVar23;
                }
                pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
                bVar22 = (byte)uVar16 >> 1;
                uVar16 = (uint)bVar22;
                if (bVar22 == 0) {
                  uVar16 = 0x80;
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              param_1 = (AnonShape_006D8A60_D503343B *)pAVar19;
            }
            goto cf_common_join_006D9EAC;
          }
          goto cf_common_join_006D9A1A;
        }
        if (param_11 == (undefined *)0x0) {
          if ((int)uVar25 <= (int)param_6) {
            do {
              param_15 = param_15 - uVar25;
              if ((local_8 & 0x80) == 0) {
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar25);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar25) {
                  do {
                    bVar23 = *(byte *)param_10;
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    param_5 = (uint)bVar23;
                    if (param_5 == param_9) {
                      bVar23 = param_8[*(byte *)param_1];
                    }
                    *(byte *)param_1 = bVar23;
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
              }
              else {
                bVar23 = *(byte *)param_10;
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                param_5 = (uint)bVar23;
                if (param_5 == param_9) {
                  pAVar21 = param_1;
                  if (0 < (int)uVar25) {
                    do {
                      param_1 = (AnonShape_006D8A60_D503343B *)&pAVar21->field_0001;
                      uVar25 = uVar25 - 1;
                      *(undefined *)pAVar21 = param_8[*(byte *)pAVar21];
                      pAVar21 = param_1;
                    } while (uVar25 != 0);
                  }
                }
                else if (0 < (int)uVar25) {
                  AVar10._2_2_ = CONCAT11(bVar23,bVar23);
                  AVar10._0_2_ = CONCAT11(bVar23,bVar23);
                  pAVar21 = param_1;
                  for (uVar16 = uVar25 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                    *pAVar21 = AVar10;
                    pAVar21 = pAVar21 + 1;
                  }
                  for (uVar16 = uVar25 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                    *(byte *)pAVar21 = bVar23;
                    pAVar21 = (AnonShape_006D8A60_D503343B *)&pAVar21->field_0001;
                  }
                  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar25);
                }
              }
              if ((int)param_15 < 1) {
                uVar25 = 0;
                break;
              }
              bVar23 = *(byte *)param_10;
              local_8 = (uint)bVar23;
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if ((bVar23 & 0x80) == 0) {
                uVar25 = local_8 & 0x7f;
              }
              else {
                uVar25 = local_8 & 0x3f;
              }
            } while ((int)uVar25 <= (int)param_15);
          }
          uVar25 = uVar25 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          pAVar18 = param_10;
          if ((local_8 & 0x40) == 0) {
            if (0 < (int)param_15) {
              do {
                bVar23 = *(byte *)param_10;
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                param_5 = (uint)bVar23;
                if (param_5 == param_9) {
                  bVar23 = param_8[*(byte *)param_1];
                }
                *(byte *)param_1 = bVar23;
                param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                param_15 = param_15 - 1;
                pAVar18 = param_10;
              } while (param_15 != 0);
            }
          }
          else if (0 < (int)param_15) {
            bVar23 = *(byte *)param_10;
            param_5 = (uint)bVar23;
            pAVar21 = param_1;
            pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
            if (param_5 == param_9) {
              do {
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar21->field_0001;
                param_15 = param_15 - 1;
                *(undefined *)pAVar21 = param_8[*(byte *)pAVar21];
                pAVar21 = param_1;
              } while (param_15 != 0);
            }
            else {
              AVar11._2_2_ = CONCAT11(bVar23,bVar23);
              AVar11._0_2_ = CONCAT11(bVar23,bVar23);
              for (uVar16 = param_15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pAVar21 = AVar11;
                pAVar21 = pAVar21 + 1;
              }
              for (uVar16 = param_15 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(byte *)pAVar21 = bVar23;
                pAVar21 = (AnonShape_006D8A60_D503343B *)&pAVar21->field_0001;
              }
              param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_15);
            }
          }
        }
        else {
          if ((int)uVar25 <= (int)param_6) {
            do {
              param_15 = param_15 - uVar25;
              if ((local_8 & 0x80) == 0) {
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar25);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar25) {
                  do {
                    param_5 = (uint)*(byte *)param_10;
                    param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                    puVar24 = param_11;
                    if (param_5 == param_9) {
                      param_5 = (uint)*(byte *)param_1;
                      puVar24 = param_8;
                    }
                    *(undefined *)param_1 = puVar24[param_5];
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
              }
              else {
                bVar23 = *(byte *)param_10;
                param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                param_5 = (uint)bVar23;
                if (param_5 == param_9) {
                  if (0 < (int)uVar25) {
                    do {
                      puVar20 = &param_1->field_0001;
                      uVar25 = uVar25 - 1;
                      *(undefined *)param_1 = param_8[*(byte *)param_1];
                      param_1 = (AnonShape_006D8A60_D503343B *)puVar20;
                    } while (uVar25 != 0);
                  }
                }
                else {
                  bVar23 = param_11[param_5];
                  if (0 < (int)uVar25) {
                    AVar8._2_2_ = CONCAT11(bVar23,bVar23);
                    AVar8._0_2_ = CONCAT11(bVar23,bVar23);
                    pAVar21 = param_1;
                    for (uVar16 = uVar25 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *pAVar21 = AVar8;
                      pAVar21 = pAVar21 + 1;
                    }
                    for (uVar16 = uVar25 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *(byte *)pAVar21 = bVar23;
                      pAVar21 = (AnonShape_006D8A60_D503343B *)&pAVar21->field_0001;
                    }
                    param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar25);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar25 = 0;
                break;
              }
              bVar23 = *(byte *)param_10;
              local_8 = (uint)bVar23;
              param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if ((bVar23 & 0x80) == 0) {
                uVar25 = local_8 & 0x7f;
              }
              else {
                uVar25 = local_8 & 0x3f;
              }
            } while ((int)uVar25 <= (int)param_15);
          }
          uVar25 = uVar25 - param_15;
          if ((local_8 & 0x80) == 0) {
LAB_006d9c24:
            param_1 = (AnonShape_006D8A60_D503343B *)
                      ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + param_15);
            pAVar18 = param_10;
          }
          else {
            pAVar18 = param_10;
            if ((local_8 & 0x40) == 0) {
              if (0 < (int)param_15) {
                do {
                  param_5 = (uint)*(byte *)param_10;
                  param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
                  puVar24 = param_11;
                  if (param_5 == param_9) {
                    param_5 = (uint)*(byte *)param_1;
                    puVar24 = param_8;
                  }
                  *(undefined *)param_1 = puVar24[param_5];
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  param_15 = param_15 - 1;
                  pAVar18 = param_10;
                } while (param_15 != 0);
              }
            }
            else if (0 < (int)param_15) {
              param_5 = (uint)*(byte *)param_10;
              pAVar21 = param_1;
              pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
              if (param_5 == param_9) {
                do {
                  param_1 = (AnonShape_006D8A60_D503343B *)&pAVar21->field_0001;
                  param_15 = param_15 - 1;
                  *(undefined *)pAVar21 = param_8[*(byte *)pAVar21];
                  pAVar21 = param_1;
                } while (param_15 != 0);
              }
              else {
                uVar14 = param_11[param_5];
                AVar9._2_2_ = CONCAT11(uVar14,uVar14);
                AVar9._0_2_ = CONCAT11(uVar14,uVar14);
                for (uVar16 = param_15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *pAVar21 = AVar9;
                  pAVar21 = pAVar21 + 1;
                }
                for (uVar16 = param_15 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined1 *)pAVar21 = uVar14;
                  pAVar21 = (AnonShape_006D8A60_D503343B *)&pAVar21->field_0001;
                }
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_15);
              }
            }
          }
        }
      }
    }
    goto cf_common_join_006D9EAC;
  }
  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_2);
  goto LAB_006d9f11;
cf_common_join_006D8DA5:
  param_1 = (AnonShape_006D8A60_D503343B *)pAVar19;
  pAVar18 = param_10;
  if ((int)uVar16 < 1) goto cf_common_join_006D9EAC;
  uVar25 = uVar25 - uVar16;
  if ((local_8 & 0x80) == 0) {
    param_1 = (AnonShape_006D8A60_D503343B *)((int)&pAVar19->field_0x0 + uVar16);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) != 0) {
    bVar23 = *(byte *)param_10;
    AVar5._0_2_ = CONCAT11(bVar23,bVar23);
    AVar5._2_2_ = 0;
    pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
    if (3 < (int)uVar16) {
      if (((uint)pAVar19 & 1) != 0) {
        *(byte *)pAVar19 = bVar23;
        pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
        uVar16 = uVar16 - 1;
      }
      if (((uint)pAVar19 & 2) != 0) {
        *(ushort *)pAVar19 = AVar5._0_2_;
        pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0002;
        uVar16 = uVar16 - 2;
      }
      AVar5._2_2_ = AVar5._0_2_;
      while (3 < (int)uVar16) {
        *pAVar19 = AVar5;
        pAVar19 = pAVar19 + 1;
        uVar16 = uVar16 - 4;
      }
      param_1 = (AnonShape_006D8A60_D503343B *)pAVar19;
      if (uVar16 == 0) goto cf_common_join_006D9EAC;
    }
    bVar23 = AVar5._0_1_;
    if ((char)uVar16 != '\x01') {
      if ((char)uVar16 != '\x02') {
        pAVar19->field_0002 = bVar23;
      }
      pAVar19->field_0001 = bVar23;
    }
    *(byte *)pAVar19 = bVar23;
    param_1 = (AnonShape_006D8A60_D503343B *)((int)&pAVar19->field_0x0 + uVar16);
    goto cf_common_join_006D9EAC;
  }
  bVar23 = *(byte *)param_10;
  if ((bVar23 < (byte)param_9) || (local_14 < bVar23)) {
    if (3 < (int)uVar16) {
      if (((uint)pAVar19 & 1) != 0) {
        *(byte *)pAVar19 = *(byte *)param_10;
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
        pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
        uVar16 = uVar16 - 1;
      }
      if (((uint)pAVar19 & 2) != 0) {
        bVar23 = param_10->field_0001;
        pAVar19->field_0x0 = param_10->field_0x0;
        pAVar19->field_0001 = bVar23;
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
        pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0002;
        uVar16 = uVar16 - 2;
      }
      while (3 < (int)uVar16) {
        AVar17 = *param_10;
        param_10 = param_10 + 1;
        *pAVar19 = AVar17;
        pAVar19 = pAVar19 + 1;
        uVar16 = uVar16 - 4;
      }
      param_1 = (AnonShape_006D8A60_D503343B *)pAVar19;
      pAVar18 = param_10;
      if (uVar16 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar16 != '\x01') {
      if ((char)uVar16 != '\x02') {
        pAVar19->field_0002 = param_10->field_0002;
      }
      pAVar19->field_0001 = param_10->field_0001;
    }
    *(byte *)pAVar19 = *(byte *)param_10;
    param_1 = (AnonShape_006D8A60_D503343B *)((int)&pAVar19->field_0x0 + uVar16);
    pAVar18 = (AnonShape_006D8A60_CD460E10 *)((int)&param_10->field_0x0 + uVar16);
    goto cf_common_join_006D9EAC;
  }
  AVar17 = *(AnonShape_006D8A60_CD460E10 *)((uint)pAVar19 & 0xfffffffc);
  if (((uint)pAVar19 & 3) == 0) {
LAB_006d8e9b:
    cVar12 = (char)uVar16;
    while ('\x03' < cVar12) {
      bVar23 = *(byte *)param_10;
      pbVar27 = &param_10->field_0001;
      pbVar1 = &param_10->field_0002;
      puVar20 = &param_10->field_0x3;
      param_10 = param_10 + 1;
      *pAVar19 = (AnonShape_006D8A60_CD460E10)
                 (CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar27,AVar17.field_0001) +
                                            param_9 * -0x100],
                                    param_8[(uint)CONCAT11(bVar23,AVar17._0_1_) + param_9 * -0x100])
                           ,CONCAT11(param_8[(uint)CONCAT11(*puVar20,AVar17._3_1_) +
                                             param_9 * -0x100],
                                     param_8[(uint)CONCAT11(*pbVar1,AVar17.field_0002) +
                                             param_9 * -0x100])) << 0x10 |
                 (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar27,AVar17.field_0001) +
                                        param_9 * -0x100],
                                param_8[(uint)CONCAT11(bVar23,AVar17._0_1_) + param_9 * -0x100]));
      AVar17 = pAVar19[1];
      pAVar19 = pAVar19 + 1;
      cVar12 = cVar12 + -4;
    }
    uVar16 = CONCAT31((int3)(uVar16 >> 8),cVar12);
    param_1 = (AnonShape_006D8A60_D503343B *)pAVar19;
    pAVar18 = param_10;
    if (cVar12 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    AVar17 = (AnonShape_006D8A60_CD460E10)((uint)AVar17 >> (((byte)pAVar19 & 3) << 3));
    if (3 < uVar16) {
      if (((uint)pAVar19 & 1) != 0) {
        uVar16 = CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + -1);
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
        *(undefined *)pAVar19 = param_8[(uint)CONCAT11(bVar23,AVar17._0_1_) + param_9 * -0x100];
        AVar17 = (AnonShape_006D8A60_CD460E10)((uint)AVar17 >> 8);
        pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0001;
      }
      if (((uint)pAVar19 & 2) != 0) {
        bVar23 = *(byte *)param_10;
        pbVar27 = &param_10->field_0001;
        uVar16 = CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + -2);
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
        *(ushort *)pAVar19 =
             CONCAT11(param_8[(uint)CONCAT11(*pbVar27,AVar17.field_0001) + param_9 * -0x100],
                      param_8[(uint)CONCAT11(bVar23,AVar17._0_1_) + param_9 * -0x100]);
        pAVar19 = (AnonShape_006D8A60_CD460E10 *)&pAVar19->field_0002;
      }
      AVar17 = *pAVar19;
      goto LAB_006d8e9b;
    }
  }
  param_1 = (AnonShape_006D8A60_D503343B *)&pAVar19->field_0001;
  *(undefined *)pAVar19 = param_8[(uint)CONCAT11(*(byte *)param_10,AVar17._0_1_) + param_9 * -0x100]
  ;
  uVar15 = AVar17._1_2_;
  pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
  if (uVar16 != 1) {
    if (((uint)param_1 & 3) == 0) {
      uVar15 = SUB42(*param_1,0);
    }
    pbVar27 = &pAVar19->field_0002;
    *(undefined *)param_1 =
         param_8[(uint)CONCAT11(param_10->field_0001,(char)uVar15) + param_9 * -0x100];
    uVar14 = (undefined1)((ushort)uVar15 >> 8);
    param_1 = (AnonShape_006D8A60_D503343B *)pbVar27;
    pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
    if (uVar16 != 2) {
      if (((uint)pbVar27 & 3) == 0) {
        uVar14 = (undefined1)*(undefined4 *)pbVar27;
      }
      param_1 = (AnonShape_006D8A60_D503343B *)&pAVar19->field_0x3;
      *pbVar27 = param_8[(uint)CONCAT11(param_10->field_0002,uVar14) + param_9 * -0x100];
      pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0x3;
    }
  }
  goto cf_common_join_006D9EAC;
cf_common_join_006D958E:
  pAVar18 = param_10;
  if ((int)uVar16 < 1) goto cf_common_join_006D9EAC;
  uVar25 = uVar25 - uVar16;
  if ((local_8 & 0x80) == 0) {
    param_1 = (AnonShape_006D8A60_D503343B *)
              ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar16);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) == 0) {
    if (3 < (int)uVar16) {
      if (((uint)param_1 & 1) != 0) {
        *(byte *)param_1 = *(byte *)param_10;
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
        param_1 = (AnonShape_006D8A60_D503343B *)
                  &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
        uVar16 = uVar16 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        bVar23 = param_10->field_0001;
        ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 = param_10->field_0x0;
        ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = bVar23;
        param_10 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
        param_1 = (AnonShape_006D8A60_D503343B *)
                  &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
        uVar16 = uVar16 - 2;
      }
      while (3 < (int)uVar16) {
        AVar17 = *param_10;
        param_10 = param_10 + 1;
        *param_1 = (AnonShape_006D8A60_D503343B)AVar17;
        param_1 = param_1 + 1;
        uVar16 = uVar16 - 4;
      }
      pAVar18 = param_10;
      if (uVar16 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar16 != '\x01') {
      if ((char)uVar16 != '\x02') {
        ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = param_10->field_0002;
      }
      ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = param_10->field_0001;
    }
    *(byte *)param_1 = *(byte *)param_10;
    param_1 = (AnonShape_006D8A60_D503343B *)
              ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar16);
    pAVar18 = (AnonShape_006D8A60_CD460E10 *)((int)&param_10->field_0x0 + uVar16);
    goto cf_common_join_006D9EAC;
  }
  bVar23 = *(byte *)param_10;
  AVar7._0_2_ = CONCAT11(bVar23,bVar23);
  AVar7._2_2_ = 0;
  pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
  if ((bVar23 < (byte)param_9) || (local_14 < bVar23)) {
    if (3 < (int)uVar16) {
      if (((uint)param_1 & 1) != 0) {
        *(byte *)param_1 = bVar23;
        param_1 = (AnonShape_006D8A60_D503343B *)
                  &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
        uVar16 = uVar16 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        *(ushort *)param_1 = AVar7._0_2_;
        param_1 = (AnonShape_006D8A60_D503343B *)
                  &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
        uVar16 = uVar16 - 2;
      }
      AVar7._2_2_ = AVar7._0_2_;
      while (3 < (int)uVar16) {
        *param_1 = (AnonShape_006D8A60_D503343B)AVar7;
        param_1 = param_1 + 1;
        uVar16 = uVar16 - 4;
      }
      if (uVar16 == 0) goto cf_common_join_006D9EAC;
    }
    bVar23 = AVar7._0_1_;
    if ((char)uVar16 != '\x01') {
      if ((char)uVar16 != '\x02') {
        ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = bVar23;
      }
      ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = bVar23;
    }
    *(byte *)param_1 = bVar23;
    param_1 = (AnonShape_006D8A60_D503343B *)
              ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar16);
    goto cf_common_join_006D9EAC;
  }
  AVar17 = *(AnonShape_006D8A60_CD460E10 *)((uint)param_1 & 0xfffffffc);
  if (((uint)param_1 & 3) == 0) {
LAB_006d9621:
    cVar12 = (char)uVar16;
    while ('\x03' < cVar12) {
      *param_1 = (AnonShape_006D8A60_D503343B)
                 (CONCAT22(CONCAT11(param_8[(uint)AVar17 >> 8 & 0xff],param_8[(uint)AVar17 & 0xff]),
                           CONCAT11(param_8[(uint)AVar17 >> 0x18],
                                    param_8[(uint)AVar17 >> 0x10 & 0xff])) << 0x10 |
                 (uint)CONCAT11(param_8[(uint)AVar17 >> 8 & 0xff],param_8[(uint)AVar17 & 0xff]));
      AVar17 = *(AnonShape_006D8A60_CD460E10 *)(param_1 + 1);
      param_1 = param_1 + 1;
      cVar12 = cVar12 + -4;
    }
    uVar16 = CONCAT31((int3)(uVar16 >> 8),cVar12);
    if (cVar12 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    AVar17 = (AnonShape_006D8A60_CD460E10)((uint)AVar17 >> (((byte)param_1 & 3) << 3));
    if (3 < uVar16) {
      if (((uint)param_1 & 1) != 0) {
        uVar16 = CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + -1);
        pAVar18 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
        *(undefined *)param_1 = param_8[(uint)AVar17 & 0xff];
        AVar17 = (AnonShape_006D8A60_CD460E10)((uint)AVar17 >> 8);
        param_1 = (AnonShape_006D8A60_D503343B *)
                  &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001;
      }
      if (((uint)param_1 & 2) != 0) {
        uVar16 = CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + -2);
        *(ushort *)param_1 =
             CONCAT11(param_8[(uint)AVar17 >> 8 & 0xff],param_8[(uint)AVar17 & 0xff]);
        param_1 = (AnonShape_006D8A60_D503343B *)
                  &((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002;
      }
      AVar17 = *(AnonShape_006D8A60_CD460E10 *)param_1;
      goto LAB_006d9621;
    }
  }
  if ((char)uVar16 != '\x01') {
    if ((char)uVar16 != '\x02') {
      uVar3 = (uint)AVar17 >> 0x10;
      AVar17 = (AnonShape_006D8A60_CD460E10)((uint)AVar17 & 0xffff);
      ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0002 = param_8[uVar3 & 0xff];
    }
    ((AnonShape_006D8A60_CD460E10 *)param_1)->field_0001 = param_8[(uint)AVar17 >> 8 & 0xff];
  }
  *(undefined *)param_1 = param_8[(uint)AVar17 & 0xff];
  param_1 = (AnonShape_006D8A60_D503343B *)
            ((int)&((AnonShape_006D8A60_CD460E10 *)param_1)->field_0x0 + uVar16);
cf_common_join_006D9EAC:
  param_10 = pAVar18;
  bVar23 = (byte)local_8;
  iVar13 = (sVar2 - param_4) - param_6;
  if ((int)uVar25 < iVar13) {
    do {
      iVar13 = iVar13 - uVar25;
      if (((byte)local_8 & 0xc0) == 0x80) {
        param_10 = (AnonShape_006D8A60_CD460E10 *)(&param_10->field_0x0 + uVar25);
      }
      bVar23 = *(byte *)param_10;
      local_8 = (uint)bVar23;
      uVar25 = local_8;
      pAVar19 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0001;
      if (((bVar23 & 0x80) != 0) && (uVar25 = local_8 & 0x3f, (bVar23 & 0x40) != 0)) {
        pAVar19 = (AnonShape_006D8A60_CD460E10 *)&param_10->field_0002;
      }
      param_10 = pAVar19;
    } while ((int)uVar25 < iVar13);
  }
  if ((bVar23 & 0xc0) == 0x80) {
    param_10 = (AnonShape_006D8A60_CD460E10 *)(&param_10->field_0x0 + iVar13);
  }
  param_1 = (AnonShape_006D8A60_D503343B *)((int)param_1 + (param_2 - param_6));
LAB_006d9f11:
  if (param_7 < 1) {
    return;
  }
  goto LAB_006d8b04;
}

