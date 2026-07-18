
int FUN_006b65f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_54 [6];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  *param_2 = 0;
  puVar1 = FUN_006aac10(0xd0);
  *param_2 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -2;
  }
  *puVar1 = 10;
  puVar1 = local_54;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_54[0] = 0x50;
  local_3c = param_1[2];
  local_38 = param_1[3];
  local_34 = param_1[4];
  local_30 = param_1[5];
  iVar2 = (**(code **)(*(int *)*param_1 + 0x34))((int *)*param_1,local_54,0,FUN_006b6530,param_2,0);
  if (iVar2 != 0) {
    FUN_006a5e40(iVar2,DAT_007ed77c,0x7edbc4,0x183);
    return iVar2;
  }
  return 0;
}

