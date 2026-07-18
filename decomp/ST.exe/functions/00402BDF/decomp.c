
void __thiscall thunk_FUN_004ad150(void *this,char param_1)

{
  byte *pbVar1;
  
  if (-1 < *(int *)((int)this + 0xc)) {
    pbVar1 = (byte *)(*(int *)((int)this + 0x20) + 0xf + param_1 * 0x24);
    *pbVar1 = *pbVar1 | 1;
    FUN_006e93c0(*(void **)((int)this + 0x3c),*(uint *)((int)this + 0x18),(int)param_1,
                 *(uint *)((int)this + 0xc));
  }
  return;
}

