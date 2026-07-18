
void FUN_006da4f0(ushort *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 uint *param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ushort *puVar6;
  uint local_14;
  uint local_10;
  int local_8;
  
  if (param_7 == (uint *)0x0) {
    local_10 = 0xf800;
    local_14 = 0x7e0;
    uVar1 = 0x1f;
  }
  else {
    local_10 = *param_7;
    local_14 = param_7[1];
    uVar1 = param_7[2];
  }
  iVar3 = -1;
  param_7 = (uint *)0xffffffff;
  local_8 = -1;
  bVar2 = 0xff;
  if (local_10 == 0xf800) {
    param_7 = (uint *)0x0;
  }
  else if (local_10 == 0x7c00) {
    param_7 = (uint *)0x1;
  }
  if (local_14 == 0x7e0) {
    local_8 = 5;
  }
  else if (local_14 == 0x3e0) {
    local_8 = 6;
  }
  if (uVar1 == 0x1f) {
    iVar3 = 0xb;
    bVar2 = 0xb;
  }
  if (param_7 == (uint *)0xffffffff) {
    param_7._0_1_ = 0;
    for (uVar4 = local_10; (uVar4 & 0x8000) == 0; uVar4 = uVar4 << 1) {
      param_7._0_1_ = (byte)param_7 + 1;
    }
  }
  if (local_8 == -1) {
    local_8._0_1_ = 0;
    for (uVar4 = local_14; (uVar4 & 0x8000) == 0; uVar4 = uVar4 << 1) {
      local_8._0_1_ = (byte)local_8 + 1;
    }
  }
  if (iVar3 == -1) {
    bVar2 = 0;
    for (uVar4 = uVar1; (uVar4 & 0x8000) == 0; uVar4 = uVar4 << 1) {
      bVar2 = bVar2 + 1;
    }
  }
  if (0 < param_6) {
    do {
      iVar3 = param_5;
      pbVar5 = param_3;
      puVar6 = param_1;
      if (0 < param_5) {
        do {
          param_1 = puVar6 + 1;
          param_3 = pbVar5 + 3;
          iVar3 = iVar3 + -1;
          *puVar6 = (ushort)((int)((uint)pbVar5[2] << 8) >> ((byte)param_7 & 0x1f)) &
                    (ushort)local_10 |
                    (ushort)((int)((uint)pbVar5[1] << 8) >> ((byte)local_8 & 0x1f)) &
                    (ushort)local_14 |
                    (ushort)((int)((uint)*pbVar5 << 8) >> (bVar2 & 0x1f)) & (ushort)uVar1;
          pbVar5 = param_3;
          puVar6 = param_1;
        } while (iVar3 != 0);
      }
      param_1 = (ushort *)((int)param_1 + param_2 + param_5 * -2);
      param_3 = param_3 + param_4 + param_5 * -3;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}

