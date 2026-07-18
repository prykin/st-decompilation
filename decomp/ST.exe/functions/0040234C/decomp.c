
int __thiscall thunk_FUN_0060d660(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iStack_14;
  int iStack_10;
  int iStack_8;
  
  iVar2 = *(int *)((int)this + 0x23c);
  uVar5 = iVar2 * 0x44;
  iVar1 = FUN_006aac70(uVar5);
  *(int *)((int)this + 0x244) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = thunk_FUN_0062ca00();
  piVar6 = param_1;
  piVar7 = *(int **)((int)this + 0x244);
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)piVar7 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  iStack_8 = 0;
  iStack_10 = 0;
  piVar6 = param_1 + iVar2 * 0x11;
  if (0 < *(int *)((int)this + 0x23c)) {
    iStack_14 = 0;
    param_1 = piVar6;
    do {
      iVar2 = iStack_14 + *(int *)((int)this + 0x244);
      if (((*(int *)(iVar2 + 0x40) != 0) || (*(int *)(iVar2 + 8) != 0)) && (*piVar6 != 0)) {
        piVar6 = piVar6 + 1;
        if (*(int *)(iVar2 + 0x40) != 0) {
          iVar2 = thunk_FUN_0062ca70((undefined4 *)(iVar2 + 0x40),piVar6);
          if (iVar2 != 0) {
            iStack_8 = iStack_8 + iVar1;
          }
          piVar6 = (int *)((int)piVar6 + iVar1);
        }
        if (*(int *)(iStack_14 + 8 + *(int *)((int)this + 0x244)) != 0) {
          iVar2 = FUN_006aac70(*(int *)(iStack_14 + *(int *)((int)this + 0x244) + 4) << 2);
          *(int *)(iStack_14 + 8 + *(int *)((int)this + 0x244)) = iVar2;
          piVar7 = *(int **)(iStack_14 + *(int *)((int)this + 0x244) + 8);
          for (uVar3 = *(uint *)(iStack_14 + 4 + *(int *)((int)this + 0x244)) & 0x3fffffff;
              uVar3 != 0; uVar3 = uVar3 - 1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(char *)piVar7 = (char)*piVar6;
            piVar6 = (int *)((int)piVar6 + 1);
            piVar7 = (int *)((int)piVar7 + 1);
          }
        }
        piVar6 = (int *)((int)param_1 + *param_1);
        param_1 = piVar6;
      }
      iStack_10 = iStack_10 + 1;
      iStack_14 = iStack_14 + 0x44;
    } while (iStack_10 < *(int *)((int)this + 0x23c));
  }
  return uVar5 + iStack_8;
}

