
void __fastcall FUN_0060d220(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x240) == 0) {
    iVar3 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (0 < *(int *)(param_1 + 0x23c)) {
      iVar4 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar1 = *(int *)(param_1 + 0x244) + iVar4;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)(*(int *)(param_1 + 0x244) + iVar4) != 0) {
          if (*(int *)(iVar1 + 0x40) != 0) {
            thunk_FUN_0062c2a0((int *)(iVar1 + 0x40));
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(*(int *)(param_1 + 0x244) + 8 + iVar4) != 0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            FreeAndNull((void **)(*(int *)(param_1 + 0x244) + 8 + iVar4));
          }
          *(undefined4 *)(*(int *)(param_1 + 0x244) + iVar4) = 0;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x44;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (iVar3 < *(int *)(param_1 + 0x23c));
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if ((*(int *)(param_1 + 0x240) == 1) && (piVar2 = *(int **)(param_1 + 0x244), *piVar2 != 0))
  {
    if (piVar2[2] != 0) {
      FreeAndNull((void **)(piVar2 + 2));
    }
    **(undefined4 **)(param_1 + 0x244) = 0;
    return;
  }
  return;
}

