
undefined4 __thiscall FUN_0074ca21(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  if (*(int *)((int)this + 0x40) == 0) {
    return 0x8004025f;
  }
  if (param_1 == 1) {
    iVar1 = *(int *)((int)this + 0x8c);
    if (*(int *)(iVar1 + 0x18) != 0) {
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iVar1 + 0xc;
      }
      iVar3 = *(int *)((int)this + 0x90);
LAB_0074ca90:
      uVar2 = FUN_00747429(this,iVar1,iVar3 + 0x1c);
      return uVar2;
    }
  }
  else if ((*(int *)(*(int *)((int)this + 0x90) + 0x18) != 0) &&
          (iVar1 = FUN_0074b9f5((void *)(*(int *)((int)this + 0x8c) + 0x1c),
                                (char *)(*(int *)((int)this + 0x90) + 0x1c)), iVar1 != 0)) {
    if (*(int *)((int)this + 0x90) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 0x90) + 0xc;
    }
    iVar3 = *(int *)((int)this + 0x8c);
    goto LAB_0074ca90;
  }
  return 0;
}

