
undefined4 __thiscall thunk_FUN_004c9430(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)((int)this + 0x361) != param_1) || (*(int *)((int)this + 0x375) != param_2)) {
    iVar1 = *(int *)((int)this + 0x3d4);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = *(int **)((int)this + 0x607);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar3 = 0;
    if (iVar1 < 1) {
      return 0;
    }
    while ((*piVar2 != param_1 || (piVar2[4] != param_2))) {
      iVar3 = iVar3 + 1;
      piVar2 = (int *)((int)piVar2 + 0x27);
      if (iVar1 <= iVar3) {
        return 0;
      }
    }
  }
  return 1;
}

