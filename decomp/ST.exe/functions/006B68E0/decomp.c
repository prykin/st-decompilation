
int FUN_006b68e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_54[0] = 0x50;
  local_54[2] = *param_2;
  local_54[3] = param_2[1];
  local_44 = param_2[2];
  local_40 = param_2[3];
  iVar1 = (**(code **)(*(int *)*param_1 + 0x60))((int *)*param_1,local_54,1);
  if (iVar1 == 0) {
    iVar1 = FUN_006b6970(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_006a5e40(iVar1,DAT_007ed77c,0x7edbc4,0x242);
  return iVar1;
}

