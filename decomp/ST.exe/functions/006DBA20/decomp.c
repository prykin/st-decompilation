
uint FUN_006dba20(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((int)param_1 < 0) {
    param_1 = param_1 + ((0x167 - param_1) / 0x168) * 0x168;
  }
  if (0x167 < (int)param_1) {
    param_1 = param_1 % 0x168;
  }
  iVar1 = (int)(0x1680000 / (longlong)param_2);
  iVar2 = FUN_006db610(iVar1 / 2 + param_1 * 0x10000,iVar1);
  uVar3 = (iVar2 >> 0x10) * iVar1 >> 0x10;
  return uVar3 & (0x167 < (int)uVar3) - 1;
}

