
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_0060a4b0(int param_1)

{
  int iVar1;
  short sVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_18 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x234) + 0xc);
    uStack_14 = 0;
    iStack_10 = param_1;
    if (0 < iVar1) {
      do {
        pvVar3 = DAT_00802a88;
        iVar6 = *(int *)(param_1 + 0x234);
        if ((((uStack_14 < *(uint *)(iVar6 + 0xc)) &&
             (iVar6 = *(int *)(iVar6 + 8) * uStack_14 + *(int *)(iVar6 + 0x1c), iVar6 != 0)) &&
            (-1 < *(int *)(iVar6 + 0x3c))) && (*(int *)(iVar6 + 4) != -1)) {
          iStack_c = 1;
          if (DAT_00802a88 != (void *)0x0) {
            iVar5 = *(int *)(iVar6 + 0x14);
            sVar2 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iStack_8 = (short)(((short)(iVar5 / 200) + sVar2) -
                                (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              iStack_8 = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                                     (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
            }
            iVar5 = *(int *)(iVar6 + 0x10);
            sVar2 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            iVar4 = *(int *)(iVar6 + 0xc);
            sVar2 = (short)(iVar4 >> 0x1f);
            if (iVar4 < 0) {
              iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) -
                             (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                                  (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
            }
            if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
                ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar4,
                                     iVar5,&iStack_1c,&iStack_20), iStack_8 < 0 ||
                 ((4 < iStack_8 || (iStack_1c < 0)))))) ||
               ((*(int *)((int)pvVar3 + 0x30) <= iStack_1c ||
                ((((iVar5 = (&DAT_0079aed0)[iStack_8] + iStack_20, iVar5 < 0 ||
                   (*(int *)((int)pvVar3 + 0x34) <= iVar5)) || (*(int *)((int)pvVar3 + 0x4c) == 0))
                 || (*(char *)(iVar5 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                              iStack_1c) != '\0')))))) {
              if (*(int *)(iVar6 + 4) == 0) {
                FUN_006eaaa0(DAT_00807598,*(uint *)(iVar6 + 0x3c),0);
                *(undefined4 *)(iVar6 + 4) = 1;
              }
            }
            else if (*(int *)(iVar6 + 4) == 1) {
              FUN_006eab60(DAT_00807598,*(uint *)(iVar6 + 0x3c));
              *(undefined4 *)(iVar6 + 4) = 0;
              iStack_c = 0;
            }
          }
          param_1 = iStack_10;
          if (*(int *)(iVar6 + 0x28) != 0) {
            if (*(int *)(iVar6 + 0x24) < *(int *)(iVar6 + 0x28)) {
              *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 1;
            }
            else {
              *(undefined4 *)(iVar6 + 0x24) = 0;
            }
          }
          if (iStack_c != 0) {
            if (*(int *)(iStack_10 + 0x248) == 1) {
              if (*(int *)(iVar6 + 4) != 0) {
                FUN_006eab60(DAT_00807598,*(uint *)(iVar6 + 0x3c));
                *(undefined4 *)(iVar6 + 4) = 0;
              }
            }
            else {
              FUN_006ea270(DAT_00807598,*(uint *)(iVar6 + 0x3c),0,*(uint *)(iVar6 + 0x24));
              FUN_006ea960(DAT_00807598,*(uint *)(iVar6 + 0x3c),
                           (float)*(int *)(iVar6 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar6 + 0x10) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar6 + 0x14) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc);
              uStack_18 = 1;
            }
          }
        }
        uStack_14 = uStack_14 + 1;
      } while ((int)uStack_14 < iVar1);
    }
    return uStack_18;
  }
  return 0;
}

