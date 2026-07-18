
undefined4 __fastcall thunk_FUN_0060d070(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short asStack_24 [12];
  int iStack_c;
  int iStack_8;
  
  iStack_c = 0;
  if ((*(int *)((int)param_1 + 0x244) != 0) && (iStack_8 = 0, 0 < *(int *)((int)param_1 + 0x23c))) {
    do {
      iVar1 = *(int *)((int)param_1 + 0x244);
      iVar5 = iStack_8 * 0x44;
      if (*(int *)(iVar5 + iVar1) != 0) {
        iVar6 = (*(int *)(DAT_00802a38 + 0xe4) - *(int *)(iVar5 + 0x3c + iVar1)) *
                *(int *)(iVar5 + 0x38 + iVar1);
        if (iVar6 < *(int *)(iVar5 + 4 + iVar1)) {
          if (((*(char *)((int)param_1 + 0x22f) == '\0') && (iStack_8 == 0)) &&
             (uVar3 = iVar6 - *(int *)(iVar1 + 4) / 2, uVar4 = (int)uVar3 >> 0x1f,
             (int)((uVar3 ^ uVar4) - uVar4) < *(int *)(iVar1 + 0x38))) {
            thunk_FUN_0060aef0(param_1);
            *(undefined1 *)((int)param_1 + 0x22f) = 1;
          }
          iStack_c = iStack_c + 1;
          iVar1 = iVar5 + *(int *)((int)param_1 + 0x244);
          iVar5 = *(int *)(iVar5 + 0x34 + *(int *)((int)param_1 + 0x244)) + *(int *)(iVar1 + 0x30);
          if (0x168 < iVar5) {
            iVar5 = iVar5 + -0x168;
          }
          iVar2 = *(int *)(iVar1 + 4);
          thunk_FUN_0062cac0(*(int **)(iVar1 + 0x40),
                             (*(int *)(iVar1 + 0x24) * iVar6) / iVar2 + *(int *)(iVar1 + 0x18),
                             (*(int *)(iVar1 + 0x28) * iVar6) / iVar2 + *(int *)(iVar1 + 0x1c),
                             (*(int *)(iVar1 + 0x2c) * iVar6) / iVar2 + *(int *)(iVar1 + 0x20),iVar5
                             ,*(int *)(iVar1 + 8),iVar6,asStack_24);
        }
        else {
          thunk_FUN_0060d220((int)param_1);
          *(undefined4 *)(iVar5 + *(int *)((int)param_1 + 0x244)) = 0;
        }
      }
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < *(int *)((int)param_1 + 0x23c));
    if (iStack_c != 0) {
      return 1;
    }
  }
  return 2;
}

