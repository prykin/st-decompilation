
uint __fastcall FUN_00492ab0(int param_1)

{
  uint uVar1;
  
  if ((0 < *(int *)(param_1 + 0x6f7)) && (*(int *)(param_1 + 0x6f7) < 3)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  }
  uVar1 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0x1c) = uVar1;
  return (uVar1 >> 0x10) % 7;
}

