
void __thiscall FUN_004be3d0(void *this,int param_1)

{
  uint uVar1;

  uVar1 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
  *(int *)((int)this + 0x5d7) = param_1;
  *(int *)((int)this + 0x241) =
       (*(int *)(&DAT_007e417c + (((uVar1 & 0xff) - 1) + *(int *)((int)this + 0x235) * 3) * 4) *
       param_1) / 100;
  return;
}

