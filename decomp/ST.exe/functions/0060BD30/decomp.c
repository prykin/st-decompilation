
void __thiscall FUN_0060bd30(void *this,undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined4 *local_40 [8];
  undefined4 local_20 [3];
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_c;
  
  ppuVar2 = local_40;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar2 = (undefined4 *)0x0;
    ppuVar2 = ppuVar2 + 1;
  }
  puVar3 = local_20;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_40[3] = (undefined4 *)0x4;
  local_c = 0;
  local_40[4] = (undefined4 *)0x110;
  local_40[2] = (undefined4 *)param_1[6];
  local_20[2] = *(undefined4 *)((int)this + 0x1d9);
  local_14 = *(undefined2 *)((int)this + 0x205);
  local_12 = *(undefined2 *)((int)this + 0x201);
  local_20[1] = *(undefined4 *)((int)this + 0x1f5);
  local_20[0] = param_2;
  local_40[5] = local_20;
  (**(code **)*param_1)(local_40);
  return;
}

