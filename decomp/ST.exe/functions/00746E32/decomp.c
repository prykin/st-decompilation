
int __thiscall FUN_00746e32(void *this,uint *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;

  piVar2 = *(int **)((int)this + 0x14);
  if (piVar2 == (int *)0x0) {
    iVar4 = -0x7ffbfded;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,param_1);
    if (-1 < iVar4) {
      uVar3 = *(uint *)((int)this + 0x18);
      uVar1 = *param_1;
      *param_1 = *param_1 - uVar3;
      param_1[1] = (param_1[1] - *(int *)((int)this + 0x1c)) - (uint)(uVar1 < uVar3);
      iVar4 = 0;
    }
  }
  return iVar4;
}

