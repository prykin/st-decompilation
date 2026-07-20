
int __fastcall FUN_006b1190(AnonShape_006B1190_EDB2B5FD *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((uint)param_1->field_0004 < param_1->field_000C) {
    uVar3 = param_1->field_0008;
    puVar4 = (undefined4 *)(uVar3 * param_1->field_0004 + param_1->field_001C);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    iVar1 = param_1->field_0004;
    param_1->field_0004 = iVar1 + 1;
    return iVar1;
  }
  return -4;
}

