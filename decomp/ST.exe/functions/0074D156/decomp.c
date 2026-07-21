
int __thiscall FUN_0074d156(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;

  if (param_2 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 4))(param_1);
    piVar1 = *(int **)((int)this + 0x98);
    if (piVar1 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(int **)((int)this + 0x98) = param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(**(int **)((int)this + 0x9c) + 0x10))
                      (*(int **)((int)this + 0x9c),param_1,0);
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,&local_14);
    if (-1 < iVar2) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(**(int **)((int)this + 0x98) + 0xc))
                        (*(int **)((int)this + 0x98),&local_14,&local_24);
      if (-1 < iVar2) {
        if (((local_24 < local_14) || (local_20 < local_10)) || (local_1c < local_c)) {
          iVar2 = -0x7fffbffb;
        }
        else {
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

