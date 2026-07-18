
void __thiscall FUN_004ad070(void *this,byte param_1)

{
  byte *pbVar1;
  
  if (((-1 < (char)param_1) && ((char)param_1 < ' ')) &&
     ((1 << (param_1 & 0x1f) & *(uint *)((int)this + 0x1c)) != 0)) {
    pbVar1 = (byte *)(*(int *)((int)this + 0x20) + 0xe + (char)param_1 * 0x24);
    *pbVar1 = *pbVar1 | 8;
    FUN_006e9e60(*(void **)((int)this + 0x3c),*(uint **)((int)this + 0x18),(int)(char)param_1);
  }
  return;
}

