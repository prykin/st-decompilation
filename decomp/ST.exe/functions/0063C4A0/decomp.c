
bool __thiscall FUN_0063c4a0(void *this,int param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x27a) = *(undefined4 *)((int)this + 0x26e);
  iVar1 = (int)*(short *)((int)this + 0x251) -
          (param_1 - *(int *)((int)this + 0x28e)) * *(int *)((int)this + 0x292);
  *(int *)((int)this + 0x26e) = iVar1;
  return iVar1 < 0x3e9;
}

