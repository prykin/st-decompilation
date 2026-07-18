
undefined4 __thiscall
FUN_007297e0(void *this,byte *param_1,byte *param_2,uint *param_3,uint *param_4,int *param_5,
            int param_6,undefined1 param_7,int param_8,int param_9,uint param_10)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
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
  
  pbVar6 = param_2;
  local_60 = 1;
  local_58 = 1;
  iVar2 = *(int *)((int)this + 0x24) * (int)param_2 + *(int *)((int)this + 0x20);
  local_8 = 0x80000000;
  local_2c = (param_6 + -1 + param_8 * 2) / 2;
  param_3[1] = param_3[1] + 0x8000 & 0xffff0000;
  *param_3 = *param_3 + 0x8000 & 0xffff0000;
  uVar5 = *param_4 + 0x8000 & 0xffff0000;
  *param_4 = uVar5;
  param_4[1] = param_4[1] + 0x8000 & 0xffff0000;
  uVar1 = *param_3;
  if ((int)uVar5 < (int)uVar1) {
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
    local_4c = uVar5;
    local_3c = uVar1;
  }
  iVar9 = local_4c - local_3c;
  uVar3 = local_48 - local_38;
  local_28 = (byte *)(local_44 - local_34);
  uVar7 = (int)uVar3 >> 0x1f;
  if ((int)uVar5 < (int)uVar1) {
    param_10 = FUN_0072a520(param_10);
    iVar4 = (uVar3 ^ uVar7) - uVar7;
    if (iVar4 < iVar9) {
      iVar4 = iVar9;
    }
    local_8 = 1 << ((byte)((uint)iVar4 >> 0x10) & 0x1f);
  }
  if (iVar9 < (int)((uVar3 ^ uVar7) - uVar7)) {
    local_c = (int)local_38 >> 0x10;
    iVar4 = (int)local_48 >> 0x10;
    if (local_c < iVar4) {
      local_60 = iVar9 / (iVar4 - local_c);
      local_58 = (int)local_28 / (iVar4 - local_c);
      iVar9 = param_5[1];
      if (local_c < iVar9) {
        local_c = iVar9 - local_c;
        local_3c = local_3c + local_c * local_60;
        local_34 = local_34 + local_c * local_58;
        local_8 = local_8 >> ((byte)local_c & 0x1f);
        local_c = iVar9;
      }
      iVar9 = param_5[3];
      if (iVar9 <= iVar4) {
        local_4c = local_4c - ((iVar4 - iVar9) + 1) * local_60;
        iVar4 = iVar9 + -1;
      }
      local_14 = (iVar4 - local_c) + 1;
      if (local_14 < 1) {
        return 0;
      }
      iVar9 = *(int *)((int)this + 0x28);
      local_1c = param_2;
    }
    else {
      if (iVar4 != local_c) {
        local_60 = iVar9 / (local_c - iVar4);
        local_58 = (int)local_28 / (local_c - iVar4);
      }
      if (param_5[3] <= local_c) {
        iVar9 = (local_c - param_5[3]) + 1;
        local_3c = local_3c + iVar9 * local_60;
        local_34 = local_34 + iVar9 * local_58;
        local_c = param_5[3] + -1;
      }
      iVar9 = param_5[1];
      if (iVar4 < iVar9) {
        local_4c = local_4c - (iVar9 - iVar4) * local_60;
        iVar4 = iVar9;
      }
      local_14 = (local_c - iVar4) + 1;
      if (local_14 == 0) {
        return 0;
      }
      local_1c = (byte *)-(int)param_2;
      iVar9 = -*(int *)((int)this + 0x28);
    }
    local_10 = (int)local_4c >> 0x10;
    param_3 = (uint *)param_9;
    iVar10 = (int)local_3c >> 0x10;
    iVar4 = -local_2c;
    local_18 = param_8 + -1;
    if (-1 < local_18) {
      local_24 = (byte *)(local_3c & 0xffff);
      local_20 = (byte *)(local_10 - iVar10);
      local_28 = (byte *)(iVar4 + iVar10);
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
          FUN_0072aa60(param_1 + local_c * (int)param_2 + iVar4 + iVar10 + iVar2,(int)local_1c,
                       (ushort *)
                       (*(int *)((int)this + 0x14) +
                       (*(int *)((int)this + 0x28) * local_c + iVar4 + iVar10) * 2),iVar9,&local_74,
                       (int)param_3);
        }
        else {
          FUN_0072ab80(param_1 + local_c * (int)param_2 + iVar4 + iVar10 + iVar2,(int)local_1c,
                       (ushort *)
                       (*(int *)((int)this + 0x14) +
                       (*(int *)((int)this + 0x28) * local_c + iVar4 + iVar10) * 2),iVar9,&local_74,
                       (int)param_3);
        }
        iVar4 = iVar4 + 1;
        local_28 = local_28 + 1;
        param_3 = param_3 + 0x40;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      local_2c = 0;
    }
    if (-1 < param_6 + -1) {
      local_20 = (byte *)(local_10 - iVar10);
      local_24 = (byte *)(local_3c & 0xffff);
      pbVar6 = (byte *)(iVar4 + iVar10);
      do {
        local_50 = param_10;
        local_74 = local_14;
        local_54 = local_8;
        local_5c = local_34;
        local_64 = (uint)local_24;
        if (((int)pbVar6 < *param_5) || (param_5[2] <= (int)(pbVar6 + (int)local_20))) {
          local_68 = param_5[2];
          local_70 = pbVar6;
          local_6c = *param_5;
          FUN_0072a8a0(param_1 + local_c * (int)param_2 + iVar4 + iVar10 + iVar2,(int)local_1c,
                       (ushort *)
                       (*(int *)((int)this + 0x14) +
                       (*(int *)((int)this + 0x28) * local_c + iVar4 + iVar10) * 2),iVar9,&local_74,
                       param_7);
        }
        else {
          FUN_0072a9d0(param_1 + local_c * (int)param_2 + iVar4 + iVar10 + iVar2,(int)local_1c,
                       (ushort *)
                       (*(int *)((int)this + 0x14) +
                       (*(int *)((int)this + 0x28) * local_c + iVar4 + iVar10) * 2),iVar9,&local_74,
                       param_7);
        }
        iVar4 = iVar4 + 1;
        pbVar6 = pbVar6 + 1;
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    param_3 = (uint *)(param_8 * 0x100 + -0x100 + param_9);
    if (-1 < local_18) {
      local_24 = (byte *)(local_3c & 0xffff);
      local_20 = (byte *)(local_10 - iVar10);
      pbVar6 = (byte *)(iVar4 + iVar10);
      _param_7 = local_18 + 1;
      do {
        local_50 = param_10;
        local_54 = local_8;
        local_64 = (uint)local_24;
        local_74 = local_14;
        local_5c = local_34;
        if (((int)pbVar6 < *param_5) || (param_5[2] <= (int)(pbVar6 + (int)local_20))) {
          local_68 = param_5[2];
          local_70 = pbVar6;
          local_6c = *param_5;
          FUN_0072aa60(param_1 + local_c * (int)param_2 + iVar4 + iVar10 + iVar2,(int)local_1c,
                       (ushort *)
                       (*(int *)((int)this + 0x14) +
                       (*(int *)((int)this + 0x28) * local_c + iVar4 + iVar10) * 2),iVar9,&local_74,
                       (int)param_3);
        }
        else {
          FUN_0072ab80(param_1 + local_c * (int)param_2 + iVar4 + iVar10 + iVar2,(int)local_1c,
                       (ushort *)
                       (*(int *)((int)this + 0x14) +
                       (*(int *)((int)this + 0x28) * local_c + iVar4 + iVar10) * 2),iVar9,&local_74,
                       (int)param_3);
        }
        iVar4 = iVar4 + 1;
        pbVar6 = pbVar6 + 1;
        param_3 = param_3 + -0x40;
        _param_7 = _param_7 + -1;
      } while (_param_7 != 0);
    }
  }
  else {
    iVar4 = (int)local_3c >> 0x10;
    iVar9 = (int)local_4c >> 0x10;
    if (iVar9 != iVar4) {
      local_60 = (int)uVar3 / (iVar9 - iVar4);
      local_58 = (int)local_28 / (iVar9 - iVar4);
    }
    iVar10 = *param_5;
    if (iVar4 < iVar10) {
      iVar4 = iVar10 - iVar4;
      local_38 = local_38 + iVar4 * local_60;
      local_34 = local_34 + iVar4 * local_58;
      local_8 = local_8 >> ((byte)iVar4 & 0x1f);
      iVar4 = iVar10;
    }
    iVar10 = param_5[2];
    if (iVar10 <= iVar9) {
      local_48 = local_48 - ((iVar9 - iVar10) + 1) * local_60;
      iVar9 = iVar10 + -1;
    }
    local_14 = (iVar9 - iVar4) + 1;
    if (0 < local_14) {
      local_1c = (byte *)((int)local_48 >> 0x10);
      pbVar8 = (byte *)-local_2c;
      local_c = (int)local_38 >> 0x10;
      param_3 = (uint *)param_9;
      if ((int)local_38 < (int)local_48) {
        local_18 = param_8 + -1;
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          local_20 = pbVar8 + local_c;
          local_24 = param_1 + (int)local_20 * (int)param_2 + iVar4 + iVar2;
          iVar9 = (int)local_1c - local_c;
          local_28 = (byte *)param_8;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_20 < param_5[1]) || (param_5[3] <= (int)(local_20 + iVar9))) {
              local_68 = param_5[3];
              local_70 = local_20;
              local_6c = param_5[1];
              FUN_0072a6f0(local_24,(int)param_2,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)local_20 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           *(int *)((int)this + 0x28),&local_74,(int)param_3);
            }
            else {
              FUN_0072a810(local_24,(int)param_2,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)local_20 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           *(int *)((int)this + 0x28),&local_74,(int)param_3);
            }
            local_24 = local_24 + (int)param_2;
            local_20 = local_20 + 1;
            param_3 = param_3 + 0x40;
            local_28 = (byte *)((int)local_28 + -1);
          } while (local_28 != (byte *)0x0);
          local_28 = (byte *)0x0;
          pbVar8 = pbVar8 + param_8;
        }
        param_2 = pbVar8;
        if (-1 < param_6 + -1) {
          local_10 = local_38 & 0xffff;
          local_24 = param_2 + local_c;
          param_3 = (uint *)(param_1 + (int)local_24 * (int)pbVar6 + iVar4 + iVar2);
          iVar9 = (int)local_1c - local_c;
          param_2 = param_2 + param_6;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_24 < param_5[1]) || (param_5[3] <= (int)(local_24 + iVar9))) {
              local_68 = param_5[3];
              local_70 = local_24;
              local_6c = param_5[1];
              FUN_0072a550((undefined1 *)param_3,(int)pbVar6,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)local_24 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           *(int *)((int)this + 0x28),&local_74,param_7);
            }
            else {
              FUN_0072a660((undefined1 *)param_3,(int)pbVar6,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)local_24 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           *(int *)((int)this + 0x28),&local_74,param_7);
            }
            param_3 = (uint *)((int)param_3 + (int)pbVar6);
            local_24 = local_24 + 1;
            param_6 = param_6 + -1;
          } while (param_6 != 0);
        }
        param_3 = (uint *)(param_8 * 0x100 + -0x100 + param_9);
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          pbVar8 = param_2 + local_c;
          param_1 = param_1 + (int)pbVar8 * (int)pbVar6 + iVar4 + iVar2;
          iVar2 = (int)local_1c - local_c;
          param_2 = (byte *)(local_18 + 1);
          do {
            local_50 = param_10;
            local_54 = local_8;
            local_64 = local_10;
            local_74 = local_14;
            local_5c = local_34;
            if (((int)pbVar8 < param_5[1]) || (param_5[3] <= (int)(pbVar8 + iVar2))) {
              local_68 = param_5[3];
              local_70 = pbVar8;
              local_6c = param_5[1];
              FUN_0072a6f0(param_1,(int)pbVar6,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)pbVar8 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           *(int *)((int)this + 0x28),&local_74,(int)param_3);
            }
            else {
              FUN_0072a810(param_1,(int)pbVar6,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)pbVar8 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           *(int *)((int)this + 0x28),&local_74,(int)param_3);
            }
            param_1 = param_1 + (int)pbVar6;
            pbVar8 = pbVar8 + 1;
            param_3 = param_3 + -0x40;
            param_2 = param_2 + -1;
          } while (param_2 != (byte *)0x0);
          return 0;
        }
      }
      else {
        local_18 = param_8 + -1;
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          local_20 = pbVar8 + local_c;
          local_28 = (byte *)-(int)local_20;
          local_24 = param_1 + (int)local_20 * (int)param_2 + iVar4 + iVar2;
          iVar9 = (int)local_1c - local_c;
          local_2c = param_8;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_20 < param_5[3]) && (param_5[1] <= (int)(local_20 + iVar9))) {
              FUN_0072a810(local_24,-(int)param_2,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)local_20 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           -*(int *)((int)this + 0x28),&local_74,(int)param_3);
            }
            else {
              local_70 = local_28;
              local_6c = 1 - param_5[3];
              local_68 = 1 - param_5[1];
              FUN_0072a6f0(local_24,-(int)param_2,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)local_20 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           -*(int *)((int)this + 0x28),&local_74,(int)param_3);
            }
            local_28 = local_28 + -1;
            local_24 = local_24 + (int)param_2;
            local_20 = local_20 + 1;
            param_3 = param_3 + 0x40;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
          local_2c = 0;
          pbVar8 = pbVar8 + param_8;
        }
        param_2 = pbVar8;
        if (-1 < param_6 + -1) {
          local_10 = local_38 & 0xffff;
          local_24 = param_2 + local_c;
          local_28 = (byte *)-(int)local_24;
          param_3 = (uint *)(param_1 + (int)local_24 * (int)pbVar6 + iVar4 + iVar2);
          iVar9 = (int)local_1c - local_c;
          param_2 = param_2 + param_6;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_24 < param_5[3]) && (param_5[1] <= (int)(local_24 + iVar9))) {
              FUN_0072a660((undefined1 *)param_3,-(int)pbVar6,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)local_24 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           -*(int *)((int)this + 0x28),&local_74,param_7);
            }
            else {
              local_70 = local_28;
              local_6c = 1 - param_5[3];
              local_68 = 1 - param_5[1];
              FUN_0072a550((undefined1 *)param_3,-(int)pbVar6,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)local_24 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           -*(int *)((int)this + 0x28),&local_74,param_7);
            }
            param_3 = (uint *)((int)param_3 + (int)pbVar6);
            local_28 = local_28 + -1;
            local_24 = local_24 + 1;
            param_6 = param_6 + -1;
          } while (param_6 != 0);
        }
        param_3 = (uint *)(param_8 * 0x100 + -0x100 + param_9);
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          pbVar8 = param_2 + local_c;
          param_2 = (byte *)-(int)pbVar8;
          param_1 = param_1 + (int)pbVar8 * (int)pbVar6 + iVar4 + iVar2;
          iVar2 = (int)local_1c - local_c;
          _param_7 = local_18 + 1;
          do {
            local_50 = param_10;
            local_54 = local_8;
            local_64 = local_10;
            local_74 = local_14;
            local_5c = local_34;
            if (((int)pbVar8 < param_5[3]) && (param_5[1] <= (int)(pbVar8 + iVar2))) {
              FUN_0072a810(param_1,-(int)pbVar6,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)pbVar8 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           -*(int *)((int)this + 0x28),&local_74,(int)param_3);
            }
            else {
              local_70 = param_2;
              local_6c = 1 - param_5[3];
              local_68 = 1 - param_5[1];
              FUN_0072a6f0(param_1,-(int)pbVar6,
                           (ushort *)
                           (*(int *)((int)this + 0x14) +
                           ((int)pbVar8 * *(int *)((int)this + 0x28) + iVar4) * 2),
                           -*(int *)((int)this + 0x28),&local_74,(int)param_3);
            }
            param_2 = param_2 + -1;
            param_1 = param_1 + (int)pbVar6;
            pbVar8 = pbVar8 + 1;
            param_3 = param_3 + -0x40;
            _param_7 = _param_7 + -1;
          } while (_param_7 != 0);
          return 0;
        }
      }
    }
  }
  return 0;
}

