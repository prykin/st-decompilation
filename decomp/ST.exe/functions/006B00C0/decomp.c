
uint * FUN_006b00c0(uint *param_1,uint *param_2,undefined *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar2 = Library::DKW::TBL::FUN_006ae290(param_1,param_2[4],param_2[2],param_2[5]);
  if (puVar2 == (uint *)0x0) {
    return (uint *)0x0;
  }
  uVar4 = puVar2[2];
  *puVar2 = *puVar2 | *param_2 | 0x100;
  puVar2[3] = param_2[3];
  uVar1 = puVar2[3];
  puVar2[6] = (uint)param_3;
  puVar6 = param_2 + 7;
  puVar7 = (uint *)puVar2[7];
  for (uVar3 = uVar4 * uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar4 * uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar7 = (char)*puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
    puVar7 = (uint *)((int)puVar7 + 1);
  }
  iVar5 = puVar2[4] - puVar2[3];
  if (iVar5 != 0) {
    (*(code *)param_3)(puVar2[7],puVar2[3],iVar5);
  }
  return puVar2;
}

