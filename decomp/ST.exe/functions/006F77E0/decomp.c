
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f77e0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,byte *param_11,uint param_12,
                 int param_13,int param_14)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  int local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar6 = param_11;
joined_r0x006f77f7:
  do {
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    local_8 = (uint)*param_6;
    uVar4 = (uint)*pbVar6;
    param_6 = param_6 + 1;
    pbVar6 = pbVar6 + 1;
    uVar3 = param_12;
    if (uVar4 != 0) {
      iVar5 = param_13;
      if (local_8 == 0) {
        iVar5 = param_12 - 1;
      }
      while( true ) {
        while ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
          if (iVar5 < (int)uVar3) goto LAB_006f785d;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar5 = iVar5 - uVar3;
          uVar4 = (uint)bVar1;
        }
        uVar3 = uVar4 & 0x3f;
        if ((uVar4 & 0x40) == 0) {
          pbVar6 = pbVar6 + uVar3;
        }
        else {
          pbVar6 = pbVar6 + 1;
        }
        if (iVar5 < (int)uVar3) break;
        uVar4 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
        iVar5 = iVar5 - uVar3;
      }
LAB_006f785d:
      uVar3 = uVar3 - iVar5;
    }
    iVar5 = param_8;
    if (local_8 != 0) {
      do {
        if ((local_8 & 0x80) == 0) {
          uVar8 = local_8 & 0x7f;
          if (iVar5 < (int)uVar8) goto LAB_006f78b6;
        }
        else {
          uVar8 = local_8 & 0x3f;
          if (iVar5 < (int)uVar8) goto LAB_006f78b6;
          if ((local_8 & 0x40) == 0) {
            param_6 = param_6 + uVar8;
          }
          else {
            param_6 = param_6 + 1;
          }
        }
        local_8 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar5 = iVar5 - uVar8;
      } while( true );
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
  } while( true );
LAB_006f78b6:
  pbVar9 = (byte *)(uVar8 - iVar5);
  if (((byte)local_8 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar5;
  }
  local_c = param_9;
  param_11 = pbVar6;
  if ((int)pbVar9 <= param_9) {
    do {
      local_c = local_c - (int)pbVar9;
      if ((local_8 & 0x80) == 0) {
        param_1 = param_1 + (int)pbVar9;
        param_3 = param_3 + (int)pbVar9;
        pbVar7 = pbVar6;
        if ((int)uVar3 < (int)pbVar9) {
          do {
            pbVar9 = pbVar9 + -uVar3;
            bVar1 = *pbVar7;
            uVar4 = (uint)bVar1;
            pbVar6 = pbVar7 + 1;
            if ((bVar1 & 0x80) == 0) {
              uVar3 = uVar4 & 0x7f;
            }
            else {
              uVar3 = uVar4 & 0x3f;
              if ((bVar1 & 0x40) == 0) {
                pbVar6 = pbVar6 + uVar3;
              }
              else {
                pbVar6 = pbVar7 + 2;
              }
            }
            pbVar7 = pbVar6;
          } while ((int)uVar3 < (int)pbVar9);
        }
        uVar3 = uVar3 - (int)pbVar9;
      }
      else {
        param_11 = pbVar9;
        if ((local_8 & 0x40) == 0) {
          if (-1 < (int)(pbVar9 + -1)) {
            uVar8 = uVar4 & 0x80;
            pbVar9 = pbVar6;
            do {
              if ((uVar8 != 0) && (param_5 <= *param_3)) {
                *param_1 = *param_6;
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              uVar3 = uVar3 - 1;
              pbVar6 = pbVar9;
              if ((int)uVar3 < 0) {
                bVar1 = *pbVar9;
                uVar4 = (uint)bVar1;
                pbVar6 = pbVar9 + 1;
                uVar8 = uVar4 & 0x80;
                if ((bVar1 & 0x80) == 0) {
                  uVar3 = uVar4 & 0x7f;
                }
                else {
                  uVar3 = uVar4 & 0x3f;
                  if ((bVar1 & 0x40) == 0) {
                    pbVar6 = pbVar6 + uVar3;
                  }
                  else {
                    pbVar6 = pbVar9 + 2;
                  }
                }
              }
              param_11 = param_11 + -1;
              pbVar9 = pbVar6;
            } while (param_11 != (byte *)0x0);
          }
        }
        else {
          param_6 = param_6 + 1;
          if (-1 < (int)(pbVar9 + -1)) {
            uVar8 = uVar4 & 0x80;
            pbVar9 = pbVar6;
            do {
              if ((uVar8 != 0) && (param_5 <= *param_3)) {
                *param_1 = *(byte *)((uint)*param_6 + param_14);
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              uVar3 = uVar3 - 1;
              pbVar6 = pbVar9;
              if ((int)uVar3 < 0) {
                bVar1 = *pbVar9;
                uVar4 = (uint)bVar1;
                pbVar6 = pbVar9 + 1;
                uVar8 = uVar4 & 0x80;
                if ((bVar1 & 0x80) == 0) {
                  uVar3 = uVar4 & 0x7f;
                }
                else {
                  uVar3 = uVar4 & 0x3f;
                  if ((bVar1 & 0x40) == 0) {
                    pbVar6 = pbVar6 + uVar3;
                  }
                  else {
                    pbVar6 = pbVar9 + 2;
                  }
                }
              }
              param_11 = param_11 + -1;
              pbVar9 = pbVar6;
            } while (param_11 != (byte *)0x0);
          }
        }
      }
      param_11 = pbVar6;
      if (local_c < 1) {
        pbVar9 = (byte *)0x0;
        break;
      }
      bVar1 = *param_6;
      local_8 = (uint)bVar1;
      param_6 = param_6 + 1;
      if ((bVar1 & 0x80) == 0) {
        pbVar9 = (byte *)(local_8 & 0x7f);
      }
      else {
        pbVar9 = (byte *)(local_8 & 0x3f);
      }
    } while ((int)pbVar9 <= local_c);
  }
  if ((0 < local_c) && ((int)uVar3 < 1)) {
    bVar1 = *param_11;
    uVar4 = (uint)bVar1;
    if ((bVar1 & 0x80) == 0) {
      uVar3 = uVar4 & 0x7f;
      param_11 = param_11 + 1;
    }
    else {
      uVar3 = uVar4 & 0x3f;
      if ((bVar1 & 0x40) == 0) {
        param_11 = param_11 + 1 + uVar3;
      }
      else {
        param_11 = param_11 + 2;
      }
    }
  }
  uVar8 = (int)pbVar9 - local_c;
  if ((local_8 & 0x80) == 0) {
    param_1 = param_1 + local_c;
    param_3 = param_3 + local_c;
    pbVar6 = param_11;
    if ((int)uVar3 < local_c) {
      do {
        local_c = local_c - uVar3;
        bVar1 = *pbVar6;
        param_11 = pbVar6 + 1;
        if ((bVar1 & 0x80) == 0) {
          uVar3 = bVar1 & 0x7f;
        }
        else {
          uVar3 = bVar1 & 0x3f;
          if ((bVar1 & 0x40) == 0) {
            param_11 = param_11 + uVar3;
          }
          else {
            param_11 = pbVar6 + 2;
          }
        }
        pbVar6 = param_11;
      } while ((int)uVar3 < local_c);
    }
    uVar3 = uVar3 - local_c;
  }
  else if ((local_8 & 0x40) == 0) {
    if (-1 < local_c + -1) {
      uVar4 = uVar4 & 0x80;
      pbVar6 = param_11;
      do {
        if ((uVar4 != 0) && (param_5 <= *param_3)) {
          *param_1 = *(byte *)((uint)*param_6 + param_14);
        }
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        param_6 = param_6 + 1;
        uVar3 = uVar3 - 1;
        param_11 = pbVar6;
        if ((int)uVar3 < 0) {
          bVar1 = *pbVar6;
          uVar3 = (uint)bVar1;
          param_11 = pbVar6 + 1;
          uVar4 = uVar3 & 0x80;
          if ((bVar1 & 0x80) == 0) {
            uVar3 = uVar3 & 0x7f;
          }
          else {
            uVar3 = uVar3 & 0x3f;
            if ((bVar1 & 0x40) == 0) {
              param_11 = param_11 + uVar3;
            }
            else {
              param_11 = pbVar6 + 2;
            }
          }
        }
        local_c = local_c + -1;
        pbVar6 = param_11;
      } while (local_c != 0);
    }
  }
  else if (0 < local_c) {
    bVar1 = *(byte *)((uint)*param_6 + param_14);
    param_6 = param_6 + 1;
    if (-1 < local_c + -1) {
      uVar4 = uVar4 & 0x80;
      do {
        if ((uVar4 != 0) && (param_5 <= *param_3)) {
          *param_1 = bVar1;
        }
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        uVar3 = uVar3 - 1;
        if ((int)uVar3 < 0) {
          bVar2 = *param_11;
          uVar3 = (uint)bVar2;
          uVar4 = uVar3 & 0x80;
          if ((bVar2 & 0x80) == 0) {
            uVar3 = uVar3 & 0x7f;
            param_11 = param_11 + 1;
          }
          else {
            uVar3 = uVar3 & 0x3f;
            if ((bVar2 & 0x40) == 0) {
              param_11 = param_11 + 1 + uVar3;
            }
            else {
              param_11 = param_11 + 2;
            }
          }
        }
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  iVar5 = (param_7 - param_8) - param_9;
  bVar1 = (byte)local_8;
  if ((int)uVar8 < iVar5) {
    do {
      iVar5 = iVar5 - uVar8;
      pbVar6 = param_6;
      if (((byte)local_8 & 0xc0) == 0x80) {
        pbVar6 = param_6 + uVar8;
      }
      bVar1 = *pbVar6;
      local_8 = (uint)bVar1;
      param_6 = pbVar6 + 1;
      uVar8 = local_8;
      if (((bVar1 & 0x80) != 0) && (uVar8 = local_8 & 0x3f, (bVar1 & 0x40) != 0)) {
        param_6 = pbVar6 + 2;
      }
    } while ((int)uVar8 < iVar5);
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_8._0_1_ = bVar1;
  if (((byte)local_8 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar5;
  }
  iVar5 = (param_12 - param_9) - param_13;
  if ((int)uVar3 < iVar5) {
    do {
      iVar5 = iVar5 - uVar3;
      bVar1 = *param_11;
      pbVar6 = param_11 + 1;
      if ((bVar1 & 0x80) == 0) {
        uVar3 = bVar1 & 0x7f;
      }
      else {
        uVar3 = bVar1 & 0x3f;
        if ((bVar1 & 0x40) == 0) {
          pbVar6 = pbVar6 + uVar3;
        }
        else {
          pbVar6 = param_11 + 2;
        }
      }
      param_11 = pbVar6;
    } while ((int)uVar3 < iVar5);
  }
  param_1 = param_1 + (param_2 - param_9);
  param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
  pbVar6 = param_11;
  goto joined_r0x006f77f7;
}

