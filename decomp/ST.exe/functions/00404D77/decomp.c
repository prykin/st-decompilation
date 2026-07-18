
undefined4 * __thiscall thunk_FUN_006025d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)((int)this + 0x36e) != 3) {
    puVar1 = (undefined4 *)FUN_006aac70(0x17e);
    if (*(int *)((int)this + 0x36e) == 2) {
      *(uint *)((int)this + 0x36e) = (uint)(*(char *)((int)this + 0x39f) < '\x01');
    }
    *(undefined4 *)((int)this + 0x23d) = 2;
    puVar3 = (undefined4 *)((int)this + 0x231);
    puVar4 = puVar1;
    for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
    *param_1 = 0x17e;
    return puVar1;
  }
  *param_1 = 0;
  return (undefined4 *)0x0;
}

