
void __thiscall thunk_FUN_0060bd30(void *this,undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined4 *apuStack_40 [8];
  undefined4 auStack_20 [3];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined4 uStack_c;
  
  ppuVar2 = apuStack_40;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar2 = (undefined4 *)0x0;
    ppuVar2 = ppuVar2 + 1;
  }
  puVar3 = auStack_20;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  apuStack_40[3] = (undefined4 *)0x4;
  uStack_c = 0;
  apuStack_40[4] = (undefined4 *)0x110;
  apuStack_40[2] = (undefined4 *)param_1[6];
  auStack_20[2] = *(undefined4 *)((int)this + 0x1d9);
  uStack_14 = *(undefined2 *)((int)this + 0x205);
  uStack_12 = *(undefined2 *)((int)this + 0x201);
  auStack_20[1] = *(undefined4 *)((int)this + 0x1f5);
  auStack_20[0] = param_2;
  apuStack_40[5] = auStack_20;
  (**(code **)*param_1)(apuStack_40);
  return;
}

