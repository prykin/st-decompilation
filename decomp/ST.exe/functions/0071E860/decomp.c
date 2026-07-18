
int __thiscall
FUN_0071e860(void *this,undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  *(undefined2 *)((int)this + 0x148) = param_1;
  *(undefined2 *)((int)this + 0x14c) = param_3;
  *(undefined2 *)((int)this + 0x14a) = param_2;
  *(undefined2 *)((int)this + 0x14e) = param_4;
  iVar1 = FUN_006e5fe0(this,(undefined4 *)((int)this + 0x134));
  return -(uint)(iVar1 != 0);
}

