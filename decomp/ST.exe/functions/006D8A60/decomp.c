
void FUN_006d8a60(uint *param_1,int param_2,byte *param_3,int param_4,uint param_5,uint param_6,
                 int param_7,undefined *param_8,uint param_9,uint *param_10,undefined *param_11,
                 byte *param_12,int param_13,int param_14,uint param_15)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  short sVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  undefined *puVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  byte local_14;
  char local_10;
  uint local_8;
  
  if (((int)param_6 < 1) || (param_7 < 1)) {
    return;
  }
  iVar8 = (int)param_10 + param_9;
  local_14 = (char)iVar8 - 1;
  if ((param_12 != (byte *)0x0) &&
     (param_12 = param_12 + param_13 * param_15 + (param_14 >> 3), param_11 == (undefined *)0x0)) {
    param_11 = &DAT_007ee300;
  }
  if ((int)param_5 < 1) {
    param_10 = (uint *)(param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16);
  }
  else {
    param_10 = (uint *)FUN_006cfe10(param_3,param_5);
  }
  sVar5 = *(short *)(param_3 + 0x12);
LAB_006d8b04:
  puVar20 = param_1;
  param_7 = param_7 + -1;
  local_8 = (uint)(byte)*param_10;
  param_10 = (uint *)((int)param_10 + 1);
  iVar10 = param_4;
  if (local_8 != 0) {
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar18 = local_8 & 0x7f;
        if (iVar10 < (int)uVar18) goto LAB_006d8b50;
        uVar13 = *param_10;
        param_10 = (uint *)((int)param_10 + 1);
        iVar10 = iVar10 - uVar18;
        local_8 = (uint)(byte)uVar13;
      }
      uVar18 = local_8 & 0x3f;
      if (iVar10 < (int)uVar18) break;
      if ((local_8 & 0x40) == 0) {
        local_8 = (uint)*(byte *)((int)param_10 + uVar18);
        param_10 = (uint *)((byte *)((int)param_10 + uVar18) + 1);
        iVar10 = iVar10 - uVar18;
      }
      else {
        local_8 = (uint)*(byte *)((int)param_10 + 1);
        param_10 = (uint *)((int)param_10 + 2);
        iVar10 = iVar10 - uVar18;
      }
    }
LAB_006d8b50:
    uVar18 = uVar18 - iVar10;
    bVar16 = (byte)local_8;
    if ((bVar16 & 0xc0) == 0x80) {
      param_10 = (uint *)((int)param_10 + iVar10);
    }
    param_15 = param_6;
    if (param_8 == (undefined *)0x0) {
      if ((int)uVar18 <= (int)param_6) {
        do {
          param_15 = param_15 - uVar18;
          if ((local_8 & 0x80) == 0) {
            param_1 = (uint *)((int)param_1 + uVar18);
          }
          else if (0 < (int)uVar18) {
            do {
              uVar13 = *param_10;
              param_10 = (uint *)((int)param_10 + 1);
              param_5 = (uint)(byte)uVar13;
              if (((int)param_5 < (int)param_9) || (iVar8 <= (int)param_5)) {
                *(byte *)param_1 = (byte)uVar13;
              }
              param_1 = (uint *)((int)param_1 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if ((int)param_15 < 1) {
            uVar18 = 0;
            break;
          }
          local_8 = (uint)(byte)*param_10;
          uVar18 = local_8 & 0x7f;
          param_10 = (uint *)((int)param_10 + 1);
        } while ((int)uVar18 <= (int)param_15);
      }
      uVar18 = uVar18 - param_15;
      puVar21 = param_10;
      if ((local_8 & 0x80) == 0) {
        param_1 = (uint *)((int)param_1 + param_15);
      }
      else if (0 < (int)param_15) {
        do {
          uVar13 = *param_10;
          param_10 = (uint *)((int)param_10 + 1);
          param_5 = (uint)(byte)uVar13;
          if (((int)param_5 < (int)param_9) || (iVar8 <= (int)param_5)) {
            *(byte *)param_1 = (byte)uVar13;
          }
          param_1 = (uint *)((int)param_1 + 1);
          param_15 = param_15 - 1;
          puVar21 = param_10;
        } while (param_15 != 0);
      }
    }
    else {
      local_10 = (char)uVar18;
      if ((param_3[0xd] & 3) == 1) {
        bVar16 = bVar16 & 0xc0;
        if ((local_8 & 0x80) == 0) {
          bVar16 = 0;
        }
        uVar18 = (uint)(byte)(bVar16 + local_10);
        uVar13 = param_6;
        do {
          if ((uVar18 & 0x80) == 0) {
            if ((int)uVar13 < (int)uVar18) goto cf_common_join_006D8DA5;
            uVar13 = uVar13 - uVar18;
            puVar21 = (uint *)((int)puVar20 + uVar18);
          }
          else if ((uVar18 & 0x40) == 0) {
            uVar18 = uVar18 & 0x3f;
            if ((int)uVar13 < (int)uVar18) goto cf_common_join_006D8DA5;
            uVar13 = uVar13 - uVar18;
            bVar16 = (byte)*param_10;
            if ((bVar16 < (byte)param_9) || (local_14 < bVar16)) {
              if (3 < uVar18) {
                if (((uint)puVar20 & 1) != 0) {
                  uVar18 = uVar18 - 1;
                  *(byte *)puVar20 = (byte)*param_10;
                  param_10 = (uint *)((int)param_10 + 1);
                  puVar20 = (uint *)((int)puVar20 + 1);
                }
                if (((uint)puVar20 & 2) != 0) {
                  uVar18 = uVar18 - 2;
                  *(short *)puVar20 = (short)*param_10;
                  param_10 = (uint *)((int)param_10 + 2);
                  puVar20 = (uint *)((int)puVar20 + 2);
                }
                while (3 < (int)uVar18) {
                  uVar14 = *param_10;
                  param_10 = param_10 + 1;
                  *puVar20 = uVar14;
                  puVar20 = puVar20 + 1;
                  uVar18 = uVar18 - 4;
                }
                puVar21 = puVar20;
                if (uVar18 == 0) goto LAB_006d8d94;
              }
              if ((char)uVar18 != '\x01') {
                if ((char)uVar18 != '\x02') {
                  *(byte *)((int)puVar20 + 2) = *(byte *)((int)param_10 + 2);
                }
                *(byte *)((int)puVar20 + 1) = *(byte *)((int)param_10 + 1);
              }
              uVar14 = *param_10;
              param_10 = (uint *)((int)param_10 + uVar18);
              *(byte *)puVar20 = (byte)uVar14;
              puVar21 = (uint *)((int)puVar20 + uVar18);
            }
            else {
              uVar14 = *(uint *)((uint)puVar20 & 0xfffffffc);
              if (((uint)puVar20 & 3) == 0) {
LAB_006d8cab:
                bVar16 = (byte)uVar18;
                while ('\x03' < (char)bVar16) {
                  uVar18 = *param_10;
                  pbVar1 = (byte *)((int)param_10 + 1);
                  pbVar2 = (byte *)((int)param_10 + 2);
                  pbVar3 = (byte *)((int)param_10 + 3);
                  param_10 = param_10 + 1;
                  *puVar20 = CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar1,(char)(uVar14 >> 8)) +
                                                       param_9 * -0x100],
                                               param_8[(uint)CONCAT11((byte)uVar18,(char)uVar14) +
                                                       param_9 * -0x100]),
                                      CONCAT11(param_8[(uint)CONCAT11(*pbVar3,(char)(uVar14 >> 0x18)
                                                                     ) + param_9 * -0x100],
                                               param_8[(uint)CONCAT11(*pbVar2,(char)(uVar14 >> 0x10)
                                                                     ) + param_9 * -0x100])) << 0x10
                             | (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar1,(char)(uVar14 >> 8)) +
                                                      param_9 * -0x100],
                                              param_8[(uint)CONCAT11((byte)uVar18,(char)uVar14) +
                                                      param_9 * -0x100]);
                  uVar14 = puVar20[1];
                  puVar20 = puVar20 + 1;
                  bVar16 = bVar16 - 4;
                }
                uVar18 = (uint)bVar16;
                puVar19 = param_10;
                puVar21 = puVar20;
                if (bVar16 == 0) goto LAB_006d8d94;
              }
              else {
                uVar14 = uVar14 >> (((byte)puVar20 & 3) << 3);
                puVar19 = param_10;
                if (3 < uVar18) {
                  if (((uint)puVar20 & 1) != 0) {
                    uVar18 = (uint)(byte)((char)uVar18 - 1);
                    param_10 = (uint *)((int)param_10 + 1);
                    *(undefined *)puVar20 =
                         param_8[(uint)CONCAT11(bVar16,(char)uVar14) + param_9 * -0x100];
                    uVar14 = uVar14 >> 8;
                    puVar20 = (uint *)((int)puVar20 + 1);
                  }
                  if (((uint)puVar20 & 2) != 0) {
                    uVar6 = *param_10;
                    pbVar1 = (byte *)((int)param_10 + 1);
                    uVar18 = (uint)(byte)((char)uVar18 - 2);
                    param_10 = (uint *)((int)param_10 + 2);
                    *(ushort *)puVar20 =
                         CONCAT11(param_8[(uint)CONCAT11(*pbVar1,(char)(uVar14 >> 8)) +
                                          param_9 * -0x100],
                                  param_8[(uint)CONCAT11((byte)uVar6,(char)uVar14) +
                                          param_9 * -0x100]);
                    puVar20 = (uint *)((int)puVar20 + 2);
                  }
                  uVar14 = *puVar20;
                  goto LAB_006d8cab;
                }
              }
              param_10 = (uint *)((int)puVar19 + 1);
              puVar21 = (uint *)((int)puVar20 + 1);
              *(undefined *)puVar20 =
                   param_8[(uint)CONCAT11((byte)*puVar19,(char)uVar14) + param_9 * -0x100];
              uVar12 = (undefined2)(uVar14 >> 8);
              if (uVar18 != 1) {
                if (((uint)puVar21 & 3) == 0) {
                  uVar12 = (undefined2)*puVar21;
                }
                bVar16 = *(byte *)param_10;
                param_10 = (uint *)((int)puVar19 + 2);
                puVar4 = (uint *)((int)puVar20 + 2);
                *(undefined *)puVar21 =
                     param_8[(uint)CONCAT11(bVar16,(char)uVar12) + param_9 * -0x100];
                uVar11 = (undefined1)((ushort)uVar12 >> 8);
                puVar21 = puVar4;
                if (uVar18 != 2) {
                  if (((uint)puVar4 & 3) == 0) {
                    uVar11 = (undefined1)*puVar4;
                  }
                  bVar16 = *(byte *)param_10;
                  param_10 = (uint *)((int)puVar19 + 3);
                  puVar21 = (uint *)((int)puVar20 + 3);
                  *(undefined *)puVar4 = param_8[(uint)CONCAT11(bVar16,uVar11) + param_9 * -0x100];
                }
              }
            }
          }
          else {
            bVar16 = (byte)*param_10;
            uVar18 = uVar18 & 0xffffff3f;
            uVar7 = CONCAT11(bVar16,bVar16);
            uVar14 = (uint)uVar7;
            if ((int)uVar13 < (int)uVar18) goto cf_common_join_006D8DA5;
            uVar13 = uVar13 - uVar18;
            param_10 = (uint *)((int)param_10 + 1);
            if (3 < uVar18) {
              if (((uint)puVar20 & 1) != 0) {
                *(byte *)puVar20 = bVar16;
                puVar20 = (uint *)((int)puVar20 + 1);
                uVar18 = uVar18 - 1;
              }
              if (((uint)puVar20 & 2) != 0) {
                *(ushort *)puVar20 = uVar7;
                puVar20 = (uint *)((int)puVar20 + 2);
                uVar18 = uVar18 - 2;
              }
              uVar14 = CONCAT22(uVar7,uVar7);
              while (3 < (int)uVar18) {
                *puVar20 = uVar14;
                puVar20 = puVar20 + 1;
                uVar18 = uVar18 - 4;
              }
              puVar21 = puVar20;
              if (uVar18 == 0) goto LAB_006d8d94;
            }
            bVar16 = (byte)uVar14;
            if ((char)uVar18 != '\x01') {
              if ((char)uVar18 != '\x02') {
                *(byte *)((int)puVar20 + 2) = bVar16;
              }
              *(byte *)((int)puVar20 + 1) = bVar16;
            }
            *(byte *)puVar20 = bVar16;
            puVar21 = (uint *)((int)puVar20 + uVar18);
          }
LAB_006d8d94:
          uVar18 = 0;
          puVar20 = puVar21;
          if ((int)uVar13 < 1) goto cf_common_join_006D8DA5;
          uVar18 = (uint)(byte)*param_10;
          param_10 = (uint *)((int)param_10 + 1);
          local_8 = uVar18;
        } while( true );
      }
      if ((param_3[0xd] & 3) == 2) {
        if (param_12 == (byte *)0x0) {
          if (param_11 == (undefined *)0x0) {
            bVar16 = bVar16 & 0xc0;
            if ((local_8 & 0x80) == 0) {
              bVar16 = 0;
            }
            uVar18 = (uint)(byte)(bVar16 + local_10);
            uVar13 = param_6;
            do {
              if ((uVar18 & 0x80) == 0) {
                if ((int)uVar13 < (int)uVar18) goto cf_common_join_006D958E;
                uVar13 = uVar13 - uVar18;
                param_1 = (uint *)((int)param_1 + uVar18);
              }
              else if ((uVar18 & 0x40) == 0) {
                uVar18 = uVar18 & 0x3f;
                if ((int)uVar13 < (int)uVar18) goto cf_common_join_006D958E;
                uVar13 = uVar13 - uVar18;
                if (3 < uVar18) {
                  if (((uint)param_1 & 1) != 0) {
                    uVar18 = uVar18 - 1;
                    *(byte *)param_1 = (byte)*param_10;
                    param_10 = (uint *)((int)param_10 + 1);
                    param_1 = (uint *)((int)param_1 + 1);
                  }
                  if (((uint)param_1 & 2) != 0) {
                    uVar18 = uVar18 - 2;
                    *(short *)param_1 = (short)*param_10;
                    param_10 = (uint *)((int)param_10 + 2);
                    param_1 = (uint *)((int)param_1 + 2);
                  }
                  while (3 < (int)uVar18) {
                    uVar14 = *param_10;
                    param_10 = param_10 + 1;
                    *param_1 = uVar14;
                    param_1 = param_1 + 1;
                    uVar18 = uVar18 - 4;
                  }
                  if (uVar18 == 0) goto LAB_006d957d;
                }
                if ((char)uVar18 != '\x01') {
                  if ((char)uVar18 != '\x02') {
                    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_10 + 2);
                  }
                  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_10 + 1);
                }
                uVar14 = *param_10;
                param_10 = (uint *)((int)param_10 + uVar18);
                *(byte *)param_1 = (byte)uVar14;
                param_1 = (uint *)((int)param_1 + uVar18);
              }
              else {
                bVar16 = (byte)*param_10;
                uVar18 = uVar18 & 0xffffff3f;
                uVar7 = CONCAT11(bVar16,bVar16);
                uVar14 = (uint)uVar7;
                if ((int)uVar13 < (int)uVar18) goto cf_common_join_006D958E;
                uVar13 = uVar13 - uVar18;
                param_10 = (uint *)((int)param_10 + 1);
                if ((bVar16 < (byte)param_9) || (local_14 < bVar16)) {
                  if (3 < uVar18) {
                    if (((uint)param_1 & 1) != 0) {
                      *(byte *)param_1 = bVar16;
                      param_1 = (uint *)((int)param_1 + 1);
                      uVar18 = uVar18 - 1;
                    }
                    if (((uint)param_1 & 2) != 0) {
                      *(ushort *)param_1 = uVar7;
                      param_1 = (uint *)((int)param_1 + 2);
                      uVar18 = uVar18 - 2;
                    }
                    uVar14 = CONCAT22(uVar7,uVar7);
                    while (3 < (int)uVar18) {
                      *param_1 = uVar14;
                      param_1 = param_1 + 1;
                      uVar18 = uVar18 - 4;
                    }
                    if (uVar18 == 0) goto LAB_006d957d;
                  }
                  bVar16 = (byte)uVar14;
                  if ((char)uVar18 != '\x01') {
                    if ((char)uVar18 != '\x02') {
                      *(byte *)((int)param_1 + 2) = bVar16;
                    }
                    *(byte *)((int)param_1 + 1) = bVar16;
                  }
                  *(byte *)param_1 = bVar16;
                  param_1 = (uint *)((int)param_1 + uVar18);
                }
                else {
                  uVar14 = *(uint *)((uint)param_1 & 0xfffffffc);
                  if (((uint)param_1 & 3) == 0) {
LAB_006d9450:
                    bVar16 = (byte)uVar18;
                    while ('\x03' < (char)bVar16) {
                      *param_1 = CONCAT22(CONCAT11(param_8[uVar14 >> 8 & 0xff],
                                                   param_8[uVar14 & 0xff]),
                                          CONCAT11(param_8[uVar14 >> 0x18],
                                                   param_8[uVar14 >> 0x10 & 0xff])) << 0x10 |
                                 (uint)CONCAT11(param_8[uVar14 >> 8 & 0xff],param_8[uVar14 & 0xff]);
                      uVar14 = param_1[1];
                      param_1 = param_1 + 1;
                      bVar16 = bVar16 - 4;
                    }
                    uVar18 = (uint)bVar16;
                    if (bVar16 == 0) goto LAB_006d957d;
                  }
                  else {
                    uVar14 = uVar14 >> (((byte)param_1 & 3) << 3);
                    if (3 < uVar18) {
                      if (((uint)param_1 & 1) != 0) {
                        uVar18 = (uint)(byte)((char)uVar18 - 1);
                        *(undefined *)param_1 = param_8[uVar14 & 0xff];
                        uVar14 = uVar14 >> 8;
                        param_1 = (uint *)((int)param_1 + 1);
                      }
                      if (((uint)param_1 & 2) != 0) {
                        uVar18 = (uint)(byte)((char)uVar18 - 2);
                        *(ushort *)param_1 =
                             CONCAT11(param_8[uVar14 >> 8 & 0xff],param_8[uVar14 & 0xff]);
                        param_1 = (uint *)((int)param_1 + 2);
                      }
                      uVar14 = *param_1;
                      goto LAB_006d9450;
                    }
                  }
                  if ((char)uVar18 != '\x01') {
                    if ((char)uVar18 != '\x02') {
                      uVar6 = uVar14 >> 0x10;
                      uVar14 = uVar14 & 0xffff;
                      *(undefined *)((int)param_1 + 2) = param_8[uVar6 & 0xff];
                    }
                    *(undefined *)((int)param_1 + 1) = param_8[uVar14 >> 8 & 0xff];
                  }
                  *(undefined *)param_1 = param_8[uVar14 & 0xff];
                  param_1 = (uint *)((int)param_1 + uVar18);
                }
              }
LAB_006d957d:
              uVar18 = 0;
              if ((int)uVar13 < 1) goto cf_common_join_006D958E;
              uVar18 = (uint)(byte)*param_10;
              param_10 = (uint *)((int)param_10 + 1);
              local_8 = uVar18;
            } while( true );
          }
          if ((int)uVar18 <= (int)param_6) {
            do {
              param_15 = param_15 - uVar18;
              if ((local_8 & 0x80) == 0) {
                param_1 = (uint *)((int)param_1 + uVar18);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar18) {
                  do {
                    puVar20 = (uint *)((int)param_1 + 1);
                    uVar13 = *param_10;
                    param_10 = (uint *)((int)param_10 + 1);
                    uVar18 = uVar18 - 1;
                    *(undefined *)param_1 = param_11[(byte)uVar13];
                    param_1 = puVar20;
                  } while (uVar18 != 0);
                }
              }
              else {
                uVar13 = *param_10;
                param_10 = (uint *)((int)param_10 + 1);
                param_5 = (uint)(byte)uVar13;
                if (param_5 == param_9) {
                  if (0 < (int)uVar18) {
                    do {
                      puVar20 = (uint *)((int)param_1 + 1);
                      uVar18 = uVar18 - 1;
                      *(undefined *)param_1 = param_8[(byte)*param_1];
                      param_1 = puVar20;
                    } while (uVar18 != 0);
                  }
                }
                else if (0 < (int)uVar18) {
                  do {
                    *(undefined *)param_1 = param_11[param_5];
                    param_1 = (uint *)((int)param_1 + 1);
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
              }
              if ((int)param_15 < 1) {
                uVar18 = 0;
                break;
              }
              uVar18 = *param_10;
              local_8 = (uint)(byte)uVar18;
              param_10 = (uint *)((int)param_10 + 1);
              if (((byte)uVar18 & 0x80) == 0) {
                uVar18 = local_8 & 0x7f;
              }
              else {
                uVar18 = local_8 & 0x3f;
              }
            } while ((int)uVar18 <= (int)param_15);
          }
          uVar18 = uVar18 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          puVar21 = param_10;
          if ((local_8 & 0x40) == 0) {
            puVar20 = param_1;
            if (0 < (int)param_15) {
              do {
                param_1 = (uint *)((int)puVar20 + 1);
                *(undefined *)puVar20 = param_11[(byte)*param_10];
                param_10 = (uint *)((int)param_10 + 1);
                param_15 = param_15 - 1;
                puVar20 = param_1;
                puVar21 = param_10;
              } while (param_15 != 0);
            }
          }
          else if (0 < (int)param_15) {
            param_5 = (uint)(byte)*param_10;
            puVar20 = param_1;
            puVar21 = (uint *)((int)param_10 + 1);
            if (param_5 == param_9) {
              do {
                param_1 = (uint *)((int)puVar20 + 1);
                param_15 = param_15 - 1;
                *(undefined *)puVar20 = param_8[(byte)*puVar20];
                puVar20 = param_1;
              } while (param_15 != 0);
            }
            else {
              do {
                *(undefined *)param_1 = param_11[param_5];
                param_1 = (uint *)((int)param_1 + 1);
                param_15 = param_15 - 1;
              } while (param_15 != 0);
            }
          }
        }
        else {
          param_1 = (uint *)param_12;
          uVar13 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar18 <= (int)param_6) {
            do {
              param_15 = param_15 - uVar18;
              if ((local_8 & 0x80) == 0) {
                puVar20 = (uint *)((int)puVar20 + uVar18);
                uVar13 = ((uVar13 & 0xff) << 8) >> ((byte)uVar18 & 7);
                if (uVar13 < 0x81) {
                  param_1 = (uint *)((int)param_1 + 1);
                }
                else {
                  uVar13 = uVar13 >> 8 & 0xff;
                }
                param_1 = (uint *)((int)param_1 + ((int)uVar18 >> 3));
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar18 - 1)) {
                  do {
                    if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                      *(undefined *)puVar20 = param_11[(byte)*param_10];
                      param_10 = (uint *)((int)param_10 + 1);
                    }
                    puVar20 = (uint *)((int)puVar20 + 1);
                    bVar16 = (byte)uVar13 >> 1;
                    if (bVar16 == 0) {
                      bVar16 = 0x80;
                      param_1 = (uint *)((int)param_1 + 1);
                    }
                    uVar13 = (uint)bVar16;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
              }
              else {
                puVar21 = (uint *)((int)param_10 + 1);
                param_5 = (uint)(byte)*param_10;
                param_10 = puVar21;
                if (param_5 == param_9) {
                  uVar13 = ((uVar13 & 0xff) << 8) >> ((byte)uVar18 & 7);
                  if (uVar13 < 0x81) {
                    param_1 = (uint *)((int)param_1 + 1);
                  }
                  else {
                    uVar13 = uVar13 >> 8 & 0xff;
                  }
                  param_1 = (uint *)((int)param_1 + ((int)uVar18 >> 3));
                  puVar21 = puVar20;
                  if (-1 < (int)(uVar18 - 1)) {
                    do {
                      puVar20 = (uint *)((int)puVar21 + 1);
                      uVar18 = uVar18 - 1;
                      *(undefined *)puVar21 = param_8[(byte)*puVar21];
                      puVar21 = puVar20;
                    } while (uVar18 != 0);
                  }
                }
                else {
                  bVar16 = param_11[param_5];
                  if (-1 < (int)(uVar18 - 1)) {
                    do {
                      if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                        *(byte *)puVar20 = bVar16;
                      }
                      puVar20 = (uint *)((int)puVar20 + 1);
                      bVar15 = (byte)uVar13 >> 1;
                      if (bVar15 == 0) {
                        bVar15 = 0x80;
                        param_1 = (uint *)((int)param_1 + 1);
                      }
                      uVar13 = (uint)bVar15;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar18 = 0;
                break;
              }
              uVar18 = *param_10;
              local_8 = (uint)(byte)uVar18;
              param_10 = (uint *)((int)param_10 + 1);
              if (((byte)uVar18 & 0x80) == 0) {
                uVar18 = local_8 & 0x7f;
              }
              else {
                uVar18 = local_8 & 0x3f;
              }
            } while ((int)uVar18 <= (int)param_15);
          }
          uVar18 = uVar18 - param_15;
          if ((local_8 & 0x80) == 0) {
LAB_006d9a18:
            puVar20 = (uint *)((int)puVar20 + param_15);
          }
          else if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15 - 1)) {
              do {
                if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                  *(undefined *)puVar20 = param_11[(byte)*param_10];
                  param_10 = (uint *)((int)param_10 + 1);
                }
                puVar20 = (uint *)((int)puVar20 + 1);
                bVar16 = (byte)uVar13 >> 1;
                uVar13 = (uint)bVar16;
                if (bVar16 == 0) {
                  uVar13 = 0x80;
                  param_1 = (uint *)((int)param_1 + 1);
                }
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              param_1 = puVar20;
              puVar21 = param_10;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15) {
            puVar21 = (uint *)((int)param_10 + 1);
            param_5 = (uint)(byte)*param_10;
            param_10 = puVar21;
            if (param_5 == param_9) {
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                param_1 = (uint *)((int)puVar20 + 1);
                param_15 = param_15 - 1;
                *(undefined *)puVar20 = param_8[(byte)*puVar20];
                puVar20 = param_1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
            }
            else {
              param_5 = (uint)(byte)param_11[param_5];
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                  *(undefined *)puVar20 = param_11[param_5];
                }
                puVar20 = (uint *)((int)puVar20 + 1);
                bVar16 = (byte)uVar13 >> 1;
                uVar13 = (uint)bVar16;
                if (bVar16 == 0) {
                  uVar13 = 0x80;
                  param_1 = (uint *)((int)param_1 + 1);
                }
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              param_1 = puVar20;
            }
            goto cf_common_join_006D9EAC;
          }
cf_common_join_006D9A1A:
          param_12 = param_12 + param_13;
          param_1 = puVar20;
          puVar21 = param_10;
        }
      }
      else {
        if (param_12 != (byte *)0x0) {
          param_1 = (uint *)param_12;
          uVar13 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar18 <= (int)param_6) {
            do {
              param_15 = param_15 - uVar18;
              if ((local_8 & 0x80) == 0) {
                puVar20 = (uint *)((int)puVar20 + uVar18);
                uVar13 = ((uVar13 & 0xff) << 8) >> ((byte)uVar18 & 7);
                if (uVar13 < 0x81) {
                  param_1 = (uint *)((int)param_1 + 1);
                }
                else {
                  uVar13 = uVar13 >> 8 & 0xff;
                }
                param_1 = (uint *)((int)param_1 + ((int)uVar18 >> 3));
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar18 - 1)) {
                  do {
                    puVar21 = (uint *)((int)param_10 + 1);
                    param_5 = (uint)(byte)*param_10;
                    if (param_5 == param_9) {
                      bVar16 = param_8[(byte)*puVar20];
LAB_006d9875:
                      *(byte *)puVar20 = bVar16;
                    }
                    else if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                      bVar16 = param_11[param_5];
                      goto LAB_006d9875;
                    }
                    puVar20 = (uint *)((int)puVar20 + 1);
                    bVar16 = (byte)uVar13 >> 1;
                    if (bVar16 == 0) {
                      bVar16 = 0x80;
                      param_1 = (uint *)((int)param_1 + 1);
                    }
                    uVar13 = (uint)bVar16;
                    uVar18 = uVar18 - 1;
                    param_10 = puVar21;
                  } while (uVar18 != 0);
                }
              }
              else {
                puVar21 = (uint *)((int)param_10 + 1);
                param_5 = (uint)(byte)*param_10;
                param_10 = puVar21;
                if (param_5 == param_9) {
                  uVar13 = ((uVar13 & 0xff) << 8) >> ((byte)uVar18 & 7);
                  if (uVar13 < 0x81) {
                    param_1 = (uint *)((int)param_1 + 1);
                  }
                  else {
                    uVar13 = uVar13 >> 8 & 0xff;
                  }
                  param_1 = (uint *)((int)param_1 + ((int)uVar18 >> 3));
                  puVar21 = puVar20;
                  if (-1 < (int)(uVar18 - 1)) {
                    do {
                      puVar20 = (uint *)((int)puVar21 + 1);
                      uVar18 = uVar18 - 1;
                      *(undefined *)puVar21 = param_8[(byte)*puVar21];
                      puVar21 = puVar20;
                    } while (uVar18 != 0);
                  }
                }
                else {
                  bVar16 = param_11[param_5];
                  if (-1 < (int)(uVar18 - 1)) {
                    do {
                      if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                        *(byte *)puVar20 = bVar16;
                      }
                      puVar20 = (uint *)((int)puVar20 + 1);
                      bVar15 = (byte)uVar13 >> 1;
                      if (bVar15 == 0) {
                        bVar15 = 0x80;
                        param_1 = (uint *)((int)param_1 + 1);
                      }
                      uVar13 = (uint)bVar15;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar18 = 0;
                break;
              }
              uVar18 = *param_10;
              local_8 = (uint)(byte)uVar18;
              param_10 = (uint *)((int)param_10 + 1);
              if (((byte)uVar18 & 0x80) == 0) {
                uVar18 = local_8 & 0x7f;
              }
              else {
                uVar18 = local_8 & 0x3f;
              }
            } while ((int)uVar18 <= (int)param_15);
          }
          uVar18 = uVar18 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9a18;
          if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15 - 1)) {
              do {
                puVar21 = (uint *)((int)param_10 + 1);
                param_5 = (uint)(byte)*param_10;
                if (param_5 == param_9) {
                  bVar16 = param_8[(byte)*puVar20];
LAB_006d99e9:
                  *(byte *)puVar20 = bVar16;
                }
                else if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                  bVar16 = param_11[param_5];
                  goto LAB_006d99e9;
                }
                puVar20 = (uint *)((int)puVar20 + 1);
                bVar16 = (byte)uVar13 >> 1;
                uVar13 = (uint)bVar16;
                if (bVar16 == 0) {
                  uVar13 = 0x80;
                  param_1 = (uint *)((int)param_1 + 1);
                }
                param_15 = param_15 - 1;
                param_10 = puVar21;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              param_1 = puVar20;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15) {
            puVar21 = (uint *)((int)param_10 + 1);
            param_5 = (uint)(byte)*param_10;
            param_10 = puVar21;
            if (param_5 == param_9) {
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                param_1 = (uint *)((int)puVar20 + 1);
                param_15 = param_15 - 1;
                *(undefined *)puVar20 = param_8[(byte)*puVar20];
                puVar20 = param_1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
            }
            else {
              bVar16 = param_11[param_5];
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((byte)((byte)*param_1 & (byte)uVar13) != 0) {
                  *(byte *)puVar20 = bVar16;
                }
                puVar20 = (uint *)((int)puVar20 + 1);
                bVar15 = (byte)uVar13 >> 1;
                uVar13 = (uint)bVar15;
                if (bVar15 == 0) {
                  uVar13 = 0x80;
                  param_1 = (uint *)((int)param_1 + 1);
                }
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              param_1 = puVar20;
            }
            goto cf_common_join_006D9EAC;
          }
          goto cf_common_join_006D9A1A;
        }
        if (param_11 == (undefined *)0x0) {
          if ((int)uVar18 <= (int)param_6) {
            do {
              param_15 = param_15 - uVar18;
              if ((local_8 & 0x80) == 0) {
                param_1 = (uint *)((int)param_1 + uVar18);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar18) {
                  do {
                    bVar16 = (byte)*param_10;
                    param_10 = (uint *)((int)param_10 + 1);
                    param_5 = (uint)bVar16;
                    if (param_5 == param_9) {
                      bVar16 = param_8[(byte)*param_1];
                    }
                    *(byte *)param_1 = bVar16;
                    param_1 = (uint *)((int)param_1 + 1);
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
              }
              else {
                bVar16 = (byte)*param_10;
                param_10 = (uint *)((int)param_10 + 1);
                param_5 = (uint)bVar16;
                if (param_5 == param_9) {
                  puVar20 = param_1;
                  if (0 < (int)uVar18) {
                    do {
                      param_1 = (uint *)((int)puVar20 + 1);
                      uVar18 = uVar18 - 1;
                      *(undefined *)puVar20 = param_8[(byte)*puVar20];
                      puVar20 = param_1;
                    } while (uVar18 != 0);
                  }
                }
                else if (0 < (int)uVar18) {
                  puVar20 = param_1;
                  for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *puVar20 = CONCAT22(CONCAT11(bVar16,bVar16),CONCAT11(bVar16,bVar16));
                    puVar20 = puVar20 + 1;
                  }
                  for (uVar13 = uVar18 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *(byte *)puVar20 = bVar16;
                    puVar20 = (uint *)((int)puVar20 + 1);
                  }
                  param_1 = (uint *)((int)param_1 + uVar18);
                }
              }
              if ((int)param_15 < 1) {
                uVar18 = 0;
                break;
              }
              uVar18 = *param_10;
              local_8 = (uint)(byte)uVar18;
              param_10 = (uint *)((int)param_10 + 1);
              if (((byte)uVar18 & 0x80) == 0) {
                uVar18 = local_8 & 0x7f;
              }
              else {
                uVar18 = local_8 & 0x3f;
              }
            } while ((int)uVar18 <= (int)param_15);
          }
          uVar18 = uVar18 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          puVar21 = param_10;
          if ((local_8 & 0x40) == 0) {
            if (0 < (int)param_15) {
              do {
                bVar16 = (byte)*param_10;
                param_10 = (uint *)((int)param_10 + 1);
                param_5 = (uint)bVar16;
                if (param_5 == param_9) {
                  bVar16 = param_8[(byte)*param_1];
                }
                *(byte *)param_1 = bVar16;
                param_1 = (uint *)((int)param_1 + 1);
                param_15 = param_15 - 1;
                puVar21 = param_10;
              } while (param_15 != 0);
            }
          }
          else if (0 < (int)param_15) {
            bVar16 = (byte)*param_10;
            param_5 = (uint)bVar16;
            puVar20 = param_1;
            puVar21 = (uint *)((int)param_10 + 1);
            if (param_5 == param_9) {
              do {
                param_1 = (uint *)((int)puVar20 + 1);
                param_15 = param_15 - 1;
                *(undefined *)puVar20 = param_8[(byte)*puVar20];
                puVar20 = param_1;
              } while (param_15 != 0);
            }
            else {
              for (uVar13 = param_15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar20 = CONCAT22(CONCAT11(bVar16,bVar16),CONCAT11(bVar16,bVar16));
                puVar20 = puVar20 + 1;
              }
              for (uVar13 = param_15 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(byte *)puVar20 = bVar16;
                puVar20 = (uint *)((int)puVar20 + 1);
              }
              param_1 = (uint *)((int)param_1 + param_15);
            }
          }
        }
        else {
          if ((int)uVar18 <= (int)param_6) {
            do {
              param_15 = param_15 - uVar18;
              if ((local_8 & 0x80) == 0) {
                param_1 = (uint *)((int)param_1 + uVar18);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar18) {
                  do {
                    param_5 = (uint)(byte)*param_10;
                    param_10 = (uint *)((int)param_10 + 1);
                    puVar17 = param_11;
                    if (param_5 == param_9) {
                      param_5 = (uint)(byte)*param_1;
                      puVar17 = param_8;
                    }
                    *(undefined *)param_1 = puVar17[param_5];
                    param_1 = (uint *)((int)param_1 + 1);
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
              }
              else {
                uVar13 = *param_10;
                param_10 = (uint *)((int)param_10 + 1);
                param_5 = (uint)(byte)uVar13;
                if (param_5 == param_9) {
                  if (0 < (int)uVar18) {
                    do {
                      puVar20 = (uint *)((int)param_1 + 1);
                      uVar18 = uVar18 - 1;
                      *(undefined *)param_1 = param_8[(byte)*param_1];
                      param_1 = puVar20;
                    } while (uVar18 != 0);
                  }
                }
                else {
                  bVar16 = param_11[param_5];
                  if (0 < (int)uVar18) {
                    puVar20 = param_1;
                    for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                      *puVar20 = CONCAT22(CONCAT11(bVar16,bVar16),CONCAT11(bVar16,bVar16));
                      puVar20 = puVar20 + 1;
                    }
                    for (uVar13 = uVar18 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                      *(byte *)puVar20 = bVar16;
                      puVar20 = (uint *)((int)puVar20 + 1);
                    }
                    param_1 = (uint *)((int)param_1 + uVar18);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar18 = 0;
                break;
              }
              uVar18 = *param_10;
              local_8 = (uint)(byte)uVar18;
              param_10 = (uint *)((int)param_10 + 1);
              if (((byte)uVar18 & 0x80) == 0) {
                uVar18 = local_8 & 0x7f;
              }
              else {
                uVar18 = local_8 & 0x3f;
              }
            } while ((int)uVar18 <= (int)param_15);
          }
          uVar18 = uVar18 - param_15;
          if ((local_8 & 0x80) == 0) {
LAB_006d9c24:
            param_1 = (uint *)((int)param_1 + param_15);
            puVar21 = param_10;
          }
          else {
            puVar21 = param_10;
            if ((local_8 & 0x40) == 0) {
              if (0 < (int)param_15) {
                do {
                  param_5 = (uint)(byte)*param_10;
                  param_10 = (uint *)((int)param_10 + 1);
                  puVar17 = param_11;
                  if (param_5 == param_9) {
                    param_5 = (uint)(byte)*param_1;
                    puVar17 = param_8;
                  }
                  *(undefined *)param_1 = puVar17[param_5];
                  param_1 = (uint *)((int)param_1 + 1);
                  param_15 = param_15 - 1;
                  puVar21 = param_10;
                } while (param_15 != 0);
              }
            }
            else if (0 < (int)param_15) {
              param_5 = (uint)(byte)*param_10;
              puVar20 = param_1;
              puVar21 = (uint *)((int)param_10 + 1);
              if (param_5 == param_9) {
                do {
                  param_1 = (uint *)((int)puVar20 + 1);
                  param_15 = param_15 - 1;
                  *(undefined *)puVar20 = param_8[(byte)*puVar20];
                  puVar20 = param_1;
                } while (param_15 != 0);
              }
              else {
                uVar11 = param_11[param_5];
                for (uVar13 = param_15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *puVar20 = CONCAT22(CONCAT11(uVar11,uVar11),CONCAT11(uVar11,uVar11));
                  puVar20 = puVar20 + 1;
                }
                for (uVar13 = param_15 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined1 *)puVar20 = uVar11;
                  puVar20 = (uint *)((int)puVar20 + 1);
                }
                param_1 = (uint *)((int)param_1 + param_15);
              }
            }
          }
        }
      }
    }
    goto cf_common_join_006D9EAC;
  }
  param_1 = (uint *)((int)param_1 + param_2);
  goto LAB_006d9f11;
cf_common_join_006D8DA5:
  param_1 = puVar20;
  puVar21 = param_10;
  if ((int)uVar13 < 1) goto cf_common_join_006D9EAC;
  uVar18 = uVar18 - uVar13;
  if ((local_8 & 0x80) == 0) {
    param_1 = (uint *)((int)puVar20 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) != 0) {
    bVar16 = (byte)*param_10;
    uVar7 = CONCAT11(bVar16,bVar16);
    uVar14 = (uint)uVar7;
    puVar21 = (uint *)((int)param_10 + 1);
    if (3 < (int)uVar13) {
      if (((uint)puVar20 & 1) != 0) {
        *(byte *)puVar20 = bVar16;
        puVar20 = (uint *)((int)puVar20 + 1);
        uVar13 = uVar13 - 1;
      }
      if (((uint)puVar20 & 2) != 0) {
        *(ushort *)puVar20 = uVar7;
        puVar20 = (uint *)((int)puVar20 + 2);
        uVar13 = uVar13 - 2;
      }
      uVar14 = CONCAT22(uVar7,uVar7);
      while (3 < (int)uVar13) {
        *puVar20 = uVar14;
        puVar20 = puVar20 + 1;
        uVar13 = uVar13 - 4;
      }
      param_1 = puVar20;
      if (uVar13 == 0) goto cf_common_join_006D9EAC;
    }
    bVar16 = (byte)uVar14;
    if ((char)uVar13 != '\x01') {
      if ((char)uVar13 != '\x02') {
        *(byte *)((int)puVar20 + 2) = bVar16;
      }
      *(byte *)((int)puVar20 + 1) = bVar16;
    }
    *(byte *)puVar20 = bVar16;
    param_1 = (uint *)((int)puVar20 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  bVar16 = (byte)*param_10;
  if ((bVar16 < (byte)param_9) || (local_14 < bVar16)) {
    if (3 < (int)uVar13) {
      if (((uint)puVar20 & 1) != 0) {
        *(byte *)puVar20 = (byte)*param_10;
        param_10 = (uint *)((int)param_10 + 1);
        puVar20 = (uint *)((int)puVar20 + 1);
        uVar13 = uVar13 - 1;
      }
      if (((uint)puVar20 & 2) != 0) {
        *(short *)puVar20 = (short)*param_10;
        param_10 = (uint *)((int)param_10 + 2);
        puVar20 = (uint *)((int)puVar20 + 2);
        uVar13 = uVar13 - 2;
      }
      while (3 < (int)uVar13) {
        uVar14 = *param_10;
        param_10 = param_10 + 1;
        *puVar20 = uVar14;
        puVar20 = puVar20 + 1;
        uVar13 = uVar13 - 4;
      }
      param_1 = puVar20;
      puVar21 = param_10;
      if (uVar13 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar13 != '\x01') {
      if ((char)uVar13 != '\x02') {
        *(byte *)((int)puVar20 + 2) = *(byte *)((int)param_10 + 2);
      }
      *(byte *)((int)puVar20 + 1) = *(byte *)((int)param_10 + 1);
    }
    *(byte *)puVar20 = (byte)*param_10;
    param_1 = (uint *)((int)puVar20 + uVar13);
    puVar21 = (uint *)((int)param_10 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  uVar14 = *(uint *)((uint)puVar20 & 0xfffffffc);
  if (((uint)puVar20 & 3) == 0) {
LAB_006d8e9b:
    cVar9 = (char)uVar13;
    while ('\x03' < cVar9) {
      uVar6 = *param_10;
      pbVar1 = (byte *)((int)param_10 + 1);
      pbVar2 = (byte *)((int)param_10 + 2);
      pbVar3 = (byte *)((int)param_10 + 3);
      param_10 = param_10 + 1;
      *puVar20 = CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar1,(char)(uVar14 >> 8)) +
                                           param_9 * -0x100],
                                   param_8[(uint)CONCAT11((byte)uVar6,(char)uVar14) +
                                           param_9 * -0x100]),
                          CONCAT11(param_8[(uint)CONCAT11(*pbVar3,(char)(uVar14 >> 0x18)) +
                                           param_9 * -0x100],
                                   param_8[(uint)CONCAT11(*pbVar2,(char)(uVar14 >> 0x10)) +
                                           param_9 * -0x100])) << 0x10 |
                 (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar1,(char)(uVar14 >> 8)) +
                                        param_9 * -0x100],
                                param_8[(uint)CONCAT11((byte)uVar6,(char)uVar14) + param_9 * -0x100]
                               );
      uVar14 = puVar20[1];
      puVar20 = puVar20 + 1;
      cVar9 = cVar9 + -4;
    }
    uVar13 = CONCAT31((int3)(uVar13 >> 8),cVar9);
    param_1 = puVar20;
    puVar21 = param_10;
    if (cVar9 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    uVar14 = uVar14 >> (((byte)puVar20 & 3) << 3);
    if (3 < uVar13) {
      if (((uint)puVar20 & 1) != 0) {
        uVar13 = CONCAT31((int3)(uVar13 >> 8),(char)uVar13 + -1);
        param_10 = (uint *)((int)param_10 + 1);
        *(undefined *)puVar20 = param_8[(uint)CONCAT11(bVar16,(char)uVar14) + param_9 * -0x100];
        uVar14 = uVar14 >> 8;
        puVar20 = (uint *)((int)puVar20 + 1);
      }
      if (((uint)puVar20 & 2) != 0) {
        uVar6 = *param_10;
        pbVar1 = (byte *)((int)param_10 + 1);
        uVar13 = CONCAT31((int3)(uVar13 >> 8),(char)uVar13 + -2);
        param_10 = (uint *)((int)param_10 + 2);
        *(ushort *)puVar20 =
             CONCAT11(param_8[(uint)CONCAT11(*pbVar1,(char)(uVar14 >> 8)) + param_9 * -0x100],
                      param_8[(uint)CONCAT11((byte)uVar6,(char)uVar14) + param_9 * -0x100]);
        puVar20 = (uint *)((int)puVar20 + 2);
      }
      uVar14 = *puVar20;
      goto LAB_006d8e9b;
    }
  }
  param_1 = (uint *)((int)puVar20 + 1);
  *(undefined *)puVar20 = param_8[(uint)CONCAT11((byte)*param_10,(char)uVar14) + param_9 * -0x100];
  uVar12 = (undefined2)(uVar14 >> 8);
  puVar21 = (uint *)((int)param_10 + 1);
  if (uVar13 != 1) {
    if (((uint)param_1 & 3) == 0) {
      uVar12 = (undefined2)*param_1;
    }
    puVar19 = (uint *)((int)puVar20 + 2);
    *(undefined *)param_1 =
         param_8[(uint)CONCAT11(*(byte *)((int)param_10 + 1),(char)uVar12) + param_9 * -0x100];
    uVar11 = (undefined1)((ushort)uVar12 >> 8);
    param_1 = puVar19;
    puVar21 = (uint *)((int)param_10 + 2);
    if (uVar13 != 2) {
      if (((uint)puVar19 & 3) == 0) {
        uVar11 = (undefined1)*puVar19;
      }
      param_1 = (uint *)((int)puVar20 + 3);
      *(undefined *)puVar19 =
           param_8[(uint)CONCAT11(*(byte *)((int)param_10 + 2),uVar11) + param_9 * -0x100];
      puVar21 = (uint *)((int)param_10 + 3);
    }
  }
  goto cf_common_join_006D9EAC;
cf_common_join_006D958E:
  puVar21 = param_10;
  if ((int)uVar13 < 1) goto cf_common_join_006D9EAC;
  uVar18 = uVar18 - uVar13;
  if ((local_8 & 0x80) == 0) {
    param_1 = (uint *)((int)param_1 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) == 0) {
    if (3 < (int)uVar13) {
      if (((uint)param_1 & 1) != 0) {
        *(byte *)param_1 = (byte)*param_10;
        param_10 = (uint *)((int)param_10 + 1);
        param_1 = (uint *)((int)param_1 + 1);
        uVar13 = uVar13 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        *(short *)param_1 = (short)*param_10;
        param_10 = (uint *)((int)param_10 + 2);
        param_1 = (uint *)((int)param_1 + 2);
        uVar13 = uVar13 - 2;
      }
      while (3 < (int)uVar13) {
        uVar14 = *param_10;
        param_10 = param_10 + 1;
        *param_1 = uVar14;
        param_1 = param_1 + 1;
        uVar13 = uVar13 - 4;
      }
      puVar21 = param_10;
      if (uVar13 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar13 != '\x01') {
      if ((char)uVar13 != '\x02') {
        *(byte *)((int)param_1 + 2) = *(byte *)((int)param_10 + 2);
      }
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_10 + 1);
    }
    *(byte *)param_1 = (byte)*param_10;
    param_1 = (uint *)((int)param_1 + uVar13);
    puVar21 = (uint *)((int)param_10 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  bVar16 = (byte)*param_10;
  uVar7 = CONCAT11(bVar16,bVar16);
  uVar14 = (uint)uVar7;
  puVar21 = (uint *)((int)param_10 + 1);
  if ((bVar16 < (byte)param_9) || (local_14 < bVar16)) {
    if (3 < (int)uVar13) {
      if (((uint)param_1 & 1) != 0) {
        *(byte *)param_1 = bVar16;
        param_1 = (uint *)((int)param_1 + 1);
        uVar13 = uVar13 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        *(ushort *)param_1 = uVar7;
        param_1 = (uint *)((int)param_1 + 2);
        uVar13 = uVar13 - 2;
      }
      uVar14 = CONCAT22(uVar7,uVar7);
      while (3 < (int)uVar13) {
        *param_1 = uVar14;
        param_1 = param_1 + 1;
        uVar13 = uVar13 - 4;
      }
      if (uVar13 == 0) goto cf_common_join_006D9EAC;
    }
    bVar16 = (byte)uVar14;
    if ((char)uVar13 != '\x01') {
      if ((char)uVar13 != '\x02') {
        *(byte *)((int)param_1 + 2) = bVar16;
      }
      *(byte *)((int)param_1 + 1) = bVar16;
    }
    *(byte *)param_1 = bVar16;
    param_1 = (uint *)((int)param_1 + uVar13);
    goto cf_common_join_006D9EAC;
  }
  uVar14 = *(uint *)((uint)param_1 & 0xfffffffc);
  if (((uint)param_1 & 3) == 0) {
LAB_006d9621:
    cVar9 = (char)uVar13;
    while ('\x03' < cVar9) {
      *param_1 = CONCAT22(CONCAT11(param_8[uVar14 >> 8 & 0xff],param_8[uVar14 & 0xff]),
                          CONCAT11(param_8[uVar14 >> 0x18],param_8[uVar14 >> 0x10 & 0xff])) << 0x10
                 | (uint)CONCAT11(param_8[uVar14 >> 8 & 0xff],param_8[uVar14 & 0xff]);
      uVar14 = param_1[1];
      param_1 = param_1 + 1;
      cVar9 = cVar9 + -4;
    }
    uVar13 = CONCAT31((int3)(uVar13 >> 8),cVar9);
    if (cVar9 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    uVar14 = uVar14 >> (((byte)param_1 & 3) << 3);
    if (3 < uVar13) {
      if (((uint)param_1 & 1) != 0) {
        uVar13 = CONCAT31((int3)(uVar13 >> 8),(char)uVar13 + -1);
        puVar21 = (uint *)((int)param_10 + 2);
        *(undefined *)param_1 = param_8[uVar14 & 0xff];
        uVar14 = uVar14 >> 8;
        param_1 = (uint *)((int)param_1 + 1);
      }
      if (((uint)param_1 & 2) != 0) {
        uVar13 = CONCAT31((int3)(uVar13 >> 8),(char)uVar13 + -2);
        *(ushort *)param_1 = CONCAT11(param_8[uVar14 >> 8 & 0xff],param_8[uVar14 & 0xff]);
        param_1 = (uint *)((int)param_1 + 2);
      }
      uVar14 = *param_1;
      goto LAB_006d9621;
    }
  }
  if ((char)uVar13 != '\x01') {
    if ((char)uVar13 != '\x02') {
      uVar6 = uVar14 >> 0x10;
      uVar14 = uVar14 & 0xffff;
      *(undefined *)((int)param_1 + 2) = param_8[uVar6 & 0xff];
    }
    *(undefined *)((int)param_1 + 1) = param_8[uVar14 >> 8 & 0xff];
  }
  *(undefined *)param_1 = param_8[uVar14 & 0xff];
  param_1 = (uint *)((int)param_1 + uVar13);
cf_common_join_006D9EAC:
  param_10 = puVar21;
  bVar16 = (byte)local_8;
  iVar10 = (sVar5 - param_4) - param_6;
  if ((int)uVar18 < iVar10) {
    do {
      iVar10 = iVar10 - uVar18;
      if (((byte)local_8 & 0xc0) == 0x80) {
        param_10 = (uint *)((int)param_10 + uVar18);
      }
      bVar16 = (byte)*param_10;
      local_8 = (uint)bVar16;
      uVar18 = local_8;
      puVar20 = (uint *)((int)param_10 + 1);
      if (((bVar16 & 0x80) != 0) && (uVar18 = local_8 & 0x3f, (bVar16 & 0x40) != 0)) {
        puVar20 = (uint *)((int)param_10 + 2);
      }
      param_10 = puVar20;
    } while ((int)uVar18 < iVar10);
  }
  if ((bVar16 & 0xc0) == 0x80) {
    param_10 = (uint *)((int)param_10 + iVar10);
  }
  param_1 = (uint *)((int)param_1 + (param_2 - param_6));
LAB_006d9f11:
  if (param_7 < 1) {
    return;
  }
  goto LAB_006d8b04;
}

