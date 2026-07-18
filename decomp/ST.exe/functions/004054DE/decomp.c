
void __thiscall thunk_FUN_00584c50(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *apuStack_40 [8];
  undefined4 auStack_20 [3];
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = auStack_20;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    uStack_14 = *(undefined2 *)((int)this + 0x284);
    auStack_20[0] = DAT_007e656c;
    uStack_12 = *(undefined2 *)((int)this + 0x280);
    auStack_20[2] = *(undefined4 *)((int)this + 0x25c);
    apuStack_40[2] = (undefined4 *)param_1[2];
    ppuVar3 = apuStack_40;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar3 = (undefined4 *)0x0;
      ppuVar3 = ppuVar3 + 1;
    }
    apuStack_40[5] = auStack_20;
    auStack_20[1] = 0xa3;
    apuStack_40[3] = (undefined4 *)0x2;
    apuStack_40[4] = (undefined4 *)0x110;
    (**(code **)*param_1)(apuStack_40);
  }
  return;
}

