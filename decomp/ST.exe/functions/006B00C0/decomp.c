
uint * FUN_006b00c0(uint *param_1,uint *param_2,undefined *param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;

  pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)param_1,param_2[4],param_2[2],param_2[5]);
  if (pDVar1 == (DArrayTy *)0x0) {
    return (uint *)0x0;
  }
  pDVar1->flags = pDVar1->flags | *param_2 | 0x100;
  pDVar1->count = param_2[3];
  uVar2 = pDVar1->elementSize * pDVar1->count;
  pDVar1->growCallback = param_3;
  puVar5 = param_2 + 7;
  puVar6 = pDVar1->data;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar6 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  iVar4 = pDVar1->capacity - pDVar1->count;
  if (iVar4 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)param_3)(pDVar1->data,pDVar1->count,iVar4);
  }
  return &pDVar1->flags;
}

