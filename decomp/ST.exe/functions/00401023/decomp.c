
short thunk_FUN_0043e640(char param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_c [4];
  int iStack_8;
  
  iVar6 = 0;
  sVar4 = 0;
  iVar1 = *(int *)((int)&DAT_007f4e29 + param_1 * 0xa62);
  iStack_8 = *(int *)(iVar1 + 0xc);
  sVar3 = 0;
  if (0 < iStack_8) {
    do {
      sVar4 = sVar3;
      piVar2 = *(int **)(*(int *)(iVar1 + 0x1c) + iVar6 * 4);
      if (((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 0x2c))(), iVar5 == param_2)) &&
         (iVar5 = (**(code **)(*piVar2 + 0xf8))(), iVar5 != 0)) {
        if (param_3 == 0) {
LAB_0043e6d3:
          if ((param_4 == -1) ||
             (iVar5 = (**(code **)(**(int **)(*(int *)(iVar1 + 0x1c) + iVar6 * 4) + 0x6c))(),
             iVar5 == param_4)) {
            sVar4 = sVar4 + 1;
          }
        }
        else {
          switch(param_2) {
          case 0x38:
          case 0x39:
          case 0x4f:
          case 0x5e:
            if ((param_3 == 1) && (iVar5 = (**(code **)(*piVar2 + 0x88))(auStack_c), 0 < iVar5))
            goto LAB_0043e6d3;
          }
        }
      }
      iVar6 = iVar6 + 1;
      sVar3 = sVar4;
    } while (iVar6 < iStack_8);
  }
  return sVar4;
}

