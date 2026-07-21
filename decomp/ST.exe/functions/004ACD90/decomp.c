
void __thiscall FUN_004acd90(void *this,char param_1,int param_2)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(*(int *)((int)this + 0x20) + param_1 * 0x24 + 4) +
                  *(int *)(*(int *)((int)this + 0x20) + 0x18 + param_1 * 0x24) * 4);
  *piVar1 = *piVar1 + param_2;
  return;
}

