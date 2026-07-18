
undefined4 __thiscall FUN_006946c0(void *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)this;
  if (((param_1 < uVar1) && (uVar2 = *(uint *)((int)this + 4), param_2 < uVar2)) &&
     (uVar3 = *(uint *)((int)this + 8), param_3 < uVar3)) {
    iVar7 = 1;
    iVar4 = uVar3 * uVar2 * uVar1;
    iVar6 = ((uVar3 + param_3) * uVar2 + param_2) * uVar1 + param_1;
    piVar5 = (int *)(*(int *)((int)this + 0x10) + iVar6 * 4);
    do {
      if (*piVar5 != 0) {
        return *(undefined4 *)(*(int *)((int)this + 0x10) + iVar6 * 4);
      }
      iVar7 = iVar7 + -1;
      piVar5 = piVar5 + -iVar4;
      iVar6 = iVar6 - iVar4;
    } while (-1 < iVar7);
  }
  return 0;
}

