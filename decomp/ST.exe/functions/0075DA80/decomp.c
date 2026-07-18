
void FUN_0075da80(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar1 = *(int *)((int)param_1 + 0x1b6);
  uVar2 = (**(code **)*param_1)(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  uVar2 = (**(code **)*param_1)(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  uVar2 = (**(code **)*param_1)(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = (**(code **)*param_1)(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  iVar3 = 0;
  local_8 = 0x5b6900;
  param_1 = (undefined4 *)0xff1daf00;
  iVar5 = -0xb2f480;
  iVar4 = 0x2c8d00;
  do {
    *(int *)(*(int *)(iVar1 + 8) + iVar3) = iVar5 >> 0x10;
    iVar5 = iVar5 + 0x166e9;
    *(int *)(*(int *)(iVar1 + 0xc) + iVar3) = (int)param_1 >> 0x10;
    *(int *)(*(int *)(iVar1 + 0x10) + iVar3) = local_8;
    local_8 = local_8 + -0xb6d2;
    *(int *)(*(int *)(iVar1 + 0x14) + iVar3) = iVar4;
    iVar4 = iVar4 + -0x581a;
    param_1 = (undefined4 *)((int)param_1 + 0x1c5a2);
    iVar3 = iVar3 + 4;
  } while (-0x2b34e7 < iVar4);
  return;
}

