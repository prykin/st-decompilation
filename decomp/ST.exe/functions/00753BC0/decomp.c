
int FUN_00753bc0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int exceptionCode;
  int iVar3;
  undefined4 *local_8;
  
  puVar2 = param_3;
  local_8 = (undefined4 *)0x1;
  if (param_2 != (undefined4 *)0x0) {
    local_8 = param_2;
  }
  exceptionCode = FUN_007553f0(param_1,(int *)&local_8,param_3,&param_3);
  while (exceptionCode == 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 0xc);
    if ((pcVar1 == (code *)0x0) ||
       (iVar3 = (*pcVar1)(local_8,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10)), iVar3 == 0))
    break;
    if (param_2 == (undefined4 *)0x0) {
      FUN_006a5e90(local_8);
      local_8 = (undefined4 *)0x1;
    }
    exceptionCode = FUN_007553f0(param_1,(int *)&local_8,puVar2,&param_3);
  }
  if ((param_2 == (undefined4 *)0x0) && (local_8 != (undefined4 *)0x1)) {
    FUN_006a5e90(local_8);
  }
  if ((exceptionCode != -4) && (exceptionCode != 0)) {
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DB_C_btkgetne_c_007f2c58,0x1e);
  }
  return exceptionCode;
}

