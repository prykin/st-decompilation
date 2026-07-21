
void FUN_0074b6b7(int *param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;

  iVar2 = 0x10;
  bVar5 = true;
  pcVar3 = param_2;
  pcVar4 = &DAT_007a1230;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    piVar1 = param_1 + 0x32;
  }
  else {
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_2;
    pcVar4 = &DAT_007a1b40;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      FUN_00749ca4(param_1,param_2,param_3);
      return;
    }
    piVar1 = param_1 + 0x33;
  }
  FUN_0074b8a6((int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar1),param_3);
  return;
}

