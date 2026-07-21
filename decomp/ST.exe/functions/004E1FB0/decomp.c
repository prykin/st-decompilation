
int __thiscall FUN_004e1fb0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = 0;
  if (*(int *)((int)this + 0x245) == 0) {
    iVar1 = thunk_FUN_004e1f70(this,param_1);
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + param_1 * 0x28 + 0x4d0) = param_2;
    }
  }
  return iVar1;
}

