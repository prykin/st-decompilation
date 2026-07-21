
void __fastcall FUN_0063e660(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x336) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(*(int *)(param_1 + 0x336) + 0xc);
    uVar3 = 0;
    if (0 < iVar1) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar2 = *(int *)(param_1 + 0x336);
        if (((uVar3 < *(uint *)(iVar2 + 0xc)) &&
            (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) &&
           (-1 < (int)*(uint *)(iVar2 + 0x38))) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          FUN_006e8ba0(*(void **)(param_1 + 0x211),*(uint *)(iVar2 + 0x38));
          *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DArrayDestroy(*(DArrayTy **)(param_1 + 0x336));
    *(undefined4 *)(param_1 + 0x336) = 0;
  }
  return;
}

