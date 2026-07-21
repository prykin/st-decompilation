
int __thiscall
FUN_0071f2f0(void *this,undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;

  *(undefined2 *)((int)this + 0x174) = param_1;
  *(undefined2 *)((int)this + 0x178) = param_3;
  *(undefined2 *)((int)this + 0x176) = param_2;
  *(undefined2 *)((int)this + 0x17a) = param_4;
  iVar1 = FUN_006e5fe0(this,(undefined4 *)((int)this + 0x160));
  return -(uint)(iVar1 != 0);
}

