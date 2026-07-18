
void __thiscall FUN_0062af40(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_006aac70(0xd7);
  *param_1 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *(undefined4 *)this;
      this = (undefined4 *)((int)this + 4);
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = *(undefined2 *)this;
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)this + 2);
    puVar1[3] = 2;
    *param_1 = 0xd7;
  }
  return;
}

