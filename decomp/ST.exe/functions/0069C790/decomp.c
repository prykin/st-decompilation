
int FUN_0069c790(int param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (param_3 < *(uint *)(param_1 + 0xc)) {
    local_8 = *(int *)(param_1 + 8) * param_3 + *(int *)(param_1 + 0x1c);
  }
  else {
    local_8 = 0;
  }
  if (param_4 < *(uint *)(param_1 + 0xc)) {
    iVar5 = *(int *)(param_1 + 8) * param_4 + *(int *)(param_1 + 0x1c);
  }
  else {
    iVar5 = 0;
  }
  iVar3 = 0;
  if ((local_8 != 0) && (iVar5 != 0)) {
    iVar3 = *(int *)(iVar5 + 0xc);
    uVar4 = 0;
    uVar2 = *(uint *)(iVar3 + 0xc);
    if (0 < (int)uVar2) {
      do {
        if (uVar4 < uVar2) {
          piVar1 = (int *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
        }
        else {
          piVar1 = (int *)0x0;
        }
        iVar3 = *piVar1;
        uVar2 = thunk_FUN_0069c710(param_2,iVar3,local_8);
        if (-1 < (int)uVar2) {
          *(uint *)(param_2 + 10 + iVar3 * 0xe) = param_3;
          local_c = local_c + 1;
        }
        iVar3 = *(int *)(iVar5 + 0xc);
        uVar4 = uVar4 + 1;
        uVar2 = *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)uVar2);
    }
    FUN_006ae110(*(byte **)(iVar5 + 0xc));
    thunk_FUN_0069c670(param_1,param_2,param_4);
    iVar3 = local_c;
  }
  return iVar3;
}

