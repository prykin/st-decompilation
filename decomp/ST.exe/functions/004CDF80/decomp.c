
undefined4 __thiscall FUN_004cdf80(void *this,int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x524)) {
    piVar2 = (int *)((int)this + 0x4d0);
    while (*piVar2 != param_1) {
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)((int)this + 0x524) <= iVar3) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

