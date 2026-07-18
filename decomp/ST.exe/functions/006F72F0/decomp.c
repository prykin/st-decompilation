
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f72f0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,byte *param_11,uint param_12,
                 int param_13)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint local_10;
  int local_8;
  
  _DAT_00857000 = 1;
  pbVar6 = param_11;
joined_r0x006f7307:
  do {
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    param_11 = (byte *)(uint)*param_6;
    param_6 = param_6 + 1;
    uVar4 = (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar3 = param_12;
    if (uVar4 != 0) {
      iVar5 = param_13;
      if (param_11 == (byte *)0x0) {
        iVar5 = param_12 - 1;
      }
      while( true ) {
        while ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
          if (iVar5 < (int)uVar3) goto LAB_006f736d;
          iVar5 = iVar5 - uVar3;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
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
        iVar5 = iVar5 - uVar3;
        uVar4 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      }
LAB_006f736d:
      uVar3 = uVar3 - iVar5;
    }
    iVar5 = param_8;
    if (param_11 != (byte *)0x0) {
      do {
        if (((uint)param_11 & 0x80) == 0) {
          local_10 = (uint)param_11 & 0x7f;
          if (iVar5 < (int)local_10) goto LAB_006f73be;
        }
        else {
          local_10 = (uint)param_11 & 0x3f;
          if (iVar5 < (int)local_10) goto LAB_006f73be;
          if (((uint)param_11 & 0x40) == 0) {
            param_6 = param_6 + local_10;
          }
          else {
            param_6 = param_6 + 1;
          }
        }
        param_11 = (byte *)(uint)*param_6;
        param_6 = param_6 + 1;
        iVar5 = iVar5 - local_10;
      } while( true );
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
  } while( true );
LAB_006f73be:
  local_10 = local_10 - iVar5;
  if (((byte)param_11 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar5;
  }
  local_8 = param_9;
  if ((int)local_10 <= param_9) {
    do {
      local_8 = local_8 - local_10;
      if (((uint)param_11 & 0x80) == 0) {
        param_1 = param_1 + local_10;
        param_3 = param_3 + local_10;
        pbVar7 = pbVar6;
        if ((int)uVar3 < (int)local_10) {
          do {
            local_10 = local_10 - uVar3;
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
          } while ((int)uVar3 < (int)local_10);
        }
        uVar3 = uVar3 - local_10;
      }
      else if (((uint)param_11 & 0x40) == 0) {
        if (-1 < (int)(local_10 - 1)) {
          uVar9 = uVar4 & 0x80;
          pbVar7 = pbVar6;
          do {
            if ((uVar9 != 0) && (param_5 <= *param_3)) {
              *param_1 = *param_6;
            }
            param_3 = param_3 + 1;
            param_1 = param_1 + 1;
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            pbVar6 = pbVar7;
            if ((int)uVar3 < 0) {
              bVar1 = *pbVar7;
              uVar4 = (uint)bVar1;
              pbVar6 = pbVar7 + 1;
              uVar9 = uVar4 & 0x80;
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
            }
            local_10 = local_10 - 1;
            pbVar7 = pbVar6;
          } while (local_10 != 0);
        }
      }
      else {
        bVar1 = *param_6;
        param_6 = param_6 + 1;
        if (-1 < (int)(local_10 - 1)) {
          uVar9 = uVar4 & 0x80;
          pbVar7 = pbVar6;
          do {
            if ((uVar9 != 0) && (param_5 <= *param_3)) {
              *param_1 = bVar1;
            }
            param_3 = param_3 + 1;
            param_1 = param_1 + 1;
            uVar3 = uVar3 - 1;
            pbVar6 = pbVar7;
            if ((int)uVar3 < 0) {
              bVar2 = *pbVar7;
              uVar4 = (uint)bVar2;
              pbVar6 = pbVar7 + 1;
              uVar9 = uVar4 & 0x80;
              if ((bVar2 & 0x80) == 0) {
                uVar3 = uVar4 & 0x7f;
              }
              else {
                uVar3 = uVar4 & 0x3f;
                if ((bVar2 & 0x40) == 0) {
                  pbVar6 = pbVar6 + uVar3;
                }
                else {
                  pbVar6 = pbVar7 + 2;
                }
              }
            }
            local_10 = local_10 - 1;
            pbVar7 = pbVar6;
          } while (local_10 != 0);
        }
      }
      if (local_8 < 1) {
        local_10 = 0;
        break;
      }
      bVar1 = *param_6;
      param_11 = (byte *)(uint)bVar1;
      param_6 = param_6 + 1;
      if ((bVar1 & 0x80) == 0) {
        local_10 = (uint)param_11 & 0x7f;
      }
      else {
        local_10 = (uint)param_11 & 0x3f;
      }
    } while ((int)local_10 <= local_8);
  }
  pbVar7 = pbVar6;
  if ((0 < local_8) && ((int)uVar3 < 1)) {
    bVar1 = *pbVar6;
    uVar4 = (uint)bVar1;
    pbVar7 = pbVar6 + 1;
    if ((bVar1 & 0x80) == 0) {
      uVar3 = uVar4 & 0x7f;
    }
    else {
      uVar3 = uVar4 & 0x3f;
      if ((bVar1 & 0x40) == 0) {
        pbVar7 = pbVar7 + uVar3;
      }
      else {
        pbVar7 = pbVar6 + 2;
      }
    }
  }
  pbVar6 = (byte *)(local_10 - local_8);
  if (((uint)param_11 & 0x80) == 0) {
    param_1 = param_1 + local_8;
    param_3 = param_3 + local_8;
    pbVar8 = pbVar7;
    if ((int)uVar3 < local_8) {
      do {
        local_8 = local_8 - uVar3;
        bVar1 = *pbVar8;
        pbVar7 = pbVar8 + 1;
        if ((bVar1 & 0x80) == 0) {
          uVar3 = bVar1 & 0x7f;
        }
        else {
          uVar3 = bVar1 & 0x3f;
          if ((bVar1 & 0x40) == 0) {
            pbVar7 = pbVar7 + uVar3;
          }
          else {
            pbVar7 = pbVar8 + 2;
          }
        }
        pbVar8 = pbVar7;
      } while ((int)uVar3 < local_8);
    }
    uVar3 = uVar3 - local_8;
  }
  else if (((uint)param_11 & 0x40) == 0) {
    if (-1 < local_8 + -1) {
      uVar4 = uVar4 & 0x80;
      local_10 = local_8;
      pbVar8 = pbVar7;
      do {
        if ((uVar4 != 0) && (param_5 <= *param_3)) {
          *param_1 = *param_6;
        }
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        param_6 = param_6 + 1;
        uVar3 = uVar3 - 1;
        pbVar7 = pbVar8;
        if ((int)uVar3 < 0) {
          bVar1 = *pbVar8;
          uVar3 = (uint)bVar1;
          pbVar7 = pbVar8 + 1;
          uVar4 = uVar3 & 0x80;
          if ((bVar1 & 0x80) == 0) {
            uVar3 = uVar3 & 0x7f;
          }
          else {
            uVar3 = uVar3 & 0x3f;
            if ((bVar1 & 0x40) == 0) {
              pbVar7 = pbVar7 + uVar3;
            }
            else {
              pbVar7 = pbVar8 + 2;
            }
          }
        }
        local_10 = local_10 + -1;
        pbVar8 = pbVar7;
      } while (local_10 != 0);
    }
  }
  else if (0 < local_8) {
    bVar1 = *param_6;
    param_6 = param_6 + 1;
    if (-1 < local_8 + -1) {
      uVar4 = uVar4 & 0x80;
      local_10 = local_8;
      pbVar8 = pbVar7;
      do {
        if ((uVar4 != 0) && (param_5 <= *param_3)) {
          *param_1 = bVar1;
        }
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        uVar3 = uVar3 - 1;
        pbVar7 = pbVar8;
        if ((int)uVar3 < 0) {
          bVar2 = *pbVar8;
          uVar3 = (uint)bVar2;
          pbVar7 = pbVar8 + 1;
          uVar4 = uVar3 & 0x80;
          if ((bVar2 & 0x80) == 0) {
            uVar3 = uVar3 & 0x7f;
          }
          else {
            uVar3 = uVar3 & 0x3f;
            if ((bVar2 & 0x40) == 0) {
              pbVar7 = pbVar7 + uVar3;
            }
            else {
              pbVar7 = pbVar8 + 2;
            }
          }
        }
        local_10 = local_10 + -1;
        pbVar8 = pbVar7;
      } while (local_10 != 0);
    }
  }
  iVar5 = (param_7 - param_8) - param_9;
  bVar1 = (byte)param_11;
  if ((int)pbVar6 < iVar5) {
    do {
      iVar5 = iVar5 - (int)pbVar6;
      if (((byte)param_11 & 0xc0) == 0x80) {
        param_6 = param_6 + (int)pbVar6;
      }
      bVar1 = *param_6;
      param_11 = (byte *)(uint)bVar1;
      pbVar6 = param_11;
      pbVar8 = param_6 + 1;
      if (((bVar1 & 0x80) != 0) && (pbVar6 = (byte *)((uint)param_11 & 0x3f), (bVar1 & 0x40) != 0))
      {
        pbVar8 = param_6 + 2;
      }
      param_6 = pbVar8;
    } while ((int)pbVar6 < iVar5);
  }
  param_11._0_1_ = bVar1;
  if (((byte)param_11 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar5;
  }
  iVar5 = (param_12 - param_9) - param_13;
  pbVar6 = pbVar7;
  if ((int)uVar3 < iVar5) {
    do {
      iVar5 = iVar5 - uVar3;
      bVar1 = *pbVar6;
      pbVar7 = pbVar6 + 1;
      if ((bVar1 & 0x80) == 0) {
        uVar3 = bVar1 & 0x7f;
      }
      else {
        uVar3 = bVar1 & 0x3f;
        if ((bVar1 & 0x40) == 0) {
          pbVar7 = pbVar7 + uVar3;
        }
        else {
          pbVar7 = pbVar6 + 2;
        }
      }
      pbVar6 = pbVar7;
    } while ((int)uVar3 < iVar5);
  }
  param_1 = param_1 + (param_2 - param_9);
  param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
  pbVar6 = pbVar7;
  goto joined_r0x006f7307;
}

