
undefined4 __thiscall FUN_004cc880(void *this,undefined4 param_1)

{
  int iVar1;

  iVar1 = *(int *)((int)this + 0x440);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) &&
     (*(undefined4 *)((int)this + 0x440) = param_1, *(int *)((int)this + 0x444) != 0)) {
    iVar1 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    if (((char)iVar1 != '\x03') || (*(int *)((int)this + 0x43c) == 2)) {
      *(undefined4 *)((int)this + 0x448) = 1;
    }
  }
  return 0;
}

