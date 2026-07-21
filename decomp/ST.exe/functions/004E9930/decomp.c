
int __fastcall FUN_004e9930(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x4f8);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x4fc) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

