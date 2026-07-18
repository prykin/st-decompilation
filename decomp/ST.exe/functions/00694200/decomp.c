
int __thiscall FUN_00694200(void *this,uint param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x199d) = 0xffffffff;
  while( true ) {
    iVar1 = *(int *)((int)this + 0x199d) + 1;
    *(int *)((int)this + 0x199d) = iVar1;
    while( true ) {
      if (7 < iVar1) {
        return 0;
      }
      iVar1 = thunk_FUN_00693e60(this,iVar1);
      if (iVar1 != 0) break;
      iVar1 = *(int *)((int)this + 0x199d) + 1;
      *(int *)((int)this + 0x199d) = iVar1;
    }
    iVar1 = thunk_FUN_00693e60(this,*(int *)((int)this + 0x199d));
    if (iVar1 == 0) break;
    if (*(byte *)(iVar1 + 0x23) == param_1) {
      return iVar1;
    }
  }
  return 0;
}

