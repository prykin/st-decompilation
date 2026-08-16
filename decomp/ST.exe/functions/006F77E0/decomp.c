#include "../../pseudocode_runtime.h"


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
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  int local_c;
  uint local_8;
  byte *temp_3ff1bd1445;
  byte *pbVar6;
  byte *temp_3f56eb0366;

  _DAT_00857000 = 1;
  pbVar7 = param_11;
joined_r0x006f77f7:
  do {
    auto param_10_after_write = param_10 + -1; /* compiler stack-slot lifetime split */
    if (param_10_after_write < 0) {
      return;
    }
    local_8 = (uint)*param_6;
    uVar4 = (uint)*pbVar7;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + 1;
    pbVar7 = pbVar7 + 1;
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
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar5 = iVar5 - uVar3;
          uVar4 = (uint)bVar1;
        }
        uVar3 = uVar4 & 0x3f;
        if ((uVar4 & 0x40) == 0) {
          pbVar7 = pbVar7 + uVar3;
        }
        else {
          pbVar7 = pbVar7 + 1;
        }
        if (iVar5 < (int)uVar3) break;
        uVar4 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
        iVar5 = iVar5 - uVar3;
      }
LAB_006f785d:
      uVar3 = uVar3 - iVar5;
    }
    iVar5 = param_8;
    if (local_8 != 0) {
      do {
        if ((local_8 & 0x80) == 0) {
          uVar9 = local_8 & 0x7f;
          if (iVar5 < (int)uVar9) goto LAB_006f78b6;
        }
        else {
          uVar9 = local_8 & 0x3f;
          if (iVar5 < (int)uVar9) goto LAB_006f78b6;
          if ((local_8 & 0x40) == 0) {
            param_6 = param_6 + uVar9;
          }
          else {
            param_6 = param_6 + 1;
          }
        }
        local_8 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar5 = iVar5 - uVar9;
      } while( true );
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + param_2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (ushort *)((int)param_3 + param_4);
  } while( true );
LAB_006f78b6:
  pbVar10 = (byte *)(uVar9 - iVar5);
  if (((byte)local_8 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar5;
  }
  local_c = param_9;
  auto param_11_after_write = pbVar7; /* compiler stack-slot lifetime split */
  if ((int)pbVar10 <= param_9) {
    do {
      local_c = local_c - (int)pbVar10;
      if ((local_8 & 0x80) == 0) {
        param_1 = param_1 + (int)pbVar10;
        param_3 = param_3 + (int)pbVar10;
        pbVar8 = pbVar7;
        if ((int)uVar3 < (int)pbVar10) {
          do {
            pbVar10 = pbVar10 + -uVar3;
            bVar1 = *pbVar8;
            uVar4 = (uint)bVar1;
            pbVar7 = pbVar8 + 1;
            if ((bVar1 & 0x80) == 0) {
              uVar3 = uVar4 & 0x7f;
            }
            else {
              uVar3 = uVar4 & 0x3f;
              if ((bVar1 & 0x40) == 0) {
                pbVar7 = pbVar7 + uVar3;
              }
              else {
                pbVar7 = pbVar8 + 2;
              }
            }
            pbVar8 = pbVar7;
          } while ((int)uVar3 < (int)pbVar10);
        }
        uVar3 = uVar3 - (int)pbVar10;
      }
      else {
        param_11_after_write = pbVar10;
        if ((local_8 & 0x40) == 0) {
          if (-1 < (int)(pbVar10 + -1)) {
            uVar9 = uVar4 & 0x80;
            pbVar10 = pbVar7;
            do {
              if ((uVar9 != 0) && (param_5 <= *param_3)) {
                *param_1 = *param_6;
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              uVar3 = uVar3 - 1;
              pbVar7 = pbVar10;
              if ((int)uVar3 < 0) {
                bVar1 = *pbVar10;
                uVar4 = (uint)bVar1;
                pbVar7 = pbVar10 + 1;
                uVar9 = uVar4 & 0x80;
                if ((bVar1 & 0x80) == 0) {
                  uVar3 = uVar4 & 0x7f;
                }
                else {
                  uVar3 = uVar4 & 0x3f;
                  if ((bVar1 & 0x40) == 0) {
                    pbVar7 = pbVar7 + uVar3;
                  }
                  else {
                    pbVar7 = pbVar10 + 2;
                  }
                }
              }
              param_11_after_write = param_11_after_write + -1;
              pbVar10 = pbVar7;
            } while (param_11_after_write != nullptr);
          }
        }
        else {
          param_6 = param_6 + 1;
          if (-1 < (int)(pbVar10 + -1)) {
            uVar9 = uVar4 & 0x80;
            pbVar10 = pbVar7;
            do {
              if ((uVar9 != 0) && (param_5 <= *param_3)) {
                *param_1 = *(byte *)((uint)*param_6 + param_14);
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              uVar3 = uVar3 - 1;
              pbVar7 = pbVar10;
              if ((int)uVar3 < 0) {
                bVar1 = *pbVar10;
                uVar4 = (uint)bVar1;
                pbVar7 = pbVar10 + 1;
                uVar9 = uVar4 & 0x80;
                if ((bVar1 & 0x80) == 0) {
                  uVar3 = uVar4 & 0x7f;
                }
                else {
                  uVar3 = uVar4 & 0x3f;
                  if ((bVar1 & 0x40) == 0) {
                    pbVar7 = pbVar7 + uVar3;
                  }
                  else {
                    pbVar7 = pbVar10 + 2;
                  }
                }
              }
              param_11_after_write = param_11_after_write + -1;
              pbVar10 = pbVar7;
            } while (param_11_after_write != nullptr);
          }
        }
      }
      param_11_after_write = pbVar7;
      if (local_c < 1) {
        pbVar10 = nullptr;
        break;
      }
      bVar1 = *param_6;
      local_8 = (uint)bVar1;
      param_6 = param_6 + 1;
      if ((bVar1 & 0x80) == 0) {
        pbVar10 = (byte *)(local_8 & 0x7f);
      }
      else {
        pbVar10 = (byte *)(local_8 & 0x3f);
      }
    } while ((int)pbVar10 <= local_c);
  }
  if ((0 < local_c) && ((int)uVar3 < 1)) {
    bVar1 = *param_11_after_write;
    uVar4 = (uint)bVar1;
    if ((bVar1 & 0x80) == 0) {
      uVar3 = uVar4 & 0x7f;
      param_11_after_write = param_11_after_write + 1;
    }
    else {
      uVar3 = uVar4 & 0x3f;
      if ((bVar1 & 0x40) == 0) {
        param_11_after_write = param_11_after_write + 1 + uVar3;
      }
      else {
        param_11_after_write = param_11_after_write + 2;
      }
    }
  }
  uVar9 = (int)pbVar10 - local_c;
  if ((local_8 & 0x80) == 0) {
    param_1 = param_1 + local_c;
    param_3 = param_3 + local_c;
    pbVar6 = param_11_after_write;
    if ((int)uVar3 < local_c) {
      do {
        local_c = local_c - uVar3;
        bVar1 = *pbVar6;
        param_11_after_write = pbVar6 + 1;
        if ((bVar1 & 0x80) == 0) {
          uVar3 = bVar1 & 0x7f;
        }
        else {
          uVar3 = bVar1 & 0x3f;
          if ((bVar1 & 0x40) == 0) {
            param_11_after_write = param_11_after_write + uVar3;
          }
          else {
            param_11_after_write = pbVar6 + 2;
          }
        }
        pbVar6 = param_11_after_write;
      } while ((int)uVar3 < local_c);
    }
    uVar3 = uVar3 - local_c;
  }
  else if ((local_8 & 0x40) == 0) {
    if (-1 < local_c + -1) {
      uVar4 = uVar4 & 0x80;
      temp_3ff1bd1445 = param_11_after_write;
      do {
        if ((uVar4 != 0) && (param_5 <= *param_3)) {
          *param_1 = *(byte *)((uint)*param_6 + param_14);
        }
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        param_6 = param_6 + 1;
        uVar3 = uVar3 - 1;
        param_11_after_write = temp_3ff1bd1445;
        if ((int)uVar3 < 0) {
          bVar1 = *temp_3ff1bd1445;
          uVar3 = (uint)bVar1;
          param_11_after_write = temp_3ff1bd1445 + 1;
          uVar4 = uVar3 & 0x80;
          if ((bVar1 & 0x80) == 0) {
            uVar3 = uVar3 & 0x7f;
          }
          else {
            uVar3 = uVar3 & 0x3f;
            if ((bVar1 & 0x40) == 0) {
              param_11_after_write = param_11_after_write + uVar3;
            }
            else {
              param_11_after_write = temp_3ff1bd1445 + 2;
            }
          }
        }
        local_c = local_c + -1;
        temp_3ff1bd1445 = param_11_after_write;
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
          bVar2 = *param_11_after_write;
          uVar3 = (uint)bVar2;
          uVar4 = uVar3 & 0x80;
          if ((bVar2 & 0x80) == 0) {
            uVar3 = uVar3 & 0x7f;
            param_11_after_write = param_11_after_write + 1;
          }
          else {
            uVar3 = uVar3 & 0x3f;
            if ((bVar2 & 0x40) == 0) {
              param_11_after_write = param_11_after_write + 1 + uVar3;
            }
            else {
              param_11_after_write = param_11_after_write + 2;
            }
          }
        }
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  iVar5 = (param_7 - param_8) - param_9;
  bVar1 = (byte)local_8;
  if ((int)uVar9 < iVar5) {
    do {
      iVar5 = iVar5 - uVar9;
      temp_3f56eb0366 = param_6;
      if (((byte)local_8 & 0xc0) == 0x80) {
        temp_3f56eb0366 = param_6 + uVar9;
      }
      bVar1 = *temp_3f56eb0366;
      local_8 = (uint)bVar1;
      param_6 = temp_3f56eb0366 + 1;
      uVar9 = local_8;
      if (((bVar1 & 0x80) != 0) && (uVar9 = local_8 & 0x3f, (bVar1 & 0x40) != 0)) {
        param_6 = temp_3f56eb0366 + 2;
      }
    } while ((int)uVar9 < iVar5);
  }
  STPiece<0,1>(local_8) = bVar1;
  if (((byte)local_8 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar5;
  }
  iVar5 = (param_12 - param_9) - param_13;
  if ((int)uVar3 < iVar5) {
    do {
      iVar5 = iVar5 - uVar3;
      bVar1 = *param_11_after_write;
      pbVar7 = param_11_after_write + 1;
      if ((bVar1 & 0x80) == 0) {
        uVar3 = bVar1 & 0x7f;
      }
      else {
        uVar3 = bVar1 & 0x3f;
        if ((bVar1 & 0x40) == 0) {
          pbVar7 = pbVar7 + uVar3;
        }
        else {
          pbVar7 = param_11_after_write + 2;
        }
      }
      param_11_after_write = pbVar7;
    } while ((int)uVar3 < iVar5);
  }
  param_1 = param_1 + (param_2 - param_9);
  param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
  pbVar7 = param_11_after_write;
  goto joined_r0x006f77f7;
}

