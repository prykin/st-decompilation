
int __cdecl thunk_FUN_0057ba30(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iStack_24;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  short sStack_6;
  
  pvVar4 = param_1;
  iStack_24 = 0;
  iStack_1c = (param_2 + -1) / 0xc9 + 1;
  if (param_1 == (void *)0x0) {
    return 0;
  }
  thunk_FUN_00416270(param_1,(undefined2 *)((int)&param_1 + 2),(undefined2 *)((int)&param_2 + 2),
                     &sStack_6);
  iStack_18 = param_2._2_2_ + 1 + iStack_1c;
  iStack_14 = param_2._2_2_ - iStack_1c;
  iStack_c = param_1._2_2_ - iStack_1c;
  iStack_10 = param_1._2_2_ + 1 + iStack_1c;
  iVar5 = sStack_6 - iStack_1c;
  iStack_1c = sStack_6 + 1 + iStack_1c;
  if (iStack_14 < 0) {
    iStack_14 = 0;
  }
  if (iStack_c < 0) {
    iStack_c = 0;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (DAT_007fb242 < iStack_18) {
    iStack_18 = (int)DAT_007fb242;
  }
  if (DAT_007fb240 < iStack_10) {
    iStack_10 = (int)DAT_007fb240;
  }
  if (4 < iStack_1c) {
    iStack_1c = 4;
  }
  for (; iVar3 = iStack_14, iVar5 < iStack_1c; iVar5 = iVar5 + 1) {
    for (; iVar2 = iStack_c, iVar3 < iStack_18; iVar3 = iVar3 + 1) {
      for (; iVar2 < iStack_10; iVar2 = iVar2 + 1) {
        sVar8 = (short)iVar2;
        if ((((-1 < sVar8) && (sVar8 < DAT_007fb240)) && (sVar7 = (short)iVar3, -1 < sVar7)) &&
           (((sVar7 < DAT_007fb242 && (sVar6 = (short)iVar5, -1 < sVar6)) &&
            ((sVar6 < DAT_007fb244 &&
             (iVar1 = *(int *)(DAT_007fb248 +
                              ((int)sVar6 * (int)DAT_007fb246 + (int)sVar7 * (int)DAT_007fb240 +
                              (int)sVar8) * 8), iVar1 != 0)))))) {
          iStack_24 = iStack_24 + 1;
          thunk_FUN_0057b990(*(undefined4 *)((int)pvVar4 + 0x24),DAT_007e6620,iVar1,
                             (short)*(undefined4 *)((int)pvVar4 + 0x25e),
                             *(undefined2 *)((int)pvVar4 + 0x262),0xac,0x110);
        }
      }
    }
  }
  return iStack_24;
}

