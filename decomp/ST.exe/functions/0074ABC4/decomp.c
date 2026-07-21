
undefined4 * __thiscall FUN_0074abc4(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  FUN_00749a93(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(VTable_007A15E8 **)this = &VTable_007A15E8;
  *(VTable_007A15A8 **)((int)this + 0xc) = &VTable_007A15A8;
  *(VTable_007A1590 **)((int)this + 0x10) = &VTable_007A1590;
  *(VTable_007A1568 **)((int)this + 200) = &VTable_007A1568;
  *(VTable_007A1550 **)((int)this + 0xcc) = &VTable_007A1550;
  FUN_0074ac6e(this);
  return this;
}

