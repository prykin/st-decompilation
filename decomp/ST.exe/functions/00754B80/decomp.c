
void FUN_00754b80(int param_1,ushort *param_2,int param_3,int *param_4,undefined4 param_5,
                 int param_6,uint *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  ushort *puVar9;
  ushort *puVar10;
  int *piVar11;
  int iVar12;
  ushort local_220 [256];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  ushort *local_10;
  int local_c;
  ushort *local_8;
  
  iVar12 = param_1;
  if (param_7 == (uint *)0x0) {
    local_14 = 0x1f;
    local_20 = 0x7c00;
    local_1c = 0x3e0;
  }
  else {
    local_20 = *param_7;
    local_1c = param_7[1];
    local_14 = param_7[2];
  }
  local_c = -1;
  local_8 = (ushort *)0xffffffff;
  param_7 = (uint *)0xffffffff;
  if (local_20 == 0xf800) {
    local_c = 0;
  }
  else if (local_20 == 0x7c00) {
    local_c = 1;
  }
  if (local_1c == 0x7e0) {
    local_8 = (ushort *)0x5;
  }
  else if (local_1c == 0x3e0) {
    local_8 = (ushort *)0x6;
  }
  if (local_14 == 0x1f) {
    param_7 = (uint *)&DAT_0000000b;
  }
  if (local_c == -1) {
    local_c = 0;
    for (uVar6 = local_20; (uVar6 & 0x8000) == 0; uVar6 = uVar6 << 1) {
      local_c = local_c + 1;
    }
  }
  if (local_8 == (ushort *)0xffffffff) {
    local_8 = (ushort *)0x0;
    for (uVar6 = local_1c; (uVar6 & 0x8000) == 0; uVar6 = uVar6 << 1) {
      local_8 = (ushort *)((int)local_8 + 1);
    }
  }
  puVar9 = local_8;
  if (param_7 == (uint *)0xffffffff) {
    param_7 = (uint *)0x0;
    for (uVar6 = local_14; (uVar6 & 0x8000) == 0; uVar6 = uVar6 << 1) {
      param_7 = (uint *)((int)param_7 + 1);
    }
  }
  bVar8 = (byte)param_7;
  if (*(int *)(param_1 + 0x74) == 1) {
    if (*(int *)(param_1 + 0x24) == 1) {
      iVar12 = 0;
      if (0 < *(int *)(param_1 + 0x7c)) {
        local_10 = local_220;
        iVar5 = *(int *)(*(int *)(param_1 + 0x80) + 8);
        do {
          iVar7 = (uint)*(byte *)(iVar5 + iVar12) << 8;
          local_18 = iVar7 >> (bVar8 & 0x1f) & local_14;
          iVar12 = iVar12 + 1;
          *local_10 = (ushort)local_18 |
                      (ushort)(iVar7 >> ((byte)local_8 & 0x1f)) & (ushort)local_1c |
                      (ushort)(iVar7 >> ((byte)local_c & 0x1f)) & (ushort)local_20;
          local_10 = local_10 + 1;
        } while (iVar12 < *(int *)(param_1 + 0x7c));
      }
    }
    else {
      iVar12 = 0;
      if (0 < *(int *)(param_1 + 0x7c)) {
        local_8 = local_220;
        puVar4 = *(uint **)(param_1 + 0x80);
        local_18 = *puVar4;
        local_10 = (ushort *)puVar4[1];
        uVar6 = puVar4[2];
        do {
          pbVar1 = (byte *)(uVar6 + iVar12);
          pbVar2 = (byte *)((int)local_10 + iVar12);
          pbVar3 = (byte *)(local_18 + iVar12);
          iVar12 = iVar12 + 1;
          *local_8 = (ushort)((int)((uint)*pbVar1 << 8) >> ((byte)local_c & 0x1f)) &
                     (ushort)local_20 |
                     (ushort)((int)((uint)*pbVar2 << 8) >> ((byte)puVar9 & 0x1f)) & (ushort)local_1c
                     | (ushort)((int)((uint)*pbVar3 << 8) >> (bVar8 & 0x1f)) & (ushort)local_14;
          local_8 = local_8 + 1;
        } while (iVar12 < *(int *)(param_1 + 0x7c));
      }
    }
    if (*(uint *)(param_1 + 0x84) < *(uint *)(param_1 + 0x6c)) {
      while (param_6 != 0) {
        FUN_007568d0(param_1,param_4,1);
        iVar12 = 0;
        puVar9 = param_2;
        if (0 < *(int *)(param_1 + 0x68)) {
          do {
            pbVar1 = (byte *)(*param_4 + iVar12);
            iVar12 = iVar12 + 1;
            *puVar9 = local_220[*pbVar1];
            puVar9 = puVar9 + 1;
          } while (iVar12 < *(int *)(param_1 + 0x68));
        }
        param_2 = (ushort *)((int)param_2 - param_3);
        param_6 = param_6 + -1;
        if (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x84)) {
          return;
        }
      }
    }
  }
  else {
    local_c = local_c + 0x10;
    puVar9 = local_8 + 4;
    local_8 = puVar9;
    if (*(uint *)(param_1 + 0x84) < *(uint *)(param_1 + 0x6c)) {
      do {
        if (param_6 == 0) {
          return;
        }
        FUN_007568d0(iVar12,param_4,1);
        piVar11 = (int *)*param_4;
        param_1 = 0;
        if (0 < *(int *)(iVar12 + 0x68)) {
          local_10 = param_2;
          do {
            uVar6 = *piVar11 << 8;
            piVar11 = (int *)((int)piVar11 + 3);
            local_18 = uVar6 >> (bVar8 & 0x1f) & local_14;
            puVar10 = local_10 + 1;
            *local_10 = (ushort)local_18 |
                        (ushort)(uVar6 >> ((byte)puVar9 & 0x1f)) & (ushort)local_1c |
                        (ushort)(uVar6 >> ((byte)local_c & 0x1f)) & (ushort)local_20;
            param_1 = param_1 + 1;
            puVar9 = local_8;
            local_10 = puVar10;
          } while (param_1 < *(int *)(iVar12 + 0x68));
        }
        param_2 = (ushort *)((int)param_2 - param_3);
        param_6 = param_6 + -1;
      } while (*(uint *)(iVar12 + 0x84) < *(uint *)(iVar12 + 0x6c));
    }
  }
  return;
}

