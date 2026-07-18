
undefined4 __thiscall FUN_004dbcc0(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1;
  if ((*(int *)((int)this + param_1 * 4 + 0x4d0) != 0) &&
     (*(int *)((int)this + param_1 * 4 + 0x4e8) != 0)) {
    *(int *)((int)this + param_1 * 4 + 0x4e0) = param_2;
    if (100 < param_2) {
      *(undefined4 *)((int)this + param_1 * 4 + 0x4e0) = 100;
    }
    if (*(int *)((int)this + param_1 * 4 + 0x4e0) < 0) {
      *(undefined4 *)((int)this + param_1 * 4 + 0x4e0) = 0;
    }
    iVar3 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + param_1 * 4 + 0x4d0),&param_1);
    if (iVar3 == 0) {
      uVar2 = *(undefined4 *)((int)this + 0x18);
      *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)((int)this + iVar4 * 4 + 0x4e0);
      *(undefined4 *)(param_1 + 0x4c4) = uVar2;
    }
    if (*(int *)((int)this + (0x135 - iVar4) * 4) != 0) {
      piVar1 = (int *)((int)this + (0x139 - iVar4) * 4);
      *piVar1 = 100 - *(int *)((int)this + iVar4 * 4 + 0x4e0);
      if (*(int *)((int)this + (0x13b - iVar4) * 4) != 0) {
        iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + (0x135 - iVar4) * 4),&param_1);
        if ((iVar4 == 0) && (*(int *)(param_1 + 0x4c4) == *(int *)((int)this + 0x18))) {
          *(int *)(param_1 + 0x4c0) = *piVar1;
        }
      }
    }
  }
  return 0;
}

