
int FUN_005ef950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = param_1 / 0xf;
  iVar2 = param_2 / 0xf;
  if (iVar1 == iVar2) {
    return 0;
  }
  if (iVar2 < iVar1) {
    return (((iVar2 - iVar1) + 0x18 <= iVar1 - iVar2) - 1 & 0xfffffffe) + 1;
  }
  return (((iVar1 - iVar2) + 0x18 <= iVar2 - iVar1) - 1 & 2) - 1;
}

