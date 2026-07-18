
void FUN_007599d0(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = param_2[2];
  iVar3 = param_2[6] * iVar1;
  iVar4 = param_2[4];
  if (0 < iVar4) {
    do {
      iVar2 = iVar4 - iVar5;
      if (param_2[5] < iVar4 - iVar5) {
        iVar2 = param_2[5];
      }
      iVar4 = param_2[7] - (param_2[6] + iVar5);
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      iVar4 = param_2[1] - (param_2[6] + iVar5);
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      if (iVar2 < 1) {
        return;
      }
      iVar2 = iVar2 * iVar1;
      if (param_3 == 0) {
        (*(code *)param_2[0xc])
                  (param_1,param_2 + 0xc,*(undefined4 *)(*param_2 + iVar5 * 4),iVar3,iVar2);
      }
      else {
        (*(code *)param_2[0xd])
                  (param_1,param_2 + 0xc,*(undefined4 *)(*param_2 + iVar5 * 4),iVar3,iVar2);
      }
      iVar3 = iVar3 + iVar2;
      iVar5 = iVar5 + param_2[5];
      iVar4 = param_2[4];
    } while (iVar5 < iVar4);
  }
  return;
}

