
undefined4 __thiscall FUN_007489f8(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 **ppuVar6;
  int **ppiVar7;
  int *apiStack_38 [2];
  int iStack_30;
  undefined4 *apuStack_2c [4];
  undefined1 *puStack_1c;
  int **ppiStack_18;
  int *local_8;
  
  apiStack_38[1] = *(int **)((int)this + 0x74);
  local_8 = this;
  if (apiStack_38[1] == (int *)0x0) {
    apuStack_2c[3] = *(undefined4 **)((int)this + 0x18);
    uVar2 = 0x80040216;
    if (apuStack_2c[3] != (undefined4 *)0x0) {
      ppiStack_18 = &local_8;
      puStack_1c = &DAT_007a1b40;
      apuStack_2c[2] = (undefined4 *)0x748a46;
      (**(code **)*apuStack_2c[3])();
      piVar1 = local_8;
      if (local_8 != (int *)0x0) {
        if (*(int *)((int)this + 0x70) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 0x70) + 0xc;
        }
        iVar4 = *local_8;
        ppiVar7 = apiStack_38;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppiVar7 = (int *)*param_1;
          param_1 = param_1 + 1;
          ppiVar7 = ppiVar7 + 1;
        }
        uVar2 = (**(code **)(iVar4 + 0xc))(piVar1,iVar3);
        (**(code **)(*local_8 + 8))(local_8);
      }
    }
  }
  else {
    if (*(int *)((int)this + 0x70) == 0) {
      iStack_30 = 0;
    }
    else {
      iStack_30 = *(int *)((int)this + 0x70) + 0xc;
    }
    iVar3 = *apiStack_38[1];
    ppuVar6 = apuStack_2c;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppuVar6 = (undefined4 *)*param_1;
      param_1 = param_1 + 1;
      ppuVar6 = ppuVar6 + 1;
    }
    apiStack_38[0] = (int *)0x748a2a;
    uVar2 = (**(code **)(iVar3 + 0xc))();
  }
  return uVar2;
}

