
/* WARNING: Removing unreachable block (ram,0x00751954) */

int FUN_007516f0(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint local_4c;
  byte local_48;
  byte local_44;
  byte *local_3c;
  byte *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_007a1e68;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  FUN_0072da40();
  puVar7 = (undefined4 *)&stack0xffffffa8;
  for (iVar4 = 0x4000; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if ((undefined4 *)&stack0xffffffa8 == (undefined4 *)0x0) {
    iVar4 = -2;
  }
  else {
    local_24 = param_2;
    local_44 = *(byte *)(param_1 + 1);
    local_48 = 0;
    uVar3 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)(param_1 + 2);
    local_3c = (byte *)(param_1 + 2);
    while( true ) {
      if ((local_44 & (byte)(1 << (local_48 & 0x1f))) == 0) {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        *(byte *)((uVar6 << 8 | uVar3) + (int)&stack0xffffffa8) = bVar1;
        local_3c = pbVar8;
      }
      else {
        bVar1 = *(byte *)((uVar6 << 8 | uVar3) + (int)&stack0xffffffa8);
      }
      uVar5 = (uint)bVar1;
      local_48 = local_48 + 1;
      if (7 < local_48) {
        local_44 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_48 = 0;
        local_3c = pbVar8;
      }
      if (uVar5 == 0) break;
      if ((bVar1 & 0x40) == 0) {
        local_4c = uVar5 & 0x3f;
        uVar6 = uVar5;
        uVar5 = uVar3;
      }
      else {
        if ((local_44 & (byte)(1 << (local_48 & 0x1f))) == 0) {
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          *(byte *)((uVar3 << 8 | uVar5) + (int)&stack0xffffffa8) = bVar2;
          local_3c = pbVar8;
        }
        else {
          bVar2 = *(byte *)((uVar3 << 8 | uVar5) + (int)&stack0xffffffa8);
        }
        local_48 = local_48 + 1;
        if (7 < local_48) {
          local_44 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          local_48 = 0;
          local_3c = pbVar8;
        }
        local_4c = (uint)bVar2 | (uVar5 & 0x3f) << 8;
        uVar6 = (uint)bVar2;
      }
      if ((bVar1 & 0x80) == 0) {
        if ((local_44 & (byte)(1 << (local_48 & 0x1f))) == 0) {
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          *(byte *)((uVar5 << 8 | uVar6) + (int)&stack0xffffffa8) = bVar1;
          local_3c = pbVar8;
        }
        else {
          bVar1 = *(byte *)((uVar5 << 8 | uVar6) + (int)&stack0xffffffa8);
        }
        uVar3 = (uint)bVar1;
        local_48 = local_48 + 1;
        if (7 < local_48) {
          local_44 = *pbVar8;
          local_3c = pbVar8 + 1;
          local_48 = 0;
        }
        pbVar8 = local_24;
        for (uVar5 = local_4c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pbVar8 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
          pbVar8 = pbVar8 + 4;
        }
        for (uVar5 = local_4c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar8 = bVar1;
          pbVar8 = pbVar8 + 1;
        }
        local_24 = local_24 + local_4c;
        pbVar8 = local_3c;
      }
      else {
        uVar3 = uVar6;
        uVar6 = uVar5;
        if (-1 < (int)(local_4c - 1)) {
          do {
            uVar6 = uVar3;
            if ((local_44 & (byte)(1 << (local_48 & 0x1f))) == 0) {
              bVar1 = *pbVar8;
              pbVar8 = pbVar8 + 1;
              *(byte *)((uVar5 << 8 | uVar6) + (int)&stack0xffffffa8) = bVar1;
            }
            else {
              bVar1 = *(byte *)((uVar5 << 8 | uVar6) + (int)&stack0xffffffa8);
            }
            uVar3 = (uint)bVar1;
            local_48 = local_48 + 1;
            if (7 < local_48) {
              local_44 = *pbVar8;
              pbVar8 = pbVar8 + 1;
              local_48 = 0;
            }
            *local_24 = bVar1;
            local_24 = local_24 + 1;
            local_4c = local_4c - 1;
            uVar5 = uVar6;
            local_3c = pbVar8;
          } while (local_4c != 0);
        }
      }
    }
    iVar4 = (int)local_24 - (int)param_2;
  }
  ExceptionList = local_14;
  return iVar4;
}

