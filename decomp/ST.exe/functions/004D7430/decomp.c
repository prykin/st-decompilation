
undefined4 FUN_004d7430(char param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 6;
  pbVar1 = &DAT_007f560e + param_1 * 0xa62;
  do {
    FUN_006ae110(pbVar1);
    pbVar1 = pbVar1 + 0x44;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

