
undefined4 __thiscall FUN_006d7380(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  
  uVar4 = 0;
  piVar1 = *(int **)((int)this + 0x40);
  if (piVar1 == (int *)0x0) {
    return 0x8004025f;
  }
  if (param_1 == 1) {
    iVar2 = *(int *)((int)this + 0x8c);
    if (*(int *)(iVar2 + 0x18) != 0) {
      if (iVar2 != 0) {
        uVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,iVar2 + 0xc);
        return uVar4;
      }
      uVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,0);
      return uVar4;
    }
  }
  else if (*(int *)(*(int *)((int)this + 0x90) + 0x18) != 0) {
    bVar3 = FUN_0074b9f5((void *)(*(int *)((int)this + 0x8c) + 0x1c),
                         (char *)(*(int *)((int)this + 0x90) + 0x1c));
    if (CONCAT31(extraout_var,bVar3) != 0) {
      if (*(int *)((int)this + 0x90) != 0) {
        uVar4 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                          (*(int **)((int)this + 0x40),*(int *)((int)this + 0x90) + 0xc);
        return uVar4;
      }
      uVar4 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))(*(int **)((int)this + 0x40),0);
    }
  }
  return uVar4;
}

