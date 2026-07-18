
undefined4 __thiscall FUN_004ac910(void *this,char param_1)

{
  if (((*(int *)((int)this + 0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= *(int *)((int)this + 0x14) + -1)) {
    return *(undefined4 *)(*(int *)((int)this + 0x20) + 0x18 + param_1 * 0x24);
  }
  return 0xffffffff;
}

