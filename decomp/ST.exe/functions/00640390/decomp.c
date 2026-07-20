
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00640390(void *this,int param_1)

{
  int iVar1;
  
  if ((-1 < (int)*(uint *)((int)this + 0x33a)) &&
     (((*(byte *)&PTR_00802a38->field_00E4 & 1) == 0 || (param_1 != 0)))) {
    FUN_006ea270(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x33a),0,
                 *(uint *)((int)this + 0x33e));
    FUN_006ea960(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x33a),
                 (float)(int)*(short *)((int)this + 0x253) * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)*(short *)((int)this + 0x255) * _DAT_007904f8 * _DAT_007904f0,
                 *(float *)((int)this + 0x332) + _DAT_007904fc);
    iVar1 = *(int *)((int)this + 0x33e) + 1;
    *(int *)((int)this + 0x33e) = iVar1;
    if (*(int *)((int)this + 0x342) <= iVar1) {
      FUN_006e8ba0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x33a));
      *(undefined4 *)((int)this + 0x33a) = 0xffffffff;
    }
  }
  return;
}

