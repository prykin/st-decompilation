
uint __fastcall FUN_006acc70(AnonShape_006ACC70_C8641025 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1->field_000C <= param_2) {
    return 0xfffffffc;
  }
  uVar2 = param_1->field_0008;
  if (uVar2 == 4) {
    *param_3 = *(undefined4 *)(param_1->field_001C + param_2 * 4);
    return param_2;
  }
  puVar3 = (undefined4 *)(uVar2 * param_2 + param_1->field_001C);
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_3 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  return param_2;
}

