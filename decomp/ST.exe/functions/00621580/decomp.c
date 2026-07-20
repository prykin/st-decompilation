
void __thiscall FUN_00621580(void *this,uint param_1,int param_2)

{
  uint uVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_0080874d != param_1) {
    return;
  }
  if ((*(int *)((int)this + 0x10a) == 0) ||
     (uVar1 = thunk_FUN_00621640(this,param_2,&local_8), (int)uVar1 < 0)) {
    uVar1 = thunk_FUN_006216e0(this,param_2);
  }
  if ((local_8 != 0) && (-1 < (int)uVar1)) {
    if (10 < (uint)(PTR_00802a38->field_00E4 - *(int *)((int)this + 0x106))) {
      thunk_FUN_00621780(this,uVar1);
      return;
    }
    *(undefined1 *)((int)this + 0x105) = 1;
  }
  return;
}

