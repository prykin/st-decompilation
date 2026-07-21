
void FUN_006b6160(char *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;

  iVar2 = 0;
  do {
    *param_1 = s_0123456789ABCDEF_007edbb0[*(byte *)(iVar2 + param_2) >> 4];
    pbVar1 = (byte *)(iVar2 + param_2);
    iVar2 = iVar2 + 1;
    param_1[1] = s_0123456789ABCDEF_007edbb0[*pbVar1 & 0xf];
    param_1 = param_1 + 2;
  } while (iVar2 < 0x10);
  return;
}

