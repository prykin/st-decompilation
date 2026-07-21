
int FUN_006db820(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar2 = 0;
  bVar4 = param_1 < 0;
  if (bVar4) {
    param_1 = -param_1;
  }
  iVar3 = 0x5a;
  do {
    iVar1 = (iVar3 + iVar2) / 2;
    if (param_1 == *(int *)(&DAT_007ee584 + iVar1 * 4)) goto LAB_006db87f;
    if (*(int *)(&DAT_007ee584 + iVar1 * 4) < param_1) {
      iVar2 = iVar1;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
  } while (iVar2 < iVar1 + -1);
  if (param_1 - *(int *)(&DAT_007ee584 + iVar2 * 4) <= *(int *)(&DAT_007ee584 + iVar1 * 4) - param_1
     ) {
    iVar1 = iVar2;
  }
LAB_006db87f:
  if (bVar4) {
    iVar1 = 0xb4 - iVar1;
  }
  return iVar1;
}

