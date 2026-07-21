
int __thiscall FUN_00693e60(void *this,int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((*(int *)((int)this + 0x1999) == 0) && (-1 < param_1)) && (param_1 < 8)) &&
     (*(char *)((int)this + param_1 * 0x51 + 0x33) != -1)) {
    return (int)this + param_1 * 0x51 + 0x11;
  }
  return 0;
}

