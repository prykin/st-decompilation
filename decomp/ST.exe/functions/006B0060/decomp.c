
void FUN_006b0060(uint *param_1,uint *param_2)

{
  DArrayTy *pDVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;

  pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)param_1,param_2[4],param_2[2],param_2[5]);
  if (pDVar1 == (DArrayTy *)0x0) {
    return;
  }
  pDVar1->flags = pDVar1->flags | *param_2;
  uVar2 = pDVar1->elementSize * param_2[3];
  pDVar1->count = param_2[3];
  puVar4 = param_2 + 7;
  puVar5 = pDVar1->data;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar5 = (char)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  return;
}

