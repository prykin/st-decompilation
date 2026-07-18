
int FUN_0074fa41(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = "";
  piVar3 = param_3;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == (char)*piVar3;
    pcVar2 = pcVar2 + 1;
    piVar3 = (int *)((int)piVar3 + 1);
  } while (bVar4);
  if (bVar4) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,param_4,&param_3);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_3 + 0x2c))
                        (param_3,param_1,param_2,param_5,param_6,param_7,param_8,param_9);
      (**(code **)(*param_3 + 8))(param_3);
    }
  }
  else {
    iVar1 = -0x7ffdffff;
  }
  return iVar1;
}

