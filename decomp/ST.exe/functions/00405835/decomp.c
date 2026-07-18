
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall thunk_FUN_0041ce40(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0x105) = param_1;
  if (DAT_00802a88 != (void *)0x0) {
    thunk_FUN_005594a0(DAT_00802a88,(int)*(short *)((int)this + 0x5b),
                       (int)*(short *)((int)this + 0x5d),(char)*(undefined2 *)((int)this + 0x5f),
                       *(undefined **)((int)this + 0x24),param_1,*(undefined4 *)((int)this + 0x18),
                       0xffffffff);
  }
  iVar1 = (**(code **)(*(int *)this + 8))();
  if ((iVar1 == 1) && (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)) {
    FUN_006e6710(DAT_00807598,
                 (float)(int)*(short *)((int)this + 0x41) * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)((int)this + 0x105) * _DAT_007904f8 + _DAT_007904f4,0x16,
                 (*(uint *)((int)this + 0x18) >> 0x10 & 0xff) << 0x10 |
                 (uint)*(ushort *)((int)this + 0x18));
  }
  return;
}

