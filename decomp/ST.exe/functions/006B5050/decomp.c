
int FUN_006b5050(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    iVar2 = ((uint)*(ushort *)(param_1 + 0xe) * *(int *)(param_1 + 4) + 0x1f >> 3 & 0x1ffffffc) *
            *(int *)(param_1 + 8);
  }
  iVar1 = FUN_006b5010(param_1);
  return iVar1 + 0x28 + iVar2;
}

