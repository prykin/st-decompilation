
void __cdecl FUN_0067d0a0(AnonShape_0067D0A0_8092D907 *param_1)

{
  DArrayTy *pDVar1;
  int *piVar2;
  DArrayTy **ppDVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  ppDVar3 = &param_1->field_00C2;
  pDVar1 = param_1->field_00C2;
  if (pDVar1 != (DArrayTy *)0x0) {
    uVar4 = 0;
    if (0 < (int)pDVar1->count) {
      bVar6 = pDVar1->count != 0;
      do {
        if (bVar6) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar4) (runtime stride) */
          piVar2 = (int *)(pDVar1->elementSize * uVar4 + (int)pDVar1->data);
        }
        else {
          piVar2 = (int *)0x0;
        }
        if (((AnonShape_0067D0A0_8092D907 *)*piVar2 != (AnonShape_0067D0A0_8092D907 *)0x0) &&
           (piVar2[1] == 0)) {
          param_1 = (AnonShape_0067D0A0_8092D907 *)*piVar2;
          thunk_FUN_00691540((int *)&param_1);
          *piVar2 = 0;
        }
        pDVar1 = *ppDVar3;
        uVar4 = uVar4 + 1;
        bVar6 = uVar4 < pDVar1->count;
      } while ((int)uVar4 < (int)pDVar1->count);
    }
  }
  iVar5 = 5;
  do {
    if (*ppDVar3 != (DArrayTy *)0x0) {
      DArrayDestroy(*ppDVar3);
      *ppDVar3 = (DArrayTy *)0x0;
    }
    ppDVar3 = ppDVar3 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

