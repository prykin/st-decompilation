
int __thiscall FUN_00724fa0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x24);
  iVar2 = 0;
  if ((((iVar1 <= param_1) && (param_1 < *(int *)((int)this + 0x2c) + iVar1)) &&
      (*(int *)((int)this + 0x28) <= param_2)) &&
     (param_2 < *(int *)((int)this + 0x30) + *(int *)((int)this + 0x28))) {
    iVar2 = 1;
  }
  if (((*(byte *)((int)this + 0x188) & 1) != 0) && (iVar2 != 0)) {
    iVar2 = 0;
    if (((*(int *)((int)this + 0x2c) - param_1) + *(int *)((int)this + 0x28) + iVar1 < param_2) ||
       (param_2 < (*(int *)((int)this + 0x30) - param_1) + *(int *)((int)this + 0x28) + iVar1)) {
      iVar2 = 1;
    }
  }
  return iVar2;
}

