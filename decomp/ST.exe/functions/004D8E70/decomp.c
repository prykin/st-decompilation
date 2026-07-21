
undefined4 __thiscall FUN_004d8e70(void *this,int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_8;

  local_8 = (void *)0x0;
  if (99 < *(int *)((int)this + 0x4ec)) {
    if (*(int *)((int)this + 0x4f0) == 0) {
      *(undefined4 *)((int)this + 0x4d0) = 1;
      *(undefined4 *)((int)this + 0x261) = 1;
      *(uint *)((int)this + 0x265) = *(uint *)((int)this + 0x265) | 2;
      *(int *)((int)this + 0x2a5) = param_1;
      *(int *)((int)this + 0x2a9) = param_2;
      *(undefined4 *)((int)this + 0x2ad) = param_3;
      return 0;
    }
    iVar1 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x4f0),(int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_0058c560(local_8,param_1,param_2);
      *(undefined4 *)((int)this + 0x4ec) = 0;
      *(undefined4 *)((int)this + 0x4d8) = PTR_00802a38->field_00E4;
      *(undefined4 *)((int)this + 0x261) = 0;
      return 0;
    }
    *(undefined4 *)((int)this + 0x4f0) = 0;
    *(undefined4 *)((int)this + 0x261) = 0;
  }
  return 0;
}

