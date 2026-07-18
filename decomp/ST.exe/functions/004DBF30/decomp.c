
undefined4 __thiscall FUN_004dbf30(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1;
  if (*(int *)((int)this + param_1 * 4 + 0x4d0) != 0) {
    if (*(int *)((int)this + param_1 * 4 + 0x4e8) == 0) {
      *(undefined4 *)((int)this + param_1 * 4 + 0x4e8) = 1;
      iVar5 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + param_1 * 4 + 0x4d0),&param_1);
      if ((iVar5 == 0) && (*(int *)(param_1 + 0x4c4) == *(int *)((int)this + 0x18))) {
        *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)((int)this + iVar4 * 4 + 0x4e0);
      }
      if ((*(int *)((int)this + (0x135 - iVar4) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - iVar4) * 4) != 0)) {
        piVar2 = (int *)((int)this + (0x139 - iVar4) * 4);
        *piVar2 = 100 - *(int *)((int)this + iVar4 * 4 + 0x4e0);
        iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + (0x135 - iVar4) * 4),&param_1);
        if ((iVar4 == 0) && (*(int *)(param_1 + 0x4c4) == *(int *)((int)this + 0x18))) {
          *(int *)(param_1 + 0x4c0) = *piVar2;
        }
      }
    }
    else {
      *(undefined4 *)((int)this + param_1 * 4 + 0x4e8) = 0;
      iVar3 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + param_1 * 4 + 0x4d0),&param_1);
      iVar5 = param_1;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x4c0) = 0;
        if (*(int **)(param_1 + 0x61f) != (int *)0x0) {
          thunk_FUN_00635fd0(*(int **)(param_1 + 0x61f));
          FUN_0072e2b0(*(undefined4 **)(iVar5 + 0x61f));
          *(undefined4 *)(iVar5 + 0x61f) = 0;
        }
      }
      if ((*(int *)((int)this + (0x135 - iVar4) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - iVar4) * 4) != 0)) {
        puVar1 = (undefined4 *)((int)this + (0x139 - iVar4) * 4);
        *puVar1 = 100;
        iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + (0x135 - iVar4) * 4),&param_1);
        if ((iVar4 == 0) && (*(int *)(param_1 + 0x4c4) == *(int *)((int)this + 0x18))) {
          *(undefined4 *)(param_1 + 0x4c0) = *puVar1;
          return 0;
        }
      }
    }
  }
  return 0;
}

