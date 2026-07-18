
uint FUN_00757530(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  if (param_2 == 0) {
    piVar6 = (int *)(param_1 + 0x18);
    puVar5 = (uint *)(param_1 + 0x20);
  }
  else {
    piVar6 = (int *)(param_1 + 0x1c);
    puVar5 = (uint *)(param_1 + 0x24);
  }
  sVar2 = *(short *)(*(int *)(param_1 + 0xc) + 0x34);
  if (sVar2 == 0) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0xc) + 8))(param_3 + 2);
  }
  else {
    iVar3 = (int)sVar2;
  }
  uVar1 = iVar3 + 8;
  if ((int)*puVar5 < (int)uVar1) {
    iVar3 = FUN_006bfb50((undefined4 *)*piVar6,uVar1);
    *piVar6 = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    *puVar5 = uVar1;
  }
  if (uVar1 != 0) {
    puVar7 = (undefined4 *)*piVar6;
    for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *param_3;
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  return uVar1;
}

