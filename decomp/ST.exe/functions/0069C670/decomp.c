
void FUN_0069c670(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  FUN_006b0c70(param_1,param_3);
  iVar1 = *(int *)(param_1 + 0xc);
  for (; (int)param_3 < iVar1; param_3 = param_3 + 1) {
    if ((param_3 < *(uint *)(param_1 + 0xc)) &&
       (iVar6 = *(int *)(param_1 + 8) * param_3 + *(int *)(param_1 + 0x1c), iVar6 != 0)) {
      iVar2 = *(int *)(*(int *)(iVar6 + 0xc) + 0xc);
      uVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = *(int *)(iVar6 + 0xc);
          if (uVar5 < *(uint *)(iVar3 + 0xc)) {
            piVar4 = (int *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c));
          }
          else {
            piVar4 = (int *)0x0;
          }
          uVar5 = uVar5 + 1;
          *(uint *)(param_2 + 10 + *piVar4 * 0xe) = param_3;
        } while ((int)uVar5 < iVar2);
      }
    }
  }
  return;
}

