
int __thiscall FUN_00724330(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if ((*(int *)((int)this + 0x58) != 0) && (*(int *)((int)this + 0x5c) != 0)) {
    iVar1 = (param_1 / *(int *)((int)this + 0x5c)) * *(int *)((int)this + 0x60) + 1;
  }
  return iVar1;
}

