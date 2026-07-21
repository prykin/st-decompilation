
void FUN_006b61a0(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 < 0x41) {
      iVar2 = bVar1 - 0x30;
    }
    else {
      iVar2 = bVar1 - 0x37;
    }
    bVar1 = param_2[1];
    if (bVar1 < 0x41) {
      iVar3 = bVar1 - 0x30;
    }
    else {
      iVar3 = bVar1 - 0x37;
    }
    if ((((iVar2 < 0) || (0xf < iVar2)) || (iVar3 < 0)) || (0xf < iVar3)) break;
    param_2 = param_2 + 2;
    *(byte *)(iVar4 + (int)param_1) = (char)iVar2 << 4 | (byte)iVar3;
    iVar4 = iVar4 + 1;
    if (0xf < iVar4) {
      return;
    }
  }
  if (iVar4 < 0x10) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

