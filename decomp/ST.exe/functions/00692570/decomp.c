
undefined4 __thiscall FUN_00692570(void *this,int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    param_3 = param_3 + -1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)((int)this + (param_1 + (param_3 + (param_2 * 3 + 0x36) * 2) * 10) * 4);
}

