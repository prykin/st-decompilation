
undefined4 __thiscall FUN_004d6c90(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;

  if (param_2 == this) {
    return 4;
  }
  if ((param_2 != (int *)0x0) && (param_2[9] == *(int *)((int)this + 0x24))) {
    this = (void *)param_2[8];
    if (this == (void *)0x14) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_2 + 0xec))();
      this = (void *)0x0;
      if (iVar1 != 0) {
        return 3;
      }
    }
    else if ((this == (void *)0x3e8) || (this == (void *)0x3e9)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_2 + 0xec))();
      this = (void *)0x0;
      if (iVar1 != 0) {
        return 4;
      }
    }
  }
  return (uint)this & 0xffff0000;
}

