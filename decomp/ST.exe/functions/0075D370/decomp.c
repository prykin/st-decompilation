
void FUN_0075d370(int *param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,int *param_6
                 ,int param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  piVar2 = param_1;
  iVar1 = *(int *)((int)param_1 + 0x1b2);
  if (*(int *)((int)param_1 + 0x126) <= *(int *)(iVar1 + 0x5c)) {
    local_8 = param_1[0x34];
    local_c = 0;
    if (0 < param_1[7]) {
      iVar4 = iVar1 + 0xc;
      param_1 = param_2;
      do {
        (**(code **)(iVar4 + 0x28))
                  (piVar2,local_8,*param_1 + *(int *)(iVar4 + 0x58) * *param_3 * 4,iVar4);
        param_1 = param_1 + 1;
        local_c = local_c + 1;
        iVar4 = iVar4 + 4;
        local_8 = local_8 + 0x54;
      } while (local_c < piVar2[7]);
    }
    *(undefined4 *)(iVar1 + 0x5c) = 0;
  }
  uVar5 = *(int *)((int)piVar2 + 0x126) - *(int *)(iVar1 + 0x5c);
  if (*(uint *)(iVar1 + 0x60) < uVar5) {
    uVar5 = *(uint *)(iVar1 + 0x60);
  }
  uVar3 = param_7 - *param_6;
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  (**(code **)(*(int *)((int)piVar2 + 0x1b6) + 4))
            (piVar2,iVar1 + 0xc,*(undefined4 *)(iVar1 + 0x5c),param_5 + *param_6 * 4,uVar5);
  *param_6 = *param_6 + uVar5;
  iVar4 = *(int *)(iVar1 + 0x5c) + uVar5;
  *(uint *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) - uVar5;
  *(int *)(iVar1 + 0x5c) = iVar4;
  if (*(int *)((int)piVar2 + 0x126) <= iVar4) {
    *param_3 = *param_3 + 1;
  }
  return;
}

