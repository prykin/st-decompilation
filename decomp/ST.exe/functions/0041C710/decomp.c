
undefined4 __fastcall FUN_0041c710(int param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  pvVar2 = DAT_00802a88;
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (DAT_00802a88 == (void *)0x0) {
      return 1;
    }
    iVar4 = (int)*(short *)(param_1 + 0x5f);
    if (DAT_0080874d == -1) {
      return 1;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return 1;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                       (int)*(short *)(param_1 + 0x5b),(int)*(short *)(param_1 + 0x5d),&local_8,
                       &local_c);
    if (iVar4 < 0) {
      return 1;
    }
    if (4 < iVar4) {
      return 1;
    }
    if (local_8 < 0) {
      return 1;
    }
    if (*(int *)((int)pvVar2 + 0x30) <= local_8) {
      return 1;
    }
    local_c = (&DAT_0079aed0)[iVar4] + local_c;
    if (local_c < 0) {
      return 1;
    }
    if (*(int *)((int)pvVar2 + 0x34) <= local_c) {
      return 1;
    }
    if (*(int *)((int)pvVar2 + 0x4c) == 0) {
      return 1;
    }
    cVar1 = *(char *)(local_c * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) +
                     local_8);
  }
  else {
    if (DAT_00802a88 == (void *)0x0) {
      return 0;
    }
    iVar4 = (int)*(short *)(param_1 + 0x5f);
    if ((((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
          (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                              (int)*(short *)(param_1 + 0x5b),(int)*(short *)(param_1 + 0x5d),
                              &local_c,&local_8), pvVar3 = DAT_00802a88, iVar4 < 0)) ||
         ((4 < iVar4 || (local_c < 0)))) || (*(int *)((int)pvVar2 + 0x30) <= local_c)) ||
       (((iVar4 = (&DAT_0079aed0)[iVar4] + local_8, iVar4 < 0 ||
         (*(int *)((int)pvVar2 + 0x34) <= iVar4)) ||
        ((*(int *)((int)pvVar2 + 0x4c) == 0 ||
         (*(char *)(iVar4 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) + local_c)
          != '\0')))))) {
      return 1;
    }
    iVar4 = (int)*(short *)(param_1 + 0x5f);
    if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
        (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                            *(short *)(param_1 + 0x5b) + 1,(int)*(short *)(param_1 + 0x5d),&local_c,
                            &local_8), pvVar2 = DAT_00802a88, iVar4 < 0)) ||
       (((4 < iVar4 || (local_c < 0)) ||
        ((((*(int *)((int)pvVar3 + 0x30) <= local_c ||
           ((iVar4 = (&DAT_0079aed0)[iVar4] + local_8, iVar4 < 0 ||
            (*(int *)((int)pvVar3 + 0x34) <= iVar4)))) || (*(int *)((int)pvVar3 + 0x4c) == 0)) ||
         (*(char *)(iVar4 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) + local_c)
          != '\0')))))) {
      return 1;
    }
    iVar4 = (int)*(short *)(param_1 + 0x5f);
    if (((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
         (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                             (int)*(short *)(param_1 + 0x5b),*(short *)(param_1 + 0x5d) + 1,&local_c
                             ,&local_8), pvVar3 = DAT_00802a88, iVar4 < 0)) ||
        (((4 < iVar4 || (local_c < 0)) ||
         ((*(int *)((int)pvVar2 + 0x30) <= local_c ||
          ((iVar4 = (&DAT_0079aed0)[iVar4] + local_8, iVar4 < 0 ||
           (*(int *)((int)pvVar2 + 0x34) <= iVar4)))))))) ||
       ((*(int *)((int)pvVar2 + 0x4c) == 0 ||
        (*(char *)(iVar4 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) + local_c) !=
         '\0')))) {
      return 1;
    }
    iVar4 = (int)*(short *)(param_1 + 0x5f);
    if (DAT_0080874d == -1) {
      return 1;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return 1;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                       *(short *)(param_1 + 0x5b) + 1,*(short *)(param_1 + 0x5d) + 1,&local_c,
                       &local_8);
    if (iVar4 < 0) {
      return 1;
    }
    if (4 < iVar4) {
      return 1;
    }
    if (local_c < 0) {
      return 1;
    }
    if (*(int *)((int)pvVar3 + 0x30) <= local_c) {
      return 1;
    }
    local_8 = (&DAT_0079aed0)[iVar4] + local_8;
    if (local_8 < 0) {
      return 1;
    }
    if (*(int *)((int)pvVar3 + 0x34) <= local_8) {
      return 1;
    }
    if (*(int *)((int)pvVar3 + 0x4c) == 0) {
      return 1;
    }
    cVar1 = *(char *)(local_8 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                     local_c);
  }
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}

