
void FUN_00695140(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;

  uVar1 = param_2[6];
  uVar2 = param_2[7];
  puVar4 = param_1;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}

