
undefined4 FUN_004b79c0(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  AnonShape_006ACC70_C8641025 *pAVar3;
  uint uVar4;
  int local_10 [3];
  
  iVar1 = thunk_FUN_004b72b0(param_1);
  iVar2 = thunk_FUN_004b71c0(param_1);
  if (iVar1 <= iVar2) {
    return 1;
  }
  uVar4 = 0;
  pAVar3 = *(AnonShape_006ACC70_C8641025 **)&g_playerRuntime[param_1].field_0x992;
  if (pAVar3->field_000C != 0) {
    do {
      FUN_006acc70(pAVar3,uVar4,local_10);
      if (local_10[0] == param_2) {
        return 1;
      }
      pAVar3 = *(AnonShape_006ACC70_C8641025 **)&g_playerRuntime[param_1].field_0x992;
      uVar4 = uVar4 + 1;
    } while (uVar4 < pAVar3->field_000C);
  }
  return 0;
}

