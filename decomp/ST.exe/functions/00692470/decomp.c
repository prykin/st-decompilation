
undefined4 __thiscall FUN_00692470(void *this,int param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == 0) {
    param_3 = param_3 + -1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)
          (*(int *)((int)this + (param_3 + param_2 * 6 + param_4 * 0x92) * 4 + 0x1a74) + 0x2d +
          param_1 * 4);
}

