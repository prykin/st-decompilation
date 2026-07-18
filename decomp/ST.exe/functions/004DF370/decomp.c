
undefined4 __thiscall FUN_004df370(void *this,int param_1)

{
  *(int *)((int)this + 0x4d8) = param_1;
  if ((param_1 < 1) && (*(int *)((int)this + 0x4d0) == 1)) {
    *(undefined4 *)((int)this + 0x4d8) = 0;
  }
  return 0;
}

