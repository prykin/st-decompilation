
short thunk_FUN_0043e460(char param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  sVar5 = 0;
  iVar1 = *(int *)((int)&DAT_007f4e29 + param_1 * 0xa62);
  iVar2 = *(int *)(iVar1 + 0xc);
  sVar4 = 0;
  if (0 < iVar2) {
    do {
      sVar5 = sVar4;
      piVar3 = *(int **)(*(int *)(iVar1 + 0x1c) + iVar7 * 4);
      if ((piVar3 != (int *)0x0) && (iVar6 = (**(code **)(*piVar3 + 0xf8))(), iVar6 == 1)) {
        sVar5 = sVar5 + 1;
      }
      iVar7 = iVar7 + 1;
      sVar4 = sVar5;
    } while (iVar7 < iVar2);
  }
  return sVar5;
}

