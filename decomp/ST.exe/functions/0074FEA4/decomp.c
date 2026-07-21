
undefined4 __thiscall FUN_0074fea4(void *this,uint param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  uint local_c;
  int local_8;

  piVar1 = *(int **)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    if (param_3 != 0) {
      if (*(int *)((int)this + 100) == 0) {
        return 0;
      }
      bVar2 = CARRY4(param_1,*(uint *)((int)this + 0x68));
      param_1 = param_1 + *(uint *)((int)this + 0x68);
      param_2 = param_2 + *(int *)((int)this + 0x6c) + (uint)bVar2;
    }
    local_c = 0;
    local_8 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 0xc))(piVar1,&local_c);
    if ((param_2 <= local_8) && ((param_2 < local_8 || (param_1 <= local_c)))) {
      return 1;
    }
  }
  return 0;
}

