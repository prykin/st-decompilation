
int FUN_006b4fe0(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0xe);
    if ((uVar1 != 0) && (uVar1 < 9)) {
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
    }
  }
  return iVar2;
}

