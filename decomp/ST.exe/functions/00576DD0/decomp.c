
undefined4 * __thiscall FUN_00576dd0(void *this,undefined4 param_1)

{
  SystemClassTy::SystemClassTy(this,param_1,1);
  *(GameSystemCVTable **)this = &GameSystemCVTable;
  *(undefined1 *)((int)this + 0x430) = 1;
  *(undefined4 *)((int)this + 0x431) = 0;
  return this;
}

