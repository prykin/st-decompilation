
int __fastcall thunk_FUN_00604350(int param_1)

{
  int iVar1;
  short sVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_14 = *(int *)(param_1 + 0x1f1);
  sVar2 = (short)(iStack_14 >> 0x1f);
  if (iStack_14 < 0) {
    iVar5 = (int)(short)(((short)(iStack_14 / 0xc9) + sVar2) -
                        (short)((longlong)iStack_14 * 0x28c1979 >> 0x3f));
    iStack_c = iVar5 + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iStack_14 / 0xc9) + sVar2) -
                        (short)((longlong)iStack_14 * 0x28c1979 >> 0x3f));
    iStack_c = iVar5;
  }
  iVar1 = *(int *)(param_1 + 0x1f5);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    iStack_10 = iVar6 + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    iStack_10 = iVar6;
  }
  iVar7 = *(int *)(param_1 + 0x1f9);
  sVar2 = (short)(iVar7 >> 0x1f);
  if (iVar7 < 0) {
    iStack_8 = (short)(((short)(iVar7 / 200) + sVar2) -
                      (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iStack_8 = (int)(short)(((short)(iVar7 / 200) + sVar2) -
                           (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
  }
  if (iVar1 < 0) {
    iVar6 = iVar6 + -1;
  }
  if (iStack_14 < 0) {
    iVar5 = iVar5 + -1;
  }
  if ((((*(int *)(DAT_00807598 + 0x48) <= iVar5 + 3) &&
       (iVar5 + -3 <= *(int *)(DAT_00807598 + 0x58))) &&
      (*(int *)(DAT_00807598 + 0x44) <= iVar6 + 3)) && (iVar6 + -3 <= *(int *)(DAT_00807598 + 0x54))
     ) {
    iVar6 = FUN_006ddbd0();
    iVar1 = iStack_c;
    iVar5 = iStack_10;
    pvVar3 = DAT_00802a88;
    if ((iVar6 != 0) && (DAT_00802a88 != (void *)0x0)) {
      iVar7 = iStack_10 + -3;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iStack_c = iStack_c + -3;
      if (iStack_c < 0) {
        iStack_c = 0;
      }
      iStack_14 = iStack_10 + 4;
      if ((int)DAT_007fb242 < iStack_10 + 4) {
        iStack_14 = (int)DAT_007fb242;
      }
      iStack_10 = iVar1 + 4;
      if (DAT_007fb240 < iStack_10) {
        iStack_10 = (int)DAT_007fb240;
      }
      if ((((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
            ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar1,iVar5
                                 ,&iStack_18,&iStack_1c), pvVar4 = DAT_00802a88, iStack_8 < 0 ||
             ((((4 < iStack_8 || (iStack_18 < 0)) || (*(int *)((int)pvVar3 + 0x30) <= iStack_18)) ||
              ((iVar5 = (&DAT_0079aed0)[iStack_8] + iStack_1c, iVar5 < 0 ||
               (*(int *)((int)pvVar3 + 0x34) <= iVar5)))))))) || (*(int *)((int)pvVar3 + 0x4c) == 0)
           ) || ((*(char *)(iVar5 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                           iStack_18) != '\0' || (DAT_0080874d == -1)))) ||
         (((((*(int *)((int)DAT_00802a88 + 0xf8) == 0 ||
             (((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_c,
                                   iVar7,&iStack_1c,&iStack_18), pvVar3 = DAT_00802a88,
               iStack_1c < 0 || (*(int *)((int)pvVar4 + 0x30) <= iStack_1c)) ||
              (iVar5 = (&DAT_0079aed0)[iStack_8] + iStack_18, iVar5 < 0)))) ||
            (((*(int *)((int)pvVar4 + 0x34) <= iVar5 || (*(int *)((int)pvVar4 + 0x4c) == 0)) ||
             (*(char *)(iVar5 * *(int *)((int)pvVar4 + 0x30) + *(int *)((int)pvVar4 + 0x4c) +
                       iStack_1c) != '\0')))) ||
           ((((DAT_0080874d == -1 || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
             ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_10,
                                  iVar7,&iStack_1c,&iStack_18), iVar1 = iStack_8, iVar5 = iStack_14,
              pvVar4 = DAT_00802a88, iStack_1c < 0 ||
              (((*(int *)((int)pvVar3 + 0x30) <= iStack_1c ||
                (iVar7 = (&DAT_0079aed0)[iStack_8] + iStack_18, iVar7 < 0)) ||
               (*(int *)((int)pvVar3 + 0x34) <= iVar7)))))) ||
            ((*(int *)((int)pvVar3 + 0x4c) == 0 ||
             (*(char *)(iVar7 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                       iStack_1c) != '\0')))))) ||
          ((DAT_0080874d == -1 ||
           (((*(int *)((int)DAT_00802a88 + 0xf8) == 0 ||
             (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_c,
                                 iStack_14,&iStack_1c,&iStack_18), iStack_1c < 0)) ||
            ((*(int *)((int)pvVar4 + 0x30) <= iStack_1c ||
             ((((iStack_18 = (&DAT_0079aed0)[iVar1] + iStack_18, iStack_18 < 0 ||
                (*(int *)((int)pvVar4 + 0x34) <= iStack_18)) || (*(int *)((int)pvVar4 + 0x4c) == 0))
              || ((*(char *)(iStack_18 * *(int *)((int)pvVar4 + 0x30) + *(int *)((int)pvVar4 + 0x4c)
                            + iStack_1c) != '\0' ||
                  (iVar5 = thunk_FUN_005f1d80(DAT_00802a88,iStack_10,iVar5,iStack_8), iVar5 == 1))))
             )))))))))) {
        return 1;
      }
    }
    return iVar6;
  }
  return 0;
}

