
int FUN_006c7000(int param_1)

{
  if ((*(uint *)(param_1 + 0x56) & 8) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x56) & 1) != 0) {
    return -1;
  }
  return (uint)*(ushort *)(param_1 + 0x5f) * 10;
}

