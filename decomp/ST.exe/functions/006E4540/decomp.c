
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

int FUN_006e4540(DArrayTy *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;

  iVar2 = 0;
  param_1->iteratorIndex = 0;
  do {
    uVar1 = param_1->iteratorIndex;
    if (param_1->count <= uVar1) {
      return iVar2;
    }
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar1) (runtime stride) */
    pvVar3 = (void *)(param_1->elementSize * uVar1 + (int)param_1->data);
    param_1->iteratorIndex = uVar1 + 1;
    if (pvVar3 == (void *)0x0) {
      return iVar2;
    }
    if (*(int *)(*(int *)((int)pvVar3 + 4) + 0x14) == param_2) {
      return (int)pvVar3;
    }
  } while ((*(DArrayTy **)((int)pvVar3 + 8) == (DArrayTy *)0x0) ||
          (iVar2 = FUN_006e4540(*(DArrayTy **)((int)pvVar3 + 8),param_2), iVar2 == 0));
  return iVar2;
}

