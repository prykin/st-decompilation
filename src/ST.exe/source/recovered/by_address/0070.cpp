#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0070.cpp

// 00700190 FUN_00700190
#line 1 "decomp/ST.exe/functions/00700190/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00700190(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 byte *param_13,int param_14,int param_15)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  bVar1 = 0;
  _DAT_00857000 = 1;
  pbVar7 = param_6;
  iVar8 = param_10;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x007001b1:
  param_10 = iVar8 + -1;
  if (param_10 < 0) {
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_12 == 1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = iVar8 + -2;
    if (param_10 < 0) {
      return;
    }
    uVar4 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    iVar8 = param_7;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          pbVar7 = pbVar7 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          pbVar7 = pbVar7 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar8 - uVar3) < 1) break;
        uVar4 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
        iVar8 = iVar8 - uVar3;
      }
    }
    uVar4 = (uint)*param_13;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_13 = param_13 + 1;
    iVar8 = param_14;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar8 - uVar3) < 1) break;
        uVar4 = (uint)*param_13;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1;
        iVar8 = iVar8 - uVar3;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = 2;
  }
  local_14 = (uint)*pbVar7;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_6 = pbVar7 + 1;
  if (local_14 != 0) {
    local_24 = local_14 & 0xc0;
    if (local_24 == 0xc0) {
      bVar1 = *param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = pbVar7 + 2;
    }
    bVar6 = *param_13;
    local_10 = (uint)bVar6;
    if ((bVar6 & 0x80) == 0) {
      uVar4 = local_10 & 0x7f;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_13 = param_13 + 1;
    }
    else {
      uVar4 = local_10 & 0x3f;
      if ((bVar6 & 0x40) == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1 + uVar4;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 2;
      }
    }
    iVar8 = param_15;
    pbVar7 = param_13;
    if ((int)uVar4 <= param_15) {
      do {
        iVar8 = iVar8 - uVar4;
        bVar6 = *pbVar7;
        local_10 = (uint)bVar6;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = pbVar7 + 1;
        if ((bVar6 & 0x80) == 0) {
          uVar4 = local_10 & 0x7f;
        }
        else {
          uVar4 = local_10 & 0x3f;
          if ((bVar6 & 0x40) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + uVar4;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = pbVar7 + 2;
          }
        }
        pbVar7 = param_13;
      } while ((int)uVar4 <= iVar8);
    }
    local_8 = param_8;
    pbVar7 = param_6;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_007002fc:
    param_6 = pbVar7;
    if ((local_14 & 0x80) == 0) {
      uVar3 = local_14 & 0x7f;
      if ((int)local_8 < (int)uVar3) goto LAB_00700354;
    }
    else {
      uVar3 = local_14 & 0x3f;
      if ((int)local_8 < (int)uVar3) goto LAB_00700354;
      if (local_24 == 0x80) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + uVar3;
      }
    }
    local_8 = local_8 - uVar3;
    local_14 = (uint)*param_6;
    local_24 = *param_6 & 0xc0;
    pbVar7 = param_6 + 1;
    if (local_24 == 0xc0) {
      bVar1 = param_6[1];
      pbVar7 = param_6 + 2;
    }
    goto LAB_007002fc;
  }
  goto LAB_007008dd;
LAB_00700354:
  uVar3 = uVar3 - local_8;
  if (((byte)local_14 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + local_8;
  }
  local_24 = 0;
  local_20 = uVar4 - iVar8;
  iVar8 = param_11;
  pbVar7 = param_6;
  pbVar10 = param_1;
  puVar11 = param_3;
  local_1c = param_9;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  while (param_6 = pbVar7, 0 < local_1c) {
    local_8 = local_20;
    if ((int)local_20 < local_1c) {
      do {
        local_c = local_10 & 0x80;
        bVar6 = *param_13;
        uVar4 = (uint)bVar6;
        if ((bVar6 & 0x80) != local_c) break;
        local_1c = local_1c - local_20;
        if ((bVar6 & 0x80) == 0) {
          local_20 = uVar4 & 0x7f;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1;
        }
        else {
          local_20 = uVar4 & 0x3f;
          if ((bVar6 & 0x40) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + 1 + local_20;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + 2;
          }
        }
        local_8 = local_8 + local_20;
        local_10 = uVar4;
      } while ((int)local_20 < local_1c);
    }
    if (param_9 < (int)(local_24 + local_8)) {
      local_8 = param_9 - local_24;
    }
    local_24 = local_24 + local_8;
    pbVar9 = pbVar10;
    puVar12 = puVar11;
    if ((int)uVar3 <= (int)local_8) {
      do {
        local_c = local_14 & 0x80;
        local_8 = local_8 - uVar3;
        pbVar10 = pbVar9;
        puVar11 = puVar12;
        if (local_c == 0) {
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (iVar8 != 1) {
                pbVar9 = pbVar9 + 1;
                puVar12 = puVar12 + 1;
              }
              iVar8 = iVar8 + 1;
              if (2 < iVar8) {
                iVar8 = 0;
              }
              uVar3 = uVar3 - 1;
              pbVar10 = pbVar9;
              puVar11 = puVar12;
            } while (uVar3 != 0);
          }
        }
        else if ((local_14 & 0x40) == 0) {
          pbVar5 = pbVar7;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              pbVar7 = pbVar7 + 1;
              iVar8 = 2;
              uVar3 = uVar3 - 1;
            }
            if ((int)uVar3 < 1) goto LAB_007005d2;
            if (((local_10 & 0x80) == 0) || (*puVar12 < param_5)) {
              puVar12 = puVar12 + 1;
              pbVar9 = pbVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
              pbVar5 = pbVar7 + 1;
            }
            else {
              puVar12 = puVar12 + 1;
              *pbVar9 = *pbVar7;
              pbVar9 = pbVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
              pbVar5 = pbVar7 + 1;
            }
          }
          pbVar7 = pbVar5;
          pbVar10 = pbVar9;
          puVar11 = puVar12;
          if (0 < (int)uVar3) {
            do {
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar12)) {
                *pbVar9 = *pbVar5;
              }
              puVar11 = puVar12 + 1;
              pbVar10 = pbVar9 + 1;
              iVar8 = 1;
              pbVar7 = pbVar5 + 1;
              if ((int)(uVar3 - 1) < 1) break;
              iVar8 = 2;
              pbVar7 = pbVar5 + 2;
              if ((int)(uVar3 - 2) < 1) break;
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar11)) {
                *pbVar10 = pbVar5[2];
              }
              puVar12 = puVar12 + 2;
              pbVar9 = pbVar9 + 2;
              pbVar5 = pbVar5 + 3;
              iVar8 = 0;
              uVar3 = uVar3 - 3;
              pbVar7 = pbVar5;
              pbVar10 = pbVar9;
              puVar11 = puVar12;
            } while (0 < (int)uVar3);
          }
        }
        else {
          if (0 < iVar8) {
            if (iVar8 == 1) {
              iVar8 = 2;
              uVar3 = uVar3 - 1;
            }
            if ((int)uVar3 < 1) goto LAB_007005d2;
            if (((local_10 & 0x80) == 0) || (*puVar12 < param_5)) {
              puVar12 = puVar12 + 1;
              pbVar9 = pbVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
            }
            else {
              puVar12 = puVar12 + 1;
              *pbVar9 = bVar1;
              pbVar9 = pbVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
            }
          }
          pbVar10 = pbVar9;
          puVar11 = puVar12;
          if (0 < (int)uVar3) {
            do {
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar12)) {
                *pbVar9 = bVar1;
              }
              puVar11 = puVar12 + 1;
              pbVar10 = pbVar9 + 1;
              iVar8 = 1;
              if (((int)(uVar3 - 1) < 1) || (iVar8 = 2, (int)(uVar3 - 2) < 1)) break;
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar11)) {
                *pbVar10 = bVar1;
              }
              puVar11 = puVar12 + 2;
              pbVar10 = pbVar9 + 2;
              iVar8 = 0;
              uVar3 = uVar3 - 3;
              pbVar9 = pbVar10;
              puVar12 = puVar11;
            } while (0 < (int)uVar3);
          }
        }
LAB_007005d2:
        if ((int)local_8 < 1) {
          uVar3 = 0;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = pbVar7;
          break;
        }
        bVar6 = *pbVar7;
        local_14 = (uint)bVar6;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = pbVar7 + 1;
        if ((bVar6 & 0x80) == 0) {
          uVar3 = local_14 & 0x7f;
        }
        else {
          uVar3 = local_14 & 0x3f;
          if ((bVar6 & 0x40) != 0) {
            bVar1 = *param_6;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = pbVar7 + 2;
          }
        }
        pbVar7 = param_6;
        pbVar9 = pbVar10;
        puVar12 = puVar11;
      } while ((int)uVar3 <= (int)local_8);
    }
    uVar3 = uVar3 - local_8;
    pbVar9 = pbVar10;
    puVar12 = puVar11;
    pbVar7 = param_6;
    if (0 < (int)local_8) {
      if ((local_14 & 0x80) == 0) {
        if (-1 < (int)(local_8 - 1)) {
          do {
            if (iVar8 != 1) {
              pbVar10 = pbVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar8 = iVar8 + 1;
            if (2 < iVar8) {
              iVar8 = 0;
            }
            local_8 = local_8 - 1;
            pbVar9 = pbVar10;
            puVar12 = puVar11;
          } while (local_8 != 0);
        }
      }
      else if ((local_14 & 0x40) == 0) {
        if (0 < iVar8) {
          if (iVar8 == 1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            local_8 = local_8 - 1;
            iVar8 = 2;
          }
          pbVar7 = param_6;
          if ((int)local_8 < 1) goto LAB_007007bd;
          if (((local_10 & 0x80) != 0) && (param_5 <= *puVar11)) {
            *pbVar10 = *param_6;
          }
          puVar11 = puVar11 + 1;
          pbVar10 = pbVar10 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + 1;
          iVar8 = 0;
          local_8 = local_8 - 1;
        }
        pbVar9 = pbVar10;
        puVar12 = puVar11;
        pbVar7 = param_6;
        if (0 < (int)local_8) {
          do {
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar11)) {
              *pbVar10 = *param_6;
            }
            puVar12 = puVar11 + 1;
            pbVar9 = pbVar10 + 1;
            iVar8 = 1;
            pbVar7 = param_6 + 1;
            if ((int)(local_8 - 1) < 1) break;
            iVar8 = 2;
            pbVar7 = param_6 + 2;
            if ((int)(local_8 - 2) < 1) break;
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar12)) {
              *pbVar9 = param_6[2];
            }
            puVar11 = puVar11 + 2;
            pbVar10 = pbVar10 + 2;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 3;
            iVar8 = 0;
            local_8 = local_8 - 3;
            pbVar9 = pbVar10;
            puVar12 = puVar11;
            pbVar7 = param_6;
          } while (0 < (int)local_8);
        }
      }
      else {
        if (0 < iVar8) {
          if (iVar8 == 1) {
            local_8 = local_8 - 1;
          }
          iVar8 = 2;
          if ((int)local_8 < 1) goto LAB_007007bd;
          if (((local_10 & 0x80) == 0) || (*puVar11 < param_5)) {
            puVar11 = puVar11 + 1;
            pbVar10 = pbVar10 + 1;
            iVar8 = 0;
            local_8 = local_8 - 1;
          }
          else {
            puVar11 = puVar11 + 1;
            *pbVar10 = bVar1;
            pbVar10 = pbVar10 + 1;
            iVar8 = 0;
            local_8 = local_8 - 1;
          }
        }
        pbVar9 = pbVar10;
        puVar12 = puVar11;
        if (0 < (int)local_8) {
          do {
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar11)) {
              *pbVar10 = bVar1;
            }
            puVar12 = puVar11 + 1;
            pbVar9 = pbVar10 + 1;
            iVar8 = 1;
            if (((int)(local_8 - 1) < 1) || (iVar8 = 2, (int)(local_8 - 2) < 1)) break;
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar12)) {
              *pbVar9 = bVar1;
            }
            puVar11 = puVar11 + 2;
            pbVar10 = pbVar10 + 2;
            iVar8 = 0;
            local_8 = local_8 - 3;
            pbVar9 = pbVar10;
            puVar12 = puVar11;
          } while (0 < (int)local_8);
        }
      }
    }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_007007bd:
    param_6 = pbVar7;
    pbVar7 = param_6;
    if (((int)uVar3 < 1) && ((int)local_24 < param_9)) {
      bVar6 = *param_6;
      local_14 = (uint)bVar6;
      pbVar7 = param_6 + 1;
      if ((bVar6 & 0x80) == 0) {
        uVar3 = local_14 & 0x7f;
      }
      else {
        uVar3 = local_14 & 0x3f;
        if ((bVar6 & 0x40) != 0) {
          bVar1 = *pbVar7;
          pbVar7 = param_6 + 2;
        }
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = pbVar7;
    if (local_1c <= (int)local_20) {
      local_20 = local_20 - local_1c;
      break;
    }
    local_10 = (uint)*param_13;
    local_1c = local_1c - local_20;
    local_20 = 0;
    pbVar7 = param_6;
    pbVar10 = pbVar9;
    puVar11 = puVar12;
  }
  bVar6 = (byte)local_14;
  iVar8 = (param_14 - param_9) - param_15;
  if ((int)local_20 < iVar8) {
    do {
      iVar8 = iVar8 - local_20;
      bVar2 = *param_13;
      if ((bVar2 & 0x80) == 0) {
        local_20 = bVar2 & 0x7f;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1;
      }
      else {
        local_20 = bVar2 & 0x3f;
        if ((bVar2 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1 + local_20;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 2;
        }
      }
    } while ((int)local_20 < iVar8);
  }
  iVar8 = (param_7 - param_8) - param_9;
  if ((int)uVar3 < iVar8) {
    do {
      iVar8 = iVar8 - uVar3;
      pbVar7 = param_6;
      if (((byte)local_14 & 0xc0) == 0x80) {
        pbVar7 = param_6 + uVar3;
      }
      bVar6 = *pbVar7;
      local_14 = (uint)bVar6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = pbVar7 + 1;
      uVar3 = local_14;
      if (((bVar6 & 0x80) != 0) && (uVar3 = local_14 & 0x3f, (bVar6 & 0x40) != 0)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = pbVar7 + 2;
      }
    } while ((int)uVar3 < iVar8);
  }
  if ((bVar6 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + iVar8;
  }
LAB_007008dd:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_12 = param_12 + 1;
  pbVar7 = param_6;
  iVar8 = param_10;
  if (2 < param_12) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = 0;
  }
  goto joined_r0x007001b1;
}

// 00700920 FUN_00700920
#line 1 "decomp/ST.exe/functions/00700920/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00700920(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,
                 byte *param_13,int param_14,int param_15)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  ushort *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  ushort *local_8;

  bVar1 = 0;
  _DAT_00857000 = 1;
  pbVar10 = param_6;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x0070093e:
  param_10 = param_10 + -1;
  if (param_10 < 0) {
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
    uVar5 = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    iVar8 = param_7;
    if (uVar5 != 0) {
      while( true ) {
        if ((uVar5 & 0x80) == 0) {
          uVar4 = uVar5 & 0x7f;
        }
        else if ((uVar5 & 0x40) == 0) {
          pbVar10 = pbVar10 + (uVar5 & 0x3f);
          uVar4 = uVar5 & 0x3f;
        }
        else {
          pbVar10 = pbVar10 + 1;
          uVar4 = uVar5 & 0x3f;
        }
        if ((int)(iVar8 - uVar4) < 1) break;
        uVar5 = (uint)*pbVar10;
        pbVar10 = pbVar10 + 1;
        iVar8 = iVar8 - uVar4;
      }
    }
    uVar5 = (uint)*param_13;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_13 = param_13 + 1;
    iVar8 = param_14;
    if (uVar5 != 0) {
      while( true ) {
        if ((uVar5 & 0x80) == 0) {
          uVar4 = uVar5 & 0x7f;
        }
        else if ((uVar5 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + (uVar5 & 0x3f);
          uVar4 = uVar5 & 0x3f;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1;
          uVar4 = uVar5 & 0x3f;
        }
        if ((int)(iVar8 - uVar4) < 1) break;
        uVar5 = (uint)*param_13;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1;
        iVar8 = iVar8 - uVar4;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = 0;
    }
  }
  local_18 = (uint)*pbVar10;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_6 = pbVar10 + 1;
  if (local_18 != 0) {
    local_24 = local_18 & 0xc0;
    if (local_24 == 0xc0) {
      bVar1 = *param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = pbVar10 + 2;
    }
    bVar2 = *param_13;
    local_c = (uint)bVar2;
    if ((bVar2 & 0x80) == 0) {
      local_1c = local_c & 0x7f;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_13 = param_13 + 1;
    }
    else {
      local_1c = local_c & 0x3f;
      if ((bVar2 & 0x40) == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1 + local_1c;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 2;
      }
    }
    pbVar10 = param_13;
    iVar8 = param_15;
    if ((int)local_1c <= param_15) {
      do {
        iVar8 = iVar8 - local_1c;
        bVar2 = *pbVar10;
        local_c = (uint)bVar2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = pbVar10 + 1;
        if ((bVar2 & 0x80) == 0) {
          local_1c = local_c & 0x7f;
        }
        else {
          local_1c = local_c & 0x3f;
          if ((bVar2 & 0x40) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + local_1c;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = pbVar10 + 2;
          }
        }
        pbVar10 = param_13;
      } while ((int)local_1c <= iVar8);
    }
    local_1c = local_1c - iVar8;
    iVar8 = param_8;
    pbVar10 = param_6;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_00700a87:
    param_6 = pbVar10;
    if ((local_18 & 0x80) == 0) {
      uVar5 = local_18 & 0x7f;
      if (iVar8 < (int)uVar5) goto LAB_00700acb;
    }
    else {
      uVar5 = local_18 & 0x3f;
      if (iVar8 < (int)uVar5) goto LAB_00700acb;
      if (local_24 == 0x80) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + uVar5;
      }
    }
    iVar8 = iVar8 - uVar5;
    local_18 = (uint)*param_6;
    local_24 = local_18 & 0xc0;
    pbVar10 = param_6 + 1;
    if (local_24 == 0xc0) {
      bVar1 = param_6[1];
      pbVar10 = param_6 + 2;
    }
    goto LAB_00700a87;
  }
  goto LAB_00701272;
LAB_00700acb:
  uVar5 = uVar5 - iVar8;
  if (((byte)local_18 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + iVar8;
  }
  local_24 = 0;
  iVar8 = param_11;
  local_8 = param_3;
  pbVar10 = param_1;
  for (local_20 = param_9; 0 < local_20; local_20 = local_20 - local_14) {
    local_14 = local_1c;
    if ((int)local_1c < local_20) {
      do {
        bVar2 = *param_13;
        uVar4 = (uint)bVar2;
        if ((bVar2 & 0x80) != (local_c & 0x80)) break;
        local_20 = local_20 - local_14;
        if ((bVar2 & 0x80) == 0) {
          local_14 = uVar4 & 0x7f;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1;
        }
        else {
          local_14 = uVar4 & 0x3f;
          if ((bVar2 & 0x40) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + 1 + local_14;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + 2;
          }
        }
        local_1c = local_1c + local_14;
        local_c = uVar4;
      } while ((int)local_14 < local_20);
    }
    if (param_9 < (int)(local_24 + local_1c)) {
      local_1c = param_9 - local_24;
    }
    local_24 = local_24 + local_1c;
    pbVar7 = pbVar10;
    if ((int)uVar5 <= (int)local_1c) {
      do {
        local_1c = local_1c - uVar5;
        pbVar3 = param_6;
        if ((local_18 & 0x80) == 0) {
          pbVar10 = pbVar7;
          puVar9 = local_8;
          if (-1 < (int)(uVar5 - 1)) {
            do {
              if (((byte)iVar8 & 1) == 1) {
                pbVar7 = pbVar7 + 1;
                local_8 = local_8 + 1;
              }
              iVar8 = iVar8 + 1;
              if (4 < iVar8) {
                iVar8 = 0;
              }
              uVar5 = uVar5 - 1;
              pbVar10 = pbVar7;
              puVar9 = local_8;
            } while (uVar5 != 0);
          }
          goto LAB_00700e36;
        }
        if ((local_18 & 0x40) == 0) {
          if (iVar8 < 1) goto switchD_00700d02_default;
          switch(iVar8) {
          case 1:
            if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
              *pbVar7 = *param_6;
            }
            local_8 = local_8 + 1;
            pbVar7 = pbVar7 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            uVar5 = uVar5 - 1;
            iVar8 = 2;
            pbVar10 = pbVar7;
            pbVar3 = param_6;
            puVar9 = local_8;
            if ((int)uVar5 < 1) break;
            goto LAB_00700d4e;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          case 2:
LAB_00700d4e:
            param_6 = param_6 + 1;
            uVar5 = uVar5 - 1;
            iVar8 = 3;
            pbVar10 = pbVar7;
            pbVar3 = param_6;
            puVar9 = local_8;
            if (0 < (int)uVar5) {
LAB_00700d68:
              if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
                *pbVar7 = *param_6;
              }
              local_8 = local_8 + 1;
              pbVar7 = pbVar7 + 1;
              iVar8 = 4;
              pbVar10 = pbVar7;
              pbVar3 = param_6 + 1;
              puVar9 = local_8;
              if (0 < (int)(uVar5 - 1)) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 2;
                iVar8 = 0;
                uVar5 = uVar5 - 2;
                goto switchD_00700d02_default;
              }
            }
            break;
          case 3:
            goto LAB_00700d68;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          case 4:
            param_6 = param_6 + 1;
            iVar8 = 0;
            uVar5 = uVar5 - 1;
          default:
switchD_00700d02_default:
            pbVar10 = pbVar7;
            pbVar3 = param_6;
            puVar9 = local_8;
            if (0 < (int)uVar5) {
              pbVar11 = param_6 + 1;
              iVar6 = uVar5 - 1;
              iVar8 = 1;
              pbVar3 = pbVar11;
              if (0 < iVar6) {
                do {
                  if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
                    *pbVar7 = *pbVar11;
                  }
                  puVar9 = local_8 + 1;
                  pbVar10 = pbVar7 + 1;
                  iVar8 = 2;
                  pbVar3 = pbVar11 + 1;
                  if (iVar6 + -1 < 1) break;
                  iVar8 = 3;
                  pbVar3 = pbVar11 + 2;
                  if (iVar6 + -2 < 1) break;
                  if (((local_c & 0x80) != 0) && (param_5 <= *puVar9)) {
                    *pbVar10 = pbVar11[2];
                  }
                  local_8 = local_8 + 2;
                  pbVar7 = pbVar7 + 2;
                  iVar8 = 4;
                  pbVar10 = pbVar7;
                  pbVar3 = pbVar11 + 3;
                  puVar9 = local_8;
                  if (iVar6 + -3 < 1) break;
                  iVar8 = 0;
                  pbVar3 = pbVar11 + 4;
                  if (iVar6 + -4 < 1) break;
                  pbVar11 = pbVar11 + 5;
                  iVar6 = iVar6 + -5;
                  iVar8 = 1;
                  pbVar3 = pbVar11;
                } while (0 < iVar6);
              }
            }
          }
          goto LAB_00700e36;
        }
        if (iVar8 < 1) goto switchD_00700bdf_default;
        switch(iVar8) {
        case 1:
          if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
            *pbVar7 = bVar1;
          }
          local_8 = local_8 + 1;
          pbVar7 = pbVar7 + 1;
          uVar5 = uVar5 - 1;
          iVar8 = 2;
          pbVar10 = pbVar7;
          puVar9 = local_8;
          if ((int)uVar5 < 1) break;
          goto LAB_00700c1f;
        case 2:
LAB_00700c1f:
          uVar5 = uVar5 - 1;
          iVar8 = 3;
          pbVar10 = pbVar7;
          puVar9 = local_8;
          if (0 < (int)uVar5) {
LAB_00700c32:
            if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
              *pbVar7 = bVar1;
            }
            local_8 = local_8 + 1;
            pbVar7 = pbVar7 + 1;
            iVar8 = 4;
            pbVar10 = pbVar7;
            puVar9 = local_8;
            if (0 < (int)(uVar5 - 1)) {
              iVar8 = 0;
              uVar5 = uVar5 - 2;
              goto switchD_00700bdf_default;
            }
          }
          break;
        case 3:
          goto LAB_00700c32;
        case 4:
          iVar8 = 0;
          uVar5 = uVar5 - 1;
        default:
switchD_00700bdf_default:
          pbVar10 = pbVar7;
          puVar9 = local_8;
          if (0 < (int)uVar5) {
            iVar6 = uVar5 - 1;
            iVar8 = 1;
            if (0 < iVar6) {
              while( true ) {
                if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
                  *pbVar7 = bVar1;
                }
                puVar9 = local_8 + 1;
                pbVar10 = pbVar7 + 1;
                iVar8 = 2;
                if ((iVar6 + -1 < 1) || (iVar8 = 3, iVar6 + -2 < 1)) break;
                if (((local_c & 0x80) != 0) && (param_5 <= *puVar9)) {
                  *pbVar10 = bVar1;
                }
                local_8 = local_8 + 2;
                pbVar7 = pbVar7 + 2;
                iVar8 = 4;
                pbVar10 = pbVar7;
                puVar9 = local_8;
                if ((iVar6 + -3 < 1) || (iVar8 = 0, iVar6 + -4 < 1)) break;
                iVar6 = iVar6 + -5;
                iVar8 = 1;
                if (iVar6 < 1) break;
              }
            }
          }
        }
LAB_00700e36:
        local_8 = puVar9;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = pbVar3;
        if ((int)local_1c < 1) {
          uVar5 = 0;
          break;
        }
        bVar2 = *param_6;
        local_18 = (uint)bVar2;
        pbVar7 = param_6 + 1;
        if ((bVar2 & 0x80) == 0) {
          uVar5 = local_18 & 0x7f;
        }
        else {
          uVar5 = local_18 & 0x3f;
          if ((bVar2 & 0x40) != 0) {
            bVar1 = *pbVar7;
            pbVar7 = param_6 + 2;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = pbVar7;
        pbVar7 = pbVar10;
      } while ((int)uVar5 <= (int)local_1c);
    }
    uVar5 = uVar5 - local_1c;
    pbVar7 = pbVar10;
    pbVar3 = param_6;
    puVar9 = local_8;
    if ((int)local_1c < 1) goto LAB_0070116a;
    if ((local_18 & 0x80) == 0) {
      if (-1 < (int)(local_1c - 1)) {
        do {
          if (((byte)iVar8 & 1) == 1) {
            pbVar10 = pbVar10 + 1;
            local_8 = local_8 + 1;
          }
          iVar8 = iVar8 + 1;
          if (4 < iVar8) {
            iVar8 = 0;
          }
          local_1c = local_1c - 1;
          pbVar7 = pbVar10;
          puVar9 = local_8;
        } while (local_1c != 0);
      }
      goto LAB_0070116a;
    }
    if ((local_18 & 0x40) == 0) {
      if (iVar8 < 1) goto switchD_00700fff_default;
      switch(iVar8) {
      case 1:
        if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
          *pbVar10 = *param_6;
        }
        local_8 = local_8 + 1;
        pbVar10 = pbVar10 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        local_1c = local_1c - 1;
        iVar8 = 2;
        pbVar7 = pbVar10;
        pbVar3 = param_6;
        puVar9 = local_8;
        if ((int)local_1c < 1) break;
        goto LAB_0070104b;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      case 2:
LAB_0070104b:
        param_6 = param_6 + 1;
        local_1c = local_1c - 1;
        iVar8 = 3;
        pbVar7 = pbVar10;
        pbVar3 = param_6;
        puVar9 = local_8;
        if (0 < (int)local_1c) {
LAB_00701065:
          if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
            *pbVar10 = *param_6;
          }
          local_8 = local_8 + 1;
          pbVar10 = pbVar10 + 1;
          iVar8 = 4;
          pbVar7 = pbVar10;
          pbVar3 = param_6 + 1;
          puVar9 = local_8;
          if (0 < (int)(local_1c - 1)) {
            iVar8 = 0;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 2;
            local_1c = local_1c - 2;
            goto switchD_00700fff_default;
          }
        }
        break;
      case 3:
        goto LAB_00701065;
      case 4:
        iVar8 = 0;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        local_1c = local_1c - 1;
      default:
switchD_00700fff_default:
        pbVar7 = pbVar10;
        pbVar3 = param_6;
        puVar9 = local_8;
        if (0 < (int)local_1c) {
          pbVar11 = param_6 + 1;
          iVar6 = local_1c - 1;
          iVar8 = 1;
          pbVar3 = pbVar11;
          if (0 < iVar6) {
            do {
              if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
                *pbVar10 = *pbVar11;
              }
              puVar9 = local_8 + 1;
              pbVar7 = pbVar10 + 1;
              iVar8 = 2;
              pbVar3 = pbVar11 + 1;
              if (iVar6 + -1 < 1) break;
              iVar8 = 3;
              pbVar3 = pbVar11 + 2;
              if (iVar6 + -2 < 1) break;
              if (((local_c & 0x80) != 0) && (param_5 <= *puVar9)) {
                *pbVar7 = pbVar11[2];
              }
              local_8 = local_8 + 2;
              pbVar10 = pbVar10 + 2;
              iVar8 = 4;
              pbVar7 = pbVar10;
              pbVar3 = pbVar11 + 3;
              puVar9 = local_8;
              if (iVar6 + -3 < 1) break;
              iVar8 = 0;
              pbVar3 = pbVar11 + 4;
              if (iVar6 + -4 < 1) break;
              pbVar11 = pbVar11 + 5;
              iVar6 = iVar6 + -5;
              iVar8 = 1;
              pbVar3 = pbVar11;
            } while (0 < iVar6);
          }
        }
      }
      goto LAB_0070116a;
    }
    if (iVar8 < 1) goto switchD_00700ed8_default;
    switch(iVar8) {
    case 1:
      if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
        *pbVar10 = bVar1;
      }
      local_8 = local_8 + 1;
      pbVar10 = pbVar10 + 1;
      local_1c = local_1c - 1;
      iVar8 = 2;
      pbVar7 = pbVar10;
      puVar9 = local_8;
      if ((int)local_1c < 1) break;
      goto LAB_00700f18;
    case 2:
LAB_00700f18:
      local_1c = local_1c - 1;
      iVar8 = 3;
      pbVar7 = pbVar10;
      puVar9 = local_8;
      if (0 < (int)local_1c) {
LAB_00700f2b:
        if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
          *pbVar10 = bVar1;
        }
        local_8 = local_8 + 1;
        pbVar10 = pbVar10 + 1;
        iVar8 = 4;
        pbVar7 = pbVar10;
        puVar9 = local_8;
        if (0 < (int)(local_1c - 1)) {
          iVar8 = 0;
          local_1c = local_1c - 2;
          goto switchD_00700ed8_default;
        }
      }
      break;
    case 3:
      goto LAB_00700f2b;
    case 4:
      iVar8 = 0;
      local_1c = local_1c - 1;
    default:
switchD_00700ed8_default:
      pbVar7 = pbVar10;
      puVar9 = local_8;
      if (0 < (int)local_1c) {
        iVar6 = local_1c - 1;
        iVar8 = 1;
        if (0 < iVar6) {
          while( true ) {
            if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
              *pbVar10 = bVar1;
            }
            puVar9 = local_8 + 1;
            pbVar7 = pbVar10 + 1;
            iVar8 = 2;
            if ((iVar6 + -1 < 1) || (iVar8 = 3, iVar6 + -2 < 1)) break;
            if (((local_c & 0x80) != 0) && (param_5 <= *puVar9)) {
              *pbVar7 = bVar1;
            }
            local_8 = local_8 + 2;
            pbVar10 = pbVar10 + 2;
            iVar8 = 4;
            pbVar7 = pbVar10;
            puVar9 = local_8;
            if ((iVar6 + -3 < 1) || (iVar8 = 0, iVar6 + -4 < 1)) break;
            iVar6 = iVar6 + -5;
            iVar8 = 1;
            if (iVar6 < 1) break;
          }
        }
      }
    }
LAB_0070116a:
    local_8 = puVar9;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = pbVar3;
    pbVar10 = param_6;
    if (((int)uVar5 < 1) && ((int)local_24 < param_9)) {
      bVar2 = *param_6;
      local_18 = (uint)bVar2;
      pbVar10 = param_6 + 1;
      if ((bVar2 & 0x80) == 0) {
        uVar5 = local_18 & 0x7f;
      }
      else {
        uVar5 = local_18 & 0x3f;
        if ((bVar2 & 0x40) != 0) {
          bVar1 = *pbVar10;
          pbVar10 = param_6 + 2;
        }
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = pbVar10;
    if (local_20 <= (int)local_14) {
      local_1c = local_14 - local_20;
      break;
    }
    local_c = (uint)*param_13;
    local_1c = 0;
    pbVar10 = pbVar7;
  }
  iVar8 = (param_14 - param_9) - param_15;
  if ((int)local_1c < iVar8) {
    do {
      iVar8 = iVar8 - local_1c;
      bVar2 = *param_13;
      if ((bVar2 & 0x80) == 0) {
        local_1c = bVar2 & 0x7f;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1;
      }
      else {
        local_1c = bVar2 & 0x3f;
        if ((bVar2 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1 + local_1c;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 2;
        }
      }
    } while ((int)local_1c < iVar8);
  }
  iVar8 = (param_7 - param_8) - param_9;
  bVar2 = (byte)local_18;
  if ((int)uVar5 < iVar8) {
    do {
      iVar8 = iVar8 - uVar5;
      pbVar10 = param_6;
      if (((byte)local_18 & 0xc0) == 0x80) {
        pbVar10 = param_6 + uVar5;
      }
      bVar2 = *pbVar10;
      local_18 = (uint)bVar2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = pbVar10 + 1;
      uVar5 = local_18;
      if (((bVar2 & 0x80) != 0) && (uVar5 = local_18 & 0x3f, (bVar2 & 0x40) != 0)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = pbVar10 + 2;
      }
    } while ((int)uVar5 < iVar8);
  }
  STPiece<0,1>(local_18) = bVar2;
  if (((byte)local_18 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + iVar8;
  }
LAB_00701272:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_12 = param_12 + 1;
  pbVar10 = param_6;
  if (4 < (int)param_12) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = 0;
  }
  goto joined_r0x0070093e;
}

// 007012F0 FUN_007012f0
#line 1 "decomp/ST.exe/functions/007012F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_007012F0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,byte *param_13,int param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte bVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_14;
  uint local_10;
  ushort *local_c;
  uint local_8;

  uVar1 = 0;
  _DAT_00857000 = 1;
  pbVar11 = param_6;
  iVar8 = param_10;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x00701311:
  param_10 = iVar8 + -1;
  if (param_10 < 0) {
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_12 == 1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = iVar8 + -2;
    if (param_10 < 0) {
      return;
    }
    uVar4 = (uint)*pbVar11;
    pbVar11 = pbVar11 + 1;
    iVar8 = param_7;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          pbVar11 = pbVar11 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          pbVar11 = pbVar11 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar8 - uVar3) < 1) break;
        uVar4 = (uint)*pbVar11;
        pbVar11 = pbVar11 + 1;
        iVar8 = iVar8 - uVar3;
      }
    }
    uVar4 = (uint)*param_13;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_13 = param_13 + 1;
    iVar8 = param_14;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar8 - uVar3) < 1) break;
        uVar4 = (uint)*param_13;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1;
        iVar8 = iVar8 - uVar3;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = 2;
  }
  local_14 = (uint)*pbVar11;
  pbVar12 = pbVar11 + 1;
  if (local_14 != 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = (byte *)(local_14 & 0xc0);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_6 == (byte *)0xc0) {
      bVar7 = *pbVar12;
      pbVar12 = pbVar11 + 2;
      uVar1 = *(undefined1 *)((uint)bVar7 + param_16);
    }
    bVar7 = *param_13;
    local_10 = (uint)bVar7;
    if ((bVar7 & 0x80) == 0) {
      uVar4 = local_10 & 0x7f;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_13 = param_13 + 1;
    }
    else {
      uVar4 = local_10 & 0x3f;
      if ((bVar7 & 0x40) == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1 + uVar4;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 2;
      }
    }
    iVar8 = param_15;
    pbVar11 = param_13;
    if ((int)uVar4 <= param_15) {
      do {
        iVar8 = iVar8 - uVar4;
        bVar7 = *pbVar11;
        local_10 = (uint)bVar7;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = pbVar11 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar4 = local_10 & 0x7f;
        }
        else {
          uVar4 = local_10 & 0x3f;
          if ((bVar7 & 0x40) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + uVar4;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = pbVar11 + 2;
          }
        }
        pbVar11 = param_13;
      } while ((int)uVar4 <= iVar8);
    }
    local_8 = param_8;
    pbVar11 = pbVar12;
LAB_0070145c:
    pbVar12 = pbVar11;
    if ((local_14 & 0x80) == 0) {
      uVar3 = local_14 & 0x7f;
      if ((int)local_8 < (int)uVar3) goto LAB_007014bc;
    }
    else {
      uVar3 = local_14 & 0x3f;
      if ((int)local_8 < (int)uVar3) goto LAB_007014bc;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_6 == (byte *)0x80) {
        pbVar12 = pbVar12 + uVar3;
      }
    }
    local_8 = local_8 - uVar3;
    local_14 = (uint)*pbVar12;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = (byte *)(local_14 & 0xc0);
    pbVar11 = pbVar12 + 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_6 == (byte *)0xc0) {
      uVar1 = *(undefined1 *)((uint)pbVar12[1] + param_16);
      pbVar11 = pbVar12 + 2;
    }
    goto LAB_0070145c;
  }
  goto LAB_00701a8c;
LAB_007014bc:
  uVar3 = uVar3 - local_8;
  if (((byte)local_14 & 0xc0) == 0x80) {
    pbVar12 = pbVar12 + local_8;
  }
  local_24 = 0;
  local_1c = uVar4 - iVar8;
  iVar8 = param_11;
  puVar10 = param_1;
  puVar6 = param_3;
  local_20 = param_9;
  while (0 < local_20) {
    local_8 = local_1c;
    if ((int)local_1c < local_20) {
      do {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = (byte *)(local_10 & 0x80);
        bVar7 = *param_13;
        uVar4 = (uint)bVar7;
        if ((byte *)(bVar7 & 0x80) != param_6) break;
        local_20 = local_20 - local_1c;
        if ((bVar7 & 0x80) == 0) {
          local_1c = uVar4 & 0x7f;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1;
        }
        else {
          local_1c = uVar4 & 0x3f;
          if ((bVar7 & 0x40) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + 1 + local_1c;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + 2;
          }
        }
        local_8 = local_8 + local_1c;
        local_10 = uVar4;
      } while ((int)local_1c < local_20);
    }
    if (param_9 < (int)(local_24 + local_8)) {
      local_8 = param_9 - local_24;
    }
    local_24 = local_24 + local_8;
    puVar9 = puVar10;
    local_c = puVar6;
    if ((int)uVar3 <= (int)local_8) {
      do {
        local_28 = local_14 & 0x80;
        local_8 = local_8 - uVar3;
        puVar5 = puVar6;
        puVar10 = puVar9;
        pbVar11 = pbVar12;
        if (local_28 == 0) {
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (iVar8 != 1) {
                puVar9 = puVar9 + 1;
                puVar6 = puVar6 + 1;
              }
              iVar8 = iVar8 + 1;
              if (2 < iVar8) {
                iVar8 = 0;
              }
              uVar3 = uVar3 - 1;
              puVar5 = puVar6;
              puVar10 = puVar9;
              local_c = puVar6;
            } while (uVar3 != 0);
          }
        }
        else if ((local_14 & 0x40) == 0) {
          if (0 < iVar8) {
            if (iVar8 == 1) {
              pbVar12 = pbVar12 + 1;
              iVar8 = 2;
              uVar3 = uVar3 - 1;
            }
            pbVar11 = pbVar12;
            if ((int)uVar3 < 1) goto LAB_0070174d;
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
              *puVar9 = *(undefined1 *)((uint)*pbVar12 + param_16);
            }
            puVar6 = puVar6 + 1;
            puVar9 = puVar9 + 1;
            pbVar12 = pbVar12 + 1;
            iVar8 = 0;
            uVar3 = uVar3 - 1;
            local_c = puVar6;
          }
          puVar5 = puVar6;
          puVar10 = puVar9;
          pbVar11 = pbVar12;
          if (0 < (int)uVar3) {
            do {
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                *puVar9 = *(undefined1 *)((uint)*pbVar12 + param_16);
              }
              puVar5 = puVar6 + 1;
              puVar10 = puVar9 + 1;
              iVar8 = 1;
              pbVar11 = pbVar12 + 1;
              local_c = puVar5;
              if ((int)(uVar3 - 1) < 1) break;
              iVar8 = 2;
              pbVar11 = pbVar12 + 2;
              if ((int)(uVar3 - 2) < 1) break;
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar5)) {
                *puVar10 = *(undefined1 *)((uint)pbVar12[2] + param_16);
              }
              puVar6 = puVar6 + 2;
              puVar9 = puVar9 + 2;
              pbVar12 = pbVar12 + 3;
              iVar8 = 0;
              uVar3 = uVar3 - 3;
              puVar5 = puVar6;
              puVar10 = puVar9;
              pbVar11 = pbVar12;
              local_c = puVar6;
            } while (0 < (int)uVar3);
          }
        }
        else {
          if (0 < iVar8) {
            if (iVar8 == 1) {
              iVar8 = 2;
              uVar3 = uVar3 - 1;
            }
            if ((int)uVar3 < 1) goto LAB_0070174d;
            if (((local_10 & 0x80) == 0) || (*puVar6 < param_5)) {
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
              local_c = puVar6;
            }
            else {
              puVar6 = puVar6 + 1;
              *puVar9 = uVar1;
              puVar9 = puVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
              local_c = puVar6;
            }
          }
          puVar5 = puVar6;
          puVar10 = puVar9;
          if (0 < (int)uVar3) {
            do {
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                *puVar9 = uVar1;
              }
              puVar5 = puVar6 + 1;
              puVar10 = puVar9 + 1;
              iVar8 = 1;
              local_c = puVar5;
              if (((int)(uVar3 - 1) < 1) || (iVar8 = 2, (int)(uVar3 - 2) < 1)) break;
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar5)) {
                *puVar10 = uVar1;
              }
              puVar6 = puVar6 + 2;
              puVar9 = puVar9 + 2;
              iVar8 = 0;
              uVar3 = uVar3 - 3;
              puVar5 = puVar6;
              puVar10 = puVar9;
              local_c = puVar6;
            } while (0 < (int)uVar3);
          }
        }
LAB_0070174d:
        puVar6 = puVar5;
        if ((int)local_8 < 1) {
          uVar3 = 0;
          pbVar12 = pbVar11;
          break;
        }
        bVar7 = *pbVar11;
        local_14 = (uint)bVar7;
        pbVar12 = pbVar11 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar3 = local_14 & 0x7f;
        }
        else {
          uVar3 = local_14 & 0x3f;
          if ((bVar7 & 0x40) != 0) {
            uVar1 = *(undefined1 *)((uint)*pbVar12 + param_16);
            pbVar12 = pbVar11 + 2;
            puVar6 = local_c;
          }
        }
        puVar9 = puVar10;
      } while ((int)uVar3 <= (int)local_8);
    }
    uVar3 = uVar3 - local_8;
    puVar9 = puVar10;
    pbVar11 = pbVar12;
    if (0 < (int)local_8) {
      if ((local_14 & 0x80) == 0) {
        if (-1 < (int)(local_8 - 1)) {
          do {
            if (iVar8 != 1) {
              puVar10 = puVar10 + 1;
              puVar6 = puVar6 + 1;
            }
            iVar8 = iVar8 + 1;
            if (2 < iVar8) {
              iVar8 = 0;
            }
            local_8 = local_8 - 1;
            puVar9 = puVar10;
            local_c = puVar6;
          } while (local_8 != 0);
        }
      }
      else if ((local_14 & 0x40) == 0) {
        if (0 < iVar8) {
          if (iVar8 == 1) {
            pbVar12 = pbVar12 + 1;
            local_8 = local_8 - 1;
            iVar8 = 2;
          }
          pbVar11 = pbVar12;
          if ((int)local_8 < 1) goto LAB_00701989;
          if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
            *puVar10 = *(undefined1 *)((uint)*pbVar12 + param_16);
          }
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
          pbVar12 = pbVar12 + 1;
          iVar8 = 0;
          local_8 = local_8 - 1;
          local_c = puVar6;
        }
        puVar9 = puVar10;
        pbVar11 = pbVar12;
        if (0 < (int)local_8) {
          do {
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
              *puVar10 = *(undefined1 *)((uint)*pbVar12 + param_16);
            }
            local_c = puVar6 + 1;
            puVar9 = puVar10 + 1;
            iVar8 = 1;
            pbVar11 = pbVar12 + 1;
            if ((int)(local_8 - 1) < 1) break;
            iVar8 = 2;
            pbVar11 = pbVar12 + 2;
            if ((int)(local_8 - 2) < 1) break;
            if (((local_10 & 0x80) != 0) && (param_5 <= *local_c)) {
              *puVar9 = *(undefined1 *)((uint)pbVar12[2] + param_16);
            }
            puVar6 = puVar6 + 2;
            puVar10 = puVar10 + 2;
            pbVar12 = pbVar12 + 3;
            iVar8 = 0;
            local_8 = local_8 - 3;
            puVar9 = puVar10;
            pbVar11 = pbVar12;
            local_c = puVar6;
          } while (0 < (int)local_8);
        }
      }
      else {
        if (0 < iVar8) {
          if (iVar8 == 1) {
            local_8 = local_8 - 1;
          }
          iVar8 = 2;
          if ((int)local_8 < 1) goto LAB_00701989;
          if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
            *puVar10 = uVar1;
          }
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
          iVar8 = 0;
          local_8 = local_8 - 1;
          local_c = puVar6;
        }
        puVar9 = puVar10;
        if (0 < (int)local_8) {
          do {
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
              *puVar10 = uVar1;
            }
            local_c = puVar6 + 1;
            puVar9 = puVar10 + 1;
            iVar8 = 1;
            if (((int)(local_8 - 1) < 1) || (iVar8 = 2, (int)(local_8 - 2) < 1)) break;
            if (((local_10 & 0x80) != 0) && (param_5 <= *local_c)) {
              *puVar9 = uVar1;
            }
            puVar6 = puVar6 + 2;
            puVar10 = puVar10 + 2;
            iVar8 = 0;
            local_8 = local_8 - 3;
            puVar9 = puVar10;
            local_c = puVar6;
          } while (0 < (int)local_8);
        }
      }
    }
LAB_00701989:
    pbVar12 = pbVar11;
    if (((int)uVar3 < 1) && (local_24 < param_9)) {
      bVar7 = *pbVar11;
      local_14 = (uint)bVar7;
      pbVar12 = pbVar11 + 1;
      if ((bVar7 & 0x80) == 0) {
        uVar3 = local_14 & 0x7f;
      }
      else {
        uVar3 = local_14 & 0x3f;
        if ((bVar7 & 0x40) != 0) {
          uVar1 = *(undefined1 *)((uint)*pbVar12 + param_16);
          pbVar12 = pbVar11 + 2;
        }
      }
    }
    if (local_20 <= (int)local_1c) {
      local_1c = local_1c - local_20;
      break;
    }
    local_10 = (uint)*param_13;
    local_20 = local_20 - local_1c;
    local_1c = 0;
    puVar10 = puVar9;
    puVar6 = local_c;
  }
  bVar7 = (byte)local_14;
  iVar8 = (param_14 - param_9) - param_15;
  if ((int)local_1c < iVar8) {
    do {
      iVar8 = iVar8 - local_1c;
      bVar2 = *param_13;
      if ((bVar2 & 0x80) == 0) {
        local_1c = bVar2 & 0x7f;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1;
      }
      else {
        local_1c = bVar2 & 0x3f;
        if ((bVar2 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1 + local_1c;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 2;
        }
      }
    } while ((int)local_1c < iVar8);
  }
  iVar8 = (param_7 - param_8) - param_9;
  if ((int)uVar3 < iVar8) {
    do {
      iVar8 = iVar8 - uVar3;
      pbVar11 = pbVar12;
      if (((byte)local_14 & 0xc0) == 0x80) {
        pbVar11 = pbVar12 + uVar3;
      }
      bVar7 = *pbVar11;
      local_14 = (uint)bVar7;
      pbVar12 = pbVar11 + 1;
      uVar3 = local_14;
      if (((bVar7 & 0x80) != 0) && (uVar3 = local_14 & 0x3f, (bVar7 & 0x40) != 0)) {
        pbVar12 = pbVar11 + 2;
      }
    } while ((int)uVar3 < iVar8);
  }
  if ((bVar7 & 0xc0) == 0x80) {
    pbVar12 = pbVar12 + iVar8;
  }
LAB_00701a8c:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_12 = param_12 + 1;
  pbVar11 = pbVar12;
  iVar8 = param_10;
  if (2 < param_12) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = 0;
  }
  goto joined_r0x00701311;
}

// 00701AD0 FUN_00701ad0
#line 1 "decomp/ST.exe/functions/00701AD0/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00701AD0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,byte *param_13,int param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte bVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_28;
  byte *local_24;
  int local_20;
  byte *local_1c;
  uint local_18;
  uint local_10;
  ushort *local_c;
  byte *local_8;

  uVar1 = 0;
  _DAT_00857000 = 1;
  pbVar12 = param_6;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x00701aee:
  param_10 = param_10 + -1;
  if (param_10 < 0) {
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
    uVar5 = (uint)*pbVar12;
    pbVar12 = pbVar12 + 1;
    iVar9 = param_7;
    if (uVar5 != 0) {
      while( true ) {
        if ((uVar5 & 0x80) == 0) {
          uVar3 = uVar5 & 0x7f;
        }
        else if ((uVar5 & 0x40) == 0) {
          pbVar12 = pbVar12 + (uVar5 & 0x3f);
          uVar3 = uVar5 & 0x3f;
        }
        else {
          pbVar12 = pbVar12 + 1;
          uVar3 = uVar5 & 0x3f;
        }
        if ((int)(iVar9 - uVar3) < 1) break;
        uVar5 = (uint)*pbVar12;
        pbVar12 = pbVar12 + 1;
        iVar9 = iVar9 - uVar3;
      }
    }
    uVar5 = (uint)*param_13;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_13 = param_13 + 1;
    iVar9 = param_14;
    if (uVar5 != 0) {
      while( true ) {
        if ((uVar5 & 0x80) == 0) {
          uVar3 = uVar5 & 0x7f;
        }
        else if ((uVar5 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + (uVar5 & 0x3f);
          uVar3 = uVar5 & 0x3f;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1;
          uVar3 = uVar5 & 0x3f;
        }
        if ((int)(iVar9 - uVar3) < 1) break;
        uVar5 = (uint)*param_13;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1;
        iVar9 = iVar9 - uVar3;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = 0;
    }
  }
  local_18 = (uint)*pbVar12;
  pbVar13 = pbVar12 + 1;
  if (local_18 != 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = (byte *)(local_18 & 0xc0);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_6 == (byte *)0xc0) {
      bVar8 = *pbVar13;
      pbVar13 = pbVar12 + 2;
      uVar1 = *(undefined1 *)((uint)bVar8 + param_16);
    }
    bVar8 = *param_13;
    local_10 = (uint)bVar8;
    if ((bVar8 & 0x80) == 0) {
      uVar5 = local_10 & 0x7f;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_13 = param_13 + 1;
    }
    else {
      uVar5 = local_10 & 0x3f;
      if ((bVar8 & 0x40) == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1 + uVar5;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 2;
      }
    }
    iVar9 = param_15;
    pbVar12 = param_13;
    if ((int)uVar5 <= param_15) {
      do {
        iVar9 = iVar9 - uVar5;
        bVar8 = *pbVar12;
        local_10 = (uint)bVar8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = pbVar12 + 1;
        if ((bVar8 & 0x80) == 0) {
          uVar5 = local_10 & 0x7f;
        }
        else {
          uVar5 = local_10 & 0x3f;
          if ((bVar8 & 0x40) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + uVar5;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = pbVar12 + 2;
          }
        }
        pbVar12 = param_13;
      } while ((int)uVar5 <= iVar9);
    }
    local_8 = (byte *)param_8;
    pbVar12 = pbVar13;
LAB_00701c4f:
    pbVar13 = pbVar12;
    if ((local_18 & 0x80) == 0) {
      uVar3 = local_18 & 0x7f;
      if ((int)local_8 < (int)uVar3) goto LAB_00701caf;
    }
    else {
      uVar3 = local_18 & 0x3f;
      if ((int)local_8 < (int)uVar3) goto LAB_00701caf;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_6 == (byte *)0x80) {
        pbVar13 = pbVar13 + uVar3;
      }
    }
    local_8 = (byte *)((int)local_8 - uVar3);
    local_18 = (uint)*pbVar13;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = (byte *)(local_18 & 0xc0);
    pbVar12 = pbVar13 + 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_6 == (byte *)0xc0) {
      uVar1 = *(undefined1 *)((uint)pbVar13[1] + param_16);
      pbVar12 = pbVar13 + 2;
    }
    goto LAB_00701c4f;
  }
  goto LAB_0070248f;
LAB_00701caf:
  uVar3 = uVar3 - (int)local_8;
  if (((byte)local_18 & 0xc0) == 0x80) {
    pbVar13 = pbVar13 + (int)local_8;
  }
  local_24 = nullptr;
  local_1c = (byte *)(uVar5 - iVar9);
  iVar9 = param_11;
  puVar6 = param_3;
  puVar10 = param_1;
  local_20 = param_9;
  while (0 < local_20) {
    local_8 = local_1c;
    if ((int)local_1c < local_20) {
      do {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = (byte *)(local_10 & 0x80);
        bVar8 = *param_13;
        uVar5 = (uint)bVar8;
        if ((byte *)(bVar8 & 0x80) != param_6) break;
        local_20 = local_20 - (int)local_1c;
        if ((bVar8 & 0x80) == 0) {
          local_1c = (byte *)(uVar5 & 0x7f);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1;
        }
        else {
          local_1c = (byte *)(uVar5 & 0x3f);
          if ((bVar8 & 0x40) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + 1 + (int)local_1c;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_13 = param_13 + 2;
          }
        }
        local_8 = local_8 + (int)local_1c;
        local_10 = uVar5;
      } while ((int)local_1c < local_20);
    }
    if (param_9 < (int)(local_24 + (int)local_8)) {
      local_8 = (byte *)(param_9 - (int)local_24);
    }
    local_24 = local_24 + (int)local_8;
    puVar7 = puVar6;
    puVar11 = puVar10;
    pbVar12 = pbVar13;
    local_c = puVar6;
    if ((int)uVar3 <= (int)local_8) {
      do {
        local_28 = local_18 & 0x80;
        local_8 = local_8 + -uVar3;
        if (local_28 == 0) {
          puVar7 = puVar6;
          puVar10 = puVar11;
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar9 & 1) == 1) {
                puVar11 = puVar11 + 1;
                puVar6 = puVar6 + 1;
              }
              iVar9 = iVar9 + 1;
              if (4 < iVar9) {
                iVar9 = 0;
              }
              uVar3 = uVar3 - 1;
              puVar7 = puVar6;
              puVar10 = puVar11;
              local_c = puVar6;
            } while (uVar3 != 0);
          }
          goto LAB_0070201e;
        }
        if ((local_18 & 0x40) == 0) {
          if (iVar9 < 1) {
switchD_00701edb_default:
            puVar7 = puVar6;
            puVar10 = puVar11;
            if (0 < (int)uVar3) {
              pbVar12 = pbVar13 + 1;
              iVar4 = uVar3 - 1;
              iVar9 = 1;
              pbVar13 = pbVar12;
              if (0 < iVar4) {
                do {
                  if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                    *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_16);
                  }
                  puVar7 = puVar6 + 1;
                  puVar10 = puVar11 + 1;
                  iVar9 = 2;
                  pbVar13 = pbVar12 + 1;
                  local_c = puVar7;
                  if (iVar4 + -1 < 1) break;
                  iVar9 = 3;
                  pbVar13 = pbVar12 + 2;
                  if (iVar4 + -2 < 1) break;
                  if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
                    *puVar10 = *(undefined1 *)((uint)pbVar12[2] + param_16);
                  }
                  puVar6 = puVar6 + 2;
                  puVar11 = puVar11 + 2;
                  iVar9 = 4;
                  puVar7 = puVar6;
                  puVar10 = puVar11;
                  pbVar13 = pbVar12 + 3;
                  local_c = puVar6;
                  if (iVar4 + -3 < 1) break;
                  iVar9 = 0;
                  pbVar13 = pbVar12 + 4;
                  if (iVar4 + -4 < 1) break;
                  pbVar12 = pbVar12 + 5;
                  iVar4 = iVar4 + -5;
                  iVar9 = 1;
                  pbVar13 = pbVar12;
                } while (0 < iVar4);
              }
            }
          }
          else {
            switch(iVar9) {
            case 1:
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                *puVar11 = *(undefined1 *)((uint)*pbVar13 + param_16);
              }
              puVar6 = puVar6 + 1;
              puVar11 = puVar11 + 1;
              pbVar13 = pbVar13 + 1;
              uVar3 = uVar3 - 1;
              iVar9 = 2;
              puVar7 = puVar6;
              puVar10 = puVar11;
              local_c = puVar6;
              if ((int)uVar3 < 1) goto LAB_0070201e;
              break;
            case 2:
              break;
            case 3:
              goto switchD_00701edb_caseD_3;
            case 4:
              goto switchD_00701edb_caseD_4;
            default:
              goto switchD_00701edb_default;
            }
            pbVar13 = pbVar13 + 1;
            uVar3 = uVar3 - 1;
            iVar9 = 3;
            puVar7 = puVar6;
            puVar10 = puVar11;
            if (0 < (int)uVar3) {
switchD_00701edb_caseD_3:
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                *puVar11 = *(undefined1 *)((uint)*pbVar13 + param_16);
              }
              puVar6 = puVar6 + 1;
              puVar11 = puVar11 + 1;
              pbVar13 = pbVar13 + 1;
              uVar3 = uVar3 - 1;
              iVar9 = 4;
              puVar7 = puVar6;
              puVar10 = puVar11;
              local_c = puVar6;
              if (0 < (int)uVar3) {
switchD_00701edb_caseD_4:
                pbVar13 = pbVar13 + 1;
                iVar9 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_00701edb_default;
              }
            }
          }
        }
        else if (iVar9 < 1) {
switchD_00701dba_default:
          puVar7 = puVar6;
          puVar10 = puVar11;
          if (0 < (int)uVar3) {
            iVar4 = uVar3 - 1;
            iVar9 = 1;
            if (0 < iVar4) {
              while( true ) {
                if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                  *puVar11 = uVar1;
                }
                puVar7 = puVar6 + 1;
                puVar10 = puVar11 + 1;
                iVar9 = 2;
                local_c = puVar7;
                if ((iVar4 + -1 < 1) || (iVar9 = 3, iVar4 + -2 < 1)) break;
                if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
                  *puVar10 = uVar1;
                }
                puVar6 = puVar6 + 2;
                puVar11 = puVar11 + 2;
                iVar9 = 4;
                puVar7 = puVar6;
                puVar10 = puVar11;
                local_c = puVar6;
                if ((iVar4 + -3 < 1) || (iVar9 = 0, iVar4 + -4 < 1)) break;
                iVar4 = iVar4 + -5;
                iVar9 = 1;
                if (iVar4 < 1) break;
              }
            }
          }
        }
        else {
          switch(iVar9) {
          case 1:
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
              *puVar11 = uVar1;
            }
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
            uVar3 = uVar3 - 1;
            iVar9 = 2;
            puVar7 = puVar6;
            puVar10 = puVar11;
            local_c = puVar6;
            if ((int)uVar3 < 1) goto LAB_0070201e;
            break;
          case 2:
            break;
          case 3:
            goto switchD_00701dba_caseD_3;
          case 4:
            goto switchD_00701dba_caseD_4;
          default:
            goto switchD_00701dba_default;
          }
          uVar3 = uVar3 - 1;
          iVar9 = 3;
          puVar7 = puVar6;
          puVar10 = puVar11;
          if (0 < (int)uVar3) {
switchD_00701dba_caseD_3:
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
              *puVar11 = uVar1;
            }
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
            uVar3 = uVar3 - 1;
            iVar9 = 4;
            puVar7 = puVar6;
            puVar10 = puVar11;
            local_c = puVar6;
            if (0 < (int)uVar3) {
switchD_00701dba_caseD_4:
              iVar9 = 0;
              uVar3 = uVar3 - 1;
              goto switchD_00701dba_default;
            }
          }
        }
LAB_0070201e:
        if ((int)local_8 < 1) {
          uVar3 = 0;
          pbVar12 = pbVar13;
          break;
        }
        bVar8 = *pbVar13;
        local_18 = (uint)bVar8;
        pbVar12 = pbVar13 + 1;
        if ((bVar8 & 0x80) == 0) {
          uVar3 = local_18 & 0x7f;
        }
        else {
          uVar3 = local_18 & 0x3f;
          if ((bVar8 & 0x40) != 0) {
            uVar1 = *(undefined1 *)((uint)*pbVar12 + param_16);
            pbVar12 = pbVar13 + 2;
            puVar7 = local_c;
          }
        }
        puVar6 = puVar7;
        puVar11 = puVar10;
        pbVar13 = pbVar12;
      } while ((int)uVar3 <= (int)local_8);
    }
    uVar3 = uVar3 - (int)local_8;
    puVar11 = puVar10;
    if ((int)local_8 < 1) goto LAB_0070238b;
    if ((local_18 & 0x80) == 0) {
      if (-1 < (int)(local_8 + -1)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = local_8;
        do {
          if (((byte)iVar9 & 1) == 1) {
            puVar10 = puVar10 + 1;
            puVar7 = puVar7 + 1;
          }
          iVar9 = iVar9 + 1;
          if (4 < iVar9) {
            iVar9 = 0;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -1;
          puVar11 = puVar10;
          local_c = puVar7;
        } while (param_6 != nullptr);
      }
      goto LAB_0070238b;
    }
    if ((local_18 & 0x40) == 0) {
      if (iVar9 < 1) goto switchD_00702204_default;
      switch(iVar9) {
      case 1:
        if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
          *puVar10 = *(undefined1 *)((uint)*pbVar12 + param_16);
        }
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        pbVar12 = pbVar12 + 1;
        local_8 = local_8 + -1;
        iVar9 = 2;
        puVar11 = puVar10;
        local_c = puVar7;
        if ((int)local_8 < 1) break;
        goto LAB_00702247;
      case 2:
LAB_00702247:
        pbVar13 = pbVar12 + 1;
        local_8 = local_8 + -1;
        iVar9 = 3;
        puVar11 = puVar10;
        pbVar12 = pbVar13;
        if (0 < (int)local_8) {
LAB_0070225e:
          if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
            *puVar10 = *(undefined1 *)((uint)*pbVar13 + param_16);
          }
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          iVar9 = 4;
          puVar11 = puVar10;
          pbVar12 = pbVar13 + 1;
          local_c = puVar7;
          if (0 < (int)(local_8 + -1)) {
            iVar9 = 0;
            pbVar12 = pbVar13 + 2;
            local_8 = local_8 + -2;
            goto switchD_00702204_default;
          }
        }
        break;
      case 3:
        pbVar13 = pbVar12;
        goto LAB_0070225e;
      case 4:
        iVar9 = 0;
        pbVar12 = pbVar12 + 1;
        local_8 = local_8 + -1;
      default:
switchD_00702204_default:
        puVar11 = puVar10;
        if (0 < (int)local_8) {
          pbVar13 = pbVar12 + 1;
          local_8 = local_8 + -1;
          iVar9 = 1;
          pbVar12 = pbVar13;
          if (0 < (int)local_8) {
            do {
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
                *puVar10 = *(undefined1 *)((uint)*pbVar13 + param_16);
              }
              local_c = puVar7 + 1;
              puVar11 = puVar10 + 1;
              iVar9 = 2;
              pbVar12 = pbVar13 + 1;
              if ((int)(local_8 + -1) < 1) break;
              iVar9 = 3;
              pbVar12 = pbVar13 + 2;
              if ((int)(local_8 + -2) < 1) break;
              if (((local_10 & 0x80) != 0) && (param_5 <= *local_c)) {
                *puVar11 = *(undefined1 *)((uint)pbVar13[2] + param_16);
              }
              puVar7 = puVar7 + 2;
              puVar10 = puVar10 + 2;
              iVar9 = 4;
              puVar11 = puVar10;
              pbVar12 = pbVar13 + 3;
              local_c = puVar7;
              if ((int)(local_8 + -3) < 1) break;
              iVar9 = 0;
              pbVar12 = pbVar13 + 4;
              if ((int)(local_8 + -4) < 1) break;
              pbVar13 = pbVar13 + 5;
              local_8 = local_8 + -5;
              iVar9 = 1;
              pbVar12 = pbVar13;
            } while (0 < (int)local_8);
          }
        }
      }
      goto LAB_0070238b;
    }
    if (iVar9 < 1) goto switchD_007020ad_default;
    switch(iVar9) {
    case 1:
      if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
        *puVar10 = uVar1;
      }
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
      local_8 = local_8 + -1;
      iVar9 = 2;
      puVar11 = puVar10;
      local_c = puVar7;
      if ((int)local_8 < 1) break;
      goto LAB_007020e8;
    case 2:
LAB_007020e8:
      local_8 = local_8 + -1;
      iVar9 = 3;
      puVar11 = puVar10;
      if (0 < (int)local_8) {
LAB_007020fe:
        if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
          *puVar10 = uVar1;
        }
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        iVar9 = 4;
        puVar11 = puVar10;
        local_c = puVar7;
        if (0 < (int)(local_8 + -1)) {
          iVar9 = 0;
          local_8 = local_8 + -2;
          goto switchD_007020ad_default;
        }
      }
      break;
    case 3:
      goto LAB_007020fe;
    case 4:
      iVar9 = 0;
      local_8 = local_8 + -1;
    default:
switchD_007020ad_default:
      puVar11 = puVar10;
      if (0 < (int)local_8) {
        local_8 = local_8 + -1;
        iVar9 = 1;
        if (0 < (int)local_8) {
          while( true ) {
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
              *puVar10 = uVar1;
            }
            local_c = puVar7 + 1;
            puVar11 = puVar10 + 1;
            iVar9 = 2;
            if (((int)(local_8 + -1) < 1) || (iVar9 = 3, (int)(local_8 + -2) < 1)) break;
            if (((local_10 & 0x80) != 0) && (param_5 <= *local_c)) {
              *puVar11 = uVar1;
            }
            puVar7 = puVar7 + 2;
            puVar10 = puVar10 + 2;
            iVar9 = 4;
            puVar11 = puVar10;
            local_c = puVar7;
            if (((int)(local_8 + -3) < 1) || (iVar9 = 0, (int)(local_8 + -4) < 1)) break;
            local_8 = local_8 + -5;
            iVar9 = 1;
            if ((int)local_8 < 1) break;
          }
        }
      }
    }
LAB_0070238b:
    pbVar13 = pbVar12;
    if (((int)uVar3 < 1) && ((int)local_24 < param_9)) {
      bVar8 = *pbVar12;
      local_18 = (uint)bVar8;
      pbVar13 = pbVar12 + 1;
      if ((bVar8 & 0x80) == 0) {
        uVar3 = local_18 & 0x7f;
      }
      else {
        uVar3 = local_18 & 0x3f;
        if ((bVar8 & 0x40) != 0) {
          uVar1 = *(undefined1 *)((uint)*pbVar13 + param_16);
          pbVar13 = pbVar12 + 2;
        }
      }
    }
    if (local_20 <= (int)local_1c) {
      local_1c = local_1c + -local_20;
      break;
    }
    local_10 = (uint)*param_13;
    local_20 = local_20 - (int)local_1c;
    local_1c = nullptr;
    puVar6 = local_c;
    puVar10 = puVar11;
  }
  bVar8 = (byte)local_18;
  iVar9 = (param_14 - param_9) - param_15;
  if ((int)local_1c < iVar9) {
    do {
      iVar9 = iVar9 - (int)local_1c;
      bVar2 = *param_13;
      if ((bVar2 & 0x80) == 0) {
        local_1c = (byte *)(bVar2 & 0x7f);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_13 = param_13 + 1;
      }
      else {
        local_1c = (byte *)(bVar2 & 0x3f);
        if ((bVar2 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 1 + (int)local_1c;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_13 = param_13 + 2;
        }
      }
    } while ((int)local_1c < iVar9);
  }
  iVar9 = (param_7 - param_8) - param_9;
  if ((int)uVar3 < iVar9) {
    do {
      iVar9 = iVar9 - uVar3;
      pbVar12 = pbVar13;
      if (((byte)local_18 & 0xc0) == 0x80) {
        pbVar12 = pbVar13 + uVar3;
      }
      bVar8 = *pbVar12;
      local_18 = (uint)bVar8;
      pbVar13 = pbVar12 + 1;
      uVar3 = local_18;
      if (((bVar8 & 0x80) != 0) && (uVar3 = local_18 & 0x3f, (bVar8 & 0x40) != 0)) {
        pbVar13 = pbVar12 + 2;
      }
    } while ((int)uVar3 < iVar9);
  }
  if ((bVar8 & 0xc0) == 0x80) {
    pbVar13 = pbVar13 + iVar9;
  }
LAB_0070248f:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_12 = param_12 + 1;
  pbVar12 = pbVar13;
  if (4 < (int)param_12) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = 0;
  }
  goto joined_r0x00701aee;
}

// 00702510 FUN_00702510
#line 1 "decomp/ST.exe/functions/00702510/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00702510(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_10;
  uint local_c;
  int local_8;

  _DAT_00857000 = 1;
  iVar3 = param_12;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x0070252a:
  param_12 = iVar3 + -1;
  if (param_12 < 0) {
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_14 == 1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = iVar3 + -2;
    if (param_12 < 0) {
      return;
    }
    uVar2 = (uint)*param_8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = param_8 + 1;
    iVar3 = param_9;
    if (uVar2 != 0) {
      while( true ) {
        if ((uVar2 & 0x80) == 0) {
          uVar1 = uVar2 & 0x7f;
        }
        else if ((uVar2 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + (uVar2 & 0x3f);
          uVar1 = uVar2 & 0x3f;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
          uVar1 = uVar2 & 0x3f;
        }
        if ((int)(iVar3 - uVar1) < 1) break;
        uVar2 = (uint)*param_8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + 1;
        iVar3 = iVar3 - uVar1;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_14 = 2;
  }
  local_c = (uint)*param_8;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_8 = param_8 + 1;
  if (local_c != 0) {
    local_8 = param_10;
    do {
      if ((local_c & 0x80) == 0) {
        uVar2 = local_c & 0x7f;
        if (local_8 < (int)uVar2) goto LAB_007025f2;
      }
      else {
        uVar2 = local_c & 0x3f;
        if (local_8 < (int)uVar2) goto LAB_007025f2;
        if ((local_c & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + uVar2;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
        }
      }
      local_8 = local_8 - uVar2;
      local_c = (uint)*param_8;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
    } while( true );
  }
  goto LAB_007029e6;
LAB_007025f2:
  uVar2 = uVar2 - local_8;
  if (((byte)local_c & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = param_8 + local_8;
  }
  local_8 = param_11;
  iVar3 = param_13;
  puVar6 = param_5;
  puVar9 = param_1;
  pbVar11 = param_3;
  if ((int)uVar2 <= param_11) {
    do {
      local_10 = local_c & 0x80;
      local_8 = local_8 - uVar2;
      if (local_10 == 0) {
        if (-1 < (int)(uVar2 - 1)) {
          do {
            if (iVar3 != 1) {
              puVar9 = puVar9 + 1;
              pbVar11 = pbVar11 + 1;
              puVar6 = puVar6 + 1;
            }
            iVar3 = iVar3 + 1;
            if (2 < iVar3) {
              iVar3 = 0;
            }
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
      }
      else if ((local_c & 0x40) == 0) {
        puVar5 = puVar6;
        puVar8 = puVar9;
        pbVar10 = pbVar11;
        pbVar4 = param_8;
        if (0 < iVar3) {
          if (iVar3 == 1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_8 = param_8 + 1;
            uVar2 = uVar2 - 1;
            iVar3 = 2;
          }
          if ((int)uVar2 < 1) goto LAB_007027b9;
          if (param_7 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
          }
          puVar5 = puVar6 + 1;
          puVar8 = puVar9 + 1;
          pbVar10 = pbVar11 + 1;
          pbVar4 = param_8 + 1;
          iVar3 = 0;
          uVar2 = uVar2 - 1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        for (; puVar6 = puVar5, puVar9 = puVar8, pbVar11 = pbVar10, param_8 = pbVar4, 0 < (int)uVar2
            ; uVar2 = uVar2 - 3) {
          if (param_7 <= *puVar5) {
            *puVar8 = *(undefined1 *)((uint)*pbVar10 + param_15);
          }
          puVar6 = puVar5 + 1;
          puVar9 = puVar8 + 1;
          pbVar11 = pbVar10 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = pbVar4 + 1;
          iVar3 = 1;
          if ((int)(uVar2 - 1) < 1) break;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = pbVar4 + 2;
          iVar3 = 2;
          if ((int)(uVar2 - 2) < 1) break;
          if (param_7 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
          }
          iVar3 = 0;
          puVar5 = puVar5 + 2;
          puVar8 = puVar8 + 2;
          pbVar10 = pbVar10 + 2;
          pbVar4 = pbVar4 + 3;
        }
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + 1;
        puVar5 = puVar6;
        puVar8 = puVar9;
        pbVar10 = pbVar11;
        if (0 < iVar3) {
          if (iVar3 == 1) {
            iVar3 = 2;
            uVar2 = uVar2 - 1;
          }
          if ((int)uVar2 < 1) goto LAB_007027b9;
          if (param_7 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
          }
          puVar5 = puVar6 + 1;
          puVar8 = puVar9 + 1;
          pbVar10 = pbVar11 + 1;
          iVar3 = 0;
          uVar2 = uVar2 - 1;
        }
        for (; puVar6 = puVar5, puVar9 = puVar8, pbVar11 = pbVar10, 0 < (int)uVar2;
            uVar2 = uVar2 - 3) {
          if (param_7 <= *puVar5) {
            *puVar8 = *(undefined1 *)((uint)*pbVar10 + param_15);
          }
          puVar6 = puVar5 + 1;
          puVar9 = puVar8 + 1;
          pbVar11 = pbVar10 + 1;
          iVar3 = 1;
          if (((int)(uVar2 - 1) < 1) || (iVar3 = 2, (int)(uVar2 - 2) < 1)) break;
          if (param_7 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
          }
          iVar3 = 0;
          puVar5 = puVar5 + 2;
          puVar8 = puVar8 + 2;
          pbVar10 = pbVar10 + 2;
        }
      }
LAB_007027b9:
      if (local_8 < 1) {
        uVar2 = 0;
        break;
      }
      bVar7 = *param_8;
      local_c = (uint)bVar7;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
      if ((bVar7 & 0x80) == 0) {
        uVar2 = bVar7 & 0x7f;
      }
      else {
        uVar2 = bVar7 & 0x3f;
      }
    } while ((int)uVar2 <= local_8);
  }
  uVar2 = uVar2 - local_8;
  if ((0 < local_8) && ((local_c & 0x80) != 0)) {
    if ((local_c & 0x40) == 0) {
      pbVar10 = param_8;
      if (0 < iVar3) {
        if (iVar3 == 1) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_0070298d;
        if (param_7 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
        }
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar10 = param_8 + 1;
        local_8 = local_8 + -1;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      for (; param_8 = pbVar10, 0 < local_8; local_8 = local_8 + -3) {
        if (param_7 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = pbVar10 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((local_8 + -1 < 1) || (param_8 = pbVar10 + 2, local_8 + -2 < 1)) break;
        if (param_7 <= puVar6[1]) {
          puVar9[1] = *(undefined1 *)((uint)pbVar11[1] + param_15);
        }
        puVar6 = puVar6 + 2;
        puVar9 = puVar9 + 2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 3;
      }
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
      if (0 < iVar3) {
        if (iVar3 == 1) {
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_0070298d;
        if (param_7 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
        }
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
        pbVar11 = pbVar11 + 1;
        local_8 = local_8 + -1;
      }
      for (; 0 < local_8; local_8 = local_8 + -3) {
        if (param_7 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
        }
        if ((local_8 + -1 < 1) || (local_8 + -2 < 1)) break;
        if (param_7 <= puVar6[1]) {
          puVar9[1] = *(undefined1 *)((uint)pbVar11[1] + param_15);
        }
        puVar6 = puVar6 + 2;
        puVar9 = puVar9 + 2;
        pbVar11 = pbVar11 + 2;
      }
    }
  }
LAB_0070298d:
  bVar7 = (byte)local_c;
  iVar3 = (param_9 - param_10) - param_11;
  if ((int)uVar2 < iVar3) {
    do {
      iVar3 = iVar3 - uVar2;
      if (((byte)local_c & 0xc0) == 0x80) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + uVar2;
      }
      bVar7 = *param_8;
      local_c = (uint)bVar7;
      uVar2 = local_c;
      pbVar11 = param_8 + 1;
      if (((bVar7 & 0x80) != 0) && (uVar2 = local_c & 0x3f, (bVar7 & 0x40) != 0)) {
        pbVar11 = param_8 + 2;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = pbVar11;
    } while ((int)uVar2 < iVar3);
  }
  if ((bVar7 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = param_8 + iVar3;
  }
LAB_007029e6:
  param_1 = param_1 + param_2;
  param_5 = (ushort *)((int)param_5 + param_6);
  param_3 = param_3 + param_4;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_14 = param_14 + 1;
  iVar3 = param_12;
  if (2 < param_14) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_14 = 0;
  }
  goto joined_r0x0070252a;
}

// 00702A30 FUN_00702a30
#line 1 "decomp/ST.exe/functions/00702A30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00702A30(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,uint param_14,int param_15)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  uint local_10;
  uint local_c;
  int local_8;

  _DAT_00857000 = 1;
  pbVar9 = param_8;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x00702a47:
  param_12 = param_12 + -1;
  if (param_12 < 0) {
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  while (((param_14 & 1) == 0 && (param_12 = param_12 + -1, -1 < param_12))) {
    uVar4 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
    iVar6 = param_9;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          pbVar9 = pbVar9 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          pbVar9 = pbVar9 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar6 - uVar3) < 1) break;
        uVar4 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
        iVar6 = iVar6 - uVar3;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_14 = param_14 + 1;
    if (4 < (int)param_14) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_14 = 0;
    }
  }
  local_c = (uint)*pbVar9;
  pbVar9 = pbVar9 + 1;
  if (local_c != 0) {
    local_8 = param_10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = pbVar9;
    do {
      if ((local_c & 0x80) == 0) {
        uVar4 = local_c & 0x7f;
        if (local_8 < (int)uVar4) goto LAB_00702b17;
      }
      else {
        uVar4 = local_c & 0x3f;
        if (local_8 < (int)uVar4) goto LAB_00702b17;
        if ((local_c & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + uVar4;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
        }
      }
      local_8 = local_8 - uVar4;
      local_c = (uint)*param_8;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
    } while( true );
  }
  goto LAB_00702f90;
LAB_00702b17:
  uVar4 = uVar4 - local_8;
  if (((byte)local_c & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = param_8 + local_8;
  }
  local_8 = param_11;
  iVar6 = param_13;
  puVar8 = param_5;
  puVar11 = param_1;
  pbVar12 = param_3;
  if ((int)uVar4 <= param_11) {
    do {
      local_10 = local_c & 0x80;
      local_8 = local_8 - uVar4;
      if (local_10 == 0) {
        if (-1 < (int)(uVar4 - 1)) {
          do {
            if (((byte)iVar6 & 1) == 1) {
              puVar11 = puVar11 + 1;
              pbVar12 = pbVar12 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar6 = iVar6 + 1;
            if (4 < iVar6) {
              iVar6 = 0;
            }
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        goto LAB_00702de8;
      }
      if ((local_c & 0x40) == 0) {
        if (iVar6 < 1) {
switchD_00702c8d_default:
          if (0 < (int)uVar4) {
            pbVar9 = param_8 + 1;
            puVar7 = puVar8;
            puVar10 = puVar11;
            pbVar2 = pbVar12;
            for (iVar5 = uVar4 - 1; iVar6 = 1, puVar8 = puVar7, puVar11 = puVar10, pbVar12 = pbVar2,
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_8 = pbVar9, 0 < iVar5; iVar5 = iVar5 + -5) {
              if (param_7 <= *puVar7) {
                *puVar10 = *(undefined1 *)((uint)*pbVar2 + param_15);
              }
              puVar8 = puVar7 + 1;
              puVar11 = puVar10 + 1;
              pbVar12 = pbVar2 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_8 = pbVar9 + 1;
              iVar6 = 2;
              if (iVar5 + -1 < 1) break;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_8 = pbVar9 + 2;
              iVar6 = 3;
              if (iVar5 + -2 < 1) break;
              if (param_7 <= *puVar8) {
                *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
              }
              puVar8 = puVar7 + 2;
              puVar11 = puVar10 + 2;
              pbVar12 = pbVar2 + 2;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_8 = pbVar9 + 3;
              iVar6 = 4;
              if (iVar5 + -3 < 1) break;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_8 = pbVar9 + 4;
              iVar6 = 0;
              if (iVar5 + -4 < 1) break;
              pbVar9 = pbVar9 + 5;
              puVar7 = puVar8;
              puVar10 = puVar11;
              pbVar2 = pbVar12;
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            if (param_7 <= *puVar8) {
              *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            pbVar12 = pbVar12 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_8 = param_8 + 1;
            uVar4 = uVar4 - 1;
            iVar6 = 2;
            if ((int)uVar4 < 1) goto LAB_00702de8;
            break;
          case 2:
            break;
          case 3:
            goto switchD_00702c8d_caseD_3;
          case 4:
            goto switchD_00702c8d_caseD_4;
          default:
            goto switchD_00702c8d_default;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
          uVar4 = uVar4 - 1;
          iVar6 = 3;
          if (0 < (int)uVar4) {
switchD_00702c8d_caseD_3:
            if (param_7 <= *puVar8) {
              *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            pbVar12 = pbVar12 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_8 = param_8 + 1;
            uVar4 = uVar4 - 1;
            iVar6 = 4;
            if (0 < (int)uVar4) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
switchD_00702c8d_caseD_4:
              param_8 = param_8 + 1;
              iVar6 = 0;
              uVar4 = uVar4 - 1;
              goto switchD_00702c8d_default;
            }
          }
        }
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + 1;
        if (iVar6 < 1) {
switchD_00702b77_default:
          if (0 < (int)uVar4) {
            iVar5 = uVar4 - 1;
            iVar6 = 1;
            puVar7 = puVar8;
            puVar10 = puVar11;
            pbVar9 = pbVar12;
            if (0 < iVar5) {
              while( true ) {
                if (param_7 <= *puVar7) {
                  *puVar10 = *(undefined1 *)((uint)*pbVar9 + param_15);
                }
                puVar8 = puVar7 + 1;
                puVar11 = puVar10 + 1;
                pbVar12 = pbVar9 + 1;
                iVar6 = 2;
                if ((iVar5 + -1 < 1) || (iVar6 = 3, iVar5 + -2 < 1)) break;
                if (param_7 <= *puVar8) {
                  *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
                }
                puVar8 = puVar7 + 2;
                puVar11 = puVar10 + 2;
                pbVar12 = pbVar9 + 2;
                iVar6 = 4;
                if ((iVar5 + -3 < 1) || (iVar6 = 0, iVar5 + -4 < 1)) break;
                iVar5 = iVar5 + -5;
                iVar6 = 1;
                puVar7 = puVar8;
                puVar10 = puVar11;
                pbVar9 = pbVar12;
                if (iVar5 < 1) break;
              }
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            if (param_7 <= *puVar8) {
              *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            pbVar12 = pbVar12 + 1;
            uVar4 = uVar4 - 1;
            iVar6 = 2;
            if ((int)uVar4 < 1) goto LAB_00702de8;
            break;
          case 2:
            break;
          case 3:
            goto switchD_00702b77_caseD_3;
          case 4:
            goto switchD_00702b77_caseD_4;
          default:
            goto switchD_00702b77_default;
          }
          uVar4 = uVar4 - 1;
          iVar6 = 3;
          if (0 < (int)uVar4) {
switchD_00702b77_caseD_3:
            if (param_7 <= *puVar8) {
              *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            pbVar12 = pbVar12 + 1;
            uVar4 = uVar4 - 1;
            iVar6 = 4;
            if (0 < (int)uVar4) {
switchD_00702b77_caseD_4:
              iVar6 = 0;
              uVar4 = uVar4 - 1;
              goto switchD_00702b77_default;
            }
          }
        }
      }
LAB_00702de8:
      if (local_8 < 1) {
        uVar4 = 0;
        break;
      }
      bVar1 = *param_8;
      local_c = (uint)bVar1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
      if ((bVar1 & 0x80) == 0) {
        uVar4 = bVar1 & 0x7f;
      }
      else {
        uVar4 = bVar1 & 0x3f;
      }
    } while ((int)uVar4 <= local_8);
  }
  uVar4 = uVar4 - local_8;
  pbVar9 = param_8;
  if ((local_8 < 1) || ((local_c & 0x80) == 0)) goto cf_common_join_00702F3A;
  if ((local_c & 0x40) == 0) {
    if (iVar6 < 1) goto switchD_00702fe7_default;
    switch(iVar6) {
    case 1:
      if (param_7 <= *puVar8) {
        *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      pbVar12 = pbVar12 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
      local_8 = local_8 + -1;
      pbVar9 = param_8;
      if (local_8 < 1) goto cf_common_join_00702F3A;
      goto LAB_00703023;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 2:
LAB_00703023:
      param_8 = param_8 + 1;
      local_8 = local_8 + -1;
      pbVar9 = param_8;
      if (local_8 < 1) goto cf_common_join_00702F3A;
switchD_00702fe7_caseD_3:
      if (param_7 <= *puVar8) {
        *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      pbVar12 = pbVar12 + 1;
      pbVar9 = param_8 + 1;
      if (local_8 + -1 < 1) goto cf_common_join_00702F3A;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 2;
      local_8 = local_8 + -2;
      break;
    case 3:
      goto switchD_00702fe7_caseD_3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 4:
      param_8 = param_8 + 1;
      local_8 = local_8 + -1;
    }
switchD_00702fe7_default:
    pbVar9 = param_8;
    if (0 < local_8) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
      local_8 = local_8 + -1;
      pbVar9 = param_8;
      if (0 < local_8) {
        while( true ) {
          if (param_7 <= *puVar8) {
            *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
          }
          pbVar9 = param_8 + 1;
          if ((local_8 + -1 < 1) || (pbVar9 = param_8 + 2, local_8 + -2 < 1)) break;
          if (param_7 <= puVar8[1]) {
            puVar11[1] = *(undefined1 *)((uint)pbVar12[1] + param_15);
          }
          puVar8 = puVar8 + 2;
          puVar11 = puVar11 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar9 = param_8 + 3;
          if ((local_8 + -3 < 1) || (pbVar9 = param_8 + 4, local_8 + -4 < 1)) break;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 5;
          local_8 = local_8 + -5;
          pbVar9 = param_8;
          if (local_8 < 1) break;
        }
      }
    }
    goto cf_common_join_00702F3A;
  }
  pbVar9 = param_8 + 1;
  if (iVar6 < 1) goto switchD_00702e5a_default;
  switch(iVar6) {
  case 1:
    if (param_7 <= *puVar8) {
      *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
    }
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
    pbVar12 = pbVar12 + 1;
    local_8 = local_8 + -1;
    if (local_8 < 1) goto cf_common_join_00702F3A;
    goto LAB_00702e8d;
  case 2:
LAB_00702e8d:
    local_8 = local_8 + -1;
    if (local_8 < 1) goto cf_common_join_00702F3A;
switchD_00702e5a_caseD_3:
    if (param_7 <= *puVar8) {
      *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
    }
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
    pbVar12 = pbVar12 + 1;
    if (local_8 + -1 < 1) goto cf_common_join_00702F3A;
    local_8 = local_8 + -2;
    break;
  case 3:
    goto switchD_00702e5a_caseD_3;
  case 4:
    local_8 = local_8 + -1;
  }
switchD_00702e5a_default:
  if ((0 < local_8) && (local_8 = local_8 + -1, 0 < local_8)) {
    while( true ) {
      if (param_7 <= *puVar8) {
        *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
      }
      if (local_8 + -2 < 1) break;
      if (param_7 <= puVar8[1]) {
        puVar11[1] = *(undefined1 *)((uint)pbVar12[1] + param_15);
      }
      puVar8 = puVar8 + 2;
      puVar11 = puVar11 + 2;
      pbVar12 = pbVar12 + 2;
      if ((local_8 + -4 < 1) || (local_8 = local_8 + -5, local_8 < 1)) break;
    }
  }
cf_common_join_00702F3A:
  iVar6 = (param_9 - param_10) - param_11;
  bVar1 = (byte)local_c;
  if ((int)uVar4 < iVar6) {
    do {
      iVar6 = iVar6 - uVar4;
      pbVar12 = pbVar9;
      if (((byte)local_c & 0xc0) == 0x80) {
        pbVar12 = pbVar9 + uVar4;
      }
      bVar1 = *pbVar12;
      local_c = (uint)bVar1;
      pbVar9 = pbVar12 + 1;
      uVar4 = local_c;
      if (((bVar1 & 0x80) != 0) && (uVar4 = local_c & 0x3f, (bVar1 & 0x40) != 0)) {
        pbVar9 = pbVar12 + 2;
      }
    } while ((int)uVar4 < iVar6);
  }
  STPiece<0,1>(local_c) = bVar1;
  if (((byte)local_c & 0xc0) == 0x80) {
    pbVar9 = pbVar9 + iVar6;
  }
LAB_00702f90:
  param_1 = param_1 + param_2;
  param_3 = param_3 + param_4;
  param_5 = (ushort *)((int)param_5 + param_6);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_14 = param_14 + 1;
  if (4 < (int)param_14) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_14 = 0;
  }
  goto joined_r0x00702a47;
}

// 00703160 FUN_00703160
#line 1 "decomp/ST.exe/functions/00703160/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00703160(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar5 = param_6;
  iVar8 = param_10;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = iVar8 + -1;
    if (param_10 < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_12 == 1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_10 = iVar8 + -2;
      if (param_10 < 0) {
        return;
      }
      uVar2 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
      iVar8 = param_7;
      if (uVar2 != 0) {
        while( true ) {
          if ((uVar2 & 0x80) == 0) {
            uVar1 = uVar2 & 0x7f;
          }
          else if ((uVar2 & 0x40) == 0) {
            pbVar5 = pbVar5 + (uVar2 & 0x3f);
            uVar1 = uVar2 & 0x3f;
          }
          else {
            pbVar5 = pbVar5 + 1;
            uVar1 = uVar2 & 0x3f;
          }
          if ((int)(iVar8 - uVar1) < 1) break;
          uVar2 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
          iVar8 = iVar8 - uVar1;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = 2;
    }
    local_8 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
    if (local_8 != 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = (byte *)param_8;
      while( true ) {
        while ((local_8 & 0x80) == 0) {
          uVar2 = local_8 & 0x7f;
          if ((int)param_6 < (int)uVar2) goto LAB_00703242;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -uVar2;
          bVar7 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          local_8 = (uint)bVar7;
        }
        uVar2 = local_8 & 0x3f;
        if ((int)param_6 < (int)uVar2) break;
        if ((local_8 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -uVar2;
          local_8 = (uint)pbVar5[uVar2];
          pbVar5 = pbVar5 + uVar2 + 1;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -uVar2;
          local_8 = (uint)pbVar5[1];
          pbVar5 = pbVar5 + 2;
        }
      }
LAB_00703242:
      uVar2 = uVar2 - (int)param_6;
      if (((byte)local_8 & 0xc0) == 0x80) {
        pbVar5 = pbVar5 + (int)param_6;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = (byte *)param_9;
      puVar4 = param_1;
      iVar8 = param_11;
      puVar10 = param_3;
      if ((int)uVar2 <= param_9) {
        do {
          local_c = local_8 & 0x80;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -uVar2;
          if (local_c == 0) {
            if (-1 < (int)(uVar2 - 1)) {
              do {
                if (iVar8 != 1) {
                  puVar4 = puVar4 + 1;
                  puVar10 = puVar10 + 1;
                }
                iVar8 = iVar8 + 1;
                if (2 < iVar8) {
                  iVar8 = 0;
                }
                uVar2 = uVar2 - 1;
              } while (uVar2 != 0);
            }
          }
          else if ((local_8 & 0x40) == 0) {
            puVar3 = puVar4;
            pbVar6 = pbVar5;
            puVar9 = puVar10;
            if (0 < iVar8) {
              if (iVar8 == 1) {
                pbVar5 = pbVar5 + 1;
                iVar8 = 2;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_007033fc;
              if (param_5 <= *puVar10) {
                *puVar4 = *(undefined1 *)((uint)CONCAT11(*pbVar5,*puVar4) + param_13);
              }
              puVar9 = puVar10 + 1;
              puVar3 = puVar4 + 1;
              pbVar6 = pbVar5 + 1;
              iVar8 = 0;
              uVar2 = uVar2 - 1;
            }
            for (; puVar4 = puVar3, pbVar5 = pbVar6, puVar10 = puVar9, 0 < (int)uVar2;
                uVar2 = uVar2 - 3) {
              if (param_5 <= *puVar9) {
                *puVar3 = *(undefined1 *)((uint)CONCAT11(*pbVar6,*puVar3) + param_13);
              }
              puVar10 = puVar9 + 1;
              puVar4 = puVar3 + 1;
              pbVar5 = pbVar6 + 1;
              iVar8 = 1;
              if ((int)(uVar2 - 1) < 1) break;
              pbVar5 = pbVar6 + 2;
              iVar8 = 2;
              if ((int)(uVar2 - 2) < 1) break;
              if (param_5 <= *puVar10) {
                *puVar4 = *(undefined1 *)((uint)CONCAT11(*pbVar5,*puVar4) + param_13);
              }
              iVar8 = 0;
              puVar3 = puVar3 + 2;
              pbVar6 = pbVar6 + 3;
              puVar9 = puVar9 + 2;
            }
          }
          else {
            bVar7 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            puVar3 = puVar4;
            puVar9 = puVar10;
            if (0 < iVar8) {
              if (iVar8 == 1) {
                iVar8 = 2;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_007033fc;
              if (param_5 <= *puVar10) {
                *puVar4 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar4) + param_13);
              }
              puVar9 = puVar10 + 1;
              puVar3 = puVar4 + 1;
              iVar8 = 0;
              uVar2 = uVar2 - 1;
            }
            for (; puVar4 = puVar3, puVar10 = puVar9, 0 < (int)uVar2; uVar2 = uVar2 - 3) {
              if (param_5 <= *puVar9) {
                *puVar3 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar3) + param_13);
              }
              puVar10 = puVar9 + 1;
              puVar4 = puVar3 + 1;
              iVar8 = 1;
              if (((int)(uVar2 - 1) < 1) || (iVar8 = 2, (int)(uVar2 - 2) < 1)) break;
              if (param_5 <= *puVar10) {
                *puVar4 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar4) + param_13);
              }
              iVar8 = 0;
              puVar3 = puVar3 + 2;
              puVar9 = puVar9 + 2;
            }
          }
LAB_007033fc:
          if ((int)param_6 < 1) {
            uVar2 = 0;
            break;
          }
          bVar7 = *pbVar5;
          local_8 = (uint)bVar7;
          pbVar5 = pbVar5 + 1;
          if ((bVar7 & 0x80) == 0) {
            uVar2 = bVar7 & 0x7f;
          }
          else {
            uVar2 = bVar7 & 0x3f;
          }
        } while ((int)uVar2 <= (int)param_6);
      }
      uVar2 = uVar2 - (int)param_6;
      if ((0 < (int)param_6) && ((local_8 & 0x80) != 0)) {
        if ((local_8 & 0x40) == 0) {
          pbVar6 = pbVar5;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              pbVar5 = pbVar5 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + -1;
            }
            if ((int)param_6 < 1) goto LAB_007035be;
            if (param_5 <= *puVar10) {
              *puVar4 = *(undefined1 *)((uint)CONCAT11(*pbVar5,*puVar4) + param_13);
            }
            puVar10 = puVar10 + 1;
            puVar4 = puVar4 + 1;
            pbVar6 = pbVar5 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + -1;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          for (; pbVar5 = pbVar6, 0 < (int)param_6; param_6 = param_6 + -3) {
            if (param_5 <= *puVar10) {
              *puVar4 = *(undefined1 *)((uint)CONCAT11(*pbVar6,*puVar4) + param_13);
            }
            pbVar5 = pbVar6 + 1;
            if (((int)(param_6 + -1) < 1) || (pbVar5 = pbVar6 + 2, (int)(param_6 + -2) < 1)) break;
            if (param_5 <= puVar10[1]) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              puVar4[1] = *(undefined1 *)((uint)CONCAT11(*pbVar5,puVar4[1]) + param_13);
            }
            puVar10 = puVar10 + 2;
            puVar4 = puVar4 + 2;
            pbVar6 = pbVar6 + 3;
          }
        }
        else {
          bVar7 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + -1;
            }
            if ((int)param_6 < 1) goto LAB_007035be;
            if (param_5 <= *puVar10) {
              *puVar4 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar4) + param_13);
            }
            puVar10 = puVar10 + 1;
            puVar4 = puVar4 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + -1;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          for (; 0 < (int)param_6; param_6 = param_6 + -3) {
            if (param_5 <= *puVar10) {
              *puVar4 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar4) + param_13);
            }
            if (((int)(param_6 + -1) < 1) || ((int)(param_6 + -2) < 1)) break;
            if (param_5 <= puVar10[1]) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              puVar4[1] = *(undefined1 *)((uint)CONCAT11(bVar7,puVar4[1]) + param_13);
            }
            puVar10 = puVar10 + 2;
            puVar4 = puVar4 + 2;
          }
        }
      }
LAB_007035be:
      bVar7 = (byte)local_8;
      iVar8 = (param_7 - param_8) - param_9;
      if ((int)uVar2 < iVar8) {
        do {
          iVar8 = iVar8 - uVar2;
          pbVar6 = pbVar5;
          if (((byte)local_8 & 0xc0) == 0x80) {
            pbVar6 = pbVar5 + uVar2;
          }
          bVar7 = *pbVar6;
          local_8 = (uint)bVar7;
          pbVar5 = pbVar6 + 1;
          uVar2 = local_8;
          if (((bVar7 & 0x80) != 0) && (uVar2 = local_8 & 0x3f, (bVar7 & 0x40) != 0)) {
            pbVar5 = pbVar6 + 2;
          }
        } while ((int)uVar2 < iVar8);
      }
      if ((bVar7 & 0xc0) == 0x80) {
        pbVar5 = pbVar5 + iVar8;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_12 + 1;
    iVar8 = param_10;
    if (2 < param_12) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = 0;
    }
  } while( true );
}

// 00703650 FUN_00703650
#line 1 "decomp/ST.exe/functions/00703650/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00703650(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,int param_13)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar10 = param_6;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar2 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
      iVar4 = param_7;
      if (uVar2 != 0) {
        while( true ) {
          if ((uVar2 & 0x80) == 0) {
            uVar1 = uVar2 & 0x7f;
          }
          else if ((uVar2 & 0x40) == 0) {
            pbVar10 = pbVar10 + (uVar2 & 0x3f);
            uVar1 = uVar2 & 0x3f;
          }
          else {
            pbVar10 = pbVar10 + 1;
            uVar1 = uVar2 & 0x3f;
          }
          if ((int)(iVar4 - uVar1) < 1) break;
          uVar2 = (uint)*pbVar10;
          pbVar10 = pbVar10 + 1;
          iVar4 = iVar4 - uVar1;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_12 = 0;
      }
    }
    local_8 = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    if (local_8 == 0) goto LAB_00703cb8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = (byte *)param_8;
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar2 = local_8 & 0x7f;
        if ((int)param_6 < (int)uVar2) goto LAB_00703739;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -uVar2;
        bVar7 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        local_8 = (uint)bVar7;
      }
      uVar2 = local_8 & 0x3f;
      if ((int)param_6 < (int)uVar2) break;
      if ((local_8 & 0x40) == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -uVar2;
        local_8 = (uint)pbVar10[uVar2];
        pbVar10 = pbVar10 + uVar2 + 1;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -uVar2;
        local_8 = (uint)pbVar10[1];
        pbVar10 = pbVar10 + 2;
      }
    }
LAB_00703739:
    uVar2 = uVar2 - (int)param_6;
    if (((byte)local_8 & 0xc0) == 0x80) {
      pbVar10 = pbVar10 + (int)param_6;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = (byte *)param_9;
    iVar4 = param_11;
    puVar6 = param_3;
    puVar9 = param_1;
    if ((int)uVar2 <= param_9) {
      do {
        local_c = local_8 & 0x80;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -uVar2;
        if (local_c == 0) {
          if (-1 < (int)(uVar2 - 1)) {
            do {
              if (((byte)iVar4 & 1) == 1) {
                puVar9 = puVar9 + 1;
                puVar6 = puVar6 + 1;
              }
              iVar4 = iVar4 + 1;
              if (4 < iVar4) {
                iVar4 = 0;
              }
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
          goto LAB_007039e3;
        }
        if ((local_8 & 0x40) == 0) {
          if (iVar4 < 1) {
switchD_007038c9_default:
            if (0 < (int)uVar2) {
              pbVar11 = pbVar10 + 1;
              puVar5 = puVar6;
              puVar8 = puVar9;
              for (iVar3 = uVar2 - 1; iVar4 = 1, puVar6 = puVar5, puVar9 = puVar8, pbVar10 = pbVar11
                  , 0 < iVar3; iVar3 = iVar3 + -5) {
                if (param_5 <= *puVar5) {
                  *puVar8 = *(undefined1 *)((uint)CONCAT11(*pbVar11,*puVar8) + param_13);
                }
                puVar6 = puVar5 + 1;
                puVar9 = puVar8 + 1;
                pbVar10 = pbVar11 + 1;
                iVar4 = 2;
                if (iVar3 + -1 < 1) break;
                pbVar10 = pbVar11 + 2;
                iVar4 = 3;
                if (iVar3 + -2 < 1) break;
                if (param_5 <= *puVar6) {
                  *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar10,*puVar9) + param_13);
                }
                puVar6 = puVar5 + 2;
                puVar9 = puVar8 + 2;
                pbVar10 = pbVar11 + 3;
                iVar4 = 4;
                if (iVar3 + -3 < 1) break;
                pbVar10 = pbVar11 + 4;
                iVar4 = 0;
                if (iVar3 + -4 < 1) break;
                pbVar11 = pbVar11 + 5;
                puVar5 = puVar6;
                puVar8 = puVar9;
              }
            }
          }
          else {
            switch(iVar4) {
            case 1:
              if (param_5 <= *puVar6) {
                *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar10,*puVar9) + param_13);
              }
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
              pbVar10 = pbVar10 + 1;
              uVar2 = uVar2 - 1;
              iVar4 = 2;
              if ((int)uVar2 < 1) goto LAB_007039e3;
              break;
            case 2:
              break;
            case 3:
              goto switchD_007038c9_caseD_3;
            case 4:
              goto switchD_007038c9_caseD_4;
            default:
              goto switchD_007038c9_default;
            }
            pbVar10 = pbVar10 + 1;
            uVar2 = uVar2 - 1;
            iVar4 = 3;
            if (0 < (int)uVar2) {
switchD_007038c9_caseD_3:
              if (param_5 <= *puVar6) {
                *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar10,*puVar9) + param_13);
              }
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
              pbVar10 = pbVar10 + 1;
              uVar2 = uVar2 - 1;
              iVar4 = 4;
              if (0 < (int)uVar2) {
switchD_007038c9_caseD_4:
                pbVar10 = pbVar10 + 1;
                iVar4 = 0;
                uVar2 = uVar2 - 1;
                goto switchD_007038c9_default;
              }
            }
          }
        }
        else {
          bVar7 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          if (iVar4 < 1) {
switchD_0070379b_default:
            if (0 < (int)uVar2) {
              iVar3 = uVar2 - 1;
              iVar4 = 1;
              puVar5 = puVar6;
              puVar8 = puVar9;
              if (0 < iVar3) {
                while( true ) {
                  if (param_5 <= *puVar5) {
                    *puVar8 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar8) + param_13);
                  }
                  puVar6 = puVar5 + 1;
                  puVar9 = puVar8 + 1;
                  iVar4 = 2;
                  if ((iVar3 + -1 < 1) || (iVar4 = 3, iVar3 + -2 < 1)) break;
                  if (param_5 <= *puVar6) {
                    *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
                  }
                  puVar6 = puVar5 + 2;
                  puVar9 = puVar8 + 2;
                  iVar4 = 4;
                  if ((iVar3 + -3 < 1) || (iVar4 = 0, iVar3 + -4 < 1)) break;
                  iVar3 = iVar3 + -5;
                  iVar4 = 1;
                  puVar5 = puVar6;
                  puVar8 = puVar9;
                  if (iVar3 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar4) {
            case 1:
              if (param_5 <= *puVar6) {
                *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
              }
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
              uVar2 = uVar2 - 1;
              iVar4 = 2;
              if ((int)uVar2 < 1) goto LAB_007039e3;
              break;
            case 2:
              break;
            case 3:
              goto switchD_0070379b_caseD_3;
            case 4:
              goto switchD_0070379b_caseD_4;
            default:
              goto switchD_0070379b_default;
            }
            uVar2 = uVar2 - 1;
            iVar4 = 3;
            if (0 < (int)uVar2) {
switchD_0070379b_caseD_3:
              if (param_5 <= *puVar6) {
                *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
              }
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
              uVar2 = uVar2 - 1;
              iVar4 = 4;
              if (0 < (int)uVar2) {
switchD_0070379b_caseD_4:
                iVar4 = 0;
                uVar2 = uVar2 - 1;
                goto switchD_0070379b_default;
              }
            }
          }
        }
LAB_007039e3:
        if ((int)param_6 < 1) {
          uVar2 = 0;
          break;
        }
        bVar7 = *pbVar10;
        local_8 = (uint)bVar7;
        pbVar10 = pbVar10 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar2 = bVar7 & 0x7f;
        }
        else {
          uVar2 = bVar7 & 0x3f;
        }
      } while ((int)uVar2 <= (int)param_6);
    }
    uVar2 = uVar2 - (int)param_6;
    if (((int)param_6 < 1) || ((local_8 & 0x80) == 0)) goto LAB_00703c69;
    if ((local_8 & 0x40) == 0) {
      if (iVar4 < 1) goto switchD_00703b70_default;
      pbVar11 = pbVar10;
      switch(iVar4) {
      case 1:
        if (param_5 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar10,*puVar9) + param_13);
        }
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
        pbVar10 = pbVar10 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -1;
        if ((int)param_6 < 1) break;
        goto LAB_00703ba5;
      case 2:
LAB_00703ba5:
        pbVar11 = pbVar10 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -1;
        pbVar10 = pbVar11;
        if (0 < (int)param_6) {
switchD_00703b70_caseD_3:
          if (param_5 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar11,*puVar9) + param_13);
          }
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
          pbVar10 = pbVar11 + 1;
          if (0 < (int)(param_6 + -1)) {
            pbVar10 = pbVar11 + 2;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + -2;
            goto switchD_00703b70_default;
          }
        }
        break;
      case 3:
        goto switchD_00703b70_caseD_3;
      case 4:
        pbVar10 = pbVar10 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -1;
      default:
switchD_00703b70_default:
        if (0 < (int)param_6) {
          pbVar11 = pbVar10 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -1;
          pbVar10 = pbVar11;
          if (0 < (int)param_6) {
            while( true ) {
              if (param_5 <= *puVar6) {
                *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar11,*puVar9) + param_13);
              }
              pbVar10 = pbVar11 + 1;
              if (((int)(param_6 + -1) < 1) || (pbVar10 = pbVar11 + 2, (int)(param_6 + -2) < 1))
              break;
              if (param_5 <= puVar6[1]) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                puVar9[1] = *(undefined1 *)((uint)CONCAT11(pbVar11[2],puVar9[1]) + param_13);
              }
              puVar6 = puVar6 + 2;
              puVar9 = puVar9 + 2;
              pbVar10 = pbVar11 + 3;
              if (((int)(param_6 + -3) < 1) || (pbVar10 = pbVar11 + 4, (int)(param_6 + -4) < 1))
              break;
              pbVar11 = pbVar11 + 5;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + -5;
              pbVar10 = pbVar11;
              if ((int)param_6 < 1) break;
            }
          }
        }
      }
      goto LAB_00703c69;
    }
    bVar7 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    if (iVar4 < 1) goto switchD_00703a52_default;
    switch(iVar4) {
    case 1:
      if (param_5 <= *puVar6) {
        *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
      }
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + -1;
      if ((int)param_6 < 1) break;
      goto LAB_00703a8e;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 2:
LAB_00703a8e:
      param_6 = param_6 + -1;
      if (0 < (int)param_6) {
switchD_00703a52_caseD_3:
        if (param_5 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
        }
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
        if (0 < (int)(param_6 + -1)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -2;
          goto switchD_00703a52_default;
        }
      }
      break;
    case 3:
      goto switchD_00703a52_caseD_3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 4:
      param_6 = param_6 + -1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    default:
switchD_00703a52_default:
      if ((0 < (int)param_6) && (param_6 = param_6 + -1, 0 < (int)param_6)) {
        while( true ) {
          if (param_5 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
          }
          if ((int)(param_6 + -2) < 1) break;
          if (param_5 <= puVar6[1]) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            puVar9[1] = *(undefined1 *)((uint)CONCAT11(bVar7,puVar9[1]) + param_13);
          }
          puVar6 = puVar6 + 2;
          puVar9 = puVar9 + 2;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (((int)(param_6 + -4) < 1) || (param_6 = param_6 + -5, (int)param_6 < 1)) break;
        }
      }
    }
LAB_00703c69:
    bVar7 = (byte)local_8;
    iVar4 = (param_7 - param_8) - param_9;
    if ((int)uVar2 < iVar4) {
      do {
        iVar4 = iVar4 - uVar2;
        pbVar11 = pbVar10;
        if (((byte)local_8 & 0xc0) == 0x80) {
          pbVar11 = pbVar10 + uVar2;
        }
        bVar7 = *pbVar11;
        local_8 = (uint)bVar7;
        pbVar10 = pbVar11 + 1;
        uVar2 = local_8;
        if (((bVar7 & 0x80) != 0) && (uVar2 = local_8 & 0x3f, (bVar7 & 0x40) != 0)) {
          pbVar10 = pbVar11 + 2;
        }
      } while ((int)uVar2 < iVar4);
    }
    if ((bVar7 & 0xc0) == 0x80) {
      pbVar10 = pbVar10 + iVar4;
    }
LAB_00703cb8:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = 0;
    }
  } while( true );
}

// 00703D40 FUN_00703d40
#line 1 "decomp/ST.exe/functions/00703D40/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00703D40(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,int param_16,int param_17,
                 int param_18)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ushort *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint local_18;
  uint local_14;
  byte *local_10;
  byte *local_c;
  ushort *local_8;

  pbVar3 = (byte *)(param_16 + (param_18 >> 3));
  _DAT_00857000 = 1;
  iVar11 = param_12;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x00703d68:
  param_12 = iVar11 + -1;
  if (param_12 < 0) {
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_14 == 1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = iVar11 + -2;
    if (param_12 < 0) {
      return;
    }
    uVar4 = (uint)*param_8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = param_8 + 1;
    iVar11 = param_9;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar2 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + (uVar4 & 0x3f);
          uVar2 = uVar4 & 0x3f;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
          uVar2 = uVar4 & 0x3f;
        }
        if ((int)(iVar11 - uVar2) < 1) break;
        uVar4 = (uint)*param_8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + 1;
        iVar11 = iVar11 - uVar2;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_14 = 2;
  }
  local_14 = (uint)*param_8;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_8 = param_8 + 1;
  if (local_14 != 0) {
    uVar4 = 0x80 >> ((byte)param_18 & 7);
    iVar11 = param_10;
    do {
      if ((local_14 & 0x80) == 0) {
        local_18 = local_14 & 0x7f;
        if (iVar11 < (int)local_18) goto LAB_00703e38;
      }
      else {
        local_18 = local_14 & 0x3f;
        if (iVar11 < (int)local_18) goto LAB_00703e38;
        if ((local_14 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + local_18;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
        }
      }
      iVar11 = iVar11 - local_18;
      local_14 = (uint)*param_8;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
    } while( true );
  }
  goto LAB_007043ff;
LAB_00703e38:
  local_18 = local_18 - iVar11;
  if (((byte)local_14 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = param_8 + iVar11;
  }
  puVar6 = param_1;
  iVar7 = param_13;
  iVar11 = param_11;
  local_10 = pbVar3;
  local_c = param_3;
  local_8 = param_5;
  if ((int)local_18 <= param_11) {
    do {
      iVar11 = iVar11 - local_18;
      if ((local_14 & 0x80) == 0) {
        if (-1 < (int)(local_18 - 1)) {
          do {
            if (iVar7 != 1) {
              puVar6 = puVar6 + 1;
              local_c = local_c + 1;
              local_8 = local_8 + 1;
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_10 = local_10 + 1;
              }
            }
            iVar7 = iVar7 + 1;
            if (2 < iVar7) {
              iVar7 = 0;
            }
            local_18 = local_18 - 1;
          } while (local_18 != 0);
        }
      }
      else if ((local_14 & 0x40) == 0) {
        puVar5 = puVar6;
        pbVar9 = param_8;
        pbVar10 = local_c;
        puVar8 = local_8;
        if (0 < iVar7) {
          if (iVar7 == 1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_8 = param_8 + 1;
            local_18 = local_18 - 1;
            iVar7 = 2;
          }
          if ((int)local_18 < 1) goto LAB_00704120;
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
            *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
          }
          puVar8 = local_8 + 1;
          puVar5 = puVar6 + 1;
          pbVar10 = local_c + 1;
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          pbVar9 = param_8 + 1;
          iVar7 = 0;
          local_18 = local_18 - 1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        for (; puVar6 = puVar5, param_8 = pbVar9, local_c = pbVar10, local_8 = puVar8,
            0 < (int)local_18; local_18 = local_18 - 3) {
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *puVar8)) {
            *puVar5 = *(undefined1 *)((uint)*pbVar10 + param_15);
          }
          local_8 = puVar8 + 1;
          puVar6 = puVar5 + 1;
          local_c = pbVar10 + 1;
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = pbVar9 + 1;
          iVar7 = 1;
          if ((int)(local_18 - 1) < 1) break;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = pbVar9 + 2;
          iVar7 = 2;
          if ((int)(local_18 - 2) < 1) break;
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
            *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
          }
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          iVar7 = 0;
          puVar5 = puVar5 + 2;
          pbVar9 = pbVar9 + 3;
          pbVar10 = pbVar10 + 2;
          puVar8 = puVar8 + 2;
        }
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + 1;
        puVar5 = puVar6;
        pbVar9 = local_c;
        puVar8 = local_8;
        if (0 < iVar7) {
          if (iVar7 == 1) {
            iVar7 = 2;
            local_18 = local_18 - 1;
          }
          if ((int)local_18 < 1) goto LAB_00704120;
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
            *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
          }
          puVar8 = local_8 + 1;
          puVar5 = puVar6 + 1;
          pbVar9 = local_c + 1;
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          iVar7 = 0;
          local_18 = local_18 - 1;
        }
        for (; puVar6 = puVar5, local_c = pbVar9, local_8 = puVar8, 0 < (int)local_18;
            local_18 = local_18 - 3) {
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *puVar8)) {
            *puVar5 = *(undefined1 *)((uint)*pbVar9 + param_15);
          }
          local_8 = puVar8 + 1;
          puVar6 = puVar5 + 1;
          local_c = pbVar9 + 1;
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          iVar7 = 1;
          if (((int)(local_18 - 1) < 1) || (iVar7 = 2, (int)(local_18 - 2) < 1)) break;
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
            *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
          }
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          iVar7 = 0;
          puVar5 = puVar5 + 2;
          pbVar9 = pbVar9 + 2;
          puVar8 = puVar8 + 2;
        }
      }
LAB_00704120:
      if (iVar11 < 1) {
        local_18 = 0;
        break;
      }
      bVar1 = *param_8;
      local_14 = (uint)bVar1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
      if ((bVar1 & 0x80) == 0) {
        local_18 = bVar1 & 0x7f;
      }
      else {
        local_18 = bVar1 & 0x3f;
      }
    } while ((int)local_18 <= iVar11);
  }
  local_18 = local_18 - iVar11;
  if ((0 < iVar11) && ((local_14 & 0x80) != 0)) {
    if ((local_14 & 0x40) == 0) {
      pbVar9 = param_8;
      if (0 < iVar7) {
        if (iVar7 == 1) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
          iVar11 = iVar11 + -1;
        }
        if (iVar11 < 1) goto LAB_007043a8;
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
          *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
        }
        local_8 = local_8 + 1;
        puVar6 = puVar6 + 1;
        local_c = local_c + 1;
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
        pbVar9 = param_8 + 1;
        iVar11 = iVar11 + -1;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      for (; param_8 = pbVar9, 0 < iVar11; iVar11 = iVar11 + -3) {
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
          *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
        }
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = pbVar9 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((iVar11 + -1 < 1) || (param_8 = pbVar9 + 2, iVar11 + -2 < 1)) break;
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= local_8[1])) {
          puVar6[1] = *(undefined1 *)((uint)local_c[1] + param_15);
        }
        local_8 = local_8 + 2;
        puVar6 = puVar6 + 2;
        local_c = local_c + 2;
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
        pbVar9 = pbVar9 + 3;
      }
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
      if (0 < iVar7) {
        if (iVar7 == 1) {
          iVar11 = iVar11 + -1;
        }
        if (iVar11 < 1) goto LAB_007043a8;
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
          *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
        }
        local_8 = local_8 + 1;
        puVar6 = puVar6 + 1;
        local_c = local_c + 1;
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
        iVar11 = iVar11 + -1;
      }
      for (; 0 < iVar11; iVar11 = iVar11 + -3) {
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
          *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
        }
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
        if ((iVar11 + -1 < 1) || (iVar11 + -2 < 1)) break;
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= local_8[1])) {
          puVar6[1] = *(undefined1 *)((uint)local_c[1] + param_15);
        }
        local_8 = local_8 + 2;
        puVar6 = puVar6 + 2;
        local_c = local_c + 2;
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
      }
    }
  }
LAB_007043a8:
  iVar11 = (param_9 - param_10) - param_11;
  bVar1 = (byte)local_14;
  if ((int)local_18 < iVar11) {
    do {
      iVar11 = iVar11 - local_18;
      pbVar9 = param_8;
      if (((byte)local_14 & 0xc0) == 0x80) {
        pbVar9 = param_8 + local_18;
      }
      bVar1 = *pbVar9;
      local_14 = (uint)bVar1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = pbVar9 + 1;
      local_18 = local_14;
      if (((bVar1 & 0x80) != 0) && (local_18 = local_14 & 0x3f, (bVar1 & 0x40) != 0)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = pbVar9 + 2;
      }
    } while ((int)local_18 < iVar11);
  }
  STPiece<0,1>(local_14) = bVar1;
  if (((byte)local_14 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = param_8 + iVar11;
  }
LAB_007043ff:
  param_1 = param_1 + param_2;
  param_5 = (ushort *)((int)param_5 + param_6);
  param_3 = param_3 + param_4;
  pbVar3 = pbVar3 + param_17;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_14 = param_14 + 1;
  iVar11 = param_12;
  if (2 < param_14) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_14 = 0;
  }
  goto joined_r0x00703d68;
}

// 00704460 FUN_00704460
#line 1 "decomp/ST.exe/functions/00704460/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00704460(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,uint param_14,int param_15,int param_16,int param_17,
                 int param_18)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  ushort *puVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  ushort *local_8;

  pbVar3 = (byte *)(param_16 + (param_18 >> 3));
  _DAT_00857000 = 1;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_12 + -1;
    if (param_12 < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    while (((param_14 & 1) == 0 && (param_12 = param_12 + -1, -1 < param_12))) {
      uVar5 = (uint)*param_8;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
      iVar9 = param_9;
      if (uVar5 != 0) {
        while( true ) {
          if ((uVar5 & 0x80) == 0) {
            uVar1 = uVar5 & 0x7f;
          }
          else if ((uVar5 & 0x40) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_8 = param_8 + (uVar5 & 0x3f);
            uVar1 = uVar5 & 0x3f;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_8 = param_8 + 1;
            uVar1 = uVar5 & 0x3f;
          }
          if ((int)(iVar9 - uVar1) < 1) break;
          uVar5 = (uint)*param_8;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
          iVar9 = iVar9 - uVar1;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_14 = param_14 + 1;
      if (4 < (int)param_14) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_14 = 0;
      }
    }
    local_18 = (uint)*param_8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = param_8 + 1;
    if (local_18 == 0) goto LAB_00704bf4;
    uVar5 = 0x80 >> ((byte)param_18 & 7);
    iVar9 = param_10;
    while( true ) {
      while ((local_18 & 0x80) == 0) {
        uVar1 = local_18 & 0x7f;
        if (iVar9 < (int)uVar1) goto LAB_0070457d;
        iVar9 = iVar9 - uVar1;
        bVar4 = *param_8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + 1;
        local_18 = (uint)bVar4;
      }
      uVar1 = local_18 & 0x3f;
      if (iVar9 < (int)uVar1) break;
      if ((local_18 & 0x40) == 0) {
        iVar9 = iVar9 - uVar1;
        local_18 = (uint)param_8[uVar1];
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + uVar1 + 1;
      }
      else {
        iVar9 = iVar9 - uVar1;
        local_18 = (uint)param_8[1];
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + 2;
      }
    }
LAB_0070457d:
    uVar1 = uVar1 - iVar9;
    if (((byte)local_18 & 0xc0) == 0x80) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + iVar9;
    }
    local_14 = param_11;
    iVar9 = param_13;
    puVar12 = param_1;
    local_10 = param_3;
    local_c = pbVar3;
    local_8 = param_5;
    if ((int)uVar1 <= param_11) {
      do {
        local_14 = local_14 - uVar1;
        if ((local_18 & 0x80) == 0) {
          pbVar6 = param_8;
          pbVar8 = local_10;
          puVar7 = local_8;
          if (-1 < (int)(uVar1 - 1)) {
            do {
              if (((byte)iVar9 & 1) == 1) {
                puVar12 = puVar12 + 1;
                local_10 = local_10 + 1;
                local_8 = local_8 + 1;
                uVar5 = uVar5 >> 1;
                if (uVar5 == 0) {
                  uVar5 = 0x80;
                  local_c = local_c + 1;
                }
              }
              iVar9 = iVar9 + 1;
              if (4 < iVar9) {
                iVar9 = 0;
              }
              uVar1 = uVar1 - 1;
              pbVar8 = local_10;
              puVar7 = local_8;
            } while (uVar1 != 0);
          }
          goto LAB_00704965;
        }
        if ((local_18 & 0x40) != 0) {
          pbVar6 = param_8 + 1;
          if (iVar9 < 1) {
switchD_007045dc_default:
            pbVar8 = local_10;
            puVar7 = local_8;
            if (0 < (int)uVar1) {
              iVar2 = uVar1 - 1;
              iVar9 = 1;
              puVar11 = puVar12;
              if (0 < iVar2) {
                while( true ) {
                  if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
                    *puVar11 = *(undefined1 *)((uint)*local_10 + param_15);
                  }
                  iVar9 = 2;
                  puVar7 = local_8 + 1;
                  puVar12 = puVar11 + 1;
                  pbVar8 = local_10 + 1;
                  uVar5 = uVar5 >> 1;
                  if (uVar5 == 0) {
                    uVar5 = 0x80;
                    local_c = local_c + 1;
                  }
                  if ((iVar2 + -1 < 1) || (iVar9 = 3, iVar2 + -2 < 1)) break;
                  if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *puVar7)) {
                    *puVar12 = *(undefined1 *)((uint)*pbVar8 + param_15);
                  }
                  local_8 = local_8 + 2;
                  puVar12 = puVar11 + 2;
                  local_10 = local_10 + 2;
                  uVar5 = uVar5 >> 1;
                  if (uVar5 == 0) {
                    uVar5 = 0x80;
                    local_c = local_c + 1;
                  }
                  iVar9 = 4;
                  pbVar8 = local_10;
                  puVar7 = local_8;
                  if ((iVar2 + -3 < 1) || (iVar9 = 0, iVar2 + -4 < 1)) break;
                  iVar2 = iVar2 + -5;
                  iVar9 = 1;
                  puVar11 = puVar12;
                  if (iVar2 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar9) {
            case 1:
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
                *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
              }
              iVar9 = 2;
              local_8 = local_8 + 1;
              puVar12 = puVar12 + 1;
              local_10 = local_10 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              uVar1 = uVar1 - 1;
              pbVar8 = local_10;
              puVar7 = local_8;
              if ((int)uVar1 < 1) goto LAB_00704965;
              break;
            case 2:
              break;
            case 3:
              goto switchD_007045dc_caseD_3;
            case 4:
              goto switchD_007045dc_caseD_4;
            default:
              goto switchD_007045dc_default;
            }
            uVar1 = uVar1 - 1;
            iVar9 = 3;
            pbVar8 = local_10;
            puVar7 = local_8;
            if (0 < (int)uVar1) {
switchD_007045dc_caseD_3:
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
                *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
              }
              local_8 = local_8 + 1;
              puVar12 = puVar12 + 1;
              local_10 = local_10 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              uVar1 = uVar1 - 1;
              iVar9 = 4;
              pbVar8 = local_10;
              puVar7 = local_8;
              if (0 < (int)uVar1) {
switchD_007045dc_caseD_4:
                iVar9 = 0;
                uVar1 = uVar1 - 1;
                goto switchD_007045dc_default;
              }
            }
          }
          goto LAB_00704965;
        }
        if (iVar9 < 1) goto switchD_00704798_default;
        switch(iVar9) {
        case 1:
          if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
            *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
          }
          iVar9 = 2;
          local_8 = local_8 + 1;
          puVar12 = puVar12 + 1;
          local_10 = local_10 + 1;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_c = local_c + 1;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
          uVar1 = uVar1 - 1;
          pbVar6 = param_8;
          pbVar8 = local_10;
          puVar7 = local_8;
          if ((int)uVar1 < 1) break;
          goto LAB_007047fe;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        case 2:
LAB_007047fe:
          param_8 = param_8 + 1;
          uVar1 = uVar1 - 1;
          iVar9 = 3;
          pbVar6 = param_8;
          pbVar8 = local_10;
          puVar7 = local_8;
          if (0 < (int)uVar1) {
LAB_00704815:
            if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
              *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
            }
            local_8 = local_8 + 1;
            puVar12 = puVar12 + 1;
            local_10 = local_10 + 1;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            iVar9 = 4;
            pbVar6 = param_8 + 1;
            pbVar8 = local_10;
            puVar7 = local_8;
            if (0 < (int)(uVar1 - 1)) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_8 = param_8 + 2;
              iVar9 = 0;
              uVar1 = uVar1 - 2;
              goto switchD_00704798_default;
            }
          }
          break;
        case 3:
          goto LAB_00704815;
        case 4:
          iVar9 = 0;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
          uVar1 = uVar1 - 1;
        default:
switchD_00704798_default:
          pbVar6 = param_8;
          pbVar8 = local_10;
          puVar7 = local_8;
          if (0 < (int)uVar1) {
            pbVar10 = param_8 + 1;
            puVar11 = puVar12;
            for (iVar2 = uVar1 - 1; iVar9 = 1, puVar12 = puVar11, pbVar6 = pbVar10,
                pbVar8 = local_10, puVar7 = local_8, 0 < iVar2; iVar2 = iVar2 + -5) {
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
                *puVar11 = *(undefined1 *)((uint)*local_10 + param_15);
              }
              iVar9 = 2;
              puVar7 = local_8 + 1;
              puVar12 = puVar11 + 1;
              pbVar8 = local_10 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              pbVar6 = pbVar10 + 1;
              if (iVar2 + -1 < 1) break;
              iVar9 = 3;
              pbVar6 = pbVar10 + 2;
              if (iVar2 + -2 < 1) break;
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *puVar7)) {
                *puVar12 = *(undefined1 *)((uint)*pbVar8 + param_15);
              }
              local_8 = local_8 + 2;
              puVar12 = puVar11 + 2;
              local_10 = local_10 + 2;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar9 = 4;
              pbVar6 = pbVar10 + 3;
              pbVar8 = local_10;
              puVar7 = local_8;
              if (iVar2 + -3 < 1) break;
              iVar9 = 0;
              pbVar6 = pbVar10 + 4;
              if (iVar2 + -4 < 1) break;
              pbVar10 = pbVar10 + 5;
              puVar11 = puVar12;
            }
          }
        }
LAB_00704965:
        local_8 = puVar7;
        local_10 = pbVar8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = pbVar6;
        if (local_14 < 1) {
          uVar1 = 0;
          break;
        }
        bVar4 = *param_8;
        local_18 = (uint)bVar4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + 1;
        if ((bVar4 & 0x80) == 0) {
          uVar1 = bVar4 & 0x7f;
        }
        else {
          uVar1 = bVar4 & 0x3f;
        }
      } while ((int)uVar1 <= local_14);
    }
    uVar1 = uVar1 - local_14;
    pbVar6 = param_8;
    if ((local_14 < 1) || ((local_18 & 0x80) == 0)) goto LAB_00704b9c;
    if ((local_18 & 0x40) == 0) {
      if (iVar9 < 1) goto switchD_00704c56_default;
      switch(iVar9) {
      case 1:
        if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
          *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
        }
        local_8 = local_8 + 1;
        puVar12 = puVar12 + 1;
        local_10 = local_10 + 1;
        uVar5 = uVar5 >> 1;
        if (uVar5 == 0) {
          uVar5 = 0x80;
          local_c = local_c + 1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 + 1;
        local_14 = local_14 + -1;
        pbVar6 = param_8;
        if (local_14 < 1) break;
        goto LAB_00704cbb;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      case 2:
LAB_00704cbb:
        param_8 = param_8 + 1;
        local_14 = local_14 + -1;
        pbVar6 = param_8;
        if (0 < local_14) {
LAB_00704cd0:
          if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
            *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
          }
          local_8 = local_8 + 1;
          puVar12 = puVar12 + 1;
          local_10 = local_10 + 1;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_c = local_c + 1;
          }
          pbVar6 = param_8 + 1;
          if (0 < local_14 + -1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_8 = param_8 + 2;
            local_14 = local_14 + -2;
            goto switchD_00704c56_default;
          }
        }
        break;
      case 3:
        goto LAB_00704cd0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      case 4:
        param_8 = param_8 + 1;
        local_14 = local_14 + -1;
      default:
switchD_00704c56_default:
        pbVar6 = param_8;
        if (0 < local_14) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = param_8 + 1;
          local_14 = local_14 + -1;
          pbVar6 = param_8;
          if (0 < local_14) {
            while( true ) {
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
                *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              pbVar6 = param_8 + 1;
              if ((local_14 + -1 < 1) || (pbVar6 = param_8 + 2, local_14 + -2 < 1)) break;
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= local_8[1])) {
                puVar12[1] = *(undefined1 *)((uint)local_10[1] + param_15);
              }
              local_8 = local_8 + 2;
              puVar12 = puVar12 + 2;
              local_10 = local_10 + 2;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              pbVar6 = param_8 + 3;
              if ((local_14 + -3 < 1) || (pbVar6 = param_8 + 4, local_14 + -4 < 1)) break;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_8 = param_8 + 5;
              local_14 = local_14 + -5;
              pbVar6 = param_8;
              if (local_14 < 1) break;
            }
          }
        }
      }
      goto LAB_00704b9c;
    }
    pbVar6 = param_8 + 1;
    if (iVar9 < 1) goto switchD_00704a13_default;
    switch(iVar9) {
    case 1:
      if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
        *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
      }
      local_8 = local_8 + 1;
      puVar12 = puVar12 + 1;
      local_10 = local_10 + 1;
      uVar5 = uVar5 >> 1;
      if (uVar5 == 0) {
        uVar5 = 0x80;
        local_c = local_c + 1;
      }
      local_14 = local_14 + -1;
      if (local_14 < 1) break;
      goto LAB_00704a76;
    case 2:
LAB_00704a76:
      local_14 = local_14 + -1;
      if (0 < local_14) {
LAB_00704a8a:
        if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
          *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
        }
        local_8 = local_8 + 1;
        puVar12 = puVar12 + 1;
        local_10 = local_10 + 1;
        uVar5 = uVar5 >> 1;
        if (uVar5 == 0) {
          uVar5 = 0x80;
          local_c = local_c + 1;
        }
        if (0 < local_14 + -1) {
          local_14 = local_14 + -2;
          goto switchD_00704a13_default;
        }
      }
      break;
    case 3:
      goto LAB_00704a8a;
    case 4:
      local_14 = local_14 + -1;
    default:
switchD_00704a13_default:
      if ((0 < local_14) && (local_14 = local_14 + -1, 0 < local_14)) {
        while( true ) {
          if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
            *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
          }
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_c = local_c + 1;
          }
          if (local_14 + -2 < 1) break;
          if (((*local_c & (byte)uVar5) == 0) && (param_7 <= local_8[1])) {
            puVar12[1] = *(undefined1 *)((uint)local_10[1] + param_15);
          }
          local_8 = local_8 + 2;
          puVar12 = puVar12 + 2;
          local_10 = local_10 + 2;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_c = local_c + 1;
          }
          if ((local_14 + -4 < 1) || (local_14 = local_14 + -5, local_14 < 1)) break;
        }
      }
    }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_00704b9c:
    param_8 = pbVar6;
    iVar9 = (param_9 - param_10) - param_11;
    bVar4 = (byte)local_18;
    if ((int)uVar1 < iVar9) {
      do {
        iVar9 = iVar9 - uVar1;
        pbVar6 = param_8;
        if (((byte)local_18 & 0xc0) == 0x80) {
          pbVar6 = param_8 + uVar1;
        }
        bVar4 = *pbVar6;
        local_18 = (uint)bVar4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = pbVar6 + 1;
        uVar1 = local_18;
        if (((bVar4 & 0x80) != 0) && (uVar1 = local_18 & 0x3f, (bVar4 & 0x40) != 0)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_8 = pbVar6 + 2;
        }
      } while ((int)uVar1 < iVar9);
    }
    if ((bVar4 & 0xc0) == 0x80) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + iVar9;
    }
LAB_00704bf4:
    param_1 = param_1 + param_2;
    param_5 = (ushort *)((int)param_5 + param_6);
    param_3 = param_3 + param_4;
    pbVar3 = pbVar3 + param_17;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_14 = param_14 + 1;
    if (4 < (int)param_14) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_14 = 0;
    }
  } while( true );
}

// 00704E70 FUN_00704e70
#line 1 "decomp/ST.exe/functions/00704E70/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00704E70(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;

  _DAT_00857000 = 1;
  pbVar9 = param_3;
  iVar7 = param_7;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_7 = iVar7 + -1;
    if (param_7 < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_9 == 1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_7 = iVar7 + -2;
      if (param_7 < 0) {
        return;
      }
      uVar3 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
      iVar7 = param_4;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            pbVar9 = pbVar9 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            pbVar9 = pbVar9 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar7 - uVar2) < 1) break;
          uVar3 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar7 = iVar7 - uVar2;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = 2;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (byte *)(uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
    iVar7 = param_5;
    if (param_3 != nullptr) {
      while( true ) {
        while (((uint)param_3 & 0x80) == 0) {
          uVar3 = (uint)param_3 & 0x7f;
          if (iVar7 < (int)uVar3) goto LAB_00704f33;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar7 = iVar7 - uVar3;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (byte *)(uint)bVar1;
        }
        uVar3 = (uint)param_3 & 0x3f;
        if (iVar7 < (int)uVar3) break;
        if (((uint)param_3 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (byte *)(uint)pbVar9[uVar3];
          pbVar9 = pbVar9 + uVar3 + 1;
          iVar7 = iVar7 - uVar3;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (byte *)(uint)pbVar9[1];
          pbVar9 = pbVar9 + 2;
          iVar7 = iVar7 - uVar3;
        }
      }
LAB_00704f33:
      uVar3 = uVar3 - iVar7;
      if (((byte)param_3 & 0xc0) == 0x80) {
        pbVar9 = pbVar9 + iVar7;
      }
      pbVar5 = param_1;
      iVar7 = param_6;
      iVar8 = param_8;
      if ((int)uVar3 <= param_6) {
        do {
          iVar7 = iVar7 - uVar3;
          if (((uint)param_3 & 0x80) == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (iVar8 != 1) {
                  pbVar5 = pbVar5 + 1;
                }
                iVar8 = iVar8 + 1;
                if (2 < iVar8) {
                  iVar8 = 0;
                }
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
          }
          else if (((uint)param_3 & 0x40) == 0) {
            if (0 < iVar8) {
              if (iVar8 == 1) {
                pbVar9 = pbVar9 + 1;
                iVar8 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_0070503b;
              iVar8 = 0;
              *pbVar5 = *pbVar9;
              pbVar5 = pbVar5 + 1;
              pbVar9 = pbVar9 + 1;
              uVar3 = uVar3 - 1;
            }
            if (0 < (int)uVar3) {
              *pbVar5 = *pbVar9;
              pbVar6 = pbVar5 + 1;
              pbVar10 = pbVar9 + 1;
              for (iVar4 = uVar3 - 1; iVar8 = 1, pbVar5 = pbVar6, pbVar9 = pbVar10, 0 < iVar4;
                  iVar4 = iVar4 + -3) {
                pbVar9 = pbVar10 + 1;
                iVar8 = 2;
                if (iVar4 + -1 < 1) break;
                iVar8 = 0;
                *pbVar6 = *pbVar9;
                pbVar5 = pbVar6 + 1;
                pbVar9 = pbVar10 + 2;
                if (iVar4 + -2 < 1) break;
                *pbVar5 = *pbVar9;
                pbVar6 = pbVar6 + 2;
                pbVar10 = pbVar10 + 3;
              }
            }
          }
          else {
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            if (0 < iVar8) {
              if (iVar8 == 1) {
                iVar8 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_0070503b;
              *pbVar5 = bVar1;
              pbVar5 = pbVar5 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
            }
            if (0 < (int)uVar3) {
              *pbVar5 = bVar1;
              pbVar6 = pbVar5 + 1;
              for (iVar4 = uVar3 - 1;
                  (iVar8 = 1, pbVar5 = pbVar6, 0 < iVar4 && (iVar8 = 2, 0 < iVar4 + -1));
                  iVar4 = iVar4 + -3) {
                *pbVar6 = bVar1;
                iVar8 = 0;
                pbVar5 = pbVar6 + 1;
                if (iVar4 + -2 < 1) break;
                pbVar6[1] = bVar1;
                pbVar6 = pbVar6 + 2;
              }
            }
          }
LAB_0070503b:
          if (iVar7 < 1) {
            uVar3 = 0;
            break;
          }
          bVar1 = *pbVar9;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (byte *)(uint)bVar1;
          pbVar9 = pbVar9 + 1;
          if ((bVar1 & 0x80) == 0) {
            uVar3 = bVar1 & 0x7f;
          }
          else {
            uVar3 = bVar1 & 0x3f;
          }
        } while ((int)uVar3 <= iVar7);
      }
      pbVar6 = (byte *)(uVar3 - iVar7);
      if ((0 < iVar7) && (((uint)param_3 & 0x80) != 0)) {
        if (((uint)param_3 & 0x40) == 0) {
          if (0 < iVar8) {
            if (iVar8 == 1) {
              pbVar9 = pbVar9 + 1;
              iVar7 = iVar7 + -1;
            }
            if (iVar7 < 1) goto LAB_007050fd;
            *pbVar5 = *pbVar9;
            pbVar5 = pbVar5 + 1;
            pbVar9 = pbVar9 + 1;
            iVar7 = iVar7 + -1;
          }
          if (0 < iVar7) {
            *pbVar5 = *pbVar9;
            pbVar10 = pbVar9 + 1;
            for (iVar7 = iVar7 + -1; pbVar9 = pbVar10, 0 < iVar7; iVar7 = iVar7 + -3) {
              pbVar9 = pbVar10 + 1;
              if (iVar7 + -1 < 1) break;
              pbVar5[1] = *pbVar9;
              pbVar5 = pbVar5 + 2;
              pbVar9 = pbVar10 + 2;
              if (iVar7 + -2 < 1) break;
              *pbVar5 = *pbVar9;
              pbVar10 = pbVar10 + 3;
            }
          }
        }
        else {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              iVar7 = iVar7 + -1;
            }
            if (iVar7 < 1) goto LAB_007050fd;
            *pbVar5 = bVar1;
            pbVar5 = pbVar5 + 1;
            iVar7 = iVar7 + -1;
          }
          if (0 < iVar7) {
            *pbVar5 = bVar1;
            for (iVar7 = iVar7 + -1; (0 < iVar7 && (0 < iVar7 + -1)); iVar7 = iVar7 + -3) {
              pbVar5[1] = bVar1;
              pbVar5 = pbVar5 + 2;
              if (iVar7 + -2 < 1) break;
              *pbVar5 = bVar1;
            }
          }
        }
      }
LAB_007050fd:
      iVar7 = (param_4 - param_5) - param_6;
      bVar1 = (byte)param_3;
      if ((int)pbVar6 < iVar7) {
        do {
          iVar7 = iVar7 - (int)pbVar6;
          pbVar5 = pbVar9;
          if (((byte)param_3 & 0xc0) == 0x80) {
            pbVar5 = pbVar9 + (int)pbVar6;
          }
          bVar1 = *pbVar5;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (byte *)(uint)bVar1;
          pbVar9 = pbVar5 + 1;
          pbVar6 = param_3;
          if (((bVar1 & 0x80) != 0) &&
             (pbVar6 = (byte *)((uint)param_3 & 0x3f), (bVar1 & 0x40) != 0)) {
            pbVar9 = pbVar5 + 2;
          }
        } while ((int)pbVar6 < iVar7);
      }
      STPiece<0,1>(param_3) = bVar1;
      if (((byte)param_3 & 0xc0) == 0x80) {
        pbVar9 = pbVar9 + iVar7;
      }
    }
    param_1 = param_1 + param_2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = param_9 + 1;
    iVar7 = param_7;
    if (2 < param_9) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = 0;
    }
  } while( true );
}

// 00705180 FUN_00705180
#line 1 "decomp/ST.exe/functions/00705180/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00705180(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,uint param_9)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;

  _DAT_00857000 = 1;
  pbVar8 = param_3;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_7 = param_7 + -1;
    if (param_7 < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    while (((param_9 & 1) == 0 && (param_7 = param_7 + -1, -1 < param_7))) {
      uVar3 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar6 = param_4;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            pbVar8 = pbVar8 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            pbVar8 = pbVar8 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar6 - uVar2) < 1) break;
          uVar3 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
          iVar6 = iVar6 - uVar2;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = param_9 + 1;
      if (4 < (int)param_9) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_9 = 0;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (byte *)(uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
    iVar6 = param_5;
    if (param_3 != nullptr) {
      while( true ) {
        while (((uint)param_3 & 0x80) == 0) {
          uVar3 = (uint)param_3 & 0x7f;
          if (iVar6 < (int)uVar3) goto LAB_00705252;
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          iVar6 = iVar6 - uVar3;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (byte *)(uint)bVar1;
        }
        uVar3 = (uint)param_3 & 0x3f;
        if (iVar6 < (int)uVar3) break;
        if (((uint)param_3 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (byte *)(uint)pbVar8[uVar3];
          pbVar8 = pbVar8 + uVar3 + 1;
          iVar6 = iVar6 - uVar3;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (byte *)(uint)pbVar8[1];
          pbVar8 = pbVar8 + 2;
          iVar6 = iVar6 - uVar3;
        }
      }
LAB_00705252:
      uVar3 = uVar3 - iVar6;
      if (((byte)param_3 & 0xc0) == 0x80) {
        pbVar8 = pbVar8 + iVar6;
      }
      iVar6 = param_8;
      iVar7 = param_6;
      pbVar10 = param_1;
      if ((int)uVar3 <= param_6) {
        do {
          iVar7 = iVar7 - uVar3;
          if (((uint)param_3 & 0x80) == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (((byte)iVar6 & 1) == 1) {
                  pbVar10 = pbVar10 + 1;
                }
                iVar6 = iVar6 + 1;
                if (4 < iVar6) {
                  iVar6 = 0;
                }
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            goto LAB_007053f5;
          }
          if (((uint)param_3 & 0x40) == 0) {
            if (iVar6 < 1) {
switchD_00705349_default:
              if (0 < (int)uVar3) {
                pbVar5 = pbVar8 + 1;
                pbVar9 = pbVar10;
                for (iVar4 = uVar3 - 1; iVar6 = 1, pbVar8 = pbVar5, pbVar10 = pbVar9, 0 < iVar4;
                    iVar4 = iVar4 + -5) {
                  *pbVar9 = *pbVar5;
                  pbVar10 = pbVar9 + 1;
                  pbVar8 = pbVar5 + 1;
                  iVar6 = 2;
                  if (iVar4 + -1 < 1) break;
                  pbVar8 = pbVar5 + 2;
                  iVar6 = 3;
                  if (iVar4 + -2 < 1) break;
                  iVar6 = 4;
                  *pbVar10 = *pbVar8;
                  pbVar10 = pbVar9 + 2;
                  pbVar8 = pbVar5 + 3;
                  if (iVar4 + -3 < 1) break;
                  pbVar8 = pbVar5 + 4;
                  iVar6 = 0;
                  if (iVar4 + -4 < 1) break;
                  pbVar5 = pbVar5 + 5;
                  pbVar9 = pbVar10;
                }
              }
            }
            else {
              switch(iVar6) {
              case 1:
                *pbVar10 = *pbVar8;
                pbVar10 = pbVar10 + 1;
                pbVar8 = pbVar8 + 1;
                uVar3 = uVar3 - 1;
                iVar6 = 2;
                if ((int)uVar3 < 1) goto LAB_007053f5;
                break;
              case 2:
                break;
              case 3:
                goto switchD_00705349_caseD_3;
              case 4:
                goto switchD_00705349_caseD_4;
              default:
                goto switchD_00705349_default;
              }
              pbVar8 = pbVar8 + 1;
              uVar3 = uVar3 - 1;
              iVar6 = 3;
              if (0 < (int)uVar3) {
switchD_00705349_caseD_3:
                iVar6 = 4;
                *pbVar10 = *pbVar8;
                pbVar10 = pbVar10 + 1;
                pbVar8 = pbVar8 + 1;
                uVar3 = uVar3 - 1;
                if (0 < (int)uVar3) {
switchD_00705349_caseD_4:
                  pbVar8 = pbVar8 + 1;
                  iVar6 = 0;
                  uVar3 = uVar3 - 1;
                  goto switchD_00705349_default;
                }
              }
            }
          }
          else {
            bVar1 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            if (iVar6 < 1) {
switchD_007052a0_default:
              if (0 < (int)uVar3) {
                iVar4 = uVar3 - 1;
                iVar6 = 1;
                pbVar5 = pbVar10;
                if (0 < iVar4) {
                  while( true ) {
                    *pbVar5 = bVar1;
                    pbVar10 = pbVar5 + 1;
                    iVar6 = 2;
                    if ((iVar4 + -1 < 1) || (iVar6 = 3, iVar4 + -2 < 1)) break;
                    *pbVar10 = bVar1;
                    pbVar10 = pbVar5 + 2;
                    iVar6 = 4;
                    if ((iVar4 + -3 < 1) || (iVar6 = 0, iVar4 + -4 < 1)) break;
                    iVar4 = iVar4 + -5;
                    iVar6 = 1;
                    pbVar5 = pbVar10;
                    if (iVar4 < 1) break;
                  }
                }
              }
            }
            else {
              switch(iVar6) {
              case 1:
                *pbVar10 = bVar1;
                pbVar10 = pbVar10 + 1;
                uVar3 = uVar3 - 1;
                iVar6 = 2;
                if ((int)uVar3 < 1) goto LAB_007053f5;
                break;
              case 2:
                break;
              case 3:
                goto switchD_007052a0_caseD_3;
              case 4:
                goto switchD_007052a0_caseD_4;
              default:
                goto switchD_007052a0_default;
              }
              uVar3 = uVar3 - 1;
              iVar6 = 3;
              if (0 < (int)uVar3) {
switchD_007052a0_caseD_3:
                *pbVar10 = bVar1;
                pbVar10 = pbVar10 + 1;
                uVar3 = uVar3 - 1;
                iVar6 = 4;
                if (0 < (int)uVar3) {
switchD_007052a0_caseD_4:
                  iVar6 = 0;
                  uVar3 = uVar3 - 1;
                  goto switchD_007052a0_default;
                }
              }
            }
          }
LAB_007053f5:
          if (iVar7 < 1) {
            uVar3 = 0;
            break;
          }
          bVar1 = *pbVar8;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (byte *)(uint)bVar1;
          pbVar8 = pbVar8 + 1;
          if ((bVar1 & 0x80) == 0) {
            uVar3 = bVar1 & 0x7f;
          }
          else {
            uVar3 = bVar1 & 0x3f;
          }
        } while ((int)uVar3 <= iVar7);
      }
      pbVar5 = (byte *)(uVar3 - iVar7);
      if ((iVar7 < 1) || (((uint)param_3 & 0x80) == 0)) goto LAB_007054fd;
      if (((uint)param_3 & 0x40) == 0) {
        if (iVar6 < 1) {
switchD_007054a6_default:
          if (0 < iVar7) {
            pbVar8 = pbVar8 + 1;
            iVar7 = iVar7 + -1;
            pbVar9 = pbVar8;
            if (0 < iVar7) {
              while( true ) {
                *pbVar10 = *pbVar9;
                pbVar8 = pbVar9 + 1;
                if ((iVar7 + -1 < 1) || (pbVar8 = pbVar9 + 2, iVar7 + -2 < 1)) break;
                pbVar10[1] = *pbVar8;
                pbVar10 = pbVar10 + 2;
                pbVar8 = pbVar9 + 3;
                if ((iVar7 + -3 < 1) || (pbVar8 = pbVar9 + 4, iVar7 + -4 < 1)) break;
                pbVar8 = pbVar9 + 5;
                iVar7 = iVar7 + -5;
                pbVar9 = pbVar8;
                if (iVar7 < 1) break;
              }
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            *pbVar10 = *pbVar8;
            pbVar10 = pbVar10 + 1;
            pbVar8 = pbVar8 + 1;
            iVar7 = iVar7 + -1;
            if (iVar7 < 1) goto LAB_007054fd;
            break;
          case 2:
            break;
          case 3:
            goto switchD_007054a6_caseD_3;
          case 4:
            goto switchD_007054a6_caseD_4;
          default:
            goto switchD_007054a6_default;
          }
          pbVar8 = pbVar8 + 1;
          iVar7 = iVar7 + -1;
          if (0 < iVar7) {
switchD_007054a6_caseD_3:
            *pbVar10 = *pbVar8;
            pbVar10 = pbVar10 + 1;
            pbVar8 = pbVar8 + 1;
            iVar7 = iVar7 + -1;
            if (0 < iVar7) {
switchD_007054a6_caseD_4:
              pbVar8 = pbVar8 + 1;
              iVar7 = iVar7 + -1;
              goto switchD_007054a6_default;
            }
          }
        }
      }
      else {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if (iVar6 < 1) {
switchD_0070544b_default:
          if ((0 < iVar7) && (iVar7 = iVar7 + -1, 0 < iVar7)) {
            while( true ) {
              *pbVar10 = bVar1;
              if (iVar7 + -2 < 1) break;
              pbVar10[1] = bVar1;
              pbVar10 = pbVar10 + 2;
              if ((iVar7 + -4 < 1) || (iVar7 = iVar7 + -5, iVar7 < 1)) break;
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            *pbVar10 = bVar1;
            pbVar10 = pbVar10 + 1;
            iVar7 = iVar7 + -1;
            if (iVar7 < 1) goto LAB_007054fd;
            break;
          case 2:
            break;
          case 3:
            goto switchD_0070544b_caseD_3;
          case 4:
            goto switchD_0070544b_caseD_4;
          default:
            goto switchD_0070544b_default;
          }
          iVar7 = iVar7 + -1;
          if (0 < iVar7) {
switchD_0070544b_caseD_3:
            *pbVar10 = bVar1;
            pbVar10 = pbVar10 + 1;
            iVar7 = iVar7 + -1;
            if (0 < iVar7) {
switchD_0070544b_caseD_4:
              iVar7 = iVar7 + -1;
              goto switchD_0070544b_default;
            }
          }
        }
      }
LAB_007054fd:
      iVar6 = (param_4 - param_5) - param_6;
      bVar1 = (byte)param_3;
      if ((int)pbVar5 < iVar6) {
        do {
          iVar6 = iVar6 - (int)pbVar5;
          pbVar10 = pbVar8;
          if (((byte)param_3 & 0xc0) == 0x80) {
            pbVar10 = pbVar8 + (int)pbVar5;
          }
          bVar1 = *pbVar10;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (byte *)(uint)bVar1;
          pbVar8 = pbVar10 + 1;
          pbVar5 = param_3;
          if (((bVar1 & 0x80) != 0) &&
             (pbVar5 = (byte *)((uint)param_3 & 0x3f), (bVar1 & 0x40) != 0)) {
            pbVar8 = pbVar10 + 2;
          }
        } while ((int)pbVar5 < iVar6);
      }
      STPiece<0,1>(param_3) = bVar1;
      if (((byte)param_3 & 0xc0) == 0x80) {
        pbVar8 = pbVar8 + iVar6;
      }
    }
    param_1 = param_1 + param_2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = param_9 + 1;
    if (4 < (int)param_9) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = 0;
    }
  } while( true );
}

// 007055D0 FUN_007055d0
#line 1 "decomp/ST.exe/functions/007055D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_007055D0(undefined1 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  uint local_10;
  uint local_c;
  int local_8;

  _DAT_00857000 = 1;
  iVar8 = param_7;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_7 = iVar8 + -1;
    if (param_7 < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_9 == 1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_7 = iVar8 + -2;
      if (param_7 < 0) {
        return;
      }
      uVar3 = (uint)*param_3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + 1;
      iVar8 = param_4;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar8 - uVar2) < 1) break;
          uVar3 = (uint)*param_3;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 1;
          iVar8 = iVar8 - uVar2;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = 2;
    }
    local_c = (uint)*param_3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = param_3 + 1;
    iVar8 = param_5;
    if (local_c != 0) {
      while( true ) {
        while ((local_c & 0x80) == 0) {
          uVar3 = local_c & 0x7f;
          if (iVar8 < (int)uVar3) goto LAB_0070569c;
          bVar7 = *param_3;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 1;
          iVar8 = iVar8 - uVar3;
          local_c = (uint)bVar7;
        }
        uVar3 = local_c & 0x3f;
        if (iVar8 < (int)uVar3) break;
        if ((local_c & 0x40) == 0) {
          local_c = (uint)param_3[uVar3];
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + uVar3 + 1;
          iVar8 = iVar8 - uVar3;
        }
        else {
          local_c = (uint)param_3[1];
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 2;
          iVar8 = iVar8 - uVar3;
        }
      }
LAB_0070569c:
      uVar3 = uVar3 - iVar8;
      if (((byte)local_c & 0xc0) == 0x80) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + iVar8;
      }
      local_8 = param_6;
      puVar5 = param_1;
      iVar8 = param_8;
      if ((int)uVar3 <= param_6) {
        do {
          local_10 = local_c & 0x80;
          local_8 = local_8 - uVar3;
          if (local_10 == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (iVar8 != 1) {
                  puVar5 = puVar5 + 1;
                }
                iVar8 = iVar8 + 1;
                if (2 < iVar8) {
                  iVar8 = 0;
                }
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
          }
          else if ((local_c & 0x40) == 0) {
            puVar6 = puVar5;
            if (0 < iVar8) {
              if (iVar8 == 1) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
                iVar8 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_007057dc;
              bVar7 = *param_3;
              puVar6 = puVar5 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
              iVar8 = 0;
              *puVar5 = *(undefined1 *)((uint)bVar7 + param_10);
              uVar3 = uVar3 - 1;
            }
            puVar5 = puVar6;
            if (0 < (int)uVar3) {
              pbVar9 = param_3 + 1;
              *puVar6 = *(undefined1 *)((uint)*param_3 + param_10);
              puVar6 = puVar6 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              for (iVar4 = uVar3 - 1; iVar8 = 1, puVar5 = puVar6, param_3 = pbVar9, 0 < iVar4;
                  iVar4 = iVar4 + -3) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = pbVar9 + 1;
                iVar8 = 2;
                if (iVar4 + -1 < 1) break;
                bVar7 = *param_3;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = pbVar9 + 2;
                iVar8 = 0;
                *puVar6 = *(undefined1 *)((uint)bVar7 + param_10);
                puVar5 = puVar6 + 1;
                if (iVar4 + -2 < 1) break;
                pbVar9 = pbVar9 + 3;
                puVar6[1] = *(undefined1 *)((uint)*param_3 + param_10);
                puVar6 = puVar6 + 2;
              }
            }
          }
          else {
            uVar1 = *(undefined1 *)((uint)*param_3 + param_10);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + 1;
            if (0 < iVar8) {
              if (iVar8 == 1) {
                iVar8 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_007057dc;
              *puVar5 = uVar1;
              puVar5 = puVar5 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
            }
            if (0 < (int)uVar3) {
              *puVar5 = uVar1;
              puVar6 = puVar5 + 1;
              for (iVar4 = uVar3 - 1;
                  (iVar8 = 1, puVar5 = puVar6, 0 < iVar4 && (iVar8 = 2, 0 < iVar4 + -1));
                  iVar4 = iVar4 + -3) {
                *puVar6 = uVar1;
                puVar5 = puVar6 + 1;
                iVar8 = 0;
                if (iVar4 + -2 < 1) break;
                *puVar5 = uVar1;
                puVar6 = puVar6 + 2;
              }
            }
          }
LAB_007057dc:
          if (local_8 < 1) {
            uVar3 = 0;
            break;
          }
          bVar7 = *param_3;
          local_c = (uint)bVar7;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 1;
          if ((bVar7 & 0x80) == 0) {
            uVar3 = local_c & 0x7f;
          }
          else {
            uVar3 = local_c & 0x3f;
          }
        } while ((int)uVar3 <= local_8);
      }
      uVar3 = uVar3 - local_8;
      if ((0 < local_8) && ((local_c & 0x80) != 0)) {
        if ((local_c & 0x40) == 0) {
          puVar6 = puVar5;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
              local_8 = local_8 + -1;
            }
            if (local_8 < 1) goto LAB_0070588d;
            bVar7 = *param_3;
            puVar6 = puVar5 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + 1;
            *puVar5 = *(undefined1 *)((uint)bVar7 + param_10);
            local_8 = local_8 + -1;
          }
          if (0 < local_8) {
            pbVar9 = param_3 + 1;
            *puVar6 = *(undefined1 *)((uint)*param_3 + param_10);
            puVar5 = puVar6 + 1;
            for (local_8 = local_8 + -1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                (param_3 = pbVar9, 0 < local_8 && (param_3 = pbVar9 + 1, 0 < local_8 + -1));
                local_8 = local_8 + -3) {
              bVar7 = *param_3;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = pbVar9 + 2;
              *puVar5 = *(undefined1 *)((uint)bVar7 + param_10);
              if (local_8 + -2 < 1) break;
              pbVar9 = pbVar9 + 3;
              puVar5[1] = *(undefined1 *)((uint)*param_3 + param_10);
              puVar5 = puVar5 + 2;
            }
          }
        }
        else {
          uVar1 = *(undefined1 *)((uint)*param_3 + param_10);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 1;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              local_8 = local_8 + -1;
            }
            if (local_8 < 1) goto LAB_0070588d;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 1;
            local_8 = local_8 + -1;
          }
          if (0 < local_8) {
            *puVar5 = uVar1;
            for (local_8 = local_8 + -1; (0 < local_8 && (0 < local_8 + -1)); local_8 = local_8 + -3
                ) {
              puVar5[1] = uVar1;
              puVar5 = puVar5 + 2;
              if (local_8 + -2 < 1) break;
              *puVar5 = uVar1;
            }
          }
        }
      }
LAB_0070588d:
      bVar7 = (byte)local_c;
      iVar8 = (param_4 - param_5) - param_6;
      if ((int)uVar3 < iVar8) {
        do {
          iVar8 = iVar8 - uVar3;
          pbVar9 = param_3;
          if (((byte)local_c & 0xc0) == 0x80) {
            pbVar9 = param_3 + uVar3;
          }
          bVar7 = *pbVar9;
          local_c = (uint)bVar7;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = pbVar9 + 1;
          uVar3 = local_c;
          if (((bVar7 & 0x80) != 0) && (uVar3 = local_c & 0x3f, (bVar7 & 0x40) != 0)) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = pbVar9 + 2;
          }
        } while ((int)uVar3 < iVar8);
      }
      if ((bVar7 & 0xc0) == 0x80) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + iVar8;
      }
    }
    param_1 = param_1 + param_2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = param_9 + 1;
    iVar8 = param_7;
    if (2 < param_9) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = 0;
    }
  } while( true );
}

// 007059A0 FUN_007059a0
#line 1 "decomp/ST.exe/functions/007059A0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_007059A0(undefined1 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,uint param_9,int param_10)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint local_10;
  uint local_c;
  undefined1 *local_8;

  _DAT_00857000 = 1;
  pbVar7 = param_3;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_7 = param_7 + -1;
    if (param_7 < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    while (((param_9 & 1) == 0 && (param_7 = param_7 + -1, -1 < param_7))) {
      uVar3 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
      iVar5 = param_4;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            pbVar7 = pbVar7 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            pbVar7 = pbVar7 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar5 - uVar2) < 1) break;
          uVar3 = (uint)*pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar5 = iVar5 - uVar2;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = param_9 + 1;
      if (4 < (int)param_9) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_9 = 0;
      }
    }
    local_c = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    iVar5 = param_5;
    if (local_c == 0) goto LAB_00705d76;
    while( true ) {
      while ((local_c & 0x80) == 0) {
        uVar3 = local_c & 0x7f;
        if (iVar5 < (int)uVar3) goto LAB_00705a73;
        bVar6 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        iVar5 = iVar5 - uVar3;
        local_c = (uint)bVar6;
      }
      uVar3 = local_c & 0x3f;
      if (iVar5 < (int)uVar3) break;
      if ((local_c & 0x40) == 0) {
        local_c = (uint)pbVar7[uVar3];
        pbVar7 = pbVar7 + uVar3 + 1;
        iVar5 = iVar5 - uVar3;
      }
      else {
        local_c = (uint)pbVar7[1];
        pbVar7 = pbVar7 + 2;
        iVar5 = iVar5 - uVar3;
      }
    }
LAB_00705a73:
    uVar3 = uVar3 - iVar5;
    pbVar8 = pbVar7;
    if (((byte)local_c & 0xc0) == 0x80) {
      pbVar8 = pbVar7 + iVar5;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (byte *)param_6;
    iVar5 = param_8;
    puVar9 = param_1;
    local_8 = param_1;
    if ((int)uVar3 <= param_6) {
      do {
        local_10 = local_c & 0x80;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + -uVar3;
        if (local_10 == 0) {
          puVar11 = local_8;
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar5 & 1) == 1) {
                puVar9 = puVar9 + 1;
              }
              iVar5 = iVar5 + 1;
              if (4 < iVar5) {
                iVar5 = 0;
              }
              uVar3 = uVar3 - 1;
              puVar11 = puVar9;
            } while (uVar3 != 0);
          }
          goto LAB_00705c54;
        }
        if ((local_c & 0x40) == 0) {
          if (iVar5 < 1) {
switchD_00705b83_default:
            puVar11 = local_8;
            if (0 < (int)uVar3) {
              pbVar7 = pbVar8 + 1;
              puVar10 = puVar9;
              for (iVar4 = uVar3 - 1; iVar5 = 1, pbVar8 = pbVar7, puVar9 = puVar10,
                  puVar11 = local_8, 0 < iVar4; iVar4 = iVar4 + -5) {
                puVar9 = puVar10 + 1;
                pbVar8 = pbVar7 + 1;
                *puVar10 = *(undefined1 *)((uint)*pbVar7 + param_10);
                iVar5 = 2;
                puVar11 = puVar9;
                if (iVar4 + -1 < 1) break;
                pbVar8 = pbVar7 + 2;
                iVar5 = 3;
                if (iVar4 + -2 < 1) break;
                local_8 = puVar10 + 2;
                bVar6 = *pbVar8;
                pbVar8 = pbVar7 + 3;
                puVar10[1] = *(undefined1 *)((uint)bVar6 + param_10);
                iVar5 = 4;
                puVar9 = local_8;
                puVar11 = local_8;
                if (iVar4 + -3 < 1) break;
                pbVar8 = pbVar7 + 4;
                iVar5 = 0;
                if (iVar4 + -4 < 1) break;
                pbVar7 = pbVar7 + 5;
                puVar10 = local_8;
              }
            }
          }
          else {
            puVar10 = puVar9;
            switch(iVar5) {
            case 1:
              bVar6 = *pbVar8;
              puVar10 = puVar9 + 1;
              pbVar8 = pbVar8 + 1;
              uVar3 = uVar3 - 1;
              *puVar9 = *(undefined1 *)((uint)bVar6 + param_10);
              iVar5 = 2;
              puVar9 = puVar10;
              puVar11 = puVar10;
              local_8 = puVar10;
              if ((int)uVar3 < 1) goto LAB_00705c54;
              break;
            case 2:
              break;
            case 3:
              goto switchD_00705b83_caseD_3;
            case 4:
              goto switchD_00705b83_caseD_4;
            default:
              goto switchD_00705b83_default;
            }
            pbVar8 = pbVar8 + 1;
            uVar3 = uVar3 - 1;
            iVar5 = 3;
            puVar9 = puVar10;
            puVar11 = local_8;
            if (0 < (int)uVar3) {
switchD_00705b83_caseD_3:
              bVar6 = *pbVar8;
              puVar9 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
              uVar3 = uVar3 - 1;
              *puVar10 = *(undefined1 *)((uint)bVar6 + param_10);
              iVar5 = 4;
              puVar11 = puVar9;
              local_8 = puVar9;
              if (0 < (int)uVar3) {
switchD_00705b83_caseD_4:
                pbVar8 = pbVar8 + 1;
                iVar5 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_00705b83_default;
              }
            }
          }
          goto LAB_00705c54;
        }
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar1 = *(undefined1 *)((uint)bVar6 + param_10);
        if (iVar5 < 1) goto switchD_00705adb_default;
        switch(iVar5) {
        case 1:
          iVar5 = 2;
          *local_8 = uVar1;
          local_8 = local_8 + 1;
          uVar3 = uVar3 - 1;
          puVar9 = local_8;
          puVar11 = local_8;
          if ((int)uVar3 < 1) break;
          goto LAB_00705afa;
        case 2:
LAB_00705afa:
          uVar3 = uVar3 - 1;
          iVar5 = 3;
          puVar9 = local_8;
          puVar11 = local_8;
          if (0 < (int)uVar3) {
LAB_00705b09:
            *local_8 = uVar1;
            local_8 = local_8 + 1;
            iVar5 = 4;
            puVar9 = local_8;
            puVar11 = local_8;
            if (0 < (int)(uVar3 - 1)) {
              iVar5 = 0;
              uVar3 = uVar3 - 2;
              goto switchD_00705adb_default;
            }
          }
          break;
        case 3:
          goto LAB_00705b09;
        case 4:
          iVar5 = 0;
          uVar3 = uVar3 - 1;
        default:
switchD_00705adb_default:
          puVar9 = local_8;
          puVar11 = local_8;
          if (0 < (int)uVar3) {
            iVar4 = uVar3 - 1;
            iVar5 = 1;
            if (0 < iVar4) {
              while( true ) {
                *local_8 = uVar1;
                puVar9 = local_8 + 1;
                iVar5 = 2;
                puVar11 = puVar9;
                if ((iVar4 + -1 < 1) || (iVar5 = 3, iVar4 + -2 < 1)) break;
                *puVar9 = uVar1;
                local_8 = local_8 + 2;
                iVar5 = 4;
                puVar9 = local_8;
                puVar11 = local_8;
                if ((iVar4 + -3 < 1) || (iVar5 = 0, iVar4 + -4 < 1)) break;
                iVar4 = iVar4 + -5;
                iVar5 = 1;
                if (iVar4 < 1) break;
              }
            }
          }
        }
LAB_00705c54:
        local_8 = puVar11;
        if ((int)param_3 < 1) {
          uVar3 = 0;
          break;
        }
        bVar6 = *pbVar8;
        local_c = (uint)bVar6;
        pbVar8 = pbVar8 + 1;
        if ((bVar6 & 0x80) == 0) {
          uVar3 = local_c & 0x7f;
        }
        else {
          uVar3 = local_c & 0x3f;
        }
      } while ((int)uVar3 <= (int)param_3);
    }
    uVar3 = uVar3 - (int)param_3;
    pbVar7 = pbVar8;
    if (((int)param_3 < 1) || ((local_c & 0x80) == 0)) goto LAB_00705d28;
    if ((local_c & 0x40) != 0) {
      pbVar7 = pbVar8 + 1;
      uVar1 = *(undefined1 *)((uint)*pbVar8 + param_10);
      if (iVar5 < 1) goto switchD_00705cbf_default;
      switch(iVar5) {
      case 1:
        *local_8 = uVar1;
        local_8 = local_8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + -1;
        if ((int)param_3 < 1) break;
        goto LAB_00705cdc;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      case 2:
LAB_00705cdc:
        param_3 = param_3 + -1;
        if (0 < (int)param_3) {
LAB_00705ce9:
          *local_8 = uVar1;
          local_8 = local_8 + 1;
          if (0 < (int)(param_3 + -1)) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + -2;
            goto switchD_00705cbf_default;
          }
        }
        break;
      case 3:
        goto LAB_00705ce9;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      case 4:
        param_3 = param_3 + -1;
      default:
switchD_00705cbf_default:
        if ((0 < (int)param_3) && (pbVar8 = param_3 + -1, 0 < (int)pbVar8)) {
          while( true ) {
            *local_8 = uVar1;
            if ((int)(pbVar8 + -2) < 1) break;
            local_8[1] = uVar1;
            local_8 = local_8 + 2;
            if (((int)(pbVar8 + -4) < 1) || (pbVar8 = pbVar8 + -5, (int)pbVar8 < 1)) break;
          }
        }
      }
      goto LAB_00705d28;
    }
    if (iVar5 < 1) goto switchD_00705db1_default;
    puVar11 = puVar9;
    switch(iVar5) {
    case 1:
      bVar6 = *pbVar8;
      puVar11 = puVar9 + 1;
      pbVar8 = pbVar8 + 1;
      *puVar9 = *(undefined1 *)((uint)bVar6 + param_10);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + -1;
      pbVar7 = pbVar8;
      if ((int)param_3 < 1) break;
      goto LAB_00705ddb;
    case 2:
LAB_00705ddb:
      pbVar8 = pbVar8 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + -1;
      pbVar7 = pbVar8;
      if (0 < (int)param_3) {
LAB_00705df0:
        puVar9 = puVar11 + 1;
        *puVar11 = *(undefined1 *)((uint)*pbVar8 + param_10);
        pbVar7 = pbVar8 + 1;
        if (0 < (int)(param_3 + -1)) {
          pbVar8 = pbVar8 + 2;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + -2;
          goto switchD_00705db1_default;
        }
      }
      break;
    case 3:
      goto LAB_00705df0;
    case 4:
      pbVar8 = pbVar8 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + -1;
    default:
switchD_00705db1_default:
      pbVar7 = pbVar8;
      if (0 < (int)param_3) {
        pbVar8 = pbVar8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + -1;
        pbVar7 = pbVar8;
        if (0 < (int)param_3) {
          while( true ) {
            *puVar9 = *(undefined1 *)((uint)*pbVar8 + param_10);
            pbVar7 = pbVar8 + 1;
            if (((int)(param_3 + -1) < 1) || (pbVar7 = pbVar8 + 2, (int)(param_3 + -2) < 1)) break;
            puVar9[1] = *(undefined1 *)((uint)pbVar8[2] + param_10);
            pbVar7 = pbVar8 + 3;
            if (((int)(param_3 + -3) < 1) || (pbVar7 = pbVar8 + 4, (int)(param_3 + -4) < 1)) break;
            pbVar8 = pbVar8 + 5;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + -5;
            pbVar7 = pbVar8;
            puVar9 = puVar9 + 2;
            if ((int)param_3 < 1) break;
          }
        }
      }
    }
LAB_00705d28:
    bVar6 = (byte)local_c;
    iVar5 = (param_4 - param_5) - param_6;
    if ((int)uVar3 < iVar5) {
      do {
        iVar5 = iVar5 - uVar3;
        pbVar8 = pbVar7;
        if (((byte)local_c & 0xc0) == 0x80) {
          pbVar8 = pbVar7 + uVar3;
        }
        bVar6 = *pbVar8;
        local_c = (uint)bVar6;
        pbVar7 = pbVar8 + 1;
        uVar3 = local_c;
        if (((bVar6 & 0x80) != 0) && (uVar3 = local_c & 0x3f, (bVar6 & 0x40) != 0)) {
          pbVar7 = pbVar8 + 2;
        }
      } while ((int)uVar3 < iVar5);
    }
    if ((bVar6 & 0xc0) == 0x80) {
      pbVar7 = pbVar7 + iVar5;
    }
LAB_00705d76:
    param_1 = param_1 + param_2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = param_9 + 1;
    if (4 < (int)param_9) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = 0;
    }
  } while( true );
}

// 00705ED0 FUN_00705ed0
#line 1 "decomp/ST.exe/functions/00705ED0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00705ED0(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte *param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar6 = param_5;
  iVar12 = param_9;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = iVar12 + -1;
    if (param_9 < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_11 == 1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = iVar12 + -2;
      if (param_9 < 0) {
        return;
      }
      uVar2 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar12 = param_6;
      if (uVar2 != 0) {
        while( true ) {
          if ((uVar2 & 0x80) == 0) {
            uVar1 = uVar2 & 0x7f;
          }
          else if ((uVar2 & 0x40) == 0) {
            pbVar6 = pbVar6 + (uVar2 & 0x3f);
            uVar1 = uVar2 & 0x3f;
          }
          else {
            pbVar6 = pbVar6 + 1;
            uVar1 = uVar2 & 0x3f;
          }
          if ((int)(iVar12 - uVar1) < 1) break;
          uVar2 = (uint)*pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar12 = iVar12 - uVar1;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_11 = 2;
    }
    local_8 = (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
    if (local_8 != 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = (byte *)param_7;
      while( true ) {
        while ((local_8 & 0x80) == 0) {
          uVar2 = local_8 & 0x7f;
          if ((int)param_5 < (int)uVar2) goto LAB_00705fb2;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_5 + -uVar2;
          bVar7 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          local_8 = (uint)bVar7;
        }
        uVar2 = local_8 & 0x3f;
        if ((int)param_5 < (int)uVar2) break;
        if ((local_8 & 0x40) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_5 + -uVar2;
          local_8 = (uint)pbVar6[uVar2];
          pbVar6 = pbVar6 + uVar2 + 1;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_5 + -uVar2;
          local_8 = (uint)pbVar6[1];
          pbVar6 = pbVar6 + 2;
        }
      }
LAB_00705fb2:
      uVar2 = uVar2 - (int)param_5;
      if (((byte)local_8 & 0xc0) == 0x80) {
        pbVar6 = pbVar6 + (int)param_5;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = (byte *)param_8;
      puVar5 = param_1;
      pbVar8 = param_3;
      iVar12 = param_10;
      if ((int)uVar2 <= param_8) {
        do {
          local_c = local_8 & 0x80;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_5 + -uVar2;
          if (local_c == 0) {
            if (-1 < (int)(uVar2 - 1)) {
              do {
                if (iVar12 != 1) {
                  puVar5 = puVar5 + 1;
                  pbVar8 = pbVar8 + 1;
                }
                iVar12 = iVar12 + 1;
                if (2 < iVar12) {
                  iVar12 = 0;
                }
                uVar2 = uVar2 - 1;
              } while (uVar2 != 0);
            }
          }
          else if ((local_8 & 0x40) == 0) {
            puVar4 = puVar5;
            if (0 < iVar12) {
              if (iVar12 == 1) {
                pbVar6 = pbVar6 + 1;
                iVar12 = 2;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_0070612e;
              bVar7 = *pbVar8;
              puVar4 = puVar5 + 1;
              pbVar8 = pbVar8 + 1;
              pbVar6 = pbVar6 + 1;
              iVar12 = 0;
              *puVar5 = *(undefined1 *)((uint)bVar7 + param_12);
              uVar2 = uVar2 - 1;
            }
            puVar5 = puVar4;
            if (0 < (int)uVar2) {
              pbVar9 = pbVar8 + 1;
              pbVar10 = pbVar6 + 1;
              *puVar4 = *(undefined1 *)((uint)*pbVar8 + param_12);
              puVar4 = puVar4 + 1;
              for (iVar3 = uVar2 - 1; iVar12 = 1, puVar5 = puVar4, pbVar6 = pbVar10, pbVar8 = pbVar9
                  , 0 < iVar3; iVar3 = iVar3 + -3) {
                pbVar6 = pbVar10 + 1;
                iVar12 = 2;
                if (iVar3 + -1 < 1) break;
                puVar5 = puVar4 + 1;
                pbVar8 = pbVar9 + 1;
                pbVar6 = pbVar10 + 2;
                iVar12 = 0;
                *puVar4 = *(undefined1 *)((uint)*pbVar9 + param_12);
                if (iVar3 + -2 < 1) break;
                pbVar9 = pbVar9 + 2;
                pbVar10 = pbVar10 + 3;
                puVar4[1] = *(undefined1 *)((uint)*pbVar8 + param_12);
                puVar4 = puVar4 + 2;
              }
            }
          }
          else {
            pbVar6 = pbVar6 + 1;
            puVar4 = puVar5;
            if (0 < iVar12) {
              if (iVar12 == 1) {
                iVar12 = 2;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_0070612e;
              bVar7 = *pbVar8;
              puVar4 = puVar5 + 1;
              pbVar8 = pbVar8 + 1;
              iVar12 = 0;
              *puVar5 = *(undefined1 *)((uint)bVar7 + param_12);
              uVar2 = uVar2 - 1;
            }
            puVar5 = puVar4;
            if (0 < (int)uVar2) {
              pbVar9 = pbVar8 + 1;
              *puVar4 = *(undefined1 *)((uint)*pbVar8 + param_12);
              puVar4 = puVar4 + 1;
              for (iVar3 = uVar2 - 1;
                  (iVar12 = 1, puVar5 = puVar4, pbVar8 = pbVar9, 0 < iVar3 &&
                  (iVar12 = 2, 0 < iVar3 + -1)); iVar3 = iVar3 + -3) {
                pbVar8 = pbVar9 + 1;
                iVar12 = 0;
                *puVar4 = *(undefined1 *)((uint)*pbVar9 + param_12);
                puVar5 = puVar4 + 1;
                if (iVar3 + -2 < 1) break;
                pbVar9 = pbVar9 + 2;
                puVar4[1] = *(undefined1 *)((uint)*pbVar8 + param_12);
                puVar4 = puVar4 + 2;
              }
            }
          }
LAB_0070612e:
          if ((int)param_5 < 1) {
            uVar2 = 0;
            break;
          }
          bVar7 = *pbVar6;
          local_8 = (uint)bVar7;
          pbVar6 = pbVar6 + 1;
          if ((bVar7 & 0x80) == 0) {
            uVar2 = bVar7 & 0x7f;
          }
          else {
            uVar2 = bVar7 & 0x3f;
          }
        } while ((int)uVar2 <= (int)param_5);
      }
      uVar2 = uVar2 - (int)param_5;
      if ((0 < (int)param_5) && ((local_8 & 0x80) != 0)) {
        if ((local_8 & 0x40) == 0) {
          puVar4 = puVar5;
          if (0 < iVar12) {
            if (iVar12 == 1) {
              pbVar6 = pbVar6 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = param_5 + -1;
            }
            if ((int)param_5 < 1) goto LAB_007062b0;
            bVar7 = *pbVar8;
            puVar4 = puVar5 + 1;
            pbVar8 = pbVar8 + 1;
            pbVar6 = pbVar6 + 1;
            *puVar5 = *(undefined1 *)((uint)bVar7 + param_12);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = param_5 + -1;
          }
          if (0 < (int)param_5) {
            pbVar9 = pbVar6 + 1;
            *puVar4 = *(undefined1 *)((uint)*pbVar8 + param_12);
            puVar5 = puVar4 + 1;
            for (pbVar10 = param_5 + -1; pbVar6 = pbVar9, 0 < (int)pbVar10; pbVar10 = pbVar10 + -3)
            {
              pbVar11 = pbVar8 + 1;
              pbVar6 = pbVar9 + 1;
              if ((int)(pbVar10 + -1) < 1) break;
              pbVar8 = pbVar8 + 2;
              pbVar6 = pbVar9 + 2;
              *puVar5 = *(undefined1 *)((uint)*pbVar11 + param_12);
              if ((int)(pbVar10 + -2) < 1) break;
              pbVar9 = pbVar9 + 3;
              puVar5[1] = *(undefined1 *)((uint)*pbVar8 + param_12);
              puVar5 = puVar5 + 2;
            }
          }
        }
        else {
          pbVar6 = pbVar6 + 1;
          puVar4 = puVar5;
          if (0 < iVar12) {
            if (iVar12 == 1) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = param_5 + -1;
            }
            if ((int)param_5 < 1) goto LAB_007062b0;
            bVar7 = *pbVar8;
            puVar4 = puVar5 + 1;
            pbVar8 = pbVar8 + 1;
            *puVar5 = *(undefined1 *)((uint)bVar7 + param_12);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = param_5 + -1;
          }
          if (0 < (int)param_5) {
            *puVar4 = *(undefined1 *)((uint)*pbVar8 + param_12);
            puVar5 = puVar4 + 1;
            for (pbVar9 = param_5 + -1;
                (0 < (int)pbVar9 && (pbVar10 = pbVar8 + 1, 0 < (int)(pbVar9 + -1)));
                pbVar9 = pbVar9 + -3) {
              pbVar8 = pbVar8 + 2;
              *puVar5 = *(undefined1 *)((uint)*pbVar10 + param_12);
              if ((int)(pbVar9 + -2) < 1) break;
              puVar5[1] = *(undefined1 *)((uint)*pbVar8 + param_12);
              puVar5 = puVar5 + 2;
            }
          }
        }
      }
LAB_007062b0:
      bVar7 = (byte)local_8;
      iVar12 = (param_6 - param_7) - param_8;
      if ((int)uVar2 < iVar12) {
        do {
          iVar12 = iVar12 - uVar2;
          pbVar8 = pbVar6;
          if (((byte)local_8 & 0xc0) == 0x80) {
            pbVar8 = pbVar6 + uVar2;
          }
          bVar7 = *pbVar8;
          local_8 = (uint)bVar7;
          pbVar6 = pbVar8 + 1;
          uVar2 = local_8;
          if (((bVar7 & 0x80) != 0) && (uVar2 = local_8 & 0x3f, (bVar7 & 0x40) != 0)) {
            pbVar6 = pbVar8 + 2;
          }
        } while ((int)uVar2 < iVar12);
      }
      if ((bVar7 & 0xc0) == 0x80) {
        pbVar6 = pbVar6 + iVar12;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_11 = param_11 + 1;
    iVar12 = param_9;
    if (2 < param_11) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_11 = 0;
    }
  } while( true );
}

// 00706340 FUN_00706340
#line 1 "decomp/ST.exe/functions/00706340/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00706340(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte *param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10,uint param_11,
                 int param_12)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar5 = param_5;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = param_9 + -1;
    if (param_9 < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    while (((param_11 & 1) == 0 && (param_9 = param_9 + -1, -1 < param_9))) {
      uVar2 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
      iVar4 = param_6;
      if (uVar2 != 0) {
        while( true ) {
          if ((uVar2 & 0x80) == 0) {
            uVar1 = uVar2 & 0x7f;
          }
          else if ((uVar2 & 0x40) == 0) {
            pbVar5 = pbVar5 + (uVar2 & 0x3f);
            uVar1 = uVar2 & 0x3f;
          }
          else {
            pbVar5 = pbVar5 + 1;
            uVar1 = uVar2 & 0x3f;
          }
          if ((int)(iVar4 - uVar1) < 1) break;
          uVar2 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
          iVar4 = iVar4 - uVar1;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_11 = param_11 + 1;
      if (4 < (int)param_11) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_11 = 0;
      }
    }
    local_8 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
    if (local_8 == 0) goto LAB_00706849;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = (byte *)param_7;
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar2 = local_8 & 0x7f;
        if ((int)param_5 < (int)uVar2) goto LAB_00706429;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + -uVar2;
        bVar7 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        local_8 = (uint)bVar7;
      }
      uVar2 = local_8 & 0x3f;
      if ((int)param_5 < (int)uVar2) break;
      if ((local_8 & 0x40) == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + -uVar2;
        local_8 = (uint)pbVar5[uVar2];
        pbVar5 = pbVar5 + uVar2 + 1;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + -uVar2;
        local_8 = (uint)pbVar5[1];
        pbVar5 = pbVar5 + 2;
      }
    }
LAB_00706429:
    uVar2 = uVar2 - (int)param_5;
    pbVar6 = pbVar5;
    if (((byte)local_8 & 0xc0) == 0x80) {
      pbVar6 = pbVar5 + (int)param_5;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = (byte *)param_8;
    iVar4 = param_10;
    puVar8 = param_1;
    puVar9 = param_1;
    pbVar11 = param_3;
    if ((int)uVar2 <= param_8) {
      do {
        local_c = local_8 & 0x80;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + -uVar2;
        puVar8 = puVar9;
        if (local_c == 0) {
          if (-1 < (int)(uVar2 - 1)) {
            do {
              if (((byte)iVar4 & 1) == 1) {
                puVar8 = puVar8 + 1;
                pbVar11 = pbVar11 + 1;
              }
              iVar4 = iVar4 + 1;
              if (4 < iVar4) {
                iVar4 = 0;
              }
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
          goto LAB_00706620;
        }
        if ((local_8 & 0x40) == 0) {
          if (iVar4 < 1) {
switchD_00706553_default:
            if (0 < (int)uVar2) {
              pbVar5 = pbVar6 + 1;
              puVar9 = puVar8;
              pbVar10 = pbVar11;
              for (iVar3 = uVar2 - 1; iVar4 = 1, pbVar6 = pbVar5, puVar8 = puVar9, pbVar11 = pbVar10
                  , 0 < iVar3; iVar3 = iVar3 + -5) {
                pbVar11 = pbVar10 + 1;
                pbVar6 = pbVar5 + 1;
                *puVar9 = *(undefined1 *)((uint)*pbVar10 + param_12);
                iVar4 = 2;
                puVar8 = puVar9 + 1;
                if (iVar3 + -1 < 1) break;
                pbVar6 = pbVar5 + 2;
                iVar4 = 3;
                if (iVar3 + -2 < 1) break;
                puVar8 = puVar9 + 2;
                bVar7 = *pbVar11;
                pbVar11 = pbVar10 + 2;
                pbVar6 = pbVar5 + 3;
                puVar9[1] = *(undefined1 *)((uint)bVar7 + param_12);
                iVar4 = 4;
                if (iVar3 + -3 < 1) break;
                pbVar6 = pbVar5 + 4;
                iVar4 = 0;
                if (iVar3 + -4 < 1) break;
                pbVar5 = pbVar5 + 5;
                puVar9 = puVar8;
                pbVar10 = pbVar11;
              }
            }
          }
          else {
            switch(iVar4) {
            case 1:
              bVar7 = *pbVar11;
              puVar8 = puVar9 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar6 = pbVar6 + 1;
              uVar2 = uVar2 - 1;
              *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
              iVar4 = 2;
              if ((int)uVar2 < 1) goto LAB_00706620;
              break;
            case 2:
              break;
            case 3:
              goto switchD_00706553_caseD_3;
            case 4:
              goto switchD_00706553_caseD_4;
            default:
              goto switchD_00706553_default;
            }
            pbVar6 = pbVar6 + 1;
            uVar2 = uVar2 - 1;
            iVar4 = 3;
            puVar9 = puVar8;
            if (0 < (int)uVar2) {
switchD_00706553_caseD_3:
              bVar7 = *pbVar11;
              puVar8 = puVar9 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar6 = pbVar6 + 1;
              uVar2 = uVar2 - 1;
              *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
              iVar4 = 4;
              if (0 < (int)uVar2) {
switchD_00706553_caseD_4:
                pbVar6 = pbVar6 + 1;
                iVar4 = 0;
                uVar2 = uVar2 - 1;
                goto switchD_00706553_default;
              }
            }
          }
        }
        else {
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar11;
          if (iVar4 < 1) {
switchD_00706480_default:
            puVar8 = puVar9;
            pbVar11 = pbVar5;
            if (0 < (int)uVar2) {
              iVar3 = uVar2 - 1;
              iVar4 = 1;
              if (0 < iVar3) {
                while( true ) {
                  pbVar10 = pbVar5 + 1;
                  *puVar9 = *(undefined1 *)((uint)*pbVar5 + param_12);
                  iVar4 = 2;
                  puVar8 = puVar9 + 1;
                  pbVar11 = pbVar10;
                  if ((iVar3 + -1 < 1) || (iVar4 = 3, iVar3 + -2 < 1)) break;
                  puVar8 = puVar9 + 2;
                  pbVar11 = pbVar5 + 2;
                  puVar9[1] = *(undefined1 *)((uint)*pbVar10 + param_12);
                  iVar4 = 4;
                  if ((iVar3 + -3 < 1) || (iVar4 = 0, iVar3 + -4 < 1)) break;
                  iVar3 = iVar3 + -5;
                  iVar4 = 1;
                  puVar9 = puVar8;
                  pbVar5 = pbVar11;
                  if (iVar3 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar4) {
            case 1:
              bVar7 = *pbVar11;
              puVar8 = puVar9 + 1;
              pbVar11 = pbVar11 + 1;
              uVar2 = uVar2 - 1;
              *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
              iVar4 = 2;
              if ((int)uVar2 < 1) goto LAB_00706620;
              break;
            case 2:
              break;
            case 3:
              goto switchD_00706480_caseD_3;
            case 4:
              goto switchD_00706480_caseD_4;
            default:
              goto switchD_00706480_default;
            }
            uVar2 = uVar2 - 1;
            iVar4 = 3;
            puVar9 = puVar8;
            if (0 < (int)uVar2) {
switchD_00706480_caseD_3:
              bVar7 = *pbVar11;
              puVar8 = puVar9 + 1;
              pbVar11 = pbVar11 + 1;
              uVar2 = uVar2 - 1;
              *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
              iVar4 = 4;
              if (0 < (int)uVar2) {
switchD_00706480_caseD_4:
                iVar4 = 0;
                uVar2 = uVar2 - 1;
                puVar9 = puVar8;
                pbVar5 = pbVar11;
                goto switchD_00706480_default;
              }
            }
          }
        }
LAB_00706620:
        if ((int)param_5 < 1) {
          uVar2 = 0;
          break;
        }
        bVar7 = *pbVar6;
        local_8 = (uint)bVar7;
        pbVar6 = pbVar6 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar2 = bVar7 & 0x7f;
        }
        else {
          uVar2 = bVar7 & 0x3f;
        }
        puVar9 = puVar8;
      } while ((int)uVar2 <= (int)param_5);
    }
    uVar2 = uVar2 - (int)param_5;
    pbVar5 = pbVar6;
    if (((int)param_5 < 1) || ((local_8 & 0x80) == 0)) goto LAB_007067fb;
    if ((local_8 & 0x40) == 0) {
      if (iVar4 < 1) goto switchD_00706745_default;
      puVar9 = puVar8;
      switch(iVar4) {
      case 1:
        bVar7 = *pbVar11;
        puVar9 = puVar8 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar5 = pbVar6 + 1;
        *puVar8 = *(undefined1 *)((uint)bVar7 + param_12);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + -1;
        if ((int)param_5 < 1) break;
        goto LAB_0070676b;
      case 2:
LAB_0070676b:
        pbVar6 = pbVar5 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + -1;
        pbVar5 = pbVar6;
        if (0 < (int)param_5) {
switchD_00706745_caseD_3:
          bVar7 = *pbVar11;
          puVar8 = puVar9 + 1;
          pbVar11 = pbVar11 + 1;
          pbVar5 = pbVar6 + 1;
          *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
          if (0 < (int)(param_5 + -1)) {
            pbVar6 = pbVar6 + 2;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = param_5 + -2;
            goto switchD_00706745_default;
          }
        }
        break;
      case 3:
        goto switchD_00706745_caseD_3;
      case 4:
        pbVar6 = pbVar6 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + -1;
      default:
switchD_00706745_default:
        pbVar5 = pbVar6;
        if (0 < (int)param_5) {
          pbVar6 = pbVar6 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_5 + -1;
          pbVar5 = pbVar6;
          if (0 < (int)param_5) {
            while( true ) {
              pbVar10 = pbVar11 + 1;
              *puVar8 = *(undefined1 *)((uint)*pbVar11 + param_12);
              pbVar5 = pbVar6 + 1;
              if (((int)(param_5 + -1) < 1) || (pbVar5 = pbVar6 + 2, (int)(param_5 + -2) < 1))
              break;
              pbVar11 = pbVar11 + 2;
              puVar8[1] = *(undefined1 *)((uint)*pbVar10 + param_12);
              pbVar5 = pbVar6 + 3;
              if (((int)(param_5 + -3) < 1) || (pbVar5 = pbVar6 + 4, (int)(param_5 + -4) < 1))
              break;
              pbVar6 = pbVar6 + 5;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = param_5 + -5;
              pbVar5 = pbVar6;
              puVar8 = puVar8 + 2;
              if ((int)param_5 < 1) break;
            }
          }
        }
      }
      goto LAB_007067fb;
    }
    pbVar5 = pbVar6 + 1;
    if (iVar4 < 1) goto switchD_00706680_default;
    puVar9 = puVar8;
    switch(iVar4) {
    case 1:
      bVar7 = *pbVar11;
      puVar9 = puVar8 + 1;
      pbVar11 = pbVar11 + 1;
      *puVar8 = *(undefined1 *)((uint)bVar7 + param_12);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_5 + -1;
      if ((int)param_5 < 1) break;
      goto LAB_007066a5;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 2:
LAB_007066a5:
      param_5 = param_5 + -1;
      if (0 < (int)param_5) {
switchD_00706680_caseD_3:
        bVar7 = *pbVar11;
        puVar8 = puVar9 + 1;
        pbVar11 = pbVar11 + 1;
        *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
        if (0 < (int)(param_5 + -1)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_5 + -2;
          goto switchD_00706680_default;
        }
      }
      break;
    case 3:
      goto switchD_00706680_caseD_3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 4:
      param_5 = param_5 + -1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    default:
switchD_00706680_default:
      if ((0 < (int)param_5) && (param_5 = param_5 + -1, 0 < (int)param_5)) {
        while( true ) {
          pbVar6 = pbVar11 + 1;
          *puVar8 = *(undefined1 *)((uint)*pbVar11 + param_12);
          if ((int)(param_5 + -2) < 1) break;
          pbVar11 = pbVar11 + 2;
          puVar8[1] = *(undefined1 *)((uint)*pbVar6 + param_12);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (((int)(param_5 + -4) < 1) ||
             (param_5 = param_5 + -5, puVar8 = puVar8 + 2, (int)param_5 < 1)) break;
        }
      }
    }
LAB_007067fb:
    bVar7 = (byte)local_8;
    iVar4 = (param_6 - param_7) - param_8;
    if ((int)uVar2 < iVar4) {
      do {
        iVar4 = iVar4 - uVar2;
        pbVar6 = pbVar5;
        if (((byte)local_8 & 0xc0) == 0x80) {
          pbVar6 = pbVar5 + uVar2;
        }
        bVar7 = *pbVar6;
        local_8 = (uint)bVar7;
        pbVar5 = pbVar6 + 1;
        uVar2 = local_8;
        if (((bVar7 & 0x80) != 0) && (uVar2 = local_8 & 0x3f, (bVar7 & 0x40) != 0)) {
          pbVar5 = pbVar6 + 2;
        }
      } while ((int)uVar2 < iVar4);
    }
    if ((bVar7 & 0xc0) == 0x80) {
      pbVar5 = pbVar5 + iVar4;
    }
LAB_00706849:
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_11 = param_11 + 1;
    if (4 < (int)param_11) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_11 = 0;
    }
  } while( true );
}

// 007068D0 FUN_007068d0
#line 1 "decomp/ST.exe/functions/007068D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_007068D0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int local_88 [31];
  int local_c;
  int local_8;

  _DAT_00857000 = 1;
  if ((2 < param_11) && (2 < param_12)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = param_9 + 1;
    if (param_11 <= param_9) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = 3;
    }
    if (param_12 <= param_9) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = 3;
    }
    local_8 = 0x1f;
    piVar8 = local_88;
    do {
      uVar1 = st::fn_0072E6C0();
      local_c = (int)uVar1 % param_9;
      uVar1 = st::fn_0072E6C0();
      *piVar8 = ((int)uVar1 % param_9) * param_2 + local_c;
      local_8 = local_8 + -1;
      piVar8 = piVar8 + 1;
    } while (local_8 != 0);
    iVar9 = 0;
    iVar4 = param_11 + (1 - param_9);
    puVar5 = param_1;
    puVar11 = param_3;
    for (iVar2 = param_12 - param_9; -1 < iVar2; iVar2 = iVar2 + -1) {
      uVar1 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      iVar10 = param_8;
      if (uVar1 == 0) {
        puVar5 = puVar5 + param_2;
        puVar11 = (ushort *)((int)puVar11 + param_4);
      }
      else {
        while( true ) {
          while ((uVar1 & 0x80) == 0) {
            uVar3 = uVar1 & 0x7f;
            if (iVar10 < (int)uVar3) goto LAB_007069ed;
            bVar6 = *param_6;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            iVar10 = iVar10 - uVar3;
            uVar1 = (uint)bVar6;
          }
          uVar3 = uVar1 & 0x3f;
          if (iVar10 < (int)uVar3) break;
          if ((uVar1 & 0x40) == 0) {
            uVar1 = (uint)param_6[uVar3];
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + uVar3 + 1;
            iVar10 = iVar10 - uVar3;
          }
          else {
            uVar1 = (uint)param_6[1];
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 2;
            iVar10 = iVar10 - uVar3;
          }
        }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_007069ed:
        param_1 = (undefined1 *)(uVar3 - iVar10);
        if (((byte)uVar1 & 0xc0) == 0x80) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + iVar10;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_9 = iVar4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = puVar11;
        if (param_10 == 0) {
          if ((int)param_1 <= iVar4) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_9 = param_9 - (int)param_1;
              if ((uVar1 & 0x80) == 0) {
                puVar5 = puVar5 + (int)param_1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + (int)param_1;
              }
              else if ((uVar1 & 0x40) == 0) {
                if (-1 < (int)((int)param_1 - 1U)) {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + (int)param_1;
                  do {
                    if (param_5 <= *param_3) {
                      piVar8 = local_88 + iVar9;
                      iVar9 = iVar9 + 1;
                      *puVar5 = puVar5[*piVar8];
                      if (0x1e < iVar9) {
                        iVar9 = 0;
                      }
                    }
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_3 = param_3 + 1;
                    puVar5 = puVar5 + 1;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = param_1 + -1;
                  } while (param_1 != nullptr);
                }
              }
              else {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                if (-1 < (int)((int)param_1 - 1U)) {
                  do {
                    if (param_5 <= *param_3) {
                      piVar8 = local_88 + iVar9;
                      iVar9 = iVar9 + 1;
                      *puVar5 = puVar5[*piVar8];
                      if (0x1e < iVar9) {
                        iVar9 = 0;
                      }
                    }
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_3 = param_3 + 1;
                    puVar5 = puVar5 + 1;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = param_1 + -1;
                  } while (param_1 != nullptr);
                }
              }
              if (param_9 < 1) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = nullptr;
                break;
              }
              bVar6 = *param_6;
              uVar1 = (uint)bVar6;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
              if ((bVar6 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (undefined1 *)(uVar1 & 0x7f);
              }
              else {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (undefined1 *)(uVar1 & 0x3f);
              }
            } while ((int)param_1 <= param_9);
          }
          uVar3 = (int)param_1 - param_9;
          if ((uVar1 & 0x80) == 0) goto LAB_00706d9b;
          if ((uVar1 & 0x40) == 0) {
            if (-1 < param_9 + -1) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + param_9;
              do {
                if (param_5 <= *param_3) {
                  piVar8 = local_88 + iVar9;
                  iVar9 = iVar9 + 1;
                  *puVar5 = puVar5[*piVar8];
                  if (0x1e < iVar9) {
                    iVar9 = 0;
                  }
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
                puVar5 = puVar5 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_9 = param_9 + -1;
              } while (param_9 != 0);
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          else if ((0 < param_9) && (param_6 = param_6 + 1, -1 < param_9 + -1)) {
            do {
              if (param_5 <= *param_3) {
                piVar8 = local_88 + iVar9;
                iVar9 = iVar9 + 1;
                *puVar5 = puVar5[*piVar8];
                if (0x1e < iVar9) {
                  iVar9 = 0;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
              puVar5 = puVar5 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_9 = param_9 + -1;
            } while (param_9 != 0);
          }
        }
        else {
          if ((int)param_1 <= iVar4) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = (ushort *)(uVar1 & 0x80);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_9 = param_9 - (int)param_1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if (param_3 == nullptr) {
                puVar5 = puVar5 + (int)param_1;
                puVar11 = puVar11 + (int)param_1;
              }
              else {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = (ushort *)param_1;
                if ((uVar1 & 0x40) == 0) {
                  if (-1 < (int)((int)param_1 - 1U)) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_6 = param_6 + (int)param_1;
                    do {
                      if (param_5 <= *puVar11) {
                        piVar8 = local_88 + iVar9;
                        iVar9 = iVar9 + 1;
                        *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar8] + param_10);
                        if (0x1e < iVar9) {
                          iVar9 = 0;
                        }
                      }
                      puVar11 = puVar11 + 1;
                      puVar5 = puVar5 + 1;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_3 = (ushort *)((int)param_3 + -1);
                    } while (param_3 != nullptr);
                  }
                }
                else {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                  if (-1 < (int)((int)param_1 - 1U)) {
                    do {
                      if (param_5 <= *puVar11) {
                        piVar8 = local_88 + iVar9;
                        iVar9 = iVar9 + 1;
                        *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar8] + param_10);
                        if (0x1e < iVar9) {
                          iVar9 = 0;
                        }
                      }
                      puVar11 = puVar11 + 1;
                      puVar5 = puVar5 + 1;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_3 = (ushort *)((int)param_3 + -1);
                    } while (param_3 != nullptr);
                  }
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = puVar11;
              if (param_9 < 1) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = nullptr;
                break;
              }
              bVar6 = *param_6;
              uVar1 = (uint)bVar6;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
              if ((bVar6 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (undefined1 *)(uVar1 & 0x7f);
              }
              else {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (undefined1 *)(uVar1 & 0x3f);
              }
            } while ((int)param_1 <= param_9);
          }
          uVar3 = (int)param_1 - param_9;
          if ((uVar1 & 0x80) == 0) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_00706d9b:
            param_3 = param_3 + param_9;
            puVar5 = puVar5 + param_9;
          }
          else if ((uVar1 & 0x40) == 0) {
            if (-1 < param_9 + -1) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + param_9;
              do {
                if (param_5 <= *param_3) {
                  piVar8 = local_88 + iVar9;
                  iVar9 = iVar9 + 1;
                  *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar8] + param_10);
                  if (0x1e < iVar9) {
                    iVar9 = 0;
                  }
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
                puVar5 = puVar5 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_9 = param_9 + -1;
              } while (param_9 != 0);
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          else if ((0 < param_9) && (param_6 = param_6 + 1, -1 < param_9 + -1)) {
            do {
              if (param_5 <= *param_3) {
                piVar8 = local_88 + iVar9;
                iVar9 = iVar9 + 1;
                *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar8] + param_10);
                if (0x1e < iVar9) {
                  iVar9 = 0;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
              puVar5 = puVar5 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_9 = param_9 + -1;
            } while (param_9 != 0);
          }
        }
        bVar6 = (byte)uVar1;
        iVar10 = (param_7 - param_8) - iVar4;
        if ((int)uVar3 < iVar10) {
          do {
            iVar10 = iVar10 - uVar3;
            pbVar7 = param_6;
            if (((byte)uVar1 & 0xc0) == 0x80) {
              pbVar7 = param_6 + uVar3;
            }
            bVar6 = *pbVar7;
            uVar1 = (uint)bVar6;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = pbVar7 + 1;
            uVar3 = uVar1;
            if (((bVar6 & 0x80) != 0) && (uVar3 = uVar1 & 0x3f, (bVar6 & 0x40) != 0)) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = pbVar7 + 2;
            }
          } while ((int)uVar3 < iVar10);
        }
        if ((bVar6 & 0xc0) == 0x80) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + iVar10;
        }
        puVar5 = puVar5 + (param_2 - iVar4);
        puVar11 = (ushort *)((int)param_3 + param_4 + iVar4 * -2);
      }
    }
  }
  return;
}

// 00706E30 FUN_00706e30
#line 1 "decomp/ST.exe/functions/00706E30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00706E30(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,uint param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,uint param_16)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte bVar8;
  byte *pbVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int local_80 [31];

  _DAT_00857000 = 1;
  if ((2 < param_15) && (2 < (int)param_16)) {
    bVar1 = param_15 <= (int)(param_9 + 1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_15 = param_9 + 1;
    if (bVar1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = 3;
    }
    if ((int)param_16 <= param_15) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = 3;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_16 = 0x1f;
    piVar11 = local_80;
    do {
      uVar2 = st::fn_0072E6C0();
      uVar3 = st::fn_0072E6C0();
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_16 = param_16 - 1;
      *piVar11 = ((int)uVar3 % param_15) * param_2 + (int)uVar2 % param_15;
      piVar11 = piVar11 + 1;
    } while (param_16 != 0);
    iVar12 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_12 + -1;
    if (-1 < param_12) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_00706ebf:
      if (param_14 == 1) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_12 = param_12 + -1;
        if (param_12 < 0) {
          return;
        }
        uVar2 = (uint)*param_6;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        iVar10 = param_7;
        if (uVar2 != 0) {
          while( true ) {
            if ((uVar2 & 0x80) == 0) {
              uVar3 = uVar2 & 0x7f;
            }
            else if ((uVar2 & 0x40) == 0) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + (uVar2 & 0x3f);
              uVar3 = uVar2 & 0x3f;
            }
            else {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
              uVar3 = uVar2 & 0x3f;
            }
            if ((int)(iVar10 - uVar3) < 1) break;
            uVar2 = (uint)*param_6;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            iVar10 = iVar10 - uVar3;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_14 = 2;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_16 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      if (param_16 != 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_8;
        do {
          if ((param_16 & 0x80) == 0) {
            uVar2 = param_16 & 0x7f;
            if (param_15 < (int)uVar2) goto LAB_00706f7b;
          }
          else {
            uVar2 = param_16 & 0x3f;
            if (param_15 < (int)uVar2) goto LAB_00706f7b;
            if ((param_16 & 0x40) == 0) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + uVar2;
            }
            else {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 - uVar2;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_16 = (uint)*param_6;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + 1;
        } while( true );
      }
      goto LAB_007077cd;
    }
  }
  return;
LAB_00706f7b:
  uVar2 = uVar2 - param_15;
  if (((byte)param_16 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + param_15;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_15 = param_11;
  if (param_10 == 0) {
    puVar5 = param_1;
    puVar7 = param_3;
    iVar10 = param_13;
    if ((int)uVar2 <= param_11) {
      do {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_9 = param_16 & 0x80;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 - uVar2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_9 == 0) {
          if (-1 < (int)(uVar2 - 1)) {
            do {
              if (iVar10 != 1) {
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              iVar10 = iVar10 + 1;
              if (2 < iVar10) {
                iVar10 = 0;
              }
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
        }
        else if ((param_16 & 0x40) == 0) {
          puVar4 = puVar5;
          puVar6 = puVar7;
          pbVar9 = param_6;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
              uVar2 = uVar2 - 1;
              iVar10 = 2;
            }
            if ((int)uVar2 < 1) goto LAB_0070758b;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = puVar5[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar6 = puVar7 + 1;
            puVar4 = puVar5 + 1;
            pbVar9 = param_6 + 1;
            iVar10 = 0;
            uVar2 = uVar2 - 1;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          for (; puVar5 = puVar4, puVar7 = puVar6, param_6 = pbVar9, 0 < (int)uVar2;
              uVar2 = uVar2 - 3) {
            if (param_5 <= *puVar6) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar4 = puVar4[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar7 = puVar6 + 1;
            puVar5 = puVar4 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = pbVar9 + 1;
            iVar10 = 1;
            if ((int)(uVar2 - 1) < 1) break;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = pbVar9 + 2;
            iVar10 = 2;
            if ((int)(uVar2 - 2) < 1) break;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = puVar5[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            iVar10 = 0;
            puVar4 = puVar4 + 2;
            puVar6 = puVar6 + 2;
            pbVar9 = pbVar9 + 3;
          }
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + 1;
          puVar4 = puVar5;
          puVar6 = puVar7;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              iVar10 = 2;
              uVar2 = uVar2 - 1;
            }
            if ((int)uVar2 < 1) goto LAB_0070758b;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = puVar5[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar6 = puVar7 + 1;
            puVar4 = puVar5 + 1;
            iVar10 = 0;
            uVar2 = uVar2 - 1;
          }
          for (; puVar5 = puVar4, puVar7 = puVar6, 0 < (int)uVar2; uVar2 = uVar2 - 3) {
            if (param_5 <= *puVar6) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar4 = puVar4[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar7 = puVar6 + 1;
            puVar5 = puVar4 + 1;
            iVar10 = 1;
            if (((int)(uVar2 - 1) < 1) || (iVar10 = 2, (int)(uVar2 - 2) < 1)) break;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = puVar5[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            iVar10 = 0;
            puVar4 = puVar4 + 2;
            puVar6 = puVar6 + 2;
          }
        }
LAB_0070758b:
        if (param_15 < 1) {
          uVar2 = 0;
          break;
        }
        bVar8 = *param_6;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_16 = (uint)bVar8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        if ((bVar8 & 0x80) == 0) {
          uVar2 = bVar8 & 0x7f;
        }
        else {
          uVar2 = bVar8 & 0x3f;
        }
      } while ((int)uVar2 <= param_15);
    }
    uVar2 = uVar2 - param_15;
    if ((0 < param_15) && ((param_16 & 0x80) != 0)) {
      if ((param_16 & 0x40) == 0) {
        pbVar9 = param_6;
        if (0 < iVar10) {
          if (iVar10 == 1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = puVar5[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
          pbVar9 = param_6 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 + -1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        for (; param_6 = pbVar9, 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = puVar5[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = pbVar9 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if ((param_15 + -1 < 1) || (param_6 = pbVar9 + 2, param_15 + -2 < 1)) break;
          if (param_5 <= puVar7[1]) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            puVar5[1] = (puVar5 + 1)[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 2;
          puVar5 = puVar5 + 2;
          pbVar9 = pbVar9 + 3;
        }
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        if (0 < iVar10) {
          if (iVar10 == 1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = puVar5[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 + -1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        for (; 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = puVar5[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          if ((param_15 + -1 < 1) || (param_15 + -2 < 1)) break;
          if (param_5 <= puVar7[1]) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            puVar5[1] = (puVar5 + 1)[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 2;
          puVar5 = puVar5 + 2;
        }
      }
    }
  }
  else {
    puVar5 = param_1;
    puVar7 = param_3;
    iVar10 = param_13;
    if ((int)uVar2 <= param_11) {
      do {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_9 = param_16 & 0x80;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 - uVar2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_9 == 0) {
          if (-1 < (int)(uVar2 - 1)) {
            do {
              if (iVar10 != 1) {
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              iVar10 = iVar10 + 1;
              if (2 < iVar10) {
                iVar10 = 0;
              }
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
        }
        else if ((param_16 & 0x40) == 0) {
          puVar4 = puVar5;
          puVar6 = puVar7;
          pbVar9 = param_6;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
              uVar2 = uVar2 - 1;
              iVar10 = 2;
            }
            if ((int)uVar2 < 1) goto LAB_0070719b;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar6 = puVar7 + 1;
            puVar4 = puVar5 + 1;
            pbVar9 = param_6 + 1;
            iVar10 = 0;
            uVar2 = uVar2 - 1;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          for (; puVar5 = puVar4, puVar7 = puVar6, param_6 = pbVar9, 0 < (int)uVar2;
              uVar2 = uVar2 - 3) {
            if (param_5 <= *puVar6) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar4 = *(undefined1 *)((uint)(byte)puVar4[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar7 = puVar6 + 1;
            puVar5 = puVar4 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = pbVar9 + 1;
            iVar10 = 1;
            if ((int)(uVar2 - 1) < 1) break;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = pbVar9 + 2;
            iVar10 = 2;
            if ((int)(uVar2 - 2) < 1) break;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            iVar10 = 0;
            puVar4 = puVar4 + 2;
            puVar6 = puVar6 + 2;
            pbVar9 = pbVar9 + 3;
          }
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + 1;
          puVar4 = puVar5;
          puVar6 = puVar7;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              iVar10 = 2;
              uVar2 = uVar2 - 1;
            }
            if ((int)uVar2 < 1) goto LAB_0070719b;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar6 = puVar7 + 1;
            puVar4 = puVar5 + 1;
            iVar10 = 0;
            uVar2 = uVar2 - 1;
          }
          for (; puVar5 = puVar4, puVar7 = puVar6, 0 < (int)uVar2; uVar2 = uVar2 - 3) {
            if (param_5 <= *puVar6) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar4 = *(undefined1 *)((uint)(byte)puVar4[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar7 = puVar6 + 1;
            puVar5 = puVar4 + 1;
            iVar10 = 1;
            if (((int)(uVar2 - 1) < 1) || (iVar10 = 2, (int)(uVar2 - 2) < 1)) break;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            iVar10 = 0;
            puVar4 = puVar4 + 2;
            puVar6 = puVar6 + 2;
          }
        }
LAB_0070719b:
        if (param_15 < 1) {
          uVar2 = 0;
          break;
        }
        bVar8 = *param_6;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_16 = (uint)bVar8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        if ((bVar8 & 0x80) == 0) {
          uVar2 = bVar8 & 0x7f;
        }
        else {
          uVar2 = bVar8 & 0x3f;
        }
      } while ((int)uVar2 <= param_15);
    }
    uVar2 = uVar2 - param_15;
    if ((0 < param_15) && ((param_16 & 0x80) != 0)) {
      if ((param_16 & 0x40) == 0) {
        pbVar9 = param_6;
        if (0 < iVar10) {
          if (iVar10 == 1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
          pbVar9 = param_6 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 + -1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        for (; param_6 = pbVar9, 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = pbVar9 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if ((param_15 + -1 < 1) || (param_6 = pbVar9 + 2, param_15 + -2 < 1)) break;
          if (param_5 <= puVar7[1]) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            puVar5[1] = *(undefined1 *)((uint)(byte)(puVar5 + 1)[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 2;
          puVar5 = puVar5 + 2;
          pbVar9 = pbVar9 + 3;
        }
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        if (0 < iVar10) {
          if (iVar10 == 1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 + -1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        for (; 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          if ((param_15 + -1 < 1) || (param_15 + -2 < 1)) break;
          if (param_5 <= puVar7[1]) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            puVar5[1] = *(undefined1 *)((uint)(byte)(puVar5 + 1)[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 2;
          puVar5 = puVar5 + 2;
        }
      }
    }
  }
cf_common_join_00707777:
  bVar8 = (byte)param_16;
  iVar10 = (param_7 - param_8) - param_11;
  if ((int)uVar2 < iVar10) {
    do {
      iVar10 = iVar10 - uVar2;
      if (((byte)param_16 & 0xc0) == 0x80) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + uVar2;
      }
      bVar8 = *param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_16 = (uint)bVar8;
      uVar2 = param_16;
      pbVar9 = param_6 + 1;
      if (((bVar8 & 0x80) != 0) && (uVar2 = param_16 & 0x3f, (bVar8 & 0x40) != 0)) {
        pbVar9 = param_6 + 2;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = pbVar9;
    } while ((int)uVar2 < iVar10);
  }
  if ((bVar8 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + iVar10;
  }
LAB_007077cd:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_14 = param_14 + 1;
  if (2 < param_14) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_14 = 0;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_12 = param_12 + -1;
  if (param_12 < 0) {
    return;
  }
  goto LAB_00706ebf;
}

// 00707810 FUN_00707810
#line 1 "decomp/ST.exe/functions/00707810/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00707810(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,uint param_9,int param_10,int param_11,
                 int param_12,int param_13,uint param_14,int param_15,uint param_16)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  int iVar14;
  int local_80 [31];

  _DAT_00857000 = 1;
  if ((2 < param_15) && (2 < (int)param_16)) {
    bVar2 = param_15 <= (int)(param_9 + 1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_15 = param_9 + 1;
    if (bVar2) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = 3;
    }
    if ((int)param_16 <= param_15) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = 3;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_16 = 0x1f;
    piVar13 = local_80;
    do {
      uVar3 = st::fn_0072E6C0();
      uVar4 = st::fn_0072E6C0();
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_16 = param_16 - 1;
      *piVar13 = ((int)uVar4 % param_15) * param_2 + (int)uVar3 % param_15;
      piVar13 = piVar13 + 1;
    } while (param_16 != 0);
    iVar14 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_12 + -1;
    if (-1 < param_12) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x007078a5:
      while (((param_14 & 1) == 0 && (param_12 = param_12 + -1, -1 < param_12))) {
        uVar3 = (uint)*param_6;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        iVar6 = param_7;
        if (uVar3 != 0) {
          while( true ) {
            if ((uVar3 & 0x80) == 0) {
              uVar4 = uVar3 & 0x7f;
            }
            else if ((uVar3 & 0x40) == 0) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + (uVar3 & 0x3f);
              uVar4 = uVar3 & 0x3f;
            }
            else {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
              uVar4 = uVar3 & 0x3f;
            }
            if ((int)(iVar6 - uVar4) < 1) break;
            uVar3 = (uint)*param_6;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            iVar6 = iVar6 - uVar4;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_14 = param_14 + 1;
        if (4 < (int)param_14) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_14 = 0;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_16 = (uint)*param_6;
      pbVar9 = param_6 + 1;
      if (param_16 != 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = pbVar9;
        do {
          if ((param_16 & 0x80) == 0) {
            uVar3 = param_16 & 0x7f;
            if (param_15 < (int)uVar3) goto LAB_0070795e;
          }
          else {
            uVar3 = param_16 & 0x3f;
            if (param_15 < (int)uVar3) goto LAB_0070795e;
            if ((param_16 & 0x40) == 0) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + uVar3;
            }
            else {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 - uVar3;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_16 = (uint)*param_6;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + 1;
        } while( true );
      }
      goto LAB_00707e8a;
    }
  }
  return;
LAB_0070795e:
  uVar3 = uVar3 - param_15;
  if (((byte)param_16 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + param_15;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_15 = param_11;
  if (param_10 == 0) {
    iVar6 = param_13;
    puVar8 = param_3;
    puVar11 = param_1;
    if ((int)uVar3 <= param_11) {
      do {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_9 = param_16 & 0x80;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 - uVar3;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_9 == 0) {
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar6 & 1) == 1) {
                puVar11 = puVar11 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar6 = iVar6 + 1;
              if (4 < iVar6) {
                iVar6 = 0;
              }
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          goto LAB_00708302;
        }
        if ((param_16 & 0x40) == 0) {
          if (iVar6 < 1) {
switchD_0070819b_default:
            if (0 < (int)uVar3) {
              pbVar9 = param_6 + 1;
              puVar7 = puVar8;
              puVar12 = puVar11;
              for (iVar5 = uVar3 - 1; iVar6 = 1, puVar8 = puVar7, puVar11 = puVar12,
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = pbVar9, 0 < iVar5; iVar5 = iVar5 + -5) {
                if (param_5 <= *puVar7) {
                  piVar13 = local_80 + iVar14;
                  iVar14 = iVar14 + 1;
                  *puVar12 = puVar12[*piVar13];
                  if (0x1e < iVar14) {
                    iVar14 = 0;
                  }
                }
                puVar8 = puVar7 + 1;
                puVar11 = puVar12 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = pbVar9 + 1;
                iVar6 = 2;
                if (iVar5 + -1 < 1) break;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = pbVar9 + 2;
                iVar6 = 3;
                if (iVar5 + -2 < 1) break;
                if (param_5 <= *puVar8) {
                  piVar13 = local_80 + iVar14;
                  iVar14 = iVar14 + 1;
                  *puVar11 = puVar11[*piVar13];
                  if (0x1e < iVar14) {
                    iVar14 = 0;
                  }
                }
                puVar8 = puVar7 + 2;
                puVar11 = puVar12 + 2;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = pbVar9 + 3;
                iVar6 = 4;
                if (iVar5 + -3 < 1) break;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = pbVar9 + 4;
                iVar6 = 0;
                if (iVar5 + -4 < 1) break;
                pbVar9 = pbVar9 + 5;
                puVar7 = puVar8;
                puVar12 = puVar11;
              }
            }
          }
          else {
            switch(iVar6) {
            case 1:
              if (param_5 <= *puVar8) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar11 = puVar11[*piVar13];
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
              uVar3 = uVar3 - 1;
              iVar6 = 2;
              if ((int)uVar3 < 1) goto LAB_00708302;
              break;
            case 2:
              break;
            case 3:
              goto switchD_0070819b_caseD_3;
            case 4:
              goto switchD_0070819b_caseD_4;
            default:
              goto switchD_0070819b_default;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            iVar6 = 3;
            if (0 < (int)uVar3) {
switchD_0070819b_caseD_3:
              if (param_5 <= *puVar8) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar11 = puVar11[*piVar13];
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + 1;
              uVar3 = uVar3 - 1;
              iVar6 = 4;
              if (0 < (int)uVar3) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
switchD_0070819b_caseD_4:
                param_6 = param_6 + 1;
                iVar6 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_0070819b_default;
              }
            }
          }
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + 1;
          puVar7 = puVar8;
          puVar12 = puVar11;
          if (iVar6 < 1) {
switchD_00708078_default:
            puVar8 = puVar7;
            puVar11 = puVar12;
            if (0 < (int)uVar3) {
              iVar5 = uVar3 - 1;
              iVar6 = 1;
              if (0 < iVar5) {
                while( true ) {
                  if (param_5 <= *puVar7) {
                    piVar13 = local_80 + iVar14;
                    iVar14 = iVar14 + 1;
                    *puVar12 = puVar12[*piVar13];
                    if (0x1e < iVar14) {
                      iVar14 = 0;
                    }
                  }
                  puVar8 = puVar7 + 1;
                  puVar11 = puVar12 + 1;
                  iVar6 = 2;
                  if ((iVar5 + -1 < 1) || (iVar6 = 3, iVar5 + -2 < 1)) break;
                  if (param_5 <= *puVar8) {
                    piVar13 = local_80 + iVar14;
                    iVar14 = iVar14 + 1;
                    *puVar11 = puVar11[*piVar13];
                    if (0x1e < iVar14) {
                      iVar14 = 0;
                    }
                  }
                  puVar8 = puVar7 + 2;
                  puVar11 = puVar12 + 2;
                  iVar6 = 4;
                  if ((iVar5 + -3 < 1) || (iVar6 = 0, iVar5 + -4 < 1)) break;
                  iVar5 = iVar5 + -5;
                  iVar6 = 1;
                  puVar7 = puVar8;
                  puVar12 = puVar11;
                  if (iVar5 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar6) {
            case 1:
              if (param_5 <= *puVar8) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar11 = puVar11[*piVar13];
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
              uVar3 = uVar3 - 1;
              iVar6 = 2;
              if ((int)uVar3 < 1) goto LAB_00708302;
              break;
            case 2:
              break;
            case 3:
              goto switchD_00708078_caseD_3;
            case 4:
              goto switchD_00708078_caseD_4;
            default:
              goto switchD_00708078_default;
            }
            uVar3 = uVar3 - 1;
            iVar6 = 3;
            if (0 < (int)uVar3) {
switchD_00708078_caseD_3:
              if (param_5 <= *puVar8) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar11 = puVar11[*piVar13];
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
              uVar3 = uVar3 - 1;
              iVar6 = 4;
              if (0 < (int)uVar3) {
switchD_00708078_caseD_4:
                iVar6 = 0;
                uVar3 = uVar3 - 1;
                puVar7 = puVar8;
                puVar12 = puVar11;
                goto switchD_00708078_default;
              }
            }
          }
        }
LAB_00708302:
        if (param_15 < 1) {
          uVar3 = 0;
          break;
        }
        bVar1 = *param_6;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_16 = (uint)bVar1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        if ((bVar1 & 0x80) == 0) {
          uVar3 = bVar1 & 0x7f;
        }
        else {
          uVar3 = bVar1 & 0x3f;
        }
      } while ((int)uVar3 <= param_15);
    }
    uVar3 = uVar3 - param_15;
    pbVar9 = param_6;
    if ((param_15 < 1) || ((param_16 & 0x80) == 0)) goto cf_common_join_00707E36;
    if ((param_16 & 0x40) == 0) {
      if (iVar6 < 1) goto switchD_00708491_default;
      switch(iVar6) {
      case 1:
        if (param_5 <= *puVar8) {
          piVar13 = local_80 + iVar14;
          iVar14 = iVar14 + 1;
          *puVar11 = puVar11[*piVar13];
          if (0x1e < iVar14) {
            iVar14 = 0;
          }
        }
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 + -1;
        pbVar9 = param_6;
        if (param_15 < 1) goto cf_common_join_00707E36;
        goto LAB_007084d1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      case 2:
LAB_007084d1:
        param_6 = param_6 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 + -1;
        pbVar9 = param_6;
        if (param_15 < 1) goto cf_common_join_00707E36;
switchD_00708491_caseD_3:
        if (param_5 <= *puVar8) {
          piVar13 = local_80 + iVar14;
          iVar14 = iVar14 + 1;
          *puVar11 = puVar11[*piVar13];
          if (0x1e < iVar14) {
            iVar14 = 0;
          }
        }
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
        pbVar9 = param_6 + 1;
        if (param_15 + -1 < 1) goto cf_common_join_00707E36;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 + -2;
        break;
      case 3:
        goto switchD_00708491_caseD_3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      case 4:
        param_6 = param_6 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 + -1;
      }
switchD_00708491_default:
      pbVar9 = param_6;
      if (0 < param_15) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 + -1;
        pbVar9 = param_6;
        if (0 < param_15) {
          while( true ) {
            if (param_5 <= *puVar8) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              *puVar11 = puVar11[*piVar13];
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            pbVar9 = param_6 + 1;
            if ((param_15 + -1 < 1) || (pbVar9 = param_6 + 2, param_15 + -2 < 1)) break;
            if (param_5 <= puVar8[1]) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              puVar11[1] = (puVar11 + 1)[*piVar13];
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            puVar8 = puVar8 + 2;
            puVar11 = puVar11 + 2;
            pbVar9 = param_6 + 3;
            if ((param_15 + -3 < 1) || (pbVar9 = param_6 + 4, param_15 + -4 < 1)) break;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 5;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_15 = param_15 + -5;
            pbVar9 = param_6;
            if (param_15 < 1) break;
          }
        }
      }
      goto cf_common_join_00707E36;
    }
    pbVar9 = param_6 + 1;
    if (iVar6 < 1) goto switchD_0070837c_default;
    switch(iVar6) {
    case 1:
      if (param_5 <= *puVar8) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        *puVar11 = puVar11[*piVar13];
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = param_15 + -1;
      if (param_15 < 1) goto cf_common_join_00707E36;
      goto LAB_007083b3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 2:
LAB_007083b3:
      param_15 = param_15 + -1;
      if (param_15 < 1) goto cf_common_join_00707E36;
switchD_0070837c_caseD_3:
      if (param_5 <= *puVar8) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        *puVar11 = puVar11[*piVar13];
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      if (param_15 + -1 < 1) goto cf_common_join_00707E36;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = param_15 + -2;
      break;
    case 3:
      goto switchD_0070837c_caseD_3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 4:
      param_15 = param_15 + -1;
    }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
switchD_0070837c_default:
    if ((0 < param_15) && (param_15 = param_15 + -1, 0 < param_15)) {
      while( true ) {
        if (param_5 <= *puVar8) {
          piVar13 = local_80 + iVar14;
          iVar14 = iVar14 + 1;
          *puVar11 = puVar11[*piVar13];
          if (0x1e < iVar14) {
            iVar14 = 0;
          }
        }
        if (param_15 + -2 < 1) break;
        if (param_5 <= puVar8[1]) {
          piVar13 = local_80 + iVar14;
          iVar14 = iVar14 + 1;
          puVar11[1] = (puVar11 + 1)[*piVar13];
          if (0x1e < iVar14) {
            iVar14 = 0;
          }
        }
        puVar8 = puVar8 + 2;
        puVar11 = puVar11 + 2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((param_15 + -4 < 1) || (param_15 = param_15 + -5, param_15 < 1)) break;
      }
    }
    goto cf_common_join_00707E36;
  }
  iVar6 = param_13;
  puVar8 = param_3;
  puVar11 = param_1;
  if ((int)uVar3 <= param_11) {
    do {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = param_16 & 0x80;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = param_15 - uVar3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_9 == 0) {
        if (-1 < (int)(uVar3 - 1)) {
          do {
            if (((byte)iVar6 & 1) == 1) {
              puVar11 = puVar11 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar6 = iVar6 + 1;
            if (4 < iVar6) {
              iVar6 = 0;
            }
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        goto LAB_00707ca8;
      }
      if ((param_16 & 0x40) == 0) {
        if (iVar6 < 1) {
switchD_00707b1e_default:
          if (0 < (int)uVar3) {
            pbVar9 = param_6 + 1;
            puVar7 = puVar8;
            puVar12 = puVar11;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            for (iVar5 = uVar3 - 1; iVar6 = 1, puVar8 = puVar7, puVar11 = puVar12, param_6 = pbVar9,
                0 < iVar5; iVar5 = iVar5 + -5) {
              if (param_5 <= *puVar7) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar13] + param_10);
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar7 + 1;
              puVar11 = puVar12 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = pbVar9 + 1;
              iVar6 = 2;
              if (iVar5 + -1 < 1) break;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = pbVar9 + 2;
              iVar6 = 3;
              if (iVar5 + -2 < 1) break;
              if (param_5 <= *puVar8) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar7 + 2;
              puVar11 = puVar12 + 2;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = pbVar9 + 3;
              iVar6 = 4;
              if (iVar5 + -3 < 1) break;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = pbVar9 + 4;
              iVar6 = 0;
              if (iVar5 + -4 < 1) break;
              pbVar9 = pbVar9 + 5;
              puVar7 = puVar8;
              puVar12 = puVar11;
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            if (param_5 <= *puVar8) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            iVar6 = 2;
            if ((int)uVar3 < 1) goto LAB_00707ca8;
            break;
          case 2:
            break;
          case 3:
            goto switchD_00707b1e_caseD_3;
          case 4:
            goto switchD_00707b1e_caseD_4;
          default:
            goto switchD_00707b1e_default;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + 1;
          uVar3 = uVar3 - 1;
          iVar6 = 3;
          if (0 < (int)uVar3) {
switchD_00707b1e_caseD_3:
            if (param_5 <= *puVar8) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            iVar6 = 4;
            if (0 < (int)uVar3) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
switchD_00707b1e_caseD_4:
              param_6 = param_6 + 1;
              iVar6 = 0;
              uVar3 = uVar3 - 1;
              goto switchD_00707b1e_default;
            }
          }
        }
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + 1;
        if (iVar6 < 1) {
switchD_007079d4_default:
          if (0 < (int)uVar3) {
            iVar5 = uVar3 - 1;
            iVar6 = 1;
            puVar7 = puVar8;
            puVar12 = puVar11;
            if (0 < iVar5) {
              while( true ) {
                if (param_5 <= *puVar7) {
                  piVar13 = local_80 + iVar14;
                  iVar14 = iVar14 + 1;
                  *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar13] + param_10);
                  if (0x1e < iVar14) {
                    iVar14 = 0;
                  }
                }
                puVar8 = puVar7 + 1;
                puVar11 = puVar12 + 1;
                iVar6 = 2;
                if ((iVar5 + -1 < 1) || (iVar6 = 3, iVar5 + -2 < 1)) break;
                if (param_5 <= *puVar8) {
                  piVar13 = local_80 + iVar14;
                  iVar14 = iVar14 + 1;
                  *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
                  if (0x1e < iVar14) {
                    iVar14 = 0;
                  }
                }
                puVar8 = puVar7 + 2;
                puVar11 = puVar12 + 2;
                iVar6 = 4;
                if ((iVar5 + -3 < 1) || (iVar6 = 0, iVar5 + -4 < 1)) break;
                iVar5 = iVar5 + -5;
                iVar6 = 1;
                puVar7 = puVar8;
                puVar12 = puVar11;
                if (iVar5 < 1) break;
              }
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            if (param_5 <= *puVar8) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            uVar3 = uVar3 - 1;
            iVar6 = 2;
            if ((int)uVar3 < 1) goto LAB_00707ca8;
            break;
          case 2:
            break;
          case 3:
            goto switchD_007079d4_caseD_3;
          case 4:
            goto switchD_007079d4_caseD_4;
          default:
            goto switchD_007079d4_default;
          }
          uVar3 = uVar3 - 1;
          iVar6 = 3;
          if (0 < (int)uVar3) {
switchD_007079d4_caseD_3:
            if (param_5 <= *puVar8) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            uVar3 = uVar3 - 1;
            iVar6 = 4;
            if (0 < (int)uVar3) {
switchD_007079d4_caseD_4:
              iVar6 = 0;
              uVar3 = uVar3 - 1;
              goto switchD_007079d4_default;
            }
          }
        }
      }
LAB_00707ca8:
      if (param_15 < 1) {
        uVar3 = 0;
        break;
      }
      bVar1 = *param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_16 = (uint)bVar1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      if ((bVar1 & 0x80) == 0) {
        uVar3 = bVar1 & 0x7f;
      }
      else {
        uVar3 = bVar1 & 0x3f;
      }
    } while ((int)uVar3 <= param_15);
  }
  uVar3 = uVar3 - param_15;
  pbVar9 = param_6;
  if ((param_15 < 1) || ((param_16 & 0x80) == 0)) goto cf_common_join_00707E36;
  if ((param_16 & 0x40) == 0) {
    if (iVar6 < 1) goto switchD_00707ed6_default;
    switch(iVar6) {
    case 1:
      if (param_5 <= *puVar8) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = param_15 + -1;
      pbVar9 = param_6;
      if (param_15 < 1) goto cf_common_join_00707E36;
      goto LAB_00707f1e;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 2:
LAB_00707f1e:
      param_6 = param_6 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = param_15 + -1;
      pbVar9 = param_6;
      if (param_15 < 1) goto cf_common_join_00707E36;
switchD_00707ed6_caseD_3:
      if (param_5 <= *puVar8) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      pbVar9 = param_6 + 1;
      if (param_15 + -1 < 1) goto cf_common_join_00707E36;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = param_15 + -2;
      break;
    case 3:
      goto switchD_00707ed6_caseD_3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 4:
      param_6 = param_6 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = param_15 + -1;
    }
switchD_00707ed6_default:
    pbVar9 = param_6;
    if (0 < param_15) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = param_15 + -1;
      pbVar9 = param_6;
      if (0 < param_15) {
        while( true ) {
          if (param_5 <= *puVar8) {
            piVar13 = local_80 + iVar14;
            iVar14 = iVar14 + 1;
            *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
            if (0x1e < iVar14) {
              iVar14 = 0;
            }
          }
          pbVar9 = param_6 + 1;
          if ((param_15 + -1 < 1) || (pbVar9 = param_6 + 2, param_15 + -2 < 1)) break;
          if (param_5 <= puVar8[1]) {
            piVar13 = local_80 + iVar14;
            iVar14 = iVar14 + 1;
            puVar11[1] = *(undefined1 *)((uint)(byte)(puVar11 + 1)[*piVar13] + param_10);
            if (0x1e < iVar14) {
              iVar14 = 0;
            }
          }
          puVar8 = puVar8 + 2;
          puVar11 = puVar11 + 2;
          pbVar9 = param_6 + 3;
          if ((param_15 + -3 < 1) || (pbVar9 = param_6 + 4, param_15 + -4 < 1)) break;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + 5;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 + -5;
          pbVar9 = param_6;
          if (param_15 < 1) break;
        }
      }
    }
    goto cf_common_join_00707E36;
  }
  pbVar9 = param_6 + 1;
  if (iVar6 < 1) goto switchD_00707d22_default;
  switch(iVar6) {
  case 1:
    if (param_5 <= *puVar8) {
      piVar13 = local_80 + iVar14;
      iVar14 = iVar14 + 1;
      *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
      if (0x1e < iVar14) {
        iVar14 = 0;
      }
    }
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_15 = param_15 + -1;
    if (param_15 < 1) goto cf_common_join_00707E36;
    goto LAB_00707d61;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case 2:
LAB_00707d61:
    param_15 = param_15 + -1;
    if (param_15 < 1) goto cf_common_join_00707E36;
switchD_00707d22_caseD_3:
    if (param_5 <= *puVar8) {
      piVar13 = local_80 + iVar14;
      iVar14 = iVar14 + 1;
      *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
      if (0x1e < iVar14) {
        iVar14 = 0;
      }
    }
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
    if (param_15 + -1 < 1) goto cf_common_join_00707E36;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_15 = param_15 + -2;
    break;
  case 3:
    goto switchD_00707d22_caseD_3;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case 4:
    param_15 = param_15 + -1;
  }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
switchD_00707d22_default:
  if ((0 < param_15) && (param_15 = param_15 + -1, 0 < param_15)) {
    while( true ) {
      if (param_5 <= *puVar8) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      if (param_15 + -2 < 1) break;
      if (param_5 <= puVar8[1]) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        puVar11[1] = *(undefined1 *)((uint)(byte)(puVar11 + 1)[*piVar13] + param_10);
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      puVar8 = puVar8 + 2;
      puVar11 = puVar11 + 2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((param_15 + -4 < 1) || (param_15 = param_15 + -5, param_15 < 1)) break;
    }
  }
cf_common_join_00707E36:
  iVar6 = (param_7 - param_8) - param_11;
  bVar1 = (byte)param_16;
  if ((int)uVar3 < iVar6) {
    do {
      iVar6 = iVar6 - uVar3;
      pbVar10 = pbVar9;
      if (((byte)param_16 & 0xc0) == 0x80) {
        pbVar10 = pbVar9 + uVar3;
      }
      bVar1 = *pbVar10;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_16 = (uint)bVar1;
      pbVar9 = pbVar10 + 1;
      uVar3 = param_16;
      if (((bVar1 & 0x80) != 0) && (uVar3 = param_16 & 0x3f, (bVar1 & 0x40) != 0)) {
        pbVar9 = pbVar10 + 2;
      }
    } while ((int)uVar3 < iVar6);
  }
  STPiece<0,1>(param_16) = bVar1;
  if (((byte)param_16 & 0xc0) == 0x80) {
    pbVar9 = pbVar9 + iVar6;
  }
LAB_00707e8a:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_14 = param_14 + 1;
  if (4 < (int)param_14) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_14 = 0;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_12 = param_12 + -1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_6 = pbVar9;
  if (param_12 < 0) {
    return;
  }
  goto joined_r0x007078a5;
}

// 00708650 FUN_00708650
#line 1 "decomp/ST.exe/functions/00708650/decomp.c"
int __fastcall st::fn_00708650(undefined4 *param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int local_7c;
  uint local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint *local_28;
  uint *local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e200;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff6c;
  iVar7 = 0;
  ExceptionList = &local_14;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = st::fn_006BBE40(*(int **)(param_1[1] + 0x40),(uint *)&DAT_00857004,(int *)&DAT_00857028,
                         0x20);
    local_3c = iVar4;
    if ((iVar4 == 0) || (iVar4 != -0x7789fe3e)) break;
    st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)param_1[1]);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  if (iVar4 == 0) {
    if ((param_1[0xbc] == 100) && (param_1[0xbd] == 100)) {
      DAT_00857030 = 0;
    }
    else {
      DAT_00857030 = 1;
    }
    DAT_00857008 = 1;
    DAT_00856fc8 = 1;
    if (param_1[0xbc] == 0x43) {
      DAT_00856fc8 = 2;
      DAT_00857008 = 3;
    }
    else if (param_1[0xbc] == 0x28) {
      DAT_00856fc8 = 2;
      DAT_00857008 = 5;
    }
    local_8 = 0;
    uVar5 = (param_1[0xca] - param_1[0xc9]) - param_1[200];
    uVar8 = param_1[0xca] - param_1[200];
    while (uVar8 = uVar8 - 1, local_5c = uVar5, (int)uVar5 <= (int)uVar8) {
      pbVar1 = (byte *)(param_1[0xcc] + uVar8 * 0x68);
      puVar3 = *(uint **)(pbVar1 + 100);
      iVar4 = local_3c;
      local_24 = puVar3;
      if ((((*(uint *)(pbVar1 + 4) & 0x8000) == 0) && ((*pbVar1 & 0x80) != 0)) &&
         (puVar3[0x24] != 0)) {
        local_5c = uVar8;
        if ((*(uint *)(pbVar1 + 4) & 2) == 0) {
          iVar7 = -1;
        }
        else {
          st::fn_006F31D0
                    ((AnonReceiver_006F31D0 *)param_1,uVar8,0,0xffffffff,1);
          iVar7 = 1;
        }
        st::fn_006F31D0
                  ((AnonReceiver_006F31D0 *)param_1,uVar8,iVar7,0xffffffff,1);
        *puVar3 = *puVar3 & 0xffffff7f;
        iVar4 = local_3c;
      }
    }
    while (local_5c = local_5c - 1, -1 < (int)local_5c) {
      iVar4 = local_5c * 0x68;
      iVar7 = param_1[0xcc];
      puVar3 = *(uint **)(iVar7 + 100 + iVar4);
      uVar5 = puVar3[1];
      local_24 = puVar3;
      if (((uVar5 & 0x4000) == 0) || ((*(byte *)(iVar7 + iVar4) & 2) == 0)) {
        if (((uVar5 & 0x2000) == 0) || ((*(byte *)(iVar7 + iVar4) & 2) == 0)) {
          if (((uVar5 & 0x1000) != 0) && ((*(byte *)(iVar7 + iVar4) & 2) != 0)) {
            local_28 = puVar3 + 0x19;
            puVar3[0xf] = *local_28;
            puVar3[0x10] = puVar3[0x1a];
            puVar3[0x11] = puVar3[0x1b];
            puVar3[0x12] = puVar3[0x1c];
            local_60 = puVar3[4];
            local_38 = puVar3[0x13];
            local_34 = puVar3[0x14];
            local_30 = 6;
            local_2c = 7;
            uVar5 = puVar3[0x26];
            for (uVar8 = 1000000000; (9 < uVar8 && (uVar5 / uVar8 == 0)); uVar8 = uVar8 / 10) {
            }
            do {
              local_40 = uVar5 / uVar8;
              uVar5 = uVar5 % uVar8;
              local_54 = uVar8 / 10;
              iVar7 = st::fn_006B0460(&local_70,(int *)&local_38,(int *)local_28);
              uVar8 = uVar8 / 10;
              if (iVar7 != 0) {
                st::fn_00708CA0(DAT_00857004 +
                             (param_1[9] + local_6c) * (int)DAT_00857028 + param_1[8] + local_70,
                             (int)DAT_00857028,
                             (ushort *)(param_1[5] + (param_1[10] * local_6c + local_70) * 2),
                             param_1[10] * 2,local_60,
                             &DAT_007efd90 +
                             local_38 + (((local_40 * 7 - local_6c) + local_34) * 6 - local_70),6,0,
                             local_68,local_64);
                uVar8 = local_54;
              }
              local_38 = local_38 + 6;
            } while (uVar8 != 0);
            puVar6 = *(uint **)(param_1[0xcc] + 100 + local_5c * 0x68);
            goto LAB_007088a4;
          }
          if (((*(uint *)(iVar7 + iVar4) & 0x802) != 0) &&
             (uVar5 = *(uint *)(iVar7 + 4 + iVar4), (uVar5 & 0x8000) == 0)) {
            local_78 = 1;
            if ((uVar5 & 0x40) != 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_78 = ~*(uint *)(iVar7 + *(int *)(param_1[199] + 0xc + puVar3[7] * 0x114) * 0x68)
                         >> 1 & 1;
            }
            if (local_78 != 0) {
              if ((uVar5 & 2) == 0) {
                st::fn_006F31D0
                          ((AnonReceiver_006F31D0 *)param_1,local_5c,-1,0xffffffff,0);
                *puVar3 = **(uint **)(iVar4 + 100 + param_1[0xcc]) & 0xffffff7d | 1;
              }
              else {
                st::fn_006F31D0
                          ((AnonReceiver_006F31D0 *)param_1,local_5c,0,0xffffffff,0);
                st::fn_006F31D0
                          ((AnonReceiver_006F31D0 *)param_1,local_5c,1,0xffffffff,0);
                *puVar3 = **(uint **)(iVar4 + 100 + param_1[0xcc]) & 0xffffff7d | 1;
              }
            }
          }
        }
        else {
          local_28 = puVar3 + 0x19;
          puVar3[0xf] = *local_28;
          puVar3[0x10] = puVar3[0x1a];
          puVar3[0x11] = puVar3[0x1b];
          puVar3[0x12] = puVar3[0x1c];
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_7c = *(int *)(iVar4 + param_1[0xcc] + 0x18);
          if (local_7c < 5) {
            local_7c = 0;
            local_28 = (uint *)(iVar4 + param_1[0xcc] + 0x20);
          }
          while( true ) {
            local_50 = *local_28;
            local_4c = local_28[1];
            local_48 = local_28[2] + *local_28;
            local_44 = local_28[3] + local_28[1];
            uVar5 = puVar3[0x28];
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            st::fn_0072AC20(param_1,DAT_00857004,DAT_00857028,(uint *)(uVar5 + 0x25),
                         *(int *)(uVar5 + 4),(int *)&local_50,*(int *)(uVar5 + 0x14),
                         *(byte *)(uVar5 + 0x18),0,0,0xffffffff);
            iVar7 = param_1[0xcc];
            if (*(int *)(iVar7 + 0x18 + iVar4) <= local_7c + 1) break;
            local_28 = (uint *)((local_7c + 3) * 0x10 + iVar7 + iVar4);
            local_7c = local_7c + 1;
          }
          *puVar3 = **(uint **)(iVar7 + 100 + iVar4) & 0xffffff7d | 1;
          st::fn_006B5F80((int *)*param_1,puVar3[0x19] + param_1[8],puVar3[0x1a] + param_1[9],
                       puVar3[0x1b],puVar3[0x1c]);
        }
      }
      else {
        local_28 = puVar3 + 0x19;
        puVar3[0xf] = *local_28;
        puVar3[0x10] = puVar3[0x1a];
        puVar3[0x11] = puVar3[0x1b];
        puVar3[0x12] = puVar3[0x1c];
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_7c = *(int *)(iVar4 + param_1[0xcc] + 0x18);
        if (local_7c < 5) {
          local_7c = 0;
          local_28 = (uint *)(iVar4 + param_1[0xcc] + 0x20);
        }
        while( true ) {
          local_50 = *local_28;
          local_4c = local_28[1];
          local_48 = local_28[2] + *local_28;
          local_44 = local_28[3] + local_28[1];
          uVar5 = puVar3[0x28];
          st::fn_007297E0(param_1,DAT_00857004,DAT_00857028,(uint *)(uVar5 + 0x29),
                       (uint *)(uVar5 + 0x39),(int *)&local_50,*(int *)(uVar5 + 0x18),
                       *(byte *)(uVar5 + 0x1c),*(int *)(uVar5 + 0x1d),*(int *)(uVar5 + 0x21),
                       *(uint *)(uVar5 + 0x25));
          iVar7 = param_1[0xcc];
          if (*(int *)(iVar7 + 0x18 + iVar4) <= local_7c + 1) break;
          local_28 = (uint *)((local_7c + 3) * 0x10 + iVar7 + iVar4);
          local_7c = local_7c + 1;
        }
        puVar6 = *(uint **)(iVar7 + 100 + iVar4);
LAB_007088a4:
        *puVar3 = *puVar6 & 0xffffff7d | 1;
        st::fn_006B5F80((int *)*param_1,puVar3[0x19] + param_1[8],puVar3[0x1a] + param_1[9],
                     puVar3[0x1b],puVar3[0x1c]);
      }
      local_20 = puVar3[0x25];
      while (local_20 = local_20 - 1, iVar4 = local_3c, -1 < (int)local_20) {
        puVar2 = (ushort *)(puVar3[0x29] + 2 + local_20 * 4);
        *puVar2 = *puVar2 & 0xff7f;
      }
    }
    local_5c = param_1[0xca];
    while (local_5c = local_5c + -1, -1 < (int)local_5c) {
      local_24 = *(uint **)(param_1[0xcc] + 100 + local_5c * 0x68);
      local_20 = local_24[0x25];
      while (local_20 = local_20 - 1, -1 < (int)local_20) {
        puVar2 = (ushort *)(local_24[0x29] + 2 + local_20 * 4);
        *puVar2 = *puVar2 & 0xff7f;
      }
    }
    local_8 = 0xffffffff;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(**(int **)(param_1[1] + 0x40) + 0x80))(*(int **)(param_1[1] + 0x40),0);
  }
  ExceptionList = local_14;
  return iVar4;
}

// 00708CA0 FUN_00708ca0
#line 1 "decomp/ST.exe/functions/00708CA0/decomp.c"
void st::fn_00708CA0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 undefined4 param_7,uint param_8,int param_9,int param_10)

{
  byte bVar1;
  int iVar2;

  if (-1 < param_10 + -1) {
    do {
      iVar2 = param_9;
      if (-1 < param_9 + -1) {
        do {
          bVar1 = *param_6;
          param_6 = param_6 + 1;
          if ((bVar1 != param_8) && (param_5 <= *param_3)) {
            *param_1 = bVar1;
          }
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      param_1 = param_1 + (param_2 - param_9);
      param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_10 = param_10 + -1;
    } while (param_10 != 0);
  }
  return;
}

// 00709670 FUN_00709670
#line 1 "decomp/ST.exe/functions/00709670/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004AE080 -> 00709670 @ 004AE096; FUN_004ae080 parameter param_3 | 00709670 -> 00709470
   @ 0070976B */

void __thiscall st::fn_00709670(void *this,uint param_1,int param_2,int param_3,byte param_4)

{
  uint *puVar1;
  short *psVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079e210;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  if (((param_1 < STField<uint>(this,0x310)) &&
      (puVar1 = (uint *)(STField<int>(this,0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) != 0))
     && ((puVar1[1] & 0x6000) == 0)) {
    local_8 = 0;
    uVar4 = puVar1[0x25];
    ExceptionList = &local_14;
    st::fn_0072DA40();
    local_8 = 0xffffffff;
    puVar6 = (undefined4 *)&stack0xffffffc4;
    for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar5 = 0;
    if (0 < (int)puVar1[0x25]) {
      do {
        psVar2 = (short *)(puVar1[0x29] + iVar5 * 4);
        uVar3 = psVar2[1];
        if (((uVar3 & 0xc000) != 0) && ((uVar3 & 0x2115) == 0)) {
          *(undefined4 *)(&stack0xffffffc4 + iVar5 * 4) =
               *(undefined4 *)(*(int *)(puVar1[0x28] + 4 + iVar5 * 8) + *psVar2 * 4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)puVar1[0x25]);
    }
    st::fn_00709470(this,(int *)&stack0xffffffc4,puVar1[0x25],param_2,param_3,param_4);
  }
  ExceptionList = local_14;
  return;
}

// 007098A0 FUN_007098a0
#line 1 "decomp/ST.exe/functions/007098A0/decomp.c"
undefined4 __cdecl
st::fn_007098A0(AnonShape_007098A0_B7562D88 *param_1,char param_2,byte *param_3,int param_4,
            int *param_5,uint *param_6)

{
  char cVar1;
  byte bVar2;
  DArrayTy *pDVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  uint local_8;

  *param_5 = 0;
  *param_6 = 0xffffffff;
  local_8 = 0;
  param_1->field_0004->iteratorIndex = 0;
  do {
    pDVar3 = param_1->field_0004;
    uVar4 = pDVar3->iteratorIndex;
    if (pDVar3->count <= uVar4) {
      return 0;
    }
    pcVar8 = DArrayAt<char>(pDVar3, uVar4);
    pDVar3->iteratorIndex = uVar4 + 1;
    if (pcVar8 == nullptr) {
      return 0;
    }
    cVar1 = *pcVar8;
    if (cVar1 == param_2) {
      pbVar5 = (byte *)(pcVar8 + 1);
      pbVar7 = param_3;
      do {
        bVar2 = *pbVar5;
        bVar9 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_00709921:
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00709926;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar9 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_00709921;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_00709926:
      if ((iVar6 == 0) &&
         ((param_4 == *(int *)(pcVar8 + 0x21) || ((cVar1 != '\b' && (cVar1 != '\x1f')))))) {
        *param_6 = local_8;
        pDVar3 = param_1->field_0004;
        if (pDVar3->count <= local_8) {
          *param_5 = 0;
          return *(undefined4 *)(pcVar8 + 0x29);
        }
        *param_5 = (int)(pDVar3->elementSize * local_8 + (int)pDVar3->data);
        return *(undefined4 *)(pcVar8 + 0x29);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

// 00709990 FUN_00709990
#line 1 "decomp/ST.exe/functions/00709990/decomp.c"
int __cdecl st::fn_00709990(AnonShape_00709990_0FAEF1E0 *param_1,int param_2,uint *param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  byte local_34 [41];
  int local_b;

  *param_3 = 0xffffffff;
  param_1->field_0004->iteratorIndex = 0;
  uVar2 = st::fn_006B1190(param_1->field_0004,local_34);
  while( true ) {
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (local_b == param_2) break;
    uVar2 = st::fn_006B1190(param_1->field_0004,local_34);
  }
  *param_3 = uVar2;
  pDVar1 = param_1->field_0004;
  if (uVar2 < pDVar1->count) {
    return (int)DArrayAt<void>(pDVar1, uVar2);
  }
  return 0;
}

// 00709A10 FUN_00709a10
#line 1 "decomp/ST.exe/functions/00709A10/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00709A10_param_2Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_B=11;CASE_E=14;CASE_12=18;CASE_13=19;CASE_15=21;CASE_16=22;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00709A36 MOV ECX,dword ptr [EAX] classifies dword parameter loaded at 00709A2F */

void __cdecl st::fn_00709A10(void *param_1,Global_sub_00709A10_param_2Enum param_2,uint *param_3)

{
  switch(param_2) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_E:
  case CASE_12:
  case CASE_16:
  case CASE_1C:
    st::fn_006F20E0(*(cMf32 **)param_1,param_3);
    return;
  case CASE_7:
    st::fn_00725E30((int *)param_3);
    return;
  case CASE_8:
    st::fn_00726260(param_3);
    return;
  case CASE_B:
    st::fn_0070B1D0((int *)param_3);
    return;
  case CASE_13:
  case CASE_1D:
    st::fn_00716DB0((int *)param_3);
    return;
  case CASE_15:
    st::fn_00726870((int *)param_3);
    return;
  case CASE_1E:
    st::fn_00726BD0((int *)param_3);
    break;
  case CASE_1F:
    st::fn_0070B600((int *)param_3);
    return;
  }
  return;
}

// 0070A300 FUN_0070a300
#line 1 "decomp/ST.exe/functions/0070A300/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_0070A300(int *param_1)

{
  int iVar1;
  undefined4 local_34 [10];
  uint local_b;

  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 4);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      iVar1 = st::fn_006B1190(*(DArrayTy **)(*param_1 + 4),(byte *)local_34);
      while (-1 < iVar1) {
        if (local_b != 0) {
          st::fn_00709A10((void *)*param_1,(Global_sub_00709A10_param_2Enum)local_34[0],&local_b);
        }
        iVar1 = st::fn_006B1190(*(DArrayTy **)(*param_1 + 4),(byte *)local_34);
      }
      st::fn_006AE110(*(DArrayTy **)(*param_1 + 4));
    }
    st::fn_006AB060((void **)param_1);
  }
  return;
}

// 0070A460 FUN_0070a460
#line 1 "decomp/ST.exe/functions/0070A460/decomp.c"
bool __cdecl st::fn_0070A460(uint *param_1,char *param_2)

{
  uint *puVar1;

  if ((param_1 != nullptr) && (param_2 != nullptr)) {
    puVar1 = st::fn_00730590(param_1,param_2);
    if (puVar1 == nullptr) {
      return false;
    }
    return puVar1 == param_1;
  }
  return true;
}

// 0070A9F0 FUN_0070a9f0
#line 1 "decomp/ST.exe/functions/0070A9F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0056DB80 -> 0070A9F0 @ 0056E061 | 00590B40 -> 0070A9F0 @ 00591000 | 00595E40 ->
   0070A9F0 @ 00595F0F | 005AB300 -> 0070A9F0 @ 005AB56B | 005B2970 -> 0070A9F0 @ 005B2CAD |
   005B9B10 -> 0070A9F0 @ 005B9BD7 | 005C29B0 -> 0070A9F0 @ 005C2B91 | 005E58D0 -> 0070A9F0 @
   005E594A | 005E6770 -> 0070A9F0 @ 005E6838

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056DB80 -> 0070A9F0 @ 0056E061 | 00590B40 -> 0070A9F0 @ 00591000 | 00595E40 ->
   0070A9F0 @ 00595F0F | 005AB300 -> 0070A9F0 @ 005AB56B | 005B2970 -> 0070A9F0 @ 005B2CAD |
   005B9B10 -> 0070A9F0 @ 005B9BD7 | 005BD7A0 -> 0070A9F0 @ 005BD89D | 005C1340 -> 0070A9F0 @
   005C13F4 | 005C29B0 -> 0070A9F0 @ 005C2B91 | 005E58D0 -> 0070A9F0 @ 005E594A | 005E6770 ->
   0070A9F0 @ 005E6838 */

void __cdecl st::fn_0070A9F0(cMf32 *param_1,char *text,byte param_3,int param_4)

{
  st::fn_0070A5A0(param_1,1,text,param_3,param_4);
  return;
}

// 0070AA10 FUN_0070aa10
#line 1 "decomp/ST.exe/functions/0070AA10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070AA10 -> 0070A5A0 @ 0070AA25

   [STPrototypeApplier] Propagated return.
   Evidence: 0070AA10 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AA2E */

ushort * __cdecl st::fn_0070AA10(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = st::fn_0070A5A0(param_1,0xe,param_2,param_3,param_4);
  return puVar1;
}

// 0070AA30 FUN_0070aa30
#line 1 "decomp/ST.exe/functions/0070AA30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070AA30 -> 0070A5A0 @ 0070AA45

   [STPrototypeApplier] Propagated return.
   Evidence: 0070AA30 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AA4E */

ushort * __cdecl st::fn_0070AA30(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = st::fn_0070A5A0(param_1,0x1c,param_2,param_3,param_4);
  return puVar1;
}

// 0070AA50 FUN_0070aa50
#line 1 "decomp/ST.exe/functions/0070AA50/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005BD7A0 -> 0070AA50 @ 005BD910

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005BD7A0 -> 0070AA50 @ 005BD910

   [STPrototypeApplier] Propagated return.
   Evidence: 0070AA50 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AA6E */

ushort * __cdecl st::fn_0070AA50(cMf32 *param_1,char *text,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = st::fn_0070A5A0(param_1,6,text,param_3,param_4);
  return puVar1;
}

// 0070AA70 FUN_0070aa70
#line 1 "decomp/ST.exe/functions/0070AA70/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005123A0 -> 0070AA70 @ 00512552 | 005123A0 -> 0070AA70 @ 005125F0 | 00512830 ->
   0070AA70 @ 00512930 | 00512830 -> 0070AA70 @ 005129C3 | 00512BE0 -> 0070AA70 @ 00512D78 |
   00512BE0 -> 0070AA70 @ 00512DFD | 0052FB00 -> 0070AA70 @ 005315F3 | 0052FB00 -> 0070AA70 @
   005316B9 | 0052FB00 -> 0070AA70 @ 00531A79 | 0052FB00 -> 0070AA70 @ 00531B20 | 005424A0 ->
   0070AA70 @ 0054289E | 005C6030 -> 0070AA70 @ 005C60D8

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005C6030 -> 0070AA70 @ 005C60D8

   [STPrototypeApplier] Propagated return.
   Evidence: 0070AA70 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AA8E */

ushort * __cdecl st::fn_0070AA70(cMf32 *param_1,char *text,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = st::fn_0070A5A0(param_1,0x12,text,param_3,param_4);
  return puVar1;
}

// 0070AA90 FUN_0070aa90
#line 1 "decomp/ST.exe/functions/0070AA90/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070AA90 -> 0070A5A0 @ 0070AAA5

   [STPrototypeApplier] Propagated return.
   Evidence: 0070AA90 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AAAE */

ushort * __cdecl st::fn_0070AA90(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = st::fn_0070A5A0(param_1,0x16,param_2,param_3,param_4);
  return puVar1;
}

// 0070AAB0 FUN_0070aab0
#line 1 "decomp/ST.exe/functions/0070AAB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070AAB0 -> 0070A5A0 @ 0070AAC5

   [STPrototypeApplier] Propagated return.
   Evidence: 0070AAB0 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AACE */

ushort * __cdecl st::fn_0070AAB0(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = st::fn_0070A5A0(param_1,5,param_2,param_3,param_4);
  return puVar1;
}

// 0070ABF0 FUN_0070abf0
#line 1 "decomp/ST.exe/functions/0070ABF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070ABF0 -> 0070A5A0 @ 0070AC05

   [STPrototypeApplier] Propagated return.
   Evidence: 0070ABF0 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AC0E */

ushort * __cdecl st::fn_0070ABF0(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = st::fn_0070A5A0(param_1,4,param_2,param_3,param_4);
  return puVar1;
}

// 0070AD40 FUN_0070ad40
#line 1 "decomp/ST.exe/functions/0070AD40/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070AD40 -> 0070A5A0 @ 0070AD55

   [STPrototypeApplier] Propagated return.
   Evidence: 0070AD40 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AD5E */

ushort * __cdecl st::fn_0070AD40(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = st::fn_0070A5A0(param_1,0x1a,param_2,param_3,param_4);
  return puVar1;
}

// 0070B1D0 FUN_0070b1d0
#line 1 "decomp/ST.exe/functions/0070B1D0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_0070B1D0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x23)) {
      iVar3 = 0x30;
      do {
        st::fn_006F20E0(*(cMf32 **)(iVar1 + 0x25),(uint *)(iVar3 + iVar1));
        iVar1 = *param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(short *)(iVar1 + 0x23));
    }
    st::fn_006AB060((void **)param_1);
  }
  return;
}

// 0070B3A0 FUN_0070b3a0
#line 1 "decomp/ST.exe/functions/0070B3A0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005C2760 -> 0070B3A0 @ 005C27B7 */

undefined4 __cdecl st::fn_0070B3A0(AnonShape_GLOBAL_0081175C_57F682DD *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < param_1->field_0023)) {
    return *(undefined4 *)(&param_1[1].field_0x4 + param_2 * 4);
  }
  return 0;
}

// 0070B3C0 FUN_0070b3c0
#line 1 "decomp/ST.exe/functions/0070B3C0/decomp.c"
void __cdecl st::fn_0070B3C0(int param_1)

{
  *(undefined2 *)(param_1 + 0x29) = 0xffff;
  return;
}

// 0070B3D0 FUN_0070b3d0
#line 1 "decomp/ST.exe/functions/0070B3D0/decomp.c"
void __cdecl st::fn_0070B3D0(int param_1)

{
  *(undefined2 *)(param_1 + 0x29) = *(undefined2 *)(param_1 + 0x23);
  return;
}

// 0070B3E0 FUN_0070b3e0
#line 1 "decomp/ST.exe/functions/0070B3E0/decomp.c"
undefined4 __cdecl st::fn_0070B3E0(AnonShape_0070B3E0_DA0C9F15 *param_1)

{
  param_1->field_0029 = param_1->field_0029 + 1;
  if (param_1->field_0029 < param_1->field_0023) {
    return *(undefined4 *)(&param_1[1].field_0x4 + param_1->field_0029 * 4);
  }
  return 0;
}

// 0070B410 FUN_0070b410
#line 1 "decomp/ST.exe/functions/0070B410/decomp.c"
undefined4 __cdecl st::fn_0070B410(AnonShape_0070B410_2733CA30 *param_1)

{
  param_1->field_0029 = param_1->field_0029 + -1;
  if (-1 < param_1->field_0029) {
    return param_1->entries[param_1->field_0029];
  }
  return 0;
}

// 0070B600 FUN_0070b600
#line 1 "decomp/ST.exe/functions/0070B600/decomp.c"
void __cdecl st::fn_0070B600(int *param_1)

{
  int iVar1;

  iVar1 = *param_1;
  if (iVar1 != 0) {
    st::fn_006F20E0(*(cMf32 **)(iVar1 + 2),(uint *)(iVar1 + 0xd));
    st::fn_006AB060((void **)param_1);
  }
  return;
}

// 0070B630 FUN_0070b630
#line 1 "decomp/ST.exe/functions/0070B630/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0070B630 returns return of Library::Ourlib::MFIMG::mfImgGetNumIms @ 0070B64C */

int __cdecl st::fn_0070B630(undefined4 param_1,byte param_2,char *param_3,int param_4)

{
  int iVar1;

  iVar1 = st::fn_0070A930(param_1,param_2,param_3,param_4);
  return iVar1;
}

// 0070B650 FUN_0070b650
#line 1 "decomp/ST.exe/functions/0070B650/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0070B650 returns used as parameter 4 of DibPut @ 004F1905 | 0070B650 returns used as
   parameter 4 of DibPut @ 004F1976 | 0070B650 returns used as parameter 4 of DibPut @ 004F1CE2 */

byte * __cdecl st::fn_0070B650(short *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *param_1)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(byte **)((int)param_1 + param_2 * 4 + 0x11);
  }
  return nullptr;
}

// 0070B670 FUN_0070b670
#line 1 "decomp/ST.exe/functions/0070B670/decomp.c"
void __cdecl st::fn_0070B670(int param_1)

{
  *(undefined2 *)(param_1 + 6) = 0xffff;
  return;
}

// 0070B680 FUN_0070b680
#line 1 "decomp/ST.exe/functions/0070B680/decomp.c"
void __cdecl st::fn_0070B680(undefined2 *param_1)

{
  param_1[3] = *param_1;
  return;
}

// 0070B690 FUN_0070b690
#line 1 "decomp/ST.exe/functions/0070B690/decomp.c"
undefined4 __cdecl st::fn_0070B690(short *param_1)

{
  param_1[3] = param_1[3] + 1;
  if (param_1[3] < *param_1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(undefined4 *)((int)param_1 + param_1[3] * 4 + 0x11);
  }
  return 0;
}

// 0070B6B0 FUN_0070b6b0
#line 1 "decomp/ST.exe/functions/0070B6B0/decomp.c"
undefined4 __cdecl st::fn_0070B6B0(AnonShape_0070B6B0_34698A53 *param_1)

{
  param_1->field_0006 = param_1->field_0006 + -1;
  if (-1 < param_1->field_0006) {
    return param_1->entries[param_1->field_0006];
  }
  return 0;
}

// 0070B6D0 FUN_0070b6d0
#line 1 "decomp/ST.exe/functions/0070B6D0/decomp.c"
int __cdecl st::fn_0070B6D0(byte *param_1)

{
  int iVar1;
  byte local_104 [256];

  st::fn_0072E730(param_1,nullptr,nullptr,nullptr,local_104);
  iVar1 = st::fn_0072E620((char *)local_104,&DAT_007f00d0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = st::fn_0072E620((char *)local_104,&DAT_007f00c8);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = st::fn_0072E620((char *)local_104,&DAT_007f00c0);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = st::fn_0072E620((char *)local_104,&DAT_007f00b8);
  return (-(uint)(iVar1 != 0) & 0xfffffffc) + 3;
}

// 0070B770 FUN_0070b770
#line 1 "decomp/ST.exe/functions/0070B770/decomp.c"
int __cdecl st::fn_0070B770(AnonShape_0070B770_3BA0472D *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  InternalExceptionFrame local_d4;
  InternalExceptionFrame local_90;
  InternalExceptionFrame local_4c;
  int local_8;

  sVar1 = param_1->field_000E;
  local_8 = 0;
  if (sVar1 == 8) {
    if (param_2 != 8) {
      if (param_2 == 0x10) {
        local_d4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_d4;
        iVar2 = st::fn_0072D7F0(local_d4.jumpBuffer,0);
        if (iVar2 != 0) {
          g_currentExceptionFrame = local_d4.previous;
          return local_8;
        }
        iVar2 = st::fn_006D1A10(nullptr,0,0,0,param_1,0,0,0,param_1->field_0004,
                             param_1->field_0008);
        g_currentExceptionFrame = local_d4.previous;
        return iVar2;
      }
      if (param_2 != 0x18) {
        return 0;
      }
      local_90.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_90;
      iVar2 = st::fn_0072D7F0(local_90.jumpBuffer,0);
      if (iVar2 != 0) {
        g_currentExceptionFrame = local_90.previous;
        return local_8;
      }
      iVar2 = st::fn_006D1A50(nullptr,0,0,0,param_1,0,0,0,param_1->field_0004,
                           param_1->field_0008);
      g_currentExceptionFrame = local_90.previous;
      return iVar2;
    }
  }
  else {
    if (sVar1 == 0x10) {
      bVar3 = param_2 == 0x10;
    }
    else {
      if (sVar1 != 0x18) {
        return 0;
      }
      if (param_2 == 0x10) {
        local_4c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_4c;
        iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
        if (iVar2 != 0) {
          g_currentExceptionFrame = local_4c.previous;
          return local_8;
        }
        iVar2 = st::fn_006D1A90(nullptr,0,0,0,param_1,0,0,0,param_1->field_0004,
                             param_1->field_0008);
        g_currentExceptionFrame = local_4c.previous;
        return iVar2;
      }
      bVar3 = param_2 == 0x18;
    }
    if (!bVar3) {
      return 0;
    }
  }
  return (int)param_1;
}

// 0070BE00 FUN_0070be00
#line 1 "decomp/ST.exe/functions/0070BE00/decomp.c"
int * __cdecl
st::fn_0070BE00(byte *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            uint *param_8,int param_9)

{
  int iVar1;
  int *piVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    piVar2 = st::fn_0070B900
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    g_currentExceptionFrame = local_48.previous;
    return piVar2;
  }
  g_currentExceptionFrame = local_48.previous;
  return nullptr;
}

// 0070BF70 FUN_0070bf70
#line 1 "decomp/ST.exe/functions/0070BF70/decomp.c"
int __cdecl
st::fn_0070BF70(byte *param_1,int param_2,int param_3,int param_4,int param_5,byte param_6,uint param_7
            )

{
  int iVar1;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    iVar1 = st::fn_0070BE80
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    g_currentExceptionFrame = local_48.previous;
    return iVar1;
  }
  g_currentExceptionFrame = local_48.previous;
  return 0;
}

// 0070C210 FUN_0070c210
#line 1 "decomp/ST.exe/functions/0070C210/decomp.c"
undefined4 * __cdecl
st::fn_0070C210(byte *param_1,undefined2 *param_2,undefined2 *param_3,DWORD *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    puVar2 = st::fn_0070BFE0(param_1,param_2,param_3,param_4);
    g_currentExceptionFrame = local_48.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_48.previous;
  return nullptr;
}

// 0070C270 FUN_0070c270
#line 1 "decomp/ST.exe/functions/0070C270/decomp.c"
/* WARNING: Removing unreachable block (ram,0x0070c30c) */
/* WARNING: Removing unreachable block (ram,0x0070c2ce) */
/* WARNING: Removing unreachable block (ram,0x0070c34b) */

undefined4 * __cdecl st::fn_0070C270(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar5 = *(int *)(param_1 + 0x20);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(short *)(param_1 + 0xe) != 8) {
    return nullptr;
  }
  if (iVar5 == 0) {
    iVar5 = 0x100;
  }
  puVar2 = st::fn_006AAC10(iVar5 * 4);
  if (puVar2 == nullptr) {
    return nullptr;
  }
  if (iVar5 != 0) {
    pbVar4 = (byte *)((int)puVar2 + 2);
    pbVar6 = (byte *)(param_1 + 0x29);
    do {
      bVar1 = pbVar6[-1];
      if ((bVar1 & 7) < 4) {
        pbVar4[-2] = bVar1;
      }
      else {
        uVar3 = (uint)(bVar1 >> 3) * 8 + 8;
        if (0xff < uVar3) {
          uVar3 = 0xff;
        }
        pbVar4[-2] = (byte)uVar3;
      }
      bVar1 = *pbVar6;
      if ((bVar1 & 7) < 4) {
        pbVar4[-1] = bVar1;
      }
      else {
        uVar3 = (uint)(bVar1 >> 3) * 8 + 8;
        if (0xff < uVar3) {
          uVar3 = 0xff;
        }
        pbVar4[-1] = (byte)uVar3;
      }
      bVar1 = pbVar6[1];
      if ((bVar1 & 7) < 4) {
        *pbVar4 = bVar1;
      }
      else {
        uVar3 = (uint)(bVar1 >> 3) * 8 + 8;
        if (0xff < uVar3) {
          uVar3 = 0xff;
        }
        *pbVar4 = (byte)uVar3;
      }
      pbVar6 = pbVar6 + 4;
      pbVar4 = pbVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return puVar2;
}

// 0070C390 FUN_0070c390
#line 1 "decomp/ST.exe/functions/0070C390/decomp.c"
undefined4 * __cdecl st::fn_0070C390(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar4 = *(int *)(param_1 + 0x20);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(short *)(param_1 + 0xe) != 8) {
    return nullptr;
  }
  if (iVar4 == 0) {
    iVar4 = 0x100;
  }
  puVar1 = st::fn_006AAC10(iVar4 * 4);
  if (puVar1 == nullptr) {
    return nullptr;
  }
  if (iVar4 != 0) {
    puVar3 = (undefined1 *)((int)puVar1 + 2);
    puVar2 = (undefined1 *)(param_1 + 0x29);
    do {
      puVar3[-2] = puVar2[-1];
      puVar3[-1] = *puVar2;
      *puVar3 = puVar2[1];
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 4;
    } while (iVar4 != 0);
  }
  return puVar1;
}

// 0070C860 FUN_0070c860
#line 1 "decomp/ST.exe/functions/0070C860/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070C860 -> 006B4FA0 @ 0070C8C9 */

int __cdecl st::fn_0070C860(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  InternalExceptionFrame local_4c;
  int local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  if (0 < param_4) {
    uVar2 = st::fn_006B4FA0(param_1);
    st::fn_007521B0(&local_8,(AnonShape_006B4B20_3D4F4412 *)param_1,uVar2,param_3,param_4,(byte)param_2
                );
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  iVar1 = st::fn_006B4FA0(param_1);
  st::fn_006B4B20(&local_8,(AnonShape_006B4B20_3D4F4412 *)param_1,iVar1,(byte)param_2);
  g_currentExceptionFrame = local_4c.previous;
  return local_8;
}

// 0070C900 FUN_0070c900
#line 1 "decomp/ST.exe/functions/0070C900/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070C900 -> 007527A0 @ 0070C965 | 0070C900 -> 00752CF0 @ 0070C94A

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

undefined4 * __cdecl
st::fn_0070C900(RecoveredSourceFamily_dibcopy *param_1,uint *param_2,char param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  InternalExceptionFrame local_4c;
  uint local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (param_4 < 0) {
      puVar4 = &local_8;
      iVar3 = -1 - param_4;
      iVar1 = st::fn_006B4FA0((int *)param_1);
      puVar2 = (undefined4 *)st::fn_00752CF0(param_1,iVar1,iVar3,param_3,puVar4);
    }
    else {
      puVar4 = &local_8;
      iVar1 = st::fn_006B4FA0((int *)param_1);
      puVar2 = st::fn_007527A0(param_1,iVar1,param_4,param_3,puVar4);
    }
    if (param_2 != nullptr) {
      *param_2 = local_8;
    }
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  return nullptr;
}

// 0070C9A0 FUN_0070c9a0
#line 1 "decomp/ST.exe/functions/0070C9A0/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070C9E0 -> 0070C9A0 @ 0070CA84 */

undefined1 __cdecl st::fn_0070C9A0(AnonShape_0070C9E0_7137F001 *param_1,int param_2,int param_3)

{
  int iVar1;

  iVar1 = st::fn_006B4FA0((int *)param_1);
  return *(undefined1 *)
          (((uint)*(ushort *)&param_1[1].field_0x2 * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
           ((param_1->field_0008 - param_3) + -1) + param_2 + iVar1);
}

// 0070C9E0 FUN_0070c9e0
#line 1 "decomp/ST.exe/functions/0070C9E0/decomp.c"
undefined4 * __cdecl st::fn_0070C9E0(AnonShape_0070C9E0_7137F001 *param_1,char param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  byte local_18 [8];
  int local_10;
  uint local_c;
  int local_8;

  local_c = param_1->field_0004;
  local_10 = param_1->field_0008;
  uVar6 = local_c & 0x80000007;
  bVar8 = uVar6 == 0;
  local_18[0] = 0x80;
  local_18[1] = 0x40;
  local_18[2] = 0x20;
  local_18[3] = 0x10;
  local_18[4] = 8;
  local_18[5] = 4;
  local_18[6] = 2;
  local_18[7] = 1;
  *param_3 = 0;
  if ((int)uVar6 < 0) {
    bVar8 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
  }
  if (bVar8) {
    iVar2 = local_c + ((int)local_c >> 0x1f & 7U);
  }
  else {
    iVar2 = local_c + 8 + ((int)(local_c + 8) >> 0x1f & 7U);
  }
  uVar6 = (iVar2 >> 3) * local_10;
  puVar3 = st::fn_006AAC10(uVar6);
  if (puVar3 == nullptr) {
    return nullptr;
  }
  *param_3 = uVar6;
  iVar7 = 0;
  if (0 < local_10) {
    local_8 = 0;
    do {
      uVar6 = 0;
      if (0 < (int)local_c) {
        do {
          cVar1 = st::fn_0070C9A0(param_1,uVar6,iVar7);
          if (cVar1 != param_2) {
            iVar4 = ((int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3) + local_8;
            uVar5 = uVar6 & 0x80000007;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
            }
            *(byte *)(iVar4 + (int)puVar3) = *(byte *)(iVar4 + (int)puVar3) | local_18[uVar5];
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)local_c);
      }
      local_8 = local_8 + (iVar2 >> 3);
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_10);
  }
  return puVar3;
}

// 0070CAF0 FUN_0070caf0
#line 1 "decomp/ST.exe/functions/0070CAF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0070CAF0 -> 0070C9E0 @ 0070CAFF

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070CAF0 -> 0070C9E0 @ 0070CAFF */

void __cdecl st::fn_0070CAF0(AnonShape_0070C9E0_7137F001 *param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;

  puVar1 = st::fn_0070C9E0(param_1,(char)param_3,(uint *)&param_3);
  if (puVar1 == nullptr) {
    return;
  }
  *param_2 = (uint)param_3;
  return;
}

// 0070CB20 FUN_0070cb20
#line 1 "decomp/ST.exe/functions/0070CB20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 8.
   Evidence: 0070CB20 -> EXTERNAL:000000B2 @ 0070CD54 */

uint __cdecl
st::fn_0070CB20(uint param_1,int param_2,int *param_3,int param_4,int param_5,byte param_6,byte param_7
            ,int param_8,HPALETTE h,uint param_10,int param_11)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  UINT UVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint local_54 [15];
  uint local_18;
  uint *local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_8 = 0;
  local_10 = 0x10;
  local_18 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_10 == 0x800000) {
    local_10 = 4;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  else if (param_10 == 0x1000000) {
    local_10 = 0x20;
  }
  local_14 = local_54;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_10 = 0;
  local_c = &DAT_007f014c;
  do {
    iVar7 = local_c[-1] + param_1;
    iVar10 = *local_c + param_2;
    if ((((-1 < iVar7) && (iVar7 < param_4)) && (-1 < iVar10)) && (iVar10 < param_5)) {
      iVar2 = st::fn_006B4FA0(param_3);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      bVar1 = *(byte *)(((uint)STField<ushort>(param_3,0xe) * param_3[1] + 0x1f >> 3 & 0x1ffffffc
                        ) * ((param_3[2] - iVar10) + -1) + iVar7 + iVar2);
      if (bVar1 != param_7) {
        uVar3 = (uint)bVar1;
        local_14[-1] = param_10;
        bVar1 = *(byte *)(param_8 + 5 + uVar3 * 4);
        *local_14 = (uint)*(byte *)(param_8 + 4 + uVar3 * 4);
        local_14[1] = (uint)bVar1;
        local_14[2] = (uint)*(byte *)(param_8 + 6 + uVar3 * 4);
        local_8 = local_8 + 1;
        local_14 = local_14 + 4;
      }
    }
    local_c = local_c + 3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + 1;
  } while ((int)local_c < 0x7f017c);
  if (local_8 < 1) {
    return 0xffffffff;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (uint)param_6;
  uVar3 = (uint)param_6;
  iVar7 = (4 - local_8) * local_10;
  iVar10 = (uint)*(byte *)(param_8 + 4 + uVar3 * 4) * iVar7;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_7 = (uint)*(byte *)(param_8 + 5 + uVar3 * 4) * iVar7;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_10 = (uint)*(byte *)(param_8 + 6 + uVar3 * 4) * iVar7;
  if (0 < local_8) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = &DAT_007f0150;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = local_8;
    puVar8 = local_54 + 1;
    do {
      iVar2 = *param_3;
      iVar10 = iVar10 + puVar8[-1] * iVar2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_7 = _param_7 + iVar2 * *puVar8;
      iVar7 = iVar7 + iVar2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_10 = param_10 + puVar8[1] * iVar2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + 3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + -1;
      puVar8 = puVar8 + 4;
    } while (param_8 != 0);
  }
  iVar2 = iVar7;
  if (iVar7 == 0) {
    iVar2 = 1;
  }
  uVar3 = iVar10 / iVar2;
  iVar10 = iVar7;
  if (iVar7 == 0) {
    iVar10 = 1;
  }
  uVar4 = _param_7 / iVar10;
  if (iVar7 == 0) {
    iVar7 = 1;
  }
  uVar5 = (int)param_10 / iVar7;
  if (((uVar3 == 0) && (uVar4 == 0)) && (uVar5 == 0)) {
    return 0;
  }
  uVar9 = local_18;
  if (param_11 != 0) {
    uVar9 = ((uVar3 & 0x3f) << 6 | uVar4 & 0x3f) << 6 | uVar5 & 0x3f;
    bVar1 = *(byte *)(uVar9 + param_11);
    if (bVar1 != 0) {
      return (uint)bVar1;
    }
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  UVar6 = st::external_000000B2(h,(uint)CONCAT11((char)uVar5,(char)uVar4) << 8 | uVar3 & 0xff);
  if (UVar6 != 0xffffffff) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = UVar6 & 0xff;
    if (param_11 != 0) {
      *(char *)(uVar9 + param_11) = (char)UVar6;
    }
  }
  return param_1;
}

// 0070CD90 FUN_0070cd90
#line 1 "decomp/ST.exe/functions/0070CD90/decomp.c"
int __cdecl st::fn_0070CD90(char *param_1,uint *param_2)

{
  uint *puVar1;

  puVar1 = st::fn_00730590(param_2,param_1);
  if (puVar1 == nullptr) {
    return -1;
  }
  return -(uint)(puVar1 != param_2);
}

// 0070CDC0 FUN_0070cdc0
#line 1 "decomp/ST.exe/functions/0070CDC0/decomp.c"
undefined4 __cdecl st::fn_0070CDC0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;

  pbVar2 = param_1;
  if (*param_1 != 0) {
    bVar1 = param_1[1];
    param_1[1] = 0;
    uVar3 = st::fn_00734570(param_1,&param_1,0x10);
    pbVar2[1] = bVar1;
    if (param_1 != pbVar2) {
      return uVar3;
    }
  }
  return 0xffffffff;
}

// 0070CE00 FUN_0070ce00
#line 1 "decomp/ST.exe/functions/0070CE00/decomp.c"
uint * __cdecl st::fn_0070CE00(uint *param_1,char *param_2)

{
  char cVar1;
  uint *puVar2;

  if (((char)*param_1 != '\0') && (*param_2 != '\0')) {
    cVar1 = param_2[1];
    param_2[1] = '\0';
    puVar2 = st::fn_00730590(param_1,param_2);
    param_2[1] = cVar1;
    return puVar2;
  }
  return nullptr;
}

// 0070CE40 FUN_0070ce40
#line 1 "decomp/ST.exe/functions/0070CE40/decomp.c"
char * __cdecl st::fn_0070CE40(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;

  if ((*param_1 == '\0') || (*param_2 == '\0')) {
    return param_1;
  }
  cVar2 = param_2[1];
  uVar3 = 0xffffffff;
  param_2[1] = '\0';
  pcVar6 = param_2;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = param_1;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  param_2[1] = cVar2;
  return param_1;
}

