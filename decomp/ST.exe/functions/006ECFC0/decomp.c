
int __cdecl FUN_006ecfc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 100);
  iVar2 = *(int *)(param_2 + 100);
  if (((byte)*(undefined4 *)(iVar1 + 4) & 0x72) == 2) {
    if (((byte)*(undefined4 *)(iVar2 + 4) & 0x72) == 2) {
      return ((*(int *)(iVar1 + 0x2c) - *(int *)(iVar2 + 0x2c)) - *(int *)(iVar2 + 0x14)) +
             *(int *)(iVar1 + 0x14);
    }
    iVar3 = *(int *)(iVar2 + 0x14);
    iVar4 = *(int *)(iVar1 + 0x2c) + *(int *)(iVar1 + 0x14);
    if (iVar4 < iVar3) {
      return -1;
    }
    if ((iVar4 == iVar3) && (*(int *)(iVar1 + 0xc) < *(int *)(iVar2 + 0xc))) {
      return -1;
    }
    iVar4 = *(int *)(iVar1 + 0x30) / 2 + *(int *)(iVar1 + 0x14);
    if ((iVar4 <= iVar3) && ((iVar4 != iVar3 || (*(int *)(iVar1 + 0xc) <= *(int *)(iVar2 + 0xc)))))
    {
      return (((*(int *)(iVar1 + 0x50) - (*(int *)(iVar1 + 0x38) >> 2)) - *(int *)(iVar2 + 0x88)) -
             *(int *)(iVar2 + 0x50)) + *(int *)(iVar1 + 0x38);
    }
  }
  else if (((byte)*(undefined4 *)(iVar2 + 4) & 0x72) == 2) {
    iVar3 = *(int *)(iVar1 + 0x14);
    iVar4 = *(int *)(iVar2 + 0x30) / 2 + *(int *)(iVar2 + 0x14);
    if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (*(int *)(iVar1 + 0xc) < *(int *)(iVar2 + 0xc))))) {
      return -1;
    }
    iVar4 = *(int *)(iVar2 + 0x2c) + *(int *)(iVar2 + 0x14);
    if ((iVar3 <= iVar4) && ((iVar3 != iVar4 || (*(int *)(iVar1 + 0xc) <= *(int *)(iVar2 + 0xc)))))
    {
      return (((*(int *)(iVar2 + 0x38) >> 2) - *(int *)(iVar2 + 0x50)) + *(int *)(iVar1 + 0x88) +
             *(int *)(iVar1 + 0x50)) - *(int *)(iVar2 + 0x38);
    }
  }
  else {
    if (*(int *)(iVar1 + 0x14) < *(int *)(iVar2 + 0x14)) {
      return -1;
    }
    if (*(int *)(iVar1 + 0x14) == *(int *)(iVar2 + 0x14)) {
      return *(int *)(iVar1 + 0xc) - *(int *)(iVar2 + 0xc);
    }
  }
  return 1;
}

