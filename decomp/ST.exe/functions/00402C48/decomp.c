
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_00619a20(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iStack_c;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x97) < 0) {
    STJumpMineC::LoadImagJMine((STJumpMineC *)param_1,*(int *)(param_1 + 0x8f));
  }
  pvVar1 = DAT_00802a88;
  if (DAT_00802a88 == (void *)0x0) {
    if (*(char *)(param_1 + 0xc4) == '\0') {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x97);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0xcd);
    if ((((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
          (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                              (int)*(short *)(param_1 + 0xc9),(int)*(short *)(param_1 + 0xcb),
                              &iStack_8,&iStack_c), iVar2 < 0)) || ((4 < iVar2 || (iStack_8 < 0))))
        || ((*(int *)((int)pvVar1 + 0x30) <= iStack_8 ||
            ((iStack_c = (&DAT_0079aed0)[iVar2] + iStack_c, iStack_c < 0 ||
             (*(int *)((int)pvVar1 + 0x34) <= iStack_c)))))) ||
       ((*(int *)((int)pvVar1 + 0x4c) == 0 ||
        (*(char *)(iStack_c * *(int *)((int)pvVar1 + 0x30) + *(int *)((int)pvVar1 + 0x4c) + iStack_8
                  ) != '\0')))) {
      iVar2 = *(int *)(param_1 + 0xab) + 1;
      *(int *)(param_1 + 0xab) = iVar2;
      if (*(int *)(param_1 + 0xaf) <= iVar2) {
        *(undefined4 *)(param_1 + 0xab) = 0;
      }
      FUN_006ea960(DAT_00807598,*(uint *)(param_1 + 0x97),
                   (float)*(int *)(param_1 + 0x9f) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(param_1 + 0xa3) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(param_1 + 0xa7) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006ea270(DAT_00807598,*(uint *)(param_1 + 0x97),0,*(uint *)(param_1 + 0xab));
      FUN_006e96d0(DAT_00807598,*(uint *)(param_1 + 0x97));
      if (*(char *)(param_1 + 0xc4) != '\0') {
        return;
      }
      FUN_006eaaa0(DAT_00807598,*(uint *)(param_1 + 0x97),0);
      *(undefined1 *)(param_1 + 0xc4) = 1;
      return;
    }
    if (*(char *)(param_1 + 0xc4) == '\0') {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x97);
  }
  FUN_006eab60(DAT_00807598,uVar3);
  *(undefined1 *)(param_1 + 0xc4) = 0;
  return;
}

