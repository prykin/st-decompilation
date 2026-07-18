
undefined4 __thiscall FUN_004ddba0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    iVar2 = 0x17;
  }
  else if (uVar1 == 2) {
    iVar2 = 0x88;
  }
  else if (uVar1 == 3) {
    iVar2 = 0x78;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),iVar2);
  return *(undefined4 *)(&DAT_007e601c + (iVar2 + param_1 * 5 + -0x2ee) * 4);
}

