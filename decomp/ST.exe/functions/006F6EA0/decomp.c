
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006F7166 exact 1-byte output store from zero-filled partial register load at 006F712A;
   exact partial-width MOV at 006F7161 */

void FUN_006f6ea0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 byte *param_13,int param_14,byte *param_15,int param_16,int param_17)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int local_c;
  uint local_8;

  pbVar3 = param_13 + param_8;
  _DAT_00857000 = 1;
  pbVar2 = (byte *)(param_11 + ((int)pbVar3 >> 3));
  if (-1 < param_10 + -1) {
    local_c = param_10;
    do {
      uVar8 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      if (uVar8 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 + param_16;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        uVar7 = 0x80 >> ((byte)pbVar3 & 7);
        iVar9 = param_8;
        while( true ) {
          while ((uVar8 & 0x80) == 0) {
            local_8 = uVar8 & 0x7f;
            if (iVar9 < (int)local_8) goto LAB_006f6f50;
            iVar9 = iVar9 - local_8;
            bVar5 = *param_6;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            uVar8 = (uint)bVar5;
          }
          local_8 = uVar8 & 0x3f;
          if (iVar9 < (int)local_8) break;
          if ((uVar8 & 0x40) == 0) {
            iVar9 = iVar9 - local_8;
            uVar8 = (uint)param_6[local_8];
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + local_8 + 1;
          }
          else {
            iVar9 = iVar9 - local_8;
            uVar8 = (uint)param_6[1];
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 2;
          }
        }
LAB_006f6f50:
        local_8 = local_8 - iVar9;
        if (((byte)uVar8 & 0xc0) == 0x80) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + iVar9;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = param_9;
        pbVar10 = param_1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = pbVar2;
        if ((int)local_8 <= param_9) {
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_10 = param_10 - local_8;
            if ((uVar8 & 0x80) == 0) {
              pbVar10 = pbVar10 + local_8;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 + local_8;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + local_8;
              uVar7 = ((uVar7 & 0xff) << 8) >> ((byte)local_8 & 7);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pbVar10;
              if (uVar7 < 0x81) {
                uVar7 = uVar7 & 0xff;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_13 = param_13 + ((int)local_8 >> 3) + 1;
              }
              else {
                uVar7 = uVar7 >> 8 & 0xff;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_13 = param_13 + ((int)local_8 >> 3);
              }
            }
            else if ((uVar8 & 0x40) == 0) {
              if (-1 < (int)(local_8 - 1)) {
                do {
                  if ((*param_13 & (byte)uVar7) == 0) {
                    if (*param_3 < param_5) {
                      *pbVar10 = *(byte *)((uint)*param_15 + param_17);
                    }
                    else {
                      *pbVar10 = *(byte *)((uint)*param_6 + param_14);
                    }
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_3 = param_3 + 1;
                  pbVar10 = pbVar10 + 1;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_15 = param_15 + 1;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                  bVar5 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar5;
                  if (bVar5 == 0) {
                    uVar7 = 0x80;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_13 = param_13 + 1;
                  }
                  local_8 = local_8 - 1;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = pbVar10;
                } while (local_8 != 0);
              }
            }
            else {
              bVar5 = *(byte *)((uint)*param_6 + param_14);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
              pbVar10 = param_1;
              if (-1 < (int)(local_8 - 1)) {
                do {
                  if ((*param_13 & (byte)uVar7) == 0) {
                    if (*param_3 < param_5) {
                      *param_1 = *(byte *)((uint)*param_15 + param_17);
                    }
                    else {
                      *param_1 = bVar5;
                    }
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_3 = param_3 + 1;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = param_1 + 1;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_15 = param_15 + 1;
                  bVar4 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar4;
                  if (bVar4 == 0) {
                    uVar7 = 0x80;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_13 = param_13 + 1;
                  }
                  local_8 = local_8 - 1;
                  pbVar10 = param_1;
                } while (local_8 != 0);
              }
            }
            if (param_10 < 1) {
              local_8 = 0;
              break;
            }
            bVar5 = *param_6;
            uVar8 = (uint)bVar5;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            if ((bVar5 & 0x80) == 0) {
              local_8 = uVar8 & 0x7f;
            }
            else {
              local_8 = uVar8 & 0x3f;
            }
          } while ((int)local_8 <= param_10);
        }
        local_8 = local_8 - param_10;
        bVar5 = (byte)uVar8;
        if ((uVar8 & 0x80) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 + param_10;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + param_10;
          pbVar10 = pbVar10 + param_10;
        }
        else if ((uVar8 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (byte *)param_10;
          if (-1 < param_10 + -1) {
            do {
              if ((*param_13 & (byte)uVar7) == 0) {
                if (*param_3 < param_5) {
                  bVar4 = *param_15;
                  iVar9 = param_17;
                }
                else {
                  bVar4 = *param_6;
                  iVar9 = param_14;
                }
                *pbVar10 = *(byte *)((uint)bVar4 + iVar9);
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
              pbVar10 = pbVar10 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
              bVar4 = (byte)uVar7 >> 1;
              uVar7 = (uint)bVar4;
              if (bVar4 == 0) {
                uVar7 = 0x80;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_13 = param_13 + 1;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = param_1 + -1;
            } while (param_1 != nullptr);
          }
        }
        else if (0 < param_10) {
          bVar4 = *(byte *)((uint)*param_6 + param_14);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + 1;
          pbVar10 = param_1;
          if (-1 < param_10 + -1) {
            do {
              if ((*param_13 & (byte)uVar7) == 0) {
                if (*param_3 < param_5) {
                  *param_1 = *(byte *)((uint)*param_15 + param_17);
                }
                else {
                  *param_1 = bVar4;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
              pbVar10 = param_1 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 + 1;
              bVar6 = (byte)uVar7 >> 1;
              uVar7 = (uint)bVar6;
              if (bVar6 == 0) {
                uVar7 = 0x80;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_13 = param_13 + 1;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = param_10 + -1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pbVar10;
            } while (param_10 != 0);
          }
        }
        iVar9 = (param_7 - param_8) - param_9;
        if ((int)local_8 < iVar9) {
          do {
            iVar9 = iVar9 - local_8;
            if (((byte)uVar8 & 0xc0) == 0x80) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + local_8;
            }
            bVar5 = *param_6;
            uVar8 = (uint)bVar5;
            local_8 = uVar8;
            pbVar1 = param_6 + 1;
            if (((bVar5 & 0x80) != 0) && (local_8 = uVar8 & 0x3f, (bVar5 & 0x40) != 0)) {
              pbVar1 = param_6 + 2;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = pbVar1;
          } while ((int)local_8 < iVar9);
        }
        if ((bVar5 & 0xc0) == 0x80) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + iVar9;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = pbVar10 + (param_2 - param_9);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 + (param_16 - param_9);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      pbVar2 = pbVar2 + param_12;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

