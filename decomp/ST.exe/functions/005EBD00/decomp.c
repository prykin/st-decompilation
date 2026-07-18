
bool __thiscall FUN_005ebd00(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x23e) - param_1;
  *(int *)((int)this + 0x23e) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)((int)this + 0x23e) = 0;
  }
  return *(int *)((int)this + 0x23e) == 0;
}

