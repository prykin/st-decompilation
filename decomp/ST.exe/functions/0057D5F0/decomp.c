
undefined4 __thiscall FUN_0057d5f0(void *this,uint param_1)

{
  int iVar1;
  undefined2 local_10 [2];
  undefined2 local_c [2];
  int local_8;
  
  local_8 = 0;
  if ((((*(short *)((int)this + 0x47) == *(short *)((int)this + 0x235)) &&
       (*(short *)((int)this + 0x49) == *(short *)((int)this + 0x237))) &&
      (*(short *)((int)this + 0x4b) == *(short *)((int)this + 0x239))) || (param_1 != 0)) {
    iVar1 = thunk_FUN_0057d700(this,&param_1,(uint *)local_c,(int *)local_10,&local_8);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      iVar1 = thunk_FUN_00417740(this,*(short *)((int)this + 0x6c),(short)local_8);
      if (iVar1 != 0) {
        return 0;
      }
      return 2;
    }
    *(undefined2 *)((int)this + 0x235) = (undefined2)param_1;
    *(undefined2 *)((int)this + 0x237) = local_c[0];
    *(undefined2 *)((int)this + 0x239) = local_10[0];
  }
  iVar1 = thunk_FUN_0057d420(this);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}

