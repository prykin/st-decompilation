
int FUN_006e4480(AnonShape_006E4480_50BB219F *param_1,int param_2)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar3;
  AnonShape_006E4480_50BB219F *pAVar4;
  
  iVar3 = 0;
  if (param_1->field_0008 != (DArrayTy *)0x0) {
    param_1->field_0008->iteratorIndex = 0;
    do {
      pDVar1 = param_1->field_0008;
      uVar2 = pDVar1->iteratorIndex;
      if (pDVar1->count <= uVar2) {
        return 0;
      }
      pAVar4 = (AnonShape_006E4480_50BB219F *)(pDVar1->elementSize * uVar2 + (int)pDVar1->data);
      pDVar1->iteratorIndex = uVar2 + 1;
      if (pAVar4 == (AnonShape_006E4480_50BB219F *)0x0) {
        return 0;
      }
      if (*(int *)(*(int *)&pAVar4->field_0x4 + 0x14) == param_2) {
        return *(int *)&pAVar4->field_0x4;
      }
      iVar3 = FUN_006e4480(pAVar4,param_2);
    } while (iVar3 == 0);
  }
  return iVar3;
}

