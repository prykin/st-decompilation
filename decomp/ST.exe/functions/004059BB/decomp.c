
bool __thiscall thunk_FUN_005f6f20(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x269) - param_1;
  *(int *)((int)this + 0x269) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)((int)this + 0x269) = 0;
  }
  return iVar1 < 1;
}

