
void __thiscall FUN_004ebcb0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_004e1490((int)this);
  if ((iVar1 != 0) && (*(int *)((int)this + 0x5b8) < DAT_007fb244 + -1)) {
    *(int *)((int)this + 0x508) = param_1;
    *(undefined4 *)((int)this + 0x4d0) = 3;
    *(int *)((int)this + 0x50c) = param_2;
    *(undefined4 *)((int)this + 0x4dc) = 0;
    *(undefined4 *)((int)this + 0x4e0) = 0;
    *(undefined4 *)((int)this + 0x4ec) = 0;
    thunk_FUN_004cabb0(0);
    if (*(int *)((int)this + 0x5ac) == 0x52) {
      iVar1 = *(int *)this;
      iVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
      (**(code **)(iVar1 + 0x90))(3,(-(uint)((char)iVar2 != '\x02') & 0xffffff3b) + 0x35e);
      return;
    }
    if (*(int *)((int)this + 0x5ac) == 0x5f) {
      (**(code **)(*(int *)this + 0x90))(3,0x3b1);
    }
  }
  return;
}

