
void FUN_006b5570(byte *param_1)

{
  uint uVar1;
  
  if (param_1 != (byte *)0x0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        FUN_006a5e90(*(short **)(*(int *)(param_1 + 0x14) + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 8));
    }
    FUN_006a5e90(*(short **)(param_1 + 0x14));
    if ((*param_1 & 8) != 0) {
      FUN_006a5e90((short *)param_1);
    }
  }
  return;
}

