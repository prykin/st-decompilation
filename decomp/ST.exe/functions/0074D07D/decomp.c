
int __thiscall FUN_0074d07d(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;

  bVar2 = false;
  *param_2 = 0;
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)((int)this + 0xa8) + 0x8c);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xe4) == 0)) {
    *param_2 = *(int *)(iVar3 + 0x9c);
  }
  piVar1 = (int *)*param_2;
  if (piVar1 == (int *)0x0) {
    iVar4 = -0x7ffbfdf6;
    if (*(int *)((int)this + 0x18) != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(**(int **)((int)this + 0x9c) + 0xc))(*(int **)((int)this + 0x9c),param_2)
      ;
      bVar2 = true;
    }
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if (*param_2 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*(int *)this + 0x48))(param_2);
    bVar2 = true;
  }
  if (-1 < iVar4) {
    if (bVar2) {
      local_14 = 0;
      uStack_10 = 0;
      local_c = 0;
      uStack_8 = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0x14))(param_1,&local_14);
      if (local_c == 0) {
        local_c = 1;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar3 = (**(code **)(*(int *)this + 0x3c))(*param_2,&local_14);
      if (iVar3 < 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
        *param_2 = 0;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*param_1 + 0x10))(param_1,*param_2,0);
  }
  return iVar4;
}

