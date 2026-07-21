
bool __thiscall FUN_0074b44a(void *this,int param_1)

{
  int iVar1;

  iVar1 = FUN_0074a2ab(this,param_1);
  if (iVar1 == 0) {
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
  }
  return iVar1 != 0;
}

