
void __thiscall FUN_004ad1a0(void *this,char param_1)

{
  ushort *puVar1;

  if (-1 < *(int *)((int)this + 0xc)) {
    puVar1 = (ushort *)(*(int *)((int)this + 0x20) + 0xe + param_1 * 0x24);
    *puVar1 = *puVar1 & 0xfeff;
    FUN_006e93c0(*(void **)((int)this + 0x3c),*(uint *)((int)this + 0x18),(int)param_1,0xffffffff);
  }
  return;
}

