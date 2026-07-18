
int __thiscall thunk_FUN_004e3790(void *this,uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_004c7860(this,2,param_1,1,param_3,1);
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_1);
    if (iVar2 != param_2 + -1) {
      return 0;
    }
  }
  return iVar1;
}

