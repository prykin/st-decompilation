
int __thiscall thunk_FUN_0062fca0(void *this,int param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = STRubbishC::RubbishCreatePart(this);
  iVar4 = *(int *)((int)this + 0x1e1);
  if (iVar3 < 0) {
    if (iVar4 == 0) {
      thunk_FUN_0062f900(this);
      return 0xffff;
    }
  }
  else {
    if (4 < iVar4) {
      sVar2 = (short)((uint)*(undefined4 *)(param_1 + 0x28) >> 0x10);
      if ((sVar2 != 3) && (sVar2 != 6)) {
        iVar4 = *(int *)(param_1 + 0x20);
        puVar5 = (undefined4 *)((int)this + 0x1e5);
        iVar3 = 5;
        do {
          piVar1 = (int *)*puVar5;
          if (((piVar1 != (int *)0x0) && (piVar1[1] != 3)) && (piVar1[1] != 6)) {
            *piVar1 = *piVar1 + iVar4 / 5;
          }
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      return *(int *)((int)this + 0x1e1);
    }
    *(int *)((int)this + 0x1e1) = iVar4 + 1;
    thunk_FUN_0062ef00(this,iVar3,param_1);
    if (*(char *)((int)this + 0x1f9) != '\0') {
      iVar4 = *(int *)((int)this + iVar3 * 4 + 0x1e5);
      iVar4 = thunk_FUN_0062f080(this,iVar3,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 4))
      ;
      if (iVar4 != 0) {
        thunk_FUN_0062f0d0(this,iVar3);
        return iVar3;
      }
      if (*(int *)((int)this + 0x1e1) == 0) {
        thunk_FUN_0062f900(this);
        return 0xffff;
      }
      thunk_FUN_0062f6c0(this,iVar3);
      iVar3 = -1;
    }
  }
  return iVar3;
}

