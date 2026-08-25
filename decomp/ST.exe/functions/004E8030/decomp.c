
int FUN_004e8030(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;

  if ((param_1 < 1) || (0x28 < param_1)) {
    if ((param_1 < 0x32) || (0x73 < param_1)) {
      return 0;
    }
    iVar3 = 0;
    puVar2 = g_bitset_00800FB0;
    while( true ) {
      iVar1 = FUN_006b0fd0((int)puVar2);
      if (iVar1 != 0) break;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + 1;
      if (0x800fdf < (int)puVar2) {
        return 0;
      }
    }
  }
  else {
    iVar3 = 0;
    puVar2 = g_bitset_00800F30;
    while( true ) {
      iVar1 = FUN_006b0fd0((int)puVar2);
      if (iVar1 != 0) break;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + 1;
      if (0x800f5f < (int)puVar2) {
        return 0;
      }
    }
  }
  return iVar3 + 1;
}

