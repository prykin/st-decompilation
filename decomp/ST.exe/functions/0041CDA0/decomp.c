
undefined4 __thiscall
FUN_0041cda0(void *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;

  if ((DAT_0080874d == -1) || (*(int *)((int)this + 0xf8) == 0)) {
    return 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((-1 < param_1) &&
      (((param_1 < *(int *)((int)this + 0x20) && (-1 < param_2)) &&
       (param_2 < *(int *)((int)this + 0x24))))) && (*(int *)((int)this + 0x38) != 0)) {
    iVar2 = *(int *)((int)this + 0x20) * param_2;
    iVar1 = *(int *)((int)this + 0x38) + (iVar2 + param_1) * 2;
    if ((iVar1 != 0) && (*(char *)(iVar1 + 1) != '\0')) {
      if (7 < param_4) {
        return 1;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)((int)this + param_4 * 4 + 0x54);
      if (iVar1 == 0) {
        return 1;
      }
      if (*(char *)(iVar1 + iVar2 + param_1) == '\0') {
        return 1;
      }
    }
  }
  return 0;
}

