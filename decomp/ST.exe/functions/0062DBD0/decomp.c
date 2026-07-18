
uint __thiscall FUN_0062dbd0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  iVar3 = *(int *)((int)this + param_1 * 4 + 0x50);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  uVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
      if (((uVar4 < *(uint *)(iVar1 + 0xc)) &&
          (piVar2 = (int *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c)),
          piVar2 != (int *)0x0)) && (*piVar2 == param_2)) {
        piVar2 = piVar2 + 4;
        local_c = 3;
        do {
          if ((int *)*piVar2 != (int *)0x0) {
            thunk_FUN_0062db10((int *)*piVar2);
            *piVar2 = 0;
          }
          piVar2 = piVar2 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        FUN_006b0c70(*(int *)((int)this + param_1 * 4 + 0x50),uVar4);
        local_8 = uVar4;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar3);
    if ((-1 < (int)local_8) && (iVar3 = *(int *)((int)this + param_1 * 4 + 0x70), iVar3 != 0)) {
      uVar4 = 0;
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar5 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (((bVar5) && (iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c), iVar3 != 0)
              ) && ((int)local_8 < *(int *)(iVar3 + 4))) {
            *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
          }
          uVar4 = uVar4 + 1;
          iVar3 = *(int *)((int)this + param_1 * 4 + 0x70);
          bVar5 = uVar4 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
      }
    }
  }
  return local_8;
}

