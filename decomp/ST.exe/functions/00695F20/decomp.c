
void __fastcall FUN_00695f20(void *param_1)

{
  int iVar1;
  uint uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x5853) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x5853) + 0xc);
    uVar2 = 0;
    if (0 < iVar1) {
      do {
        thunk_FUN_00696050(param_1,uVar2);
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < iVar1);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DArrayDestroy(*(DArrayTy **)((int)param_1 + 0x5853));
    *(undefined4 *)((int)param_1 + 0x5853) = 0;
  }
  return;
}

