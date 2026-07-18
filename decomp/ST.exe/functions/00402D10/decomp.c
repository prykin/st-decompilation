
int __thiscall thunk_FUN_004e3800(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_004c9370(this,2,param_1,-1);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 0x361) != 2) {
      return 0;
    }
    if (*(int *)((int)this + 0x369) != param_1) {
      return 0;
    }
    iVar1 = 1;
  }
  iVar2 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_1);
  if (iVar2 == param_2 + -1) {
    return iVar1;
  }
  return 0;
}

