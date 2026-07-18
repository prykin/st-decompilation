
int FUN_006acf90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 - param_1 >> 0x1f;
  iVar2 = (param_3 - param_1 ^ uVar3) - uVar3;
  uVar3 = param_4 - param_2 >> 0x1f;
  iVar1 = (param_4 - param_2 ^ uVar3) - uVar3;
  if (iVar1 <= iVar2) {
    return (iVar1 + iVar2 * 2) / 2;
  }
  return (iVar2 + iVar1 * 2) / 2;
}

