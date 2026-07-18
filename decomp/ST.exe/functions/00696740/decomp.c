
void __thiscall FUN_00696740(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x5853) != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x5853) + 0xc);
    uVar2 = 0;
    if (0 < iVar1) {
      do {
        thunk_FUN_006964f0(this,uVar2,param_1);
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < iVar1);
    }
  }
  return;
}

