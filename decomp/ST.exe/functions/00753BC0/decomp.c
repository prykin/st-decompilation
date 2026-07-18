
int FUN_00753bc0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_8;
  
  puVar2 = param_3;
  local_8 = (undefined4 *)0x1;
  if (param_2 != (undefined4 *)0x0) {
    local_8 = param_2;
  }
  iVar3 = FUN_007553f0(param_1,(int *)&local_8,param_3,&param_3);
  while (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 0xc);
    if ((pcVar1 == (code *)0x0) ||
       (iVar4 = (*pcVar1)(local_8,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10)), iVar4 == 0))
    break;
    if (param_2 == (undefined4 *)0x0) {
      FUN_006a5e90(local_8);
      local_8 = (undefined4 *)0x1;
    }
    iVar3 = FUN_007553f0(param_1,(int *)&local_8,puVar2,&param_3);
  }
  if ((param_2 == (undefined4 *)0x0) && (local_8 != (undefined4 *)0x1)) {
    FUN_006a5e90(local_8);
  }
  if ((iVar3 != -4) && (iVar3 != 0)) {
    FUN_006a5e40(iVar3,DAT_007ed77c,0x7f2c58,0x1e);
  }
  return iVar3;
}

