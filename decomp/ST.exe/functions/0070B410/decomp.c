
undefined4 __cdecl FUN_0070b410(int param_1)

{
  *(short *)(param_1 + 0x29) = *(short *)(param_1 + 0x29) + -1;
  if (-1 < *(short *)(param_1 + 0x29)) {
    return *(undefined4 *)(param_1 + 0x30 + *(short *)(param_1 + 0x29) * 4);
  }
  return 0;
}

