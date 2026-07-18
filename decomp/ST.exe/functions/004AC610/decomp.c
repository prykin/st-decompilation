
undefined4 __thiscall FUN_004ac610(void *this,char param_1)

{
  byte *pbVar1;
  
  if (((*(int *)((int)this + 0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= *(int *)((int)this + 0x14) + -1)) {
    pbVar1 = (byte *)(*(int *)((int)this + 0x20) + 0xe + param_1 * 0x24);
    *pbVar1 = *pbVar1 | 1;
    return 0;
  }
  return 0xffffffff;
}

