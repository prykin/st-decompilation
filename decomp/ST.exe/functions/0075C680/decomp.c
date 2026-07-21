
undefined4 FUN_0075c680(AnonShape_0075C680_AC52F0A7 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  AnonShape_0075C680_AC52F0A7 *pAVar3;
  int iVar4;
  int iVar5;
  AnonShape_0075C180_8EED234B *pAVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  AnonShape_0075C180_8EED234B *local_1c;
  int local_18;
  AnonShape_0075C680_AC52F0A7 *local_14;
  int local_10;
  uint local_c;
  int local_8;

  pAVar3 = param_1;
  iVar1 = param_1->field_01AA;
  local_c = 1 << ((byte)param_1->field_018A & 0x1f);
  if (((*(int *)&param_1->field_0x10c != 0) && (*(int *)(iVar1 + 0x28) == 0)) &&
     (iVar4 = FUN_0075c3b0((AnonShape_0075BE40_B9FD5FDF *)param_1), iVar4 == 0)) {
    return 0;
  }
  local_14 = param_1;
  local_8 = 0;
  local_28 = **(undefined4 **)&param_1->field_0x10;
  local_24 = (*(undefined4 **)&param_1->field_0x10)[1];
  local_20 = param_1->field_018E;
  pAVar6 = *(AnonShape_0075C180_8EED234B **)(iVar1 + 8);
  iVar4 = *(int *)(iVar1 + 0xc);
  local_10 = iVar1 + 0x10;
  if (0 < param_1->field_0152) {
    param_1 = (AnonShape_0075C680_AC52F0A7 *)param_2;
    do {
      puVar2 = *(uint **)param_1;
      if ((iVar4 < 1) &&
         (iVar5 = FUN_0075b720(&local_28,pAVar6,iVar4,1), pAVar6 = local_1c, iVar4 = local_18,
         iVar5 == 0)) {
        return 0;
      }
      iVar4 = iVar4 + -1;
      if (((int)pAVar6 >> ((byte)iVar4 & 0x1f) & 1U) != 0) {
        *puVar2 = *puVar2 | local_c;
      }
      param_1 = (AnonShape_0075C680_AC52F0A7 *)&param_1->field_0x4;
      local_8 = local_8 + 1;
    } while (local_8 < pAVar3->field_0152);
  }
  **(undefined4 **)&pAVar3->field_0x10 = local_28;
  *(undefined4 *)(*(int *)&pAVar3->field_0x10 + 4) = local_24;
  pAVar3->field_018E = local_20;
  *(AnonShape_0075C180_8EED234B **)(iVar1 + 8) = pAVar6;
  *(int *)(iVar1 + 0xc) = iVar4;
  *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  return 1;
}

