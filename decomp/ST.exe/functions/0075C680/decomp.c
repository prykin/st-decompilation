
undefined4 FUN_0075c680(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  puVar3 = param_1;
  iVar1 = *(int *)((int)param_1 + 0x1aa);
  local_c = 1 << ((byte)*(undefined4 *)((int)param_1 + 0x18a) & 0x1f);
  if (((param_1[0x43] != 0) && (*(int *)(iVar1 + 0x28) == 0)) &&
     (iVar4 = FUN_0075c3b0((int)param_1), iVar4 == 0)) {
    return 0;
  }
  local_14 = param_1;
  local_8 = 0;
  local_28 = *(undefined4 *)param_1[4];
  local_24 = ((undefined4 *)param_1[4])[1];
  local_20 = *(undefined4 *)((int)param_1 + 0x18e);
  uVar6 = *(uint *)(iVar1 + 8);
  iVar4 = *(int *)(iVar1 + 0xc);
  local_10 = iVar1 + 0x10;
  if (0 < *(int *)((int)param_1 + 0x152)) {
    param_1 = param_2;
    do {
      puVar2 = (uint *)*param_1;
      if ((iVar4 < 1) &&
         (iVar5 = FUN_0075b720(&local_28,uVar6,iVar4,1), uVar6 = local_1c, iVar4 = local_18,
         iVar5 == 0)) {
        return 0;
      }
      iVar4 = iVar4 + -1;
      if (((int)uVar6 >> ((byte)iVar4 & 0x1f) & 1U) != 0) {
        *puVar2 = *puVar2 | local_c;
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)((int)puVar3 + 0x152));
  }
  *(undefined4 *)puVar3[4] = local_28;
  *(undefined4 *)(puVar3[4] + 4) = local_24;
  *(undefined4 *)((int)puVar3 + 0x18e) = local_20;
  *(uint *)(iVar1 + 8) = uVar6;
  *(int *)(iVar1 + 0xc) = iVar4;
  *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  return 1;
}

