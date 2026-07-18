
void __thiscall thunk_FUN_005503c0(void *this,int param_1)

{
  if (DAT_00808788 == 0) {
    *(int *)((int)this + 0xf4) = param_1;
    DAT_00808788 = 1;
    if (DAT_008016dc != (void *)0x0) {
      thunk_FUN_00533880(DAT_008016dc,'\a');
      return;
    }
    *(undefined4 *)((int)this + 0xd0) = 0x44ff;
    (**(code **)(*(int *)this + 0x20))((int)this + 0xc0);
  }
  return;
}

