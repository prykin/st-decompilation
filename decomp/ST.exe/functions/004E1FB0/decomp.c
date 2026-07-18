
int __thiscall FUN_004e1fb0(void *this,int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x245) == 0) {
    bVar1 = thunk_FUN_004e1f70(this,param_1);
    iVar2 = CONCAT31(extraout_var,bVar1);
    if (iVar2 != 0) {
      *(undefined4 *)((int)this + param_1 * 0x28 + 0x4d0) = param_2;
    }
  }
  return iVar2;
}

