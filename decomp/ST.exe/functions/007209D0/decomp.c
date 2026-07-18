
int __thiscall FUN_007209d0(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (((*(uint *)((int)this + 0x1c) & 0xf0000000) == 0) && (*(int *)((int)this + 0x138) != 0)) {
    *(undefined4 *)((int)this + 0x160) = param_1;
    if ((*(uint *)((int)this + 0x1c) == 1) && ((*(byte *)((int)this + 0x20) & 4) == 0)) {
      *(undefined2 *)((int)this + 0x164) = *(undefined2 *)((int)this + 0x204);
      *(undefined2 *)((int)this + 0x166) = *(undefined2 *)((int)this + 0x208);
    }
    else {
      *(undefined2 *)((int)this + 0x166) = 0xffff;
      *(undefined2 *)((int)this + 0x164) = 0xffff;
    }
    iVar1 = FUN_006e5fe0(this,(undefined4 *)((int)this + 0x14c));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

