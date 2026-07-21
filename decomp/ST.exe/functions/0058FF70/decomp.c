
int __fastcall FUN_0058ff70(AnonShape_0058FF70_CCAF0F72 *param_1)

{
  uint uVar1;
  uint uVar2;

  uVar2 = PTR_00802a38->field_00E4;
  switch(param_1->field_0257) {
  case 0:
    uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
    param_1->field_001C = uVar1;
    return uVar2 + 1 + (uVar1 >> 0x10) % 5;
  case 6:
    uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
    param_1->field_001C = uVar1;
    uVar2 = uVar2 + 0xf + (uVar1 >> 0x10 & 0xf);
  }
  return uVar2;
}

