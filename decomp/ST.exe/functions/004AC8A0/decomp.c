
uint __thiscall FUN_004ac8a0(void *this,char param_1)

{
  ushort uVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)((int)this + 0x18) != -1) && (-1 < param_1)) &&
     (iVar2 = (int)param_1, iVar2 <= *(int *)((int)this + 0x14) + -1)) {
    uVar1 = *(ushort *)(*(int *)((int)this + 0x20) + 0xe + iVar2 * 0x24);
    *(ushort *)(*(int *)((int)this + 0x20) + 0xe + iVar2 * 0x24) = uVar1 & 0xfffb;
    return (uVar1 & 4) >> 2;
  }
  return 0xffffffff;
}

