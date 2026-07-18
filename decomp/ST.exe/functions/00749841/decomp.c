
int FUN_00749841(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0) {
    iVar1 = -((*(int *)(param_1 + 4) * (uint)*(ushort *)(param_1 + 0xe) + 0x1f >> 3 & 0x1ffffffc) *
             iVar1);
  }
  else {
    iVar1 = (*(int *)(param_1 + 4) * (uint)*(ushort *)(param_1 + 0xe) + 0x1f >> 3 & 0x1ffffffc) *
            iVar1;
  }
  return iVar1;
}

