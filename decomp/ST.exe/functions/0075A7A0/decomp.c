
void FUN_0075a7a0(AnonShape_0075A7A0_BCCC082B *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = param_1->field_019A;
  if (param_1->field_0136 < 2) {
    if (param_1->field_008C < param_1->field_012E - 1U) {
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1->field_013A + 0xc);
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      return;
    }
    uVar2 = *(undefined4 *)(param_1->field_013A + 0x48);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}

