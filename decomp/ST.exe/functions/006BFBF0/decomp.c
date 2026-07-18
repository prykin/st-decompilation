
void FUN_006bfbf0(uint *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_34 [4];
  uint *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar2 = param_1;
  puVar7 = local_34;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_24 = (uint *)((int)param_1 + 0x8a);
  param_1[6] = 0x7fffffff;
  puVar7 = param_1 + 0x13;
  puVar8 = local_24;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(short *)puVar8 = (short)*puVar7;
  local_34[0] = 0x24;
  if (*(short *)local_24 == 2) {
    *(short *)local_24 = 1;
    *(undefined2 *)(param_1 + 0x26) = 0x10;
    uVar3 = (int)((uint)(ushort)param_1[0x23] * 0x10) >> 3;
    *(short *)((int)param_1 + 0x96) = (short)uVar3;
    *(uint *)((int)param_1 + 0x92) = *(int *)((int)param_1 + 0x8e) * (uVar3 & 0xffff);
    *(undefined2 *)((int)param_1 + 0x9a) = 0;
    param_1[0x30] = *(uint *)((int)param_1 + 0x66);
  }
  else {
    param_1[0x30] = *(uint *)((int)param_1 + 0x5e) / (uint)*(ushort *)((int)param_1 + 0x96);
  }
  uVar3 = (uint)*(ushort *)((int)param_1 + 0x96) * param_1[0x30];
  local_34[2] = *(int *)((int)param_1 + 0x92) * 2;
  if (local_34[2] < uVar3 || local_34[2] - uVar3 == 0) {
    uVar6 = 0x100e0;
  }
  else {
    uVar6 = 0xe2;
    local_34[2] = uVar3;
  }
  param_1[5] = local_34[2];
  if (((param_1[1] & 0x1000) == 0) || (DAT_007ede10 < 1)) {
    local_34[1] = uVar6 | 8;
    param_1[1] = param_1[1] & 0xffffefff;
  }
  else {
    local_34[1] = uVar6 | 0x20010;
    local_20 = DAT_0079ea38;
    local_1c = DAT_0079ea3c;
    local_18 = DAT_0079ea40;
    local_14 = DAT_0079ea44;
    if (DAT_007ede10 == 1) {
      local_34[1] = uVar6 | 0x20018;
    }
  }
  puVar7 = param_1 + 3;
  iVar5 = (**(code **)(*DAT_008568b4 + 0xc))(DAT_008568b4,local_34,puVar7,0);
  if (-1 < iVar5) {
    if ((local_34[1] & 2) != 0) {
      puVar2[1] = puVar2[1] | 0x4000;
    }
    iVar5 = (**(code **)(*(int *)*puVar7 + 0x2c))
                      ((int *)*puVar7,0,local_34[2],&local_8,&param_1,&local_10,&local_c,0);
    if (iVar5 == 0) {
      FUN_006bfe70(local_8,(int)puVar2,(uint)param_1);
      iVar5 = (**(code **)(*(int *)*puVar7 + 0x4c))((int *)*puVar7,local_8,param_1,local_10,local_c)
      ;
      if ((iVar5 == 0) &&
         (iVar5 = (**(code **)(*(int *)*puVar7 + 0x3c))((int *)*puVar7,puVar2[0xc]), iVar5 == 0)) {
        piVar1 = (int *)*puVar7;
        if ((puVar2[1] & 0x1000) == 0) {
          iVar5 = (**(code **)(*piVar1 + 0x40))(piVar1,puVar2[0xd]);
        }
        else {
          puVar8 = puVar2 + 4;
          iVar5 = (**(code **)*piVar1)(piVar1,&DAT_0079eaa8,puVar8);
          if (iVar5 != 0) {
            return;
          }
          iVar5 = (**(code **)(*(int *)*puVar8 + 0x4c))
                            ((int *)*puVar8,puVar2[0xe],puVar2[0xf],puVar2[0x10],1);
          if (iVar5 != 0) {
            return;
          }
          iVar5 = (**(code **)(*(int *)*puVar8 + 0x44))((int *)*puVar8,puVar2[0x11],1);
          if (iVar5 != 0) {
            return;
          }
          iVar5 = (**(code **)(*(int *)*puVar8 + 0x40))((int *)*puVar8,puVar2[0x12],1);
          if (iVar5 != 0) {
            return;
          }
          iVar5 = (**(code **)(*DAT_008568bc + 0x44))(DAT_008568bc);
        }
        if (iVar5 == 0) {
          DVar4 = timeGetTime();
          puVar2[2] = DVar4;
          uVar3 = ~puVar2[1] >> 0xe & 1;
          if ((puVar2[1] & 1) != 0) {
            uVar3 = 1;
          }
          iVar5 = (**(code **)(*(int *)*puVar7 + 0x30))((int *)*puVar7,0,0,uVar3);
          if (iVar5 == 0) {
            *puVar2 = *puVar2 | 1;
          }
        }
      }
    }
  }
  return;
}

