
int FUN_006b4fa0(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0xe);
    if (uVar1 != 0) {
      if (uVar1 < 9) {
        return param_1 + 0x28 + (1 << ((byte)uVar1 & 0x1f)) * 4;
      }
      if (*(int *)(param_1 + 0x10) == 3) {
        iVar2 = 3;
      }
    }
  }
  return param_1 + 0x28 + iVar2 * 4;
}

