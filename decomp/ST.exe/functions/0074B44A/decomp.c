
bool __thiscall FUN_0074b44a(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_0074a2ab(this,param_1);
  bVar1 = CONCAT31(extraout_var,bVar1) != 0;
  if (!bVar1) {
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
  }
  return bVar1;
}

