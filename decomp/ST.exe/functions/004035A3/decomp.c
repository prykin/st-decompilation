
undefined4 __thiscall thunk_FUN_004c34a0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x259) / 0xf;
  if (*(int *)(&DAT_007be8c8 + (param_1 / 0xf + iVar1 * 0x18) * 4) == 0) {
    return 0;
  }
  iVar1 = (((*(int *)(&DAT_007be8c8 + (param_1 / 0xf + iVar1 * 0x18) * 4) < 1) - 1 & 2) - 1) + iVar1
  ;
  if (0x17 < iVar1) {
    thunk_FUN_004b98e0(this,0);
    return 1;
  }
  if (iVar1 < 0) {
    iVar1 = 0x17;
  }
  thunk_FUN_004b98e0(this,iVar1 * 0xf);
  return 1;
}

