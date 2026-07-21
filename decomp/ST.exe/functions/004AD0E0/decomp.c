
void __thiscall FUN_004ad0e0(void *this,byte param_1)

{
  ushort *puVar1;

  if (((-1 < (char)param_1) && ((char)param_1 < ' ')) &&
     ((1 << (param_1 & 0x1f) & *(uint *)((int)this + 0x1c)) != 0)) {
    puVar1 = (ushort *)(*(int *)((int)this + 0x20) + 0xe + (char)param_1 * 0x24);
    *puVar1 = *puVar1 & 0xfff7;
    FUN_006e9dd0(*(void **)((int)this + 0x3c),*(uint **)((int)this + 0x18),(int)(char)param_1);
  }
  return;
}

