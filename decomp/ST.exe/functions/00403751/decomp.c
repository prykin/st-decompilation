
int __thiscall thunk_FUN_005ff1f0(void *this,undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iStack_10;
  uint uStack_8;
  
  uVar6 = 0;
  uStack_8 = 0;
  iStack_10 = -1;
  if ((param_3 != 0) &&
     (((param_3 < 1 || (4 < param_3)) ||
      (uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039, *(uint *)((int)this + 0x1c) = uVar1
      , (uVar1 >> 0x10) % (param_3 + 1U) == 0)))) {
    return 30000;
  }
  iVar3 = *(int *)((int)this + 0x237);
  iVar2 = *(int *)((int)this + 0x226) * 2;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  if (iVar3 < 2) {
    if (iVar3 == 1) {
      return 0;
    }
    return -1;
  }
  if (0 < iVar3) {
    piVar5 = *(int **)((int)this + 0x23f);
    iVar2 = iVar3;
    do {
      iVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      iVar7 = *(int *)((int)this + 0x23b) + iVar7 * 0x18;
      uVar6 = uVar6 + *(int *)(iVar7 + 0x10) + *(int *)(iVar7 + 0xc);
      iVar2 = iVar2 + -1;
      uStack_8 = uVar6;
    } while (iVar2 != 0);
  }
  do {
    if ((param_2 < 1) || ((int)uStack_8 < 1)) {
      return iStack_10;
    }
    iVar7 = 0;
    uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar6;
    iVar2 = 0;
    if (0 < iVar3) {
      piVar5 = *(int **)((int)this + 0x23f);
      do {
        iVar4 = *(int *)((int)this + 0x23b) + *piVar5 * 0x18;
        iVar4 = *(int *)(iVar4 + 0x10) + *(int *)(iVar4 + 0xc);
        iVar7 = iVar7 + iVar4;
        if ((int)((uVar6 >> 0x10) % uStack_8) <= iVar7) goto LAB_005ff2fa;
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar2 < iVar3);
      iVar2 = 0;
LAB_005ff2fa:
      if (0 < iVar4) {
        iStack_10 = iVar2;
      }
    }
    param_2 = param_2 + -1;
  } while( true );
}

