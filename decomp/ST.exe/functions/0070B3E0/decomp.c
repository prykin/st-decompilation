
undefined4 __cdecl FUN_0070b3e0(int param_1)

{
  *(short *)(param_1 + 0x29) = *(short *)(param_1 + 0x29) + 1;
  if (*(short *)(param_1 + 0x29) < *(short *)(param_1 + 0x23)) {
    return *(undefined4 *)(param_1 + 0x30 + *(short *)(param_1 + 0x29) * 4);
  }
  return 0;
}

