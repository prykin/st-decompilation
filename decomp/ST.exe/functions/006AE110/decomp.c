
void FUN_006ae110(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    FUN_006a5e90(*(undefined4 **)(param_1 + 0x1c));
    if ((*param_1 & 8) != 0) {
      FUN_006a5e90((undefined4 *)param_1);
    }
  }
  return;
}

