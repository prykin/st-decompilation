
uint * FUN_006b54f0(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  
  if (param_1 == (uint *)0x0) {
    param_1 = FUN_006aac10(0x18);
    if (param_1 == (uint *)0x0) {
      return (uint *)0x0;
    }
    *param_1 = *param_1 | 8;
  }
  else {
    puVar2 = param_1;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if (param_1 != (uint *)0x0) {
    param_1[4] = param_2;
    iVar1 = FUN_006b5480((int)param_1);
    if (iVar1 != 0) {
      FUN_006ab060(&param_1);
      RaiseInternalException(-2,DAT_007ed77c,s_E__DKW_TBL_C_sarrcrea_c_007edb50,0x29);
      return (uint *)0x0;
    }
    param_1[4] = param_3;
  }
  return param_1;
}

