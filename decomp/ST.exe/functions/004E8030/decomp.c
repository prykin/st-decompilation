
int FUN_004e8030(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;

  if ((param_1 < 1) || (0x28 < param_1)) {
    if ((param_1 < 0x32) || (0x73 < param_1)) {
      return 0;
    }
    iVar4 = 0;
    puVar3 = &DAT_00800fb0;
    while( true ) {
      iVar1 = FUN_006b0fd0((int)puVar3);
      if (iVar1 != 0) break;
      puVar3 = puVar3 + 0x10;
      iVar4 = iVar4 + 1;
      if (0x800fdf < (int)puVar3) {
        return 0;
      }
    }
  }
  else {
    iVar4 = 0;
    puVar2 = &DAT_00800f30;
    while( true ) {
      iVar1 = FUN_006b0fd0((int)puVar2);
      if (iVar1 != 0) break;
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 + 1;
      if (0x800f5f < (int)puVar2) {
        return 0;
      }
    }
  }
  return iVar4 + 1;
}

