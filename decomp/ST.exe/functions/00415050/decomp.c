
void FUN_00415050(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_007f4d44 + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(DAT_007f4d18 + 0xc + iVar2 * 0x18);
    do {
      if ((*piVar1 < param_4) || ((param_4 == *piVar1 && (piVar1[2] <= param_5)))) break;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -6;
    } while (-1 < iVar2);
  }
  iVar3 = iVar2 + 1;
  if (iVar3 < DAT_007f4d44) {
    Library::MSVCRT::FUN_0072da70
              ((undefined4 *)(DAT_007f4d18 + (iVar2 + 4 + iVar3 * 2) * 8),
               (undefined4 *)(iVar3 * 0x18 + DAT_007f4d18),DAT_007f4d44 * 0x18 + iVar3 * -0x18);
  }
  iVar3 = iVar3 * 0x18;
  *(undefined4 *)(iVar3 + DAT_007f4d18) = param_1;
  *(undefined4 *)(iVar3 + 4 + DAT_007f4d18) = param_2;
  *(undefined4 *)(iVar3 + 8 + DAT_007f4d18) = param_3;
  *(int *)(iVar3 + 0xc + DAT_007f4d18) = param_4;
  *(int *)(iVar3 + 0x14 + DAT_007f4d18) = param_5;
  *(undefined4 *)(iVar3 + 0x10 + DAT_007f4d18) = param_6;
  DAT_007f4d44 = DAT_007f4d44 + 1;
  return;
}

