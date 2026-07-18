
int __cdecl FUN_006460c0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  iVar2 = param_1 + -0x96;
  if ((-1 < iVar2) && (iVar2 < 0x2d)) {
    piVar3 = (int *)(&DAT_007e6468 + iVar2 * 0x14);
    do {
      if (*piVar3 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < 5);
    iVar1 = 5;
  }
  return iVar1;
}

