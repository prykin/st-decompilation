
undefined4 __thiscall
thunk_FUN_004c6bb0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x3e0) = param_1;
  *(undefined4 *)((int)this + 1000) = param_3;
  *(undefined4 *)((int)this + 0x3e4) = param_2;
  *(undefined4 *)((int)this + 0x3dc) = 1;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  iVar1 = thunk_FUN_00418030(this,*(short *)((int)this + 0x3e0),(short)param_2,(short)param_3);
  if (iVar1 == -1) {
    FUN_006a5e40(-5,DAT_007ed77c,0x7ad368,0x1c);
  }
  else if (iVar1 == 2) {
    *(undefined4 *)((int)this + 0x3dc) = 0;
    return 0;
  }
  return 0;
}

