
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void FUN_006e3680(DArrayTy *param_1)

{
  uint uVar1;
  void *pvVar2;

  param_1->iteratorIndex = 0;
  while( true ) {
    uVar1 = param_1->iteratorIndex;
    if (param_1->count <= uVar1) {
      return;
    }
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar1) (runtime stride) */
    pvVar2 = (void *)(param_1->elementSize * uVar1 + (int)param_1->data);
    param_1->iteratorIndex = uVar1 + 1;
    if (pvVar2 == (void *)0x0) break;
    if (*(DArrayTy **)((int)pvVar2 + 8) != (DArrayTy *)0x0) {
      FUN_006e3680(*(DArrayTy **)((int)pvVar2 + 8));
      DArrayDestroy(*(DArrayTy **)((int)pvVar2 + 8));
      *(undefined4 *)((int)pvVar2 + 8) = 0;
    }
  }
  return;
}

