
void FUN_006b5570(AnonShape_006B5570_4D68B99C *param_1)

{
  uint uVar1;
  
  if (param_1 != (AnonShape_006B5570_4D68B99C *)0x0) {
    uVar1 = 0;
    if (param_1->field_0008 != 0) {
      do {
        FUN_006a5e90(*(short **)(param_1->field_0014 + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_1->field_0008);
    }
    FUN_006a5e90((short *)param_1->field_0014);
    if ((*(byte *)param_1 & 8) != 0) {
      FUN_006a5e90((short *)param_1);
    }
  }
  return;
}

