
undefined4 __thiscall thunk_FUN_004e95c0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x4d8) == *(int *)(param_1 + 0x18)) {
    *(undefined4 *)((int)this + 0x4d8) = 0xffff;
    if (*(int *)((int)this + 0x4e0) != 0) {
      thunk_FUN_004d0a80(DAT_00800bcc,*(int *)((int)this + 0x4e4),*(int *)((int)this + 0x4e8),
                         *(int *)((int)this + 0x4ec));
      *(undefined4 *)((int)this + 0x4e0) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

