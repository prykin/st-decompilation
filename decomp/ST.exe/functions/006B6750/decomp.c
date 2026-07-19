
int FUN_006b6750(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  uint local_54 [6];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  
  param_1[0xf] = param_4;
  param_1[1] = param_1[1] | 1;
  if (((param_1[10] == 0) || (param_1[10] == 1)) || (DAT_00854ec4 != 0)) {
    param_2 = param_2 | 0x2000;
  }
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_54[1] = param_2;
  local_2c = param_4;
  local_3c = param_1[2];
  local_24 = param_3;
  local_38 = param_1[3];
  local_54[0] = 0x50;
  local_34 = param_1[4];
  local_30 = param_1[5];
  iVar1 = (**(code **)(*(int *)*param_1 + 0x60))((int *)*param_1,local_54,2);
  if (iVar1 != 0) {
    RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_DDX_C_dplay2_cpp_007edbc4,0x1e0);
    return iVar1;
  }
  iVar1 = FUN_006b6830(param_1);
  if (iVar1 != 0) {
    RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_DDX_C_dplay2_cpp_007edbc4,0x1ed);
    return iVar1;
  }
  return 0;
}

