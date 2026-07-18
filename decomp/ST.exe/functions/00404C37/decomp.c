
undefined4 __thiscall thunk_FUN_00604a00(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  
  uVar2 = 0;
  if (((-1 < param_1) && (param_1 <= *(int *)((int)this + 0x269))) &&
     (puVar1 = *(undefined4 **)((int)this + param_1 * 4 + 0x219), puVar1 != (undefined4 *)0x0)) {
    puVar4 = auStack_24;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uStack_14 = 3;
    thunk_FUN_00627eb0((int)auStack_24);
    FUN_0072e2b0(puVar1);
    uVar2 = 1;
    *(undefined4 *)((int)this + param_1 * 4 + 0x219) = 0;
  }
  return uVar2;
}

