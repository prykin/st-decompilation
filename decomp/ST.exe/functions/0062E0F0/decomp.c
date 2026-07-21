
void __thiscall FUN_0062e0f0(void *this,int param_1)

{
  DArrayTy *array;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  array = *(DArrayTy **)((int)this + param_1 * 4 + 0x70);
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
    *(undefined4 *)((int)this + param_1 * 4 + 0x70) = 0;
  }
  return;
}

