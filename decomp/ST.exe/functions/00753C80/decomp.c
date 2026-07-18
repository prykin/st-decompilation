
int FUN_00753c80(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = -1;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x34);
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar5 = iVar4;
      sVar1 = *(short *)(*(int *)(param_1 + 0xc) + 0x34);
      if (sVar1 == 0) {
        iVar4 = (**(code **)(*(int *)(param_1 + 0xc) + 8))(iVar5 + 0x18 + iVar3 + iVar2);
      }
      else {
        iVar4 = (int)sVar1;
      }
      iVar4 = iVar5 + 8 + iVar4;
    } while (iVar4 < param_2);
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x44 + *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8) = iVar5;
  return iVar5;
}

