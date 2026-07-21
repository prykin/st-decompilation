
undefined4 __thiscall
FUN_006923e0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_3 != -1) {
    if (param_3 == 0) {
      param_4 = param_4 + -1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(undefined4 *)
            (*(int *)((int)this +
                     (param_5 + (param_4 + param_2 * 0x49 + param_3 * 6) * 2) * 4 + 0x1954) + 0x2d +
            (param_1 - 1U & 0xffff) * 4);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(*(int *)((int)this + param_2 * 0x248 + 0x1950) + 0x2d);
}

