
undefined4 * __fastcall FUN_00693910(AnonShape_00693910_1CC6632C *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  AnonShape_00693910_1CC6632C *pAVar4;
  undefined4 *puVar5;
  int local_8;

  puVar2 = (undefined4 *)&param_1->field_0x4a;
  pAVar4 = param_1;
  for (iVar1 = 0x666; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar4 = 0;
    pAVar4 = (AnonShape_00693910_1CC6632C *)&pAVar4->field_0x4;
  }
  *(undefined1 *)pAVar4 = 0;
  *(undefined4 *)&param_1->field_0x4 = 0x8f000205;
  param_1->field_02DA = 1;
  param_1->field_02DB = 1;
  param_1->field_0x2dc = 0;
  param_1->field_02DD = 2;
  param_1->field_02E1 = 0xffffffff;
  local_8 = 8;
  do {
    puVar3 = &DAT_007d6268;
    puVar5 = (undefined4 *)((int)puVar2 + -0x39);
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
    puVar3 = puVar2;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined4 *)((int)puVar2 + 0x51);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  param_1->field_1999 = 0;
  return (undefined4 *)param_1;
}

