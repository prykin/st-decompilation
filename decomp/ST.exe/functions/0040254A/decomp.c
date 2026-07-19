
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_005f4680(int param_1)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x8f) < 0) {
    thunk_FUN_005f35f0(*(int *)(param_1 + 0x87));
  }
  pvVar2 = DAT_00802a88;
  if (DAT_00802a88 != (void *)0x0) {
    iVar5 = *(int *)(param_1 + 0x9b);
    sVar1 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iStack_8 = (short)(((short)(iVar5 / 200) + sVar1) -
                        (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iStack_8 = (int)(short)(((short)(iVar5 / 200) + sVar1) -
                             (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)(param_1 + 0x97);
    sVar1 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar1) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar1) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar3 = *(int *)(param_1 + 0x93);
    sVar1 = (short)(iVar3 >> 0x1f);
    if (iVar3 < 0) {
      iVar3 = (short)(((short)(iVar3 / 0xc9) + sVar1) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar3 = (int)(short)(((short)(iVar3 / 0xc9) + sVar1) -
                          (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
    }
    if ((((((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
          (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar3,iVar5,
                              &iStack_c,&iStack_10), -1 < iStack_8)) &&
         ((iStack_8 < 5 && (-1 < iStack_c)))) &&
        ((iStack_c < *(int *)((int)pvVar2 + 0x30) &&
         ((iStack_10 = (&DAT_0079aed0)[iStack_8] + iStack_10, -1 < iStack_10 &&
          (iStack_10 < *(int *)((int)pvVar2 + 0x34))))))) &&
       ((*(int *)((int)pvVar2 + 0x4c) != 0 &&
        (*(char *)(iStack_10 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) +
                  iStack_c) == '\0')))) {
      if (*(char *)(param_1 + 0xc4) == '\0') {
        return;
      }
      FUN_006eab60(DAT_00807598,*(uint *)(param_1 + 0x8f));
      *(undefined1 *)(param_1 + 0xc4) = 0;
      return;
    }
    iVar5 = *(int *)(param_1 + 0xab) + 1;
    *(int *)(param_1 + 0xab) = iVar5;
    if (*(int *)(param_1 + 0xaf) <= iVar5) {
      *(undefined4 *)(param_1 + 0xab) = 0;
    }
    FUN_006ea960(DAT_00807598,*(uint *)(param_1 + 0x8f),
                 (float)*(int *)(param_1 + 0x93) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(param_1 + 0x97) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(param_1 + 0x9b) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006ea270(DAT_00807598,*(uint *)(param_1 + 0x8f),0,*(uint *)(param_1 + 0xab));
    iStack_8 = FUN_006acf0d(*(int *)(param_1 + 0x9f),*(int *)(param_1 + 0xa3),
                            *(int *)(param_1 + 0xa7),*(int *)(param_1 + 0x93),
                            *(int *)(param_1 + 0x97),*(int *)(param_1 + 0x9b));
    if (iStack_8 == 0) {
      iVar5 = *(int *)(param_1 + 0x93);
      iVar3 = *(int *)(param_1 + 0x97);
      iVar4 = *(int *)(param_1 + 0x9b);
    }
    else {
      iVar5 = ((*(int *)(param_1 + 0x9f) - *(int *)(param_1 + 0x93)) * 0x28) / iStack_8 +
              *(int *)(param_1 + 0x93);
      iVar3 = ((*(int *)(param_1 + 0xa3) - *(int *)(param_1 + 0x97)) * 0x28) / iStack_8 +
              *(int *)(param_1 + 0x97);
      iVar4 = ((*(int *)(param_1 + 0xa7) - *(int *)(param_1 + 0x9b)) * 0x28) / iStack_8 +
              *(int *)(param_1 + 0x9b);
    }
    TraksClassTy::TraksCreate(DAT_00802a7c,1,1,0,iVar5,iVar3,iVar4,0,0,0,0,0,0,-1,0,0);
    if (*(char *)(param_1 + 0xc4) == '\0') {
      FUN_006eaaa0(DAT_00807598,*(uint *)(param_1 + 0x8f),0);
      *(undefined1 *)(param_1 + 0xc4) = 1;
      return;
    }
  }
  return;
}

