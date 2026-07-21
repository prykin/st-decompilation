
undefined4 __thiscall FUN_004ac5a0(void *this,char param_1,undefined4 param_2)

{
  ushort *puVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)((int)this + 0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= *(int *)((int)this + 0x14) + -1)) {
    iVar2 = param_1 * 0x24;
    puVar1 = (ushort *)(iVar2 + 0xe + *(int *)((int)this + 0x20));
    *puVar1 = *puVar1 & 0xfffe;
    *(undefined4 *)(iVar2 + 0x1c + *(int *)((int)this + 0x20)) = param_2;
    return 0;
  }
  return 0xffffffff;
}

