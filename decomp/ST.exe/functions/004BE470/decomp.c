
void __thiscall FUN_004be470(void *this,int param_1)

{
  int iVar1;
  byte bVar2;

  bVar2 = LookupRecordByte(*(char *)((int)this + 0x23d));
  *(int *)((int)this + 0x241) = param_1;
  iVar1 = (bVar2 - 1) + *(int *)((int)this + 0x235) * 3;
  if (*(int *)(&DAT_007e417c + iVar1 * 4) < param_1) {
    *(int *)((int)this + 0x241) = *(int *)(&DAT_007e417c + iVar1 * 4);
  }
  *(int *)((int)this + 0x5d7) =
       (*(int *)((int)this + 0x241) * 100) / *(int *)(&DAT_007e417c + iVar1 * 4);
  return;
}

