
undefined4 __thiscall thunk_FUN_004dbb60(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar2 = param_1;
  iVar5 = 0;
  piVar3 = (int *)((int)this + 0x4d0);
  do {
    if (*piVar3 == 0) {
      *(int *)((int)this + iVar5 * 4 + 0x4d0) = param_1[6];
      uVar4 = (**(code **)(*param_1 + 0x2c))();
      *(undefined4 *)((int)this + iVar5 * 4 + 0x4d8) = uVar4;
      *(int *)((int)this + iVar5 * 4 + 0x4e0) = param_2;
      if (100 < param_2) {
        *(undefined4 *)((int)this + iVar5 * 4 + 0x4e0) = 100;
      }
      if (*(int *)((int)this + iVar5 * 4 + 0x4e0) < 0) {
        *(undefined4 *)((int)this + iVar5 * 4 + 0x4e0) = 0;
      }
      *(undefined4 *)((int)this + iVar5 * 4 + 0x4e8) = 1;
      iVar1 = *(int *)((int)this + iVar5 * 4 + 0x4e0);
      piVar2[0x131] = *(int *)((int)this + 0x18);
      piVar2[0x130] = iVar1;
      if (*(int *)((int)this + (0x135 - iVar5) * 4) != 0) {
        piVar3 = (int *)((int)this + (0x139 - iVar5) * 4);
        *piVar3 = 100 - *(int *)((int)this + iVar5 * 4 + 0x4e0);
        if (*(int *)((int)this + (0x13b - iVar5) * 4) != 0) {
          iVar5 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + (0x135 - iVar5) * 4),
                               (int *)&param_1);
          if ((iVar5 == 0) && (param_1[0x131] == *(int *)((int)this + 0x18))) {
            param_1[0x130] = *piVar3;
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

