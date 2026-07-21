
undefined4 FUN_006b7830(AnonShape_006B7830_769CA2DF *param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  if (param_2 < (uint)param_1->field_0008) {
    psVar1 = *(short **)(param_2 * 4 + param_1->field_0014);
    if (psVar1 != (short *)0x0) {
      FUN_006a5e90(psVar1);
    }
    puVar4 = (undefined4 *)(param_2 * 4 + param_1->field_0014);
    puVar5 = puVar4;
    for (uVar2 = (param_1->field_0008 - param_2) * 4 - 4 >> 2; puVar4 = puVar4 + 1, uVar2 != 0;
        uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    iVar3 = param_1->field_0008 + -1;
    param_1->field_0008 = iVar3;
    *(undefined4 *)(param_1->field_0014 + iVar3 * 4) = 0;
    if (param_2 < param_1->field_0004) {
      param_1->field_0004 = param_1->field_0004 - 1;
    }
    return 0;
  }
  return 0xfffffffc;
}

