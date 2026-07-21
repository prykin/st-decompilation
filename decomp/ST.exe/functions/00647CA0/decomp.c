
undefined4 __thiscall FUN_00647ca0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x100)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(undefined4 *)((int)this + param_1 * 4 + 0xde);
  }
  return 1;
}

