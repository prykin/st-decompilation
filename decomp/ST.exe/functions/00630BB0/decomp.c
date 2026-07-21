
void __thiscall
FUN_00630bb0(void *this,short param_1,short param_2,short param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)((int)this + 0x40);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)((int)this + 0x40) = param_4;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x61) = 0xffffffff;
  *(int *)((int)this + 0x54) = (int)(short)(param_1 * 0xc9 + 100);
  *(int *)((int)this + 0x58) = (int)(short)(param_2 * 0xc9 + 100);
  *(int *)((int)this + 0x5c) = (int)(short)(param_3 * 200 + 100);
  *(undefined4 *)((int)this + 0x4c) = param_5;
  *(undefined4 *)((int)this + 0x50) = param_6;
  return;
}

