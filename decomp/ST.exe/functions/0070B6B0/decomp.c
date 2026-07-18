
undefined4 __cdecl FUN_0070b6b0(int param_1)

{
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + -1;
  if (-1 < *(short *)(param_1 + 6)) {
    return *(undefined4 *)(param_1 + 0x11 + *(short *)(param_1 + 6) * 4);
  }
  return 0;
}

