
void __thiscall FUN_00580d30(void *this,int param_1)

{
  undefined2 extraout_var;
  undefined2 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0x25d) = 2;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x259) != 0) {
    thunk_FUN_005802a0(this,0,0);
    uVar1 = extraout_var;
  }
  thunk_FUN_0044a440(CONCAT22(uVar1,*(undefined2 *)((int)this + 0x32)),(uint)this);
  thunk_FUN_004d8530((int)this);
  *(undefined2 *)((int)this + 0x32) = 0xffff;
  if (param_1 == 0) {
    thunk_FUN_00580380(this);
  }
  return;
}

