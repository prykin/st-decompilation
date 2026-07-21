
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006B84D0 -> 006D2820 @ 006B85C2 */

void FUN_006d2820(byte *param_1,AnonShape_006B5B10_E0D06CF1 *param_2,byte *param_3,int param_4,
                 uint param_5,uint param_6,uint param_7,int param_8,byte *param_9,int param_10,
                 uint param_11,byte *param_12)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  uint local_c;

  if (param_9 != (byte *)0x0) {
    param_9 = param_9 + param_10 * (int)param_12 + ((int)param_11 >> 3);
  }
  if ((int)param_5 < 1) {
    param_12 = param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16;
  }
  else {
    param_12 = FUN_006cfe10(param_3,param_5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar3 = (uint)*(short *)(param_3 + 0x12);
  bVar7 = (byte)param_11;
  if (param_6 == uVar3) {
    if (param_8 == 0) {
      if (param_9 != (byte *)0x0) {
        FUN_006da660(param_1,param_2,(char *)param_12,param_9,param_10,param_11 & 7,param_6,param_7)
        ;
        return;
      }
      FUN_006d25e0(param_1,(int)param_2,param_12,param_6,param_7);
      return;
    }
    if (param_9 == (byte *)0x0) {
      if (-1 < (int)(param_7 - 1)) {
        param_9 = (byte *)param_7;
        do {
          uVar6 = (uint)*param_12;
          param_12 = param_12 + 1;
          uVar3 = param_6;
          pbVar11 = param_1;
          if (uVar6 == 0) {
            param_1 = param_1 + (int)param_2;
          }
          else {
            while( true ) {
              if ((uVar6 & 0x80) == 0) {
                uVar3 = uVar3 - (uVar6 & 0x7f);
                pbVar11 = pbVar11 + (uVar6 & 0x7f);
                param_1 = pbVar11;
              }
              else {
                uVar4 = uVar6 & 0x3f;
                uVar3 = uVar3 - uVar4;
                if ((uVar6 & 0x40) == 0) {
                  pbVar9 = pbVar11;
                  if (-1 < (int)(uVar4 - 1)) {
                    do {
                      pbVar11 = pbVar9 + 1;
                      bVar7 = *param_12;
                      param_12 = param_12 + 1;
                      uVar4 = uVar4 - 1;
                      *pbVar9 = *(byte *)((uint)bVar7 + param_8);
                      pbVar9 = pbVar11;
                      param_1 = pbVar11;
                    } while (uVar4 != 0);
                  }
                }
                else {
                  bVar7 = *param_12;
                  param_12 = param_12 + 1;
                  bVar7 = *(byte *)((uint)bVar7 + param_8);
                  if (-1 < (int)(uVar4 - 1)) {
                    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                      *(uint *)pbVar11 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                      pbVar11 = pbVar11 + 4;
                    }
                    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *pbVar11 = bVar7;
                      pbVar11 = pbVar11 + 1;
                    }
                    pbVar11 = param_1 + uVar4;
                    param_1 = pbVar11;
                  }
                }
              }
              if ((int)uVar3 < 1) break;
              uVar6 = (uint)*param_12;
              param_12 = param_12 + 1;
            }
            param_1 = pbVar11 + ((int)param_2 - param_6);
          }
          param_9 = param_9 + -1;
        } while (param_9 != (byte *)0x0);
        return;
      }
    }
    else if (-1 < (int)(param_7 - 1)) {
      do {
        uVar6 = 0x80 >> (bVar7 & 7) & 0xff;
        param_5 = param_6;
        uVar3 = (uint)*param_12;
        param_12 = param_12 + 1;
        pbVar11 = param_1;
        param_3 = param_9;
        if (uVar3 == 0) {
          param_1 = param_1 + (int)param_2;
        }
        else {
          while( true ) {
            if ((uVar3 & 0x80) == 0) {
              uVar3 = uVar3 & 0x7f;
              param_5 = param_5 - uVar3;
              pbVar11 = pbVar11 + uVar3;
              uVar6 = (uVar6 << 8) >> ((byte)uVar3 & 7);
              param_1 = pbVar11;
              if (uVar6 < 0x81) {
                uVar6 = uVar6 & 0xff;
                param_3 = param_3 + ((int)uVar3 >> 3) + 1;
              }
              else {
                param_3 = param_3 + ((int)uVar3 >> 3);
                uVar6 = uVar6 >> 8 & 0xff;
              }
            }
            else {
              pbVar9 = (byte *)(uVar3 & 0x3f);
              param_5 = param_5 - (int)pbVar9;
              if ((uVar3 & 0x40) == 0) {
                if (-1 < (int)(pbVar9 + -1)) {
                  do {
                    param_1 = pbVar9;
                    if ((*param_3 & (byte)uVar6) != 0) {
                      *pbVar11 = *(byte *)((uint)*param_12 + param_8);
                    }
                    pbVar11 = pbVar11 + 1;
                    param_12 = param_12 + 1;
                    bVar2 = (byte)uVar6 >> 1;
                    uVar6 = (uint)bVar2;
                    if (bVar2 == 0) {
                      uVar6 = 0x80;
                      param_3 = param_3 + 1;
                    }
                    pbVar9 = param_1 + -1;
                    param_1 = pbVar11;
                  } while (pbVar9 != (byte *)0x0);
                }
              }
              else {
                bVar2 = *param_12;
                param_12 = param_12 + 1;
                bVar2 = *(byte *)((uint)bVar2 + param_8);
                pbVar11 = param_1;
                if (-1 < (int)(pbVar9 + -1)) {
                  do {
                    if ((*param_3 & (byte)uVar6) != 0) {
                      *param_1 = bVar2;
                    }
                    pbVar11 = param_1 + 1;
                    bVar1 = (byte)uVar6 >> 1;
                    uVar6 = (uint)bVar1;
                    if (bVar1 == 0) {
                      uVar6 = 0x80;
                      param_3 = param_3 + 1;
                    }
                    pbVar9 = pbVar9 + -1;
                    param_1 = pbVar11;
                  } while (pbVar9 != (byte *)0x0);
                }
              }
            }
            if ((int)param_5 < 1) break;
            uVar3 = (uint)*param_12;
            param_12 = param_12 + 1;
          }
          param_1 = pbVar11 + ((int)param_2 - param_6);
        }
        param_9 = param_9 + param_10;
        param_7 = param_7 - 1;
      } while (param_7 != 0);
      return;
    }
  }
  else {
    param_3 = param_9;
    if (param_8 == 0) {
      if (param_9 == (byte *)0x0) {
        FUN_006d26d0(param_1,(int)param_2,param_12,uVar3,param_4,param_6,param_7);
        return;
      }
      if (-1 < (int)(param_7 - 1)) {
        param_8 = param_7;
        do {
          uVar6 = (uint)*param_12;
          param_12 = param_12 + 1;
          if (uVar6 == 0) {
            param_1 = param_1 + (int)param_2;
          }
          else {
            param_7 = (0x80 >> (bVar7 & 7)) << 0x18;
            iVar10 = param_4;
            while( true ) {
              while ((uVar6 & 0x80) == 0) {
                uVar4 = uVar6 & 0x7f;
                if (iVar10 < (int)uVar4) goto LAB_006d2b87;
                iVar10 = iVar10 - uVar4;
                bVar2 = *param_12;
                param_12 = param_12 + 1;
                uVar6 = (uint)bVar2;
              }
              uVar4 = uVar6 & 0x3f;
              if (iVar10 < (int)uVar4) break;
              if ((uVar6 & 0x40) == 0) {
                iVar10 = iVar10 - uVar4;
                uVar6 = (uint)param_12[uVar4];
                param_12 = param_12 + uVar4 + 1;
              }
              else {
                iVar10 = iVar10 - uVar4;
                uVar6 = (uint)param_12[1];
                param_12 = param_12 + 2;
              }
            }
LAB_006d2b87:
            uVar4 = uVar4 - iVar10;
            if (((byte)uVar6 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar10;
            }
            uVar5 = param_6;
            if ((int)uVar4 <= (int)param_6) {
              do {
                uVar5 = uVar5 - uVar4;
                if ((uVar6 & 0x80) == 0) {
                  param_1 = param_1 + uVar4;
                  uVar8 = ((param_7 >> 0x18) << 8) >> ((byte)uVar4 & 7);
                  if (uVar8 < 0x81) {
                    param_3 = param_3 + 1;
                  }
                  else {
                    uVar8 = uVar8 >> 8;
                  }
                  param_7 = uVar8 << 0x18;
                  param_3 = param_3 + ((int)uVar4 >> 3);
                }
                else if ((uVar6 & 0x40) == 0) {
                  if (-1 < (int)(uVar4 - 1)) {
                    do {
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      if ((*param_3 & param_7._3_1_) != 0) {
                        *param_1 = *param_12;
                      }
                      param_1 = param_1 + 1;
                      param_12 = param_12 + 1;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      uVar8 = (uint)(param_7._3_1_ >> 1);
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      if (param_7._3_1_ >> 1 == 0) {
                        uVar8 = 0x80;
                        param_3 = param_3 + 1;
                      }
                      param_7 = uVar8 << 0x18;
                      uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                  }
                }
                else {
                  bVar2 = *param_12;
                  param_12 = param_12 + 1;
                  if (-1 < (int)(uVar4 - 1)) {
                    do {
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      if ((*param_3 & param_7._3_1_) != 0) {
                        *param_1 = bVar2;
                      }
                      param_1 = param_1 + 1;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      uVar8 = (uint)(param_7._3_1_ >> 1);
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      if (param_7._3_1_ >> 1 == 0) {
                        uVar8 = 0x80;
                        param_3 = param_3 + 1;
                      }
                      param_7 = uVar8 << 0x18;
                      uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                  }
                }
                if ((int)uVar5 < 1) {
                  uVar4 = 0;
                  break;
                }
                bVar2 = *param_12;
                uVar6 = (uint)bVar2;
                param_12 = param_12 + 1;
                if ((bVar2 & 0x80) == 0) {
                  uVar4 = uVar6 & 0x7f;
                }
                else {
                  uVar4 = uVar6 & 0x3f;
                }
              } while ((int)uVar4 <= (int)uVar5);
            }
            uVar4 = uVar4 - uVar5;
            bVar2 = (byte)uVar6;
            if ((uVar6 & 0x80) == 0) {
              param_1 = param_1 + uVar5;
            }
            else if ((uVar6 & 0x40) == 0) {
              if (-1 < (int)(uVar5 - 1)) {
                do {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  if ((*param_3 & param_7._3_1_) != 0) {
                    *param_1 = *param_12;
                  }
                  param_1 = param_1 + 1;
                  param_12 = param_12 + 1;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  uVar8 = (uint)(param_7._3_1_ >> 1);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  if (param_7._3_1_ >> 1 == 0) {
                    uVar8 = 0x80;
                    param_3 = param_3 + 1;
                  }
                  param_7 = uVar8 << 0x18;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
            }
            else if (0 < (int)uVar5) {
              bVar1 = *param_12;
              param_12 = param_12 + 1;
              if (-1 < (int)(uVar5 - 1)) {
                do {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  if ((*param_3 & param_7._3_1_) != 0) {
                    *param_1 = bVar1;
                  }
                  param_1 = param_1 + 1;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  uVar8 = (uint)(param_7._3_1_ >> 1);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  if (param_7._3_1_ >> 1 == 0) {
                    uVar8 = 0x80;
                    param_3 = param_3 + 1;
                  }
                  param_7 = uVar8 << 0x18;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
            }
            iVar10 = (uVar3 - param_4) - param_6;
            if ((int)uVar4 < iVar10) {
              do {
                iVar10 = iVar10 - uVar4;
                pbVar11 = param_12;
                if (((byte)uVar6 & 0xc0) == 0x80) {
                  pbVar11 = param_12 + uVar4;
                }
                bVar2 = *pbVar11;
                uVar6 = (uint)bVar2;
                param_12 = pbVar11 + 1;
                uVar4 = uVar6;
                if (((bVar2 & 0x80) != 0) && (uVar4 = uVar6 & 0x3f, (bVar2 & 0x40) != 0)) {
                  param_12 = pbVar11 + 2;
                }
              } while ((int)uVar4 < iVar10);
            }
            if ((bVar2 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar10;
            }
            param_1 = param_1 + ((int)param_2 - param_6);
            param_3 = param_9;
          }
          if (param_3 != (byte *)0x0) {
            param_3 = param_3 + param_10;
            param_9 = param_3;
          }
          param_8 = param_8 + -1;
          if (param_8 == 0) {
            return;
          }
        } while( true );
      }
    }
    else if (param_9 == (byte *)0x0) {
      if (-1 < (int)(param_7 - 1)) {
        param_11 = param_7;
        do {
          param_7 = (uint)*param_12;
          param_12 = param_12 + 1;
          iVar10 = param_4;
          if (param_7 == 0) {
            param_1 = param_1 + (int)param_2;
          }
          else {
            while( true ) {
              while ((param_7 & 0x80) == 0) {
                uVar6 = param_7 & 0x7f;
                if (iVar10 < (int)uVar6) goto LAB_006d2e2c;
                bVar7 = *param_12;
                param_12 = param_12 + 1;
                iVar10 = iVar10 - uVar6;
                param_7 = (uint)bVar7;
              }
              uVar6 = param_7 & 0x3f;
              if (iVar10 < (int)uVar6) break;
              if ((param_7 & 0x40) == 0) {
                param_7 = (uint)param_12[uVar6];
                param_12 = param_12 + uVar6 + 1;
                iVar10 = iVar10 - uVar6;
              }
              else {
                param_7 = (uint)param_12[1];
                param_12 = param_12 + 2;
                iVar10 = iVar10 - uVar6;
              }
            }
LAB_006d2e2c:
            uVar6 = uVar6 - iVar10;
            if (((byte)param_7 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar10;
            }
            param_5 = param_6;
            pbVar11 = param_1;
            pbVar9 = param_1;
            if ((int)uVar6 <= (int)param_6) {
              do {
                param_5 = param_5 - uVar6;
                if ((param_7 & 0x80) == 0) {
                  pbVar11 = pbVar9 + uVar6;
                  param_1 = pbVar9 + uVar6;
                }
                else {
                  pbVar11 = pbVar9;
                  if ((param_7 & 0x40) == 0) {
                    if (-1 < (int)(uVar6 - 1)) {
                      do {
                        pbVar11 = pbVar9 + 1;
                        bVar7 = *param_12;
                        param_12 = param_12 + 1;
                        uVar6 = uVar6 - 1;
                        *pbVar9 = *(byte *)((uint)bVar7 + param_8);
                        pbVar9 = pbVar11;
                        param_1 = pbVar11;
                      } while (uVar6 != 0);
                    }
                  }
                  else {
                    bVar7 = *(byte *)((uint)*param_12 + param_8);
                    param_12 = param_12 + 1;
                    if (-1 < (int)(uVar6 - 1)) {
                      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                        *(uint *)pbVar9 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                        pbVar9 = pbVar9 + 4;
                      }
                      for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                        *pbVar9 = bVar7;
                        pbVar9 = pbVar9 + 1;
                      }
                      pbVar11 = param_1 + uVar6;
                      param_1 = pbVar11;
                    }
                  }
                }
                if ((int)param_5 < 1) {
                  uVar6 = 0;
                  break;
                }
                bVar7 = *param_12;
                param_7 = (uint)bVar7;
                param_12 = param_12 + 1;
                if ((bVar7 & 0x80) == 0) {
                  uVar6 = param_7 & 0x7f;
                }
                else {
                  uVar6 = param_7 & 0x3f;
                }
                pbVar9 = pbVar11;
              } while ((int)uVar6 <= (int)param_5);
            }
            uVar6 = uVar6 - param_5;
            if ((param_7 & 0x80) == 0) {
              pbVar11 = pbVar11 + param_5;
            }
            else if ((param_7 & 0x40) == 0) {
              pbVar9 = pbVar11;
              param_1 = (byte *)param_5;
              if (-1 < (int)(param_5 - 1)) {
                do {
                  pbVar11 = pbVar9 + 1;
                  bVar7 = *param_12;
                  param_12 = param_12 + 1;
                  *pbVar9 = *(byte *)((uint)bVar7 + param_8);
                  param_1 = param_1 + -1;
                  pbVar9 = pbVar11;
                } while (param_1 != (byte *)0x0);
              }
            }
            else if (0 < (int)param_5) {
              bVar7 = *(byte *)((uint)*param_12 + param_8);
              param_12 = param_12 + 1;
              if (-1 < (int)(param_5 - 1)) {
                for (uVar4 = param_5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *(uint *)pbVar11 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                  pbVar11 = pbVar11 + 4;
                }
                for (uVar4 = param_5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *pbVar11 = bVar7;
                  pbVar11 = pbVar11 + 1;
                }
                pbVar11 = param_1 + param_5;
              }
            }
            bVar7 = (byte)param_7;
            iVar10 = (uVar3 - param_4) - param_6;
            if ((int)uVar6 < iVar10) {
              do {
                iVar10 = iVar10 - uVar6;
                pbVar9 = param_12;
                if (((byte)param_7 & 0xc0) == 0x80) {
                  pbVar9 = param_12 + uVar6;
                }
                bVar7 = *pbVar9;
                param_7 = (uint)bVar7;
                param_12 = pbVar9 + 1;
                uVar6 = param_7;
                if (((bVar7 & 0x80) != 0) && (uVar6 = param_7 & 0x3f, (bVar7 & 0x40) != 0)) {
                  param_12 = pbVar9 + 2;
                }
              } while ((int)uVar6 < iVar10);
            }
            if ((bVar7 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar10;
            }
            param_1 = pbVar11 + ((int)param_2 - param_6);
          }
          if (param_9 != (byte *)0x0) {
            param_9 = param_9 + param_10;
          }
          param_11 = param_11 - 1;
          if (param_11 == 0) {
            return;
          }
        } while( true );
      }
    }
    else if (-1 < (int)(param_7 - 1)) {
      local_c = param_7;
      do {
        uVar6 = (uint)*param_12;
        param_12 = param_12 + 1;
        if (uVar6 == 0) {
          param_1 = param_1 + (int)param_2;
        }
        else {
          param_7 = (0x80 >> (bVar7 & 7)) << 0x18;
          iVar10 = param_4;
          while( true ) {
            while ((uVar6 & 0x80) == 0) {
              uVar4 = uVar6 & 0x7f;
              if (iVar10 < (int)uVar4) goto LAB_006d306f;
              iVar10 = iVar10 - uVar4;
              bVar2 = *param_12;
              param_12 = param_12 + 1;
              uVar6 = (uint)bVar2;
            }
            uVar4 = uVar6 & 0x3f;
            if (iVar10 < (int)uVar4) break;
            if ((uVar6 & 0x40) == 0) {
              iVar10 = iVar10 - uVar4;
              uVar6 = (uint)param_12[uVar4];
              param_12 = param_12 + uVar4 + 1;
            }
            else {
              iVar10 = iVar10 - uVar4;
              uVar6 = (uint)param_12[1];
              param_12 = param_12 + 2;
            }
          }
LAB_006d306f:
          uVar4 = uVar4 - iVar10;
          if (((byte)uVar6 & 0xc0) == 0x80) {
            param_12 = param_12 + iVar10;
          }
          param_5 = param_6;
          if ((int)uVar4 <= (int)param_6) {
            do {
              param_5 = param_5 - uVar4;
              if ((uVar6 & 0x80) == 0) {
                param_1 = param_1 + uVar4;
                uVar5 = ((param_7 >> 0x18) << 8) >> ((byte)uVar4 & 7);
                if (uVar5 < 0x81) {
                  param_7 = uVar5 << 0x18;
                  param_3 = param_3 + ((int)uVar4 >> 3) + 1;
                }
                else {
                  param_3 = param_3 + ((int)uVar4 >> 3);
                  param_7 = (uVar5 >> 8) << 0x18;
                }
              }
              else if ((uVar6 & 0x40) == 0) {
                if (-1 < (int)(uVar4 - 1)) {
                  do {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    if ((*param_3 & param_7._3_1_) != 0) {
                      *param_1 = *(byte *)((uint)*param_12 + param_8);
                    }
                    param_1 = param_1 + 1;
                    param_12 = param_12 + 1;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar5 = (uint)(param_7._3_1_ >> 1);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    if (param_7._3_1_ >> 1 == 0) {
                      uVar5 = 0x80;
                      param_3 = param_3 + 1;
                    }
                    param_7 = uVar5 << 0x18;
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
              }
              else {
                bVar2 = *param_12;
                param_12 = param_12 + 1;
                bVar2 = *(byte *)((uint)bVar2 + param_8);
                if (-1 < (int)(uVar4 - 1)) {
                  do {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    if ((*param_3 & param_7._3_1_) != 0) {
                      *param_1 = bVar2;
                    }
                    param_1 = param_1 + 1;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar5 = (uint)(param_7._3_1_ >> 1);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    if (param_7._3_1_ >> 1 == 0) {
                      uVar5 = 0x80;
                      param_3 = param_3 + 1;
                    }
                    param_7 = uVar5 << 0x18;
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
              }
              if ((int)param_5 < 1) {
                uVar4 = 0;
                break;
              }
              bVar2 = *param_12;
              uVar6 = (uint)bVar2;
              param_12 = param_12 + 1;
              if ((bVar2 & 0x80) == 0) {
                uVar4 = uVar6 & 0x7f;
              }
              else {
                uVar4 = uVar6 & 0x3f;
              }
            } while ((int)uVar4 <= (int)param_5);
          }
          uVar4 = uVar4 - param_5;
          bVar2 = (byte)uVar6;
          if ((uVar6 & 0x80) == 0) {
            param_1 = param_1 + param_5;
          }
          else if ((uVar6 & 0x40) == 0) {
            if (-1 < (int)(param_5 - 1)) {
              do {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                if ((*param_3 & param_7._3_1_) != 0) {
                  *param_1 = *(byte *)((uint)*param_12 + param_8);
                }
                param_1 = param_1 + 1;
                param_12 = param_12 + 1;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                uVar5 = (uint)(param_7._3_1_ >> 1);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                if (param_7._3_1_ >> 1 == 0) {
                  uVar5 = 0x80;
                  param_3 = param_3 + 1;
                }
                param_7 = uVar5 << 0x18;
                param_5 = param_5 - 1;
              } while (param_5 != 0);
            }
          }
          else if (0 < (int)param_5) {
            bVar1 = *param_12;
            param_12 = param_12 + 1;
            bVar1 = *(byte *)((uint)bVar1 + param_8);
            if (-1 < (int)(param_5 - 1)) {
              do {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                if ((*param_3 & param_7._3_1_) != 0) {
                  *param_1 = bVar1;
                }
                param_1 = param_1 + 1;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                uVar5 = (uint)(param_7._3_1_ >> 1);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                if (param_7._3_1_ >> 1 == 0) {
                  uVar5 = 0x80;
                  param_3 = param_3 + 1;
                }
                param_7 = uVar5 << 0x18;
                param_5 = param_5 - 1;
              } while (param_5 != 0);
            }
          }
          iVar10 = (uVar3 - param_4) - param_6;
          if ((int)uVar4 < iVar10) {
            do {
              iVar10 = iVar10 - uVar4;
              pbVar11 = param_12;
              if (((byte)uVar6 & 0xc0) == 0x80) {
                pbVar11 = param_12 + uVar4;
              }
              bVar2 = *pbVar11;
              uVar6 = (uint)bVar2;
              param_12 = pbVar11 + 1;
              uVar4 = uVar6;
              if (((bVar2 & 0x80) != 0) && (uVar4 = uVar6 & 0x3f, (bVar2 & 0x40) != 0)) {
                param_12 = pbVar11 + 2;
              }
            } while ((int)uVar4 < iVar10);
          }
          if ((bVar2 & 0xc0) == 0x80) {
            param_12 = param_12 + iVar10;
          }
          param_1 = param_1 + ((int)param_2 - param_6);
          param_3 = param_9;
        }
        if (param_3 != (byte *)0x0) {
          param_3 = param_3 + param_10;
          param_9 = param_3;
        }
        local_c = local_c - 1;
      } while (local_c != 0);
    }
  }
  return;
}

