
undefined4 __fastcall thunk_FUN_0061e110(int param_1)

{
  short sVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  sVar1 = *(short *)(param_1 + 0x30);
  uStack_c = 0;
  if (sVar1 < 0) {
    iStack_8 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                      (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iStack_8 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                           (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = *(short *)(param_1 + 0x32);
  if (sVar1 < 0) {
    iVar5 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = *(short *)(param_1 + 0x34);
  if (sVar1 < 0) {
    iStack_10 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                       (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iStack_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                            (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
  }
  sVar1 = *(short *)(param_1 + 0x36);
  if (sVar1 < 0) {
    iVar6 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar6 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = *(short *)(param_1 + 0x38);
  if (sVar1 < 0) {
    iVar7 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar7 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = *(short *)(param_1 + 0x3a);
  if (sVar1 < 0) {
    iStack_18 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                       (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iStack_18 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                            (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
  }
  iStack_14 = iVar6;
  if (((((((*(int *)(DAT_00807598 + 0x48) <= iStack_8 + 1) &&
          (iStack_8 + -1 <= *(int *)(DAT_00807598 + 0x58))) &&
         (*(int *)(DAT_00807598 + 0x44) <= iVar5 + 1)) &&
        ((iVar5 + -1 <= *(int *)(DAT_00807598 + 0x54) && (iVar4 = FUN_006ddbd0(), iVar4 != 0)))) ||
       (((*(int *)(DAT_00807598 + 0x48) <= iVar6 + 1 &&
         ((iVar6 + -1 <= *(int *)(DAT_00807598 + 0x58) &&
          (*(int *)(DAT_00807598 + 0x44) <= iVar7 + 1)))) &&
        ((iVar7 + -1 <= *(int *)(DAT_00807598 + 0x54) && (iVar6 = FUN_006ddbd0(), iVar6 != 0))))))
      && (((((pvVar2 = DAT_00802a88, uStack_c = 1, DAT_00802a88 != (void *)0x0 &&
             (DAT_0080874d != -1)) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
           (((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_8,
                                 iVar5,&iStack_8,&iStack_1c), pvVar3 = DAT_00802a88, -1 < iStack_10
             && (iStack_10 < 5)) &&
            ((-1 < iStack_8 &&
             ((iStack_8 < *(int *)((int)pvVar2 + 0x30) &&
              (iVar5 = (&DAT_0079aed0)[iStack_10] + iStack_1c, -1 < iVar5)))))))) &&
          (iVar5 < *(int *)((int)pvVar2 + 0x34))))) &&
     (((((((*(int *)((int)pvVar2 + 0x4c) != 0 &&
           (*(char *)(iVar5 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) + iStack_8
                     ) == '\0')) && (DAT_0080874d != -1)) &&
         ((*(int *)((int)DAT_00802a88 + 0xf8) != 0 &&
          (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_14,
                              iVar7,&iStack_1c,&iStack_14), -1 < iStack_18)))) &&
        ((iStack_18 < 5 && ((-1 < iStack_1c && (iStack_1c < *(int *)((int)pvVar3 + 0x30))))))) &&
       (iStack_14 = (&DAT_0079aed0)[iStack_18] + iStack_14, -1 < iStack_14)) &&
      (((iStack_14 < *(int *)((int)pvVar3 + 0x34) && (*(int *)((int)pvVar3 + 0x4c) != 0)) &&
       (*(char *)(iStack_14 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                 iStack_1c) == '\0')))))) {
    uStack_c = 0;
  }
  return uStack_c;
}

