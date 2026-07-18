
int __thiscall FUN_0062fea0(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *local_8;
  
  if ((((*(int *)(DAT_00807598 + 0x48) <= param_1) && (param_1 <= *(int *)(DAT_00807598 + 0x58))) &&
      (*(int *)(DAT_00807598 + 0x44) <= param_2)) && (param_2 <= *(int *)(DAT_00807598 + 0x54))) {
    local_8 = this;
    iVar2 = FUN_006ddbd0();
    pvVar1 = DAT_00802a88;
    if (iVar2 == 0) {
      return 0;
    }
    if (DAT_00802a88 == (void *)0x0) {
      return iVar2;
    }
    iVar3 = *(int *)((int)this + 0x1dd);
    if (DAT_0080874d == -1) {
      return iVar2;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return iVar2;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                       *(int *)((int)this + 0x1d5),*(int *)((int)this + 0x1d9),&param_2,
                       (int *)&local_8);
    if (iVar3 < 0) {
      return iVar2;
    }
    if (4 < iVar3) {
      return iVar2;
    }
    if (param_2 < 0) {
      return iVar2;
    }
    if (*(int *)((int)pvVar1 + 0x30) <= param_2) {
      return iVar2;
    }
    iVar3 = (&DAT_0079aed0)[iVar3] + (int)local_8;
    if (iVar3 < 0) {
      return iVar2;
    }
    if (*(int *)((int)pvVar1 + 0x34) <= iVar3) {
      return iVar2;
    }
    if (*(int *)((int)pvVar1 + 0x4c) == 0) {
      return iVar2;
    }
    if (*(char *)(iVar3 * *(int *)((int)pvVar1 + 0x30) + *(int *)((int)pvVar1 + 0x4c) + param_2) !=
        '\0') {
      return iVar2;
    }
  }
  return 0;
}

