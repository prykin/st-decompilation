
int FUN_006b11d0(uint *param_1,uint param_2,undefined4 *param_3)

{
  int exceptionCode;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  while ((param_1[4] <= param_2 || (param_1[4] <= param_1[3]))) {
    exceptionCode = FUN_006ae230(param_1);
    if (exceptionCode != 0) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_TBL_C_darrinse_c_007edaa8,0xf);
      return exceptionCode;
    }
  }
  if (param_2 < param_1[3]) {
    uVar3 = param_1[2];
    puVar1 = (undefined4 *)(uVar3 * param_2 + param_1[7]);
    FUN_0072da70((undefined4 *)(uVar3 + (int)puVar1),puVar1,(param_1[3] - param_2) * uVar3);
    param_1[3] = param_1[3] + 1;
    if (param_2 < param_1[1]) {
      param_1[1] = param_1[1] + 1;
    }
  }
  else {
    param_1[3] = param_2 + 1;
  }
  uVar3 = param_1[2];
  puVar1 = (undefined4 *)(uVar3 * param_2 + param_1[7]);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return 0;
}

