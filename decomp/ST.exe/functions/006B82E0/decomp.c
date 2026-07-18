
int FUN_006b82e0(int param_1,int param_2,int param_3,byte *param_4,int param_5,int param_6,
                uint param_7,byte *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  byte *local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d918;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffac;
  local_20 = 0;
  if ((*(uint *)(param_1 + 0xc) & 0x1100) == 0x100) {
    return 0;
  }
  iVar4 = param_2 + *(int *)(param_1 + 0x10);
  iVar1 = param_3 + *(int *)(param_1 + 0x14);
  local_40 = (int)*(short *)(param_4 + 0xe);
  local_3c = (int)*(short *)(param_4 + 0x10);
  local_38 = *(short *)(param_4 + 0x12) + local_40;
  local_34 = *(short *)(param_4 + 0x14) + local_3c;
  local_30 = param_5;
  local_2c = param_6;
  local_28 = param_7;
  local_24 = param_8;
  ExceptionList = &local_14;
  iVar2 = FUN_006cfeb0(&local_30,&local_30,&local_40);
  if (iVar2 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  local_30 = local_30 + (iVar4 - param_5);
  local_2c = local_2c + (iVar1 - param_6);
  iVar2 = FUN_006cfeb0(&local_30,&local_30,(int *)(param_1 + 0x484));
  if (iVar2 != 0) {
    local_20 = FUN_006bb8b0(param_1);
    if (local_20 != 0) goto LAB_006b847e;
    iVar2 = ((local_30 - local_40) - iVar4) + param_5;
    uVar3 = ((local_2c - local_3c) - iVar1) + param_6;
    iVar1 = *(int *)(param_1 + 0x478);
    local_8 = local_20;
    if (*(int *)(param_1 + 0x20) == 0x10) {
      FUN_006d3300((undefined2 *)(iVar1 * local_2c + *(int *)(param_1 + 0x474) + local_30 * 2),iVar1
                   ,param_4,iVar2,uVar3,local_28,local_24,*(int *)(param_1 + 0x4c0),(byte *)0x0,0,0,
                   0);
    }
    else {
      FUN_006d2820((byte *)(iVar1 * local_2c + *(int *)(param_1 + 0x474) + local_30),iVar1,param_4,
                   iVar2,uVar3,local_28,(uint)local_24,0,(byte *)0x0,0,0,(byte *)0x0);
    }
    local_8 = 0xffffffff;
    FUN_006bb980(param_1);
  }
  if (local_20 == 0) {
    ExceptionList = local_14;
    return 0;
  }
LAB_006b847e:
  if ((local_20 != -0x7789ff60) && (local_20 != -0x7789fe52)) {
    FUN_006a5e40(local_20,DAT_007ed77c,0x7edc00,0x40);
    ExceptionList = local_14;
    return local_20;
  }
  ExceptionList = local_14;
  return 0;
}

