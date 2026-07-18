
void FUN_0075a670(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  piVar7 = param_1;
  puVar3 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x74);
  *(undefined4 **)((int)param_1 + 0x19a) = puVar3;
  *puVar3 = FUN_0075a780;
  puVar3[2] = FUN_0075a800;
  puVar3[0x1c] = 0;
  if (param_2 == (undefined4 *)0x0) {
    iVar4 = (**(code **)(*param_1 + 4))(param_1,1,0xa00);
    piVar7 = puVar3 + 8;
    iVar8 = 10;
    do {
      *piVar7 = iVar4;
      piVar7 = piVar7 + 1;
      iVar4 = iVar4 + 0x100;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar3[4] = 0;
    puVar3[1] = &LAB_0075aaa0;
    puVar3[3] = FUN_0075a860;
    return;
  }
  piVar9 = param_1 + 7;
  piVar1 = param_1 + 0x34;
  param_1 = (int *)0x0;
  if (0 < *piVar9) {
    param_2 = puVar3 + 0x12;
    piVar9 = (int *)(*piVar1 + 0xc);
    do {
      iVar4 = *piVar9;
      iVar8 = iVar4;
      if (piVar7[0x35] != 0) {
        iVar8 = iVar4 * 3;
      }
      iVar2 = *piVar7;
      iVar4 = FUN_00759e90(piVar9[5],iVar4);
      iVar5 = FUN_00759e90(piVar9[4],piVar9[-1]);
      uVar6 = (**(code **)(iVar2 + 0x14))(piVar7,1,1,iVar5,iVar4,iVar8);
      piVar9 = piVar9 + 0x15;
      *param_2 = uVar6;
      param_2 = param_2 + 1;
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < piVar7[7]);
  }
  puVar3[1] = FUN_0075aab0;
  puVar3[3] = FUN_0075acb0;
  puVar3[4] = puVar3 + 0x12;
  return;
}

