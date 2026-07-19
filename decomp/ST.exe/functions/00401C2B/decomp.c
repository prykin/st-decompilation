
undefined4 __thiscall thunk_FUN_004dbe00(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar3 = (int *)((int)this + 0x4d0);
  do {
    if (*piVar3 == param_1) {
      iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + iVar5 * 4 + 0x4d0),&param_1);
      iVar2 = param_1;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x4c0) = 0;
        if (*(int **)(param_1 + 0x61f) != (int *)0x0) {
          thunk_FUN_00635fd0(*(int **)(param_1 + 0x61f));
          Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(iVar2 + 0x61f));
          *(undefined4 *)(iVar2 + 0x61f) = 0;
        }
      }
      *(undefined4 *)((int)this + iVar5 * 4 + 0x4d0) = 0;
      *(undefined4 *)((int)this + iVar5 * 4 + 0x4e0) = 0;
      if (*(int *)((int)this + (0x135 - iVar5) * 4) != 0) {
        puVar1 = (undefined4 *)((int)this + (0x139 - iVar5) * 4);
        *puVar1 = 100;
        if (*(int *)((int)this + (0x13b - iVar5) * 4) != 0) {
          iVar5 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + (0x135 - iVar5) * 4),&param_1);
          if ((iVar5 == 0) && (*(int *)(param_1 + 0x4c4) == *(int *)((int)this + 0x18))) {
            *(undefined4 *)(param_1 + 0x4c0) = *puVar1;
          }
        }
      }
      return 0;
    }
    iVar5 = iVar5 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar5 < 2);
  return 0;
}

