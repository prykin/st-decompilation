
undefined4 __thiscall FUN_004e2200(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)this + param_1 * 0x28 + 0x4d0) == param_2) &&
     (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4e0) = param_3;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4dc) = param_3;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4e8) = PTR_00802a38->field_00E4;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4ec) = 0;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4f0) = 0;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4f4) = 0;
    thunk_FUN_004e2040(this);
    uVar1 = 1;
  }
  return uVar1;
}

