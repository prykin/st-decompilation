
void FUN_006e3680(AnonShape_006E3680_4519C52B *param_1)

{
  uint uVar1;
  int iVar2;
  
  param_1->field_0004 = 0;
  while( true ) {
    uVar1 = param_1->field_0004;
    if (param_1->field_000C <= uVar1) {
      return;
    }
    iVar2 = param_1->field_0008 * uVar1 + param_1->field_001C;
    param_1->field_0004 = uVar1 + 1;
    if (iVar2 == 0) break;
    if (*(AnonShape_006E3680_4519C52B **)(iVar2 + 8) != (AnonShape_006E3680_4519C52B *)0x0) {
      FUN_006e3680(*(AnonShape_006E3680_4519C52B **)(iVar2 + 8));
      FUN_006ae110(*(byte **)(iVar2 + 8));
      *(undefined4 *)(iVar2 + 8) = 0;
    }
  }
  return;
}

