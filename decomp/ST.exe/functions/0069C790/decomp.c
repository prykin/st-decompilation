
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0069C8B0 -> 0069C790 @ 0069C9FA */

int FUN_0069c790(uint *param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_c;
  int local_8;

  local_c = 0;
  if (param_3 < param_1[3]) {
    local_8 = param_1[2] * param_3 + param_1[7];
  }
  else {
    local_8 = 0;
  }
  if (param_4 < param_1[3]) {
    iVar5 = param_1[2] * param_4 + param_1[7];
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
    DArrayDestroy(*(DArrayTy **)(iVar5 + 0xc));
    thunk_FUN_0069c670((DArrayTy *)param_1,param_2,param_4);
    iVar3 = local_c;
  }
  return iVar3;
}

