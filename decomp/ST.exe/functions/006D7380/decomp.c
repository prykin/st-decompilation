
undefined4 __thiscall FUN_006d7380(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  piVar1 = *(int **)((int)this + 0x40);
  if (piVar1 == (int *)0x0) {
    return 0x8004025f;
  }
  if (param_1 == 1) {
    iVar2 = *(int *)((int)this + 0x8c);
    if (*(int *)(iVar2 + 0x18) != 0) {
      if (iVar2 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,iVar2 + 0xc);
        return uVar3;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0);
      return uVar3;
    }
  }
  else if (*(int *)(*(int *)((int)this + 0x90) + 0x18) != 0) {
    iVar2 = FUN_0074b9f5((void *)(*(int *)((int)this + 0x8c) + 0x1c),
                         (char *)(*(int *)((int)this + 0x90) + 0x1c));
    if (iVar2 != 0) {
      if (*(int *)((int)this + 0x90) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar3 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                          (*(int **)((int)this + 0x40),*(int *)((int)this + 0x90) + 0xc);
        return uVar3;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar3 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))(*(int **)((int)this + 0x40),0);
    }
  }
  return uVar3;
}

