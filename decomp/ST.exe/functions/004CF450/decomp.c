
undefined4 __thiscall FUN_004cf450(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x361) == 1) {
    *(int *)((int)this + 0x371) = param_1;
  }
  if (((*(int *)((int)this + 0x3d4) != 0) && (*(int *)((int)this + 0x607) != 0)) &&
     (iVar3 = 0, 0 < *(int *)((int)this + 0x3d4))) {
    iVar2 = 0;
    do {
      piVar1 = (int *)(*(int *)((int)this + 0x607) + iVar2);
      if (*piVar1 == 1) {
        piVar1[3] = param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x27;
    } while (iVar3 < *(int *)((int)this + 0x3d4));
    return 0;
  }
  return 0;
}

