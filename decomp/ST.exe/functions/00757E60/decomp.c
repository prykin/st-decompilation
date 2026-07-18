
void FUN_00757e60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,0,0x60);
  *(undefined4 **)((int)param_1 + 0x1a6) = puVar1;
  *puVar1 = FUN_00759190;
  *(code **)(*(int *)((int)param_1 + 0x1a6) + 4) = FUN_00758170;
  *(code **)(*(int *)((int)param_1 + 0x1a6) + 8) = FUN_00759120;
  *(code **)(*(int *)((int)param_1 + 0x1a6) + 0xc) = FUN_00758100;
  iVar2 = 0x10;
  do {
    iVar3 = iVar2 + 4;
    *(code **)(iVar2 + *(int *)((int)param_1 + 0x1a6)) = FUN_00758100;
    iVar2 = iVar3;
  } while (iVar3 < 0x50);
  *(code **)(*(int *)((int)param_1 + 0x1a6) + 0x10) = FUN_00757ef0;
  *(code **)(*(int *)((int)param_1 + 0x1a6) + 0x48) = FUN_00758010;
  FUN_00759190((int)param_1);
  return;
}

