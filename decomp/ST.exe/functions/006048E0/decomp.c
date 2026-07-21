
int __fastcall FUN_006048e0(AnonShape_006048E0_C1705B76 *param_1)

{
  uint uVar1;
  DArrayTy *pDVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;

  iVar5 = 0;
  if ((param_1->field_0215 != (DArrayTy *)0x0) &&
     (uVar1 = param_1->field_0215->count, 0 < (int)uVar1)) {
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      pDVar2 = param_1->field_0215;
      if (uVar1 < pDVar2->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar1) (runtime stride) */
        pvVar3 = (void *)(pDVar2->elementSize * uVar1 + (int)pDVar2->data);
      }
      else {
        pvVar3 = (void *)0x0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((*(int *)((int)pvVar3 + 0x10) == 10) &&
         (iVar4 = thunk_FUN_00604a00(param_1,*(int *)((int)pvVar3 + 0x14)), iVar4 != 0)) {
        iVar5 = iVar5 + 1;
      }
      FUN_006b0c70(param_1->field_0215,uVar1);
    }
  }
  return iVar5;
}

