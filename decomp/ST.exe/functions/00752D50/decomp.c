
uint FUN_00752d50(int param_1,uint param_2,char *param_3)

{
  undefined4 *puVar1;
  uint exceptionCode;
  char *pcVar2;
  
  while ((*(uint *)(param_1 + 0xc) <= param_2 ||
         (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 8)))) {
    exceptionCode = FUN_006b5480(param_1);
    if (exceptionCode != 0) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_TBL_C_sarrinss_c_007f2bc0,0xf);
      return exceptionCode;
    }
  }
  pcVar2 = (char *)0x0;
  if ((param_3 != (char *)0x0) && (pcVar2 = FUN_006c49b0(param_3), pcVar2 == (char *)0x0)) {
    return 0xfffffffe;
  }
  if (param_2 < *(uint *)(param_1 + 8)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x14) + param_2 * 4);
    FUN_0072da70(puVar1 + 1,puVar1,(param_2 * 0x3fffffff + *(uint *)(param_1 + 8)) * 4);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    if (param_2 < *(uint *)(param_1 + 4)) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) + 1;
      *(char **)(*(int *)(param_1 + 0x14) + param_2 * 4) = pcVar2;
      return param_2;
    }
  }
  else {
    *(uint *)(param_1 + 8) = param_2 + 1;
  }
  *(char **)(*(int *)(param_1 + 0x14) + param_2 * 4) = pcVar2;
  return param_2;
}

