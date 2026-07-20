
undefined4 FUN_006e45c0(AnonShape_006E45C0_FB272364 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  AnonShape_006E45C0_FB272364 *pAVar3;
  
  param_1->field_0008->iteratorIndex = 0;
  while( true ) {
    pDVar1 = param_1->field_0008;
    uVar2 = pDVar1->iteratorIndex;
    if (pDVar1->count <= uVar2) {
      return 0;
    }
    pAVar3 = (AnonShape_006E45C0_FB272364 *)(pDVar1->elementSize * uVar2 + (int)pDVar1->data);
    pDVar1->iteratorIndex = uVar2 + 1;
    if (pAVar3 == (AnonShape_006E45C0_FB272364 *)0x0) break;
    if ((*(int *)pAVar3 != 1) && (*(undefined4 *)pAVar3 = 1, pAVar3->field_0008 != (DArrayTy *)0x0))
    {
      FUN_006e45c0(pAVar3);
    }
  }
  return 0;
}

