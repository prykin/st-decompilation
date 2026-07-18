
undefined4 __thiscall
FUN_004c6c70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x3dc) == 0) {
    thunk_FUN_004c6bb0(this,param_1,param_2,param_3);
  }
  else {
    iVar1 = thunk_FUN_004ea620((int)this);
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 0x400) = 0;
      *(undefined4 *)((int)this + 0x3fc) = 1;
      *(undefined4 *)((int)this + 0x3ec) = 1;
      *(undefined4 *)((int)this + 0x3f4) = param_2;
      *(undefined4 *)((int)this + 0x3f0) = param_1;
      *(undefined4 *)((int)this + 0x3f8) = param_3;
      return 0;
    }
  }
  return 0;
}

