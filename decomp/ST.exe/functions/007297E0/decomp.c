#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00708650 -> 007297E0 @ 00708888; unproven partial register write at 00708865 | 007297E0
   -> 0072A550 @ 00729BCA | 007297E0 -> 0072A550 @ 00729F36 | 007297E0 -> 0072A660 @ 00729B94 |
   007297E0 -> 0072A660 @ 00729EE7 | 007297E0 -> 0072A8A0 @ 0072A3D6 | 007297E0 -> 0072A9D0 @
   0072A38D | 0072AC20 -> 007297E0 @ 0072AC6E; FUN_0072ac20 parameter param_7 */

undefined4 __thiscall
FUN_007297e0(void *this,byte *param_1,byte *param_2,uint *param_3,uint *param_4,int *param_5,
            int param_6,byte param_7,int param_8,int param_9,uint param_10)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int local_74;
  byte *local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  byte *pbVar8;

  pbVar8 = param_2;
  local_60 = 1;
  local_58 = 1;
  iVar3 = STField<int>(this,0x24) * (int)param_2 + STField<int>(this,0x20);
  local_8 = 0x80000000;
  local_2c = (param_6 + -1 + param_8 * 2) / 2;
  param_3[1] = param_3[1] + 0x8000 & 0xffff0000;
  *param_3 = *param_3 + 0x8000 & 0xffff0000;
  uVar7 = *param_4 + 0x8000 & 0xffff0000;
  *param_4 = uVar7;
  param_4[1] = param_4[1] + 0x8000 & 0xffff0000;
  uVar1 = *param_3;
  if ((int)uVar7 < (int)uVar1) {
    local_3c = *param_4;
    local_38 = param_4[1];
    local_34 = param_4[2];
    local_30 = param_4[3];
    local_4c = *param_3;
    local_48 = param_3[1];
    local_44 = param_3[2];
    local_40 = param_3[3];
  }
  else {
    local_38 = param_3[1];
    local_34 = param_3[2];
    local_30 = param_3[3];
    local_48 = param_4[1];
    local_44 = param_4[2];
    local_40 = param_4[3];
    local_4c = uVar7;
    local_3c = uVar1;
  }
  iVar10 = local_4c - local_3c;
  uVar4 = local_48 - local_38;
  local_28 = (byte *)(local_44 - local_34);
  uVar8 = (int)uVar4 >> 0x1f;
  if ((int)uVar7 < (int)uVar1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = FUN_0072a520(param_10);
    iVar5 = (uVar4 ^ uVar8) - uVar8;
    if (iVar5 < iVar10) {
      iVar5 = iVar10;
    }
    local_8 = 1 << ((byte)((uint)iVar5 >> 0x10) & 0x1f);
  }
  if (iVar10 < (int)((uVar4 ^ uVar8) - uVar8)) {
    local_c = (int)local_38 >> 0x10;
    iVar5 = (int)local_48 >> 0x10;
    if (local_c < iVar5) {
      local_60 = iVar10 / (iVar5 - local_c);
      local_58 = (int)local_28 / (iVar5 - local_c);
      iVar10 = param_5[1];
      if (local_c < iVar10) {
        local_c = iVar10 - local_c;
        local_3c = local_3c + local_c * local_60;
        local_34 = local_34 + local_c * local_58;
        local_8 = local_8 >> ((byte)local_c & 0x1f);
        local_c = iVar10;
      }
      iVar10 = param_5[3];
      if (iVar10 <= iVar5) {
        local_4c = local_4c - ((iVar5 - iVar10) + 1) * local_60;
        iVar5 = iVar10 + -1;
      }
      local_14 = (iVar5 - local_c) + 1;
      if (local_14 < 1) {
        return 0;
      }
      puVar6 = STField<uint *>(this,0x28);
      local_1c = param_2;
    }
    else {
      if (iVar5 != local_c) {
        local_60 = iVar10 / (local_c - iVar5);
        local_58 = (int)local_28 / (local_c - iVar5);
      }
      if (param_5[3] <= local_c) {
        iVar10 = (local_c - param_5[3]) + 1;
        local_3c = local_3c + iVar10 * local_60;
        local_34 = local_34 + iVar10 * local_58;
        local_c = param_5[3] + -1;
      }
      iVar10 = param_5[1];
      if (iVar5 < iVar10) {
        local_4c = local_4c - (iVar10 - iVar5) * local_60;
        iVar5 = iVar10;
      }
      local_14 = (local_c - iVar5) + 1;
      if (local_14 == 0) {
        return 0;
      }
      local_1c = (byte *)-(int)param_2;
      puVar6 = (uint *)-STField<int>(this,0x28);
    }
    local_10 = (int)local_4c >> 0x10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (uint *)param_9;
    iVar5 = (int)local_3c >> 0x10;
    iVar10 = -local_2c;
    local_18 = param_8 + -1;
    if (-1 < local_18) {
      local_24 = (byte *)(local_3c & 0xffff);
      local_20 = (byte *)(local_10 - iVar5);
      local_28 = (byte *)(iVar10 + iVar5);
      local_2c = param_8;
      do {
        local_50 = param_10;
        local_54 = local_8;
        local_64 = (uint)local_24;
        local_74 = local_14;
        local_5c = local_34;
        if (((int)local_28 < *param_5) || (param_5[2] <= (int)(local_28 + (int)local_20))) {
          local_68 = param_5[2];
          local_70 = local_28;
          local_6c = *param_5;
          FUN_0072aa60(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3,(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_3);
        }
        else {
          FUN_0072ab80(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3,(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_3);
        }
        iVar10 = iVar10 + 1;
        local_28 = local_28 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 0x40;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      local_2c = 0;
    }
    if (-1 < param_6 + -1) {
      local_20 = (byte *)(local_10 - iVar5);
      local_24 = (byte *)(local_3c & 0xffff);
      pbVar9 = (byte *)(iVar10 + iVar5);
      do {
        local_50 = param_10;
        local_74 = local_14;
        local_54 = local_8;
        local_5c = local_34;
        local_64 = (uint)local_24;
        if (((int)pbVar9 < *param_5) || (param_5[2] <= (int)(pbVar9 + (int)local_20))) {
          local_68 = param_5[2];
          local_70 = pbVar9;
          local_6c = *param_5;
          FUN_0072a8a0(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3,(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_7);
        }
        else {
          FUN_0072a9d0(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3,(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_7);
        }
        iVar10 = iVar10 + 1;
        pbVar9 = pbVar9 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (uint *)(param_8 * 0x100 + -0x100 + param_9);
    if (-1 < local_18) {
      local_24 = (byte *)(local_3c & 0xffff);
      local_20 = (byte *)(local_10 - iVar5);
      pbVar9 = (byte *)(iVar10 + iVar5);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_7 = local_18 + 1;
      do {
        local_50 = param_10;
        local_54 = local_8;
        local_64 = (uint)local_24;
        local_74 = local_14;
        local_5c = local_34;
        if (((int)pbVar9 < *param_5) || (param_5[2] <= (int)(pbVar9 + (int)local_20))) {
          local_68 = param_5[2];
          local_70 = pbVar9;
          local_6c = *param_5;
          FUN_0072aa60(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3,(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_3);
        }
        else {
          FUN_0072ab80(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3,(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_3);
        }
        iVar10 = iVar10 + 1;
        pbVar9 = pbVar9 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + -0x40;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        _param_7 = _param_7 + -1;
      } while (_param_7 != 0);
    }
  }
  else {
    iVar5 = (int)local_3c >> 0x10;
    iVar10 = (int)local_4c >> 0x10;
    if (iVar10 != iVar5) {
      local_60 = (int)uVar4 / (iVar10 - iVar5);
      local_58 = (int)local_28 / (iVar10 - iVar5);
    }
    iVar2 = *param_5;
    if (iVar5 < iVar2) {
      iVar5 = iVar2 - iVar5;
      local_38 = local_38 + iVar5 * local_60;
      local_34 = local_34 + iVar5 * local_58;
      local_8 = local_8 >> ((byte)iVar5 & 0x1f);
      iVar5 = iVar2;
    }
    iVar2 = param_5[2];
    if (iVar2 <= iVar10) {
      local_48 = local_48 - ((iVar10 - iVar2) + 1) * local_60;
      iVar10 = iVar2 + -1;
    }
    local_14 = (iVar10 - iVar5) + 1;
    if (0 < local_14) {
      local_1c = (byte *)((int)local_48 >> 0x10);
      pbVar9 = (byte *)-local_2c;
      local_c = (int)local_38 >> 0x10;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = (uint *)param_9;
      if ((int)local_38 < (int)local_48) {
        local_18 = param_8 + -1;
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          local_20 = pbVar9 + local_c;
          local_24 = param_1 + (int)local_20 * (int)param_2 + iVar5 + iVar3;
          iVar10 = (int)local_1c - local_c;
          local_28 = (byte *)param_8;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_20 < param_5[1]) || (param_5[3] <= (int)(local_20 + iVar10))) {
              local_68 = param_5[3];
              local_70 = local_20;
              local_6c = param_5[1];
              FUN_0072a6f0(local_24,(int)param_2,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_20 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_3);
            }
            else {
              FUN_0072a810(local_24,(int)param_2,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_20 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_3);
            }
            local_24 = local_24 + (int)param_2;
            local_20 = local_20 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + 0x40;
            local_28 = (byte *)((int)local_28 + -1);
          } while (local_28 != nullptr);
          local_28 = nullptr;
          pbVar9 = pbVar9 + param_8;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = pbVar9;
        if (-1 < param_6 + -1) {
          local_10 = local_38 & 0xffff;
          local_24 = param_2 + local_c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (uint *)(param_1 + (int)local_24 * (int)pbVar8 + iVar5 + iVar3);
          iVar10 = (int)local_1c - local_c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + param_6;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_24 < param_5[1]) || (param_5[3] <= (int)(local_24 + iVar10))) {
              local_68 = param_5[3];
              local_70 = local_24;
              local_6c = param_5[1];
              FUN_0072a550(param_3,(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_24 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_7);
            }
            else {
              FUN_0072a660(param_3,(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_24 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_7);
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = (uint *)((int)param_3 + (int)pbVar8);
            local_24 = local_24 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + -1;
          } while (param_6 != 0);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (uint *)(param_8 * 0x100 + -0x100 + param_9);
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          pbVar9 = param_2 + local_c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = param_1 + (int)pbVar9 * (int)pbVar8 + iVar5 + iVar3;
          iVar3 = (int)local_1c - local_c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (byte *)(local_18 + 1);
          do {
            local_50 = param_10;
            local_54 = local_8;
            local_64 = local_10;
            local_74 = local_14;
            local_5c = local_34;
            if (((int)pbVar9 < param_5[1]) || (param_5[3] <= (int)(pbVar9 + iVar3))) {
              local_68 = param_5[3];
              local_70 = pbVar9;
              local_6c = param_5[1];
              FUN_0072a6f0(param_1,(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)pbVar9 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_3);
            }
            else {
              FUN_0072a810(param_1,(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)pbVar9 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_3);
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + (int)pbVar8;
            pbVar9 = pbVar9 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + -0x40;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + -1;
          } while (param_2 != nullptr);
          return 0;
        }
      }
      else {
        local_18 = param_8 + -1;
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          local_20 = pbVar9 + local_c;
          local_28 = (byte *)-(int)local_20;
          local_24 = param_1 + (int)local_20 * (int)param_2 + iVar5 + iVar3;
          iVar10 = (int)local_1c - local_c;
          local_2c = param_8;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_20 < param_5[3]) && (param_5[1] <= (int)(local_20 + iVar10))) {
              FUN_0072a810(local_24,-(int)param_2,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_20 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_3);
            }
            else {
              local_70 = local_28;
              local_6c = 1 - param_5[3];
              local_68 = 1 - param_5[1];
              FUN_0072a6f0(local_24,-(int)param_2,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_20 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_3);
            }
            local_28 = local_28 + -1;
            local_24 = local_24 + (int)param_2;
            local_20 = local_20 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + 0x40;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
          local_2c = 0;
          pbVar9 = pbVar9 + param_8;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = pbVar9;
        if (-1 < param_6 + -1) {
          local_10 = local_38 & 0xffff;
          local_24 = param_2 + local_c;
          local_28 = (byte *)-(int)local_24;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (uint *)(param_1 + (int)local_24 * (int)pbVar8 + iVar5 + iVar3);
          iVar10 = (int)local_1c - local_c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + param_6;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_24 < param_5[3]) && (param_5[1] <= (int)(local_24 + iVar10))) {
              FUN_0072a660(param_3,-(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_24 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_7);
            }
            else {
              local_70 = local_28;
              local_6c = 1 - param_5[3];
              local_68 = 1 - param_5[1];
              FUN_0072a550(param_3,-(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_24 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_7);
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = (uint *)((int)param_3 + (int)pbVar8);
            local_28 = local_28 + -1;
            local_24 = local_24 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + -1;
          } while (param_6 != 0);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (uint *)(param_8 * 0x100 + -0x100 + param_9);
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          pbVar9 = param_2 + local_c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (byte *)-(int)pbVar9;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = param_1 + (int)pbVar9 * (int)pbVar8 + iVar5 + iVar3;
          iVar3 = (int)local_1c - local_c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_7 = local_18 + 1;
          do {
            local_50 = param_10;
            local_54 = local_8;
            local_64 = local_10;
            local_74 = local_14;
            local_5c = local_34;
            if (((int)pbVar9 < param_5[3]) && (param_5[1] <= (int)(pbVar9 + iVar3))) {
              FUN_0072a810(param_1,-(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)pbVar9 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_3);
            }
            else {
              local_70 = param_2;
              local_6c = 1 - param_5[3];
              local_68 = 1 - param_5[1];
              FUN_0072a6f0(param_1,-(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)pbVar9 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_3);
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + -1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + (int)pbVar8;
            pbVar9 = pbVar9 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + -0x40;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_7 = _param_7 + -1;
          } while (_param_7 != 0);
          return 0;
        }
      }
    }
  }
  return 0;
}

