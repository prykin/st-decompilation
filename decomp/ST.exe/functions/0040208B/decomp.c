
int __thiscall thunk_FUN_00696400(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_8;
  
  iVar1 = *(int *)((int)this + 0x5833);
  iStack_8 = 0;
  if (iVar1 != 0) {
    for (iVar3 = param_1 / iVar1 + -1; iVar3 < param_1 / iVar1 + 2; iVar3 = iVar3 + 1) {
      if ((-1 < iVar3) && (iVar3 < *(int *)((int)this + 0x5837))) {
        iVar2 = param_1 % iVar1 + -1;
        iVar4 = param_1 % iVar1 + 2;
        if (iVar2 < iVar4) {
          iVar5 = iVar3 * *(int *)((int)this + 0x5833) + iVar2;
          piVar6 = (int *)(param_2 + iStack_8 * 4);
          do {
            if ((((-1 < iVar2) && (iVar2 < *(int *)((int)this + 0x5833))) && (iVar5 != param_1)) &&
               (iVar5 < *(int *)((int)this + 0x582f))) {
              *piVar6 = iVar5;
              iStack_8 = iStack_8 + 1;
              piVar6 = piVar6 + 1;
            }
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar2 < iVar4);
        }
      }
    }
    return iStack_8;
  }
  return 0;
}

