
undefined4 __thiscall FUN_0071f2b0(void *this,undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  
  *(undefined2 *)((int)this + 0x156) = param_2;
  *(undefined2 *)((int)this + 0x154) = param_1;
  iVar1 = FUN_006e5fe0(this,(undefined4 *)((int)this + 0x140));
  if (iVar1 == 0) {
    return *(undefined4 *)((int)this + 0x158);
  }
  return 0;
}

