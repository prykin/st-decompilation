
int __thiscall thunk_FUN_00630110(void *this,char param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)((int)this + 0x1fa) != 2) {
    iVar1 = thunk_FUN_006300e0((int)this);
    thunk_FUN_004d8a30(param_1,iVar1);
    *(undefined4 *)((int)this + 0x1fa) = 2;
  }
  return iVar1;
}

