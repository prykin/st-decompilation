
int __thiscall FUN_00693c10(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = thunk_FUN_00693e60(this,(uint)*(byte *)((int)param_1 + 0x22));
  if (iVar1 == 0) {
    uVar2 = thunk_FUN_006941c0(this);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((uint)*(byte *)((int)param_1 + 0x22) * 0x51 + 0x11 + (int)this);
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    *(char *)((int)this + 0x10) = *(char *)((int)this + 0x10) + '\x01';
    if (-1 < (int)uVar2) {
      *(char *)((uint)*(byte *)((int)param_1 + 0x22) * 0x51 + 0x34 + (int)this) = (char)uVar2;
    }
    return (uint)*(byte *)((int)param_1 + 0x22) * 0x51 + 0x11 + (int)this;
  }
  return 0;
}

