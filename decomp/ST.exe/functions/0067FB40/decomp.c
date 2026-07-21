
void FUN_0067fb40(void)

{
  int *piVar1;
  DArrayTy *array;
  uint uVar2;
  bool bVar3;

  if (PTR_00848a38 != (DArrayTy *)0x0) {
    uVar2 = 0;
    array = PTR_00848a38;
    if (0 < (int)PTR_00848a38->count) {
      bVar3 = PTR_00848a38->count != 0;
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar2) (runtime stride) */
        if (((bVar3) &&
            (piVar1 = (int *)(array->elementSize * uVar2 + (int)array->data), piVar1 != (int *)0x0))
           && (*piVar1 != 0)) {
          thunk_FUN_0064a800(piVar1);
          array = PTR_00848a38;
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < array->count;
      } while ((int)uVar2 < (int)array->count);
    }
    DArrayDestroy(array);
    PTR_00848a38 = (DArrayTy *)0x0;
  }
  if (DAT_00848a3c != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570(DAT_00848a3c);
  }
  DAT_00848a3c = (AnonShape_006B5570_4D68B99C *)0x0;
  return;
}

