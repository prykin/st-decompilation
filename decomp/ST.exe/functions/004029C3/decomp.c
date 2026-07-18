
int __thiscall thunk_FUN_005ec4a0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = (undefined4 *)((int)this + 0x326);
  for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  puVar2 = (undefined4 *)((int)param_1 + 0x151);
  puVar3 = (undefined4 *)((int)this + 0x231);
  for (iVar1 = 0x3d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  iVar1 = thunk_FUN_005ec850(this,(int *)((int)param_1 + 0x246));
  return iVar1 + 0x246;
}

