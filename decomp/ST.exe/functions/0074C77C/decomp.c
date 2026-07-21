
int __thiscall FUN_0074c77c(void *this,undefined4 param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_ESI;

  if (*(int *)((*(int **)((int)this + 0xa0))[0x23] + 0x18) == 0) {
    iVar1 = -0x7fff0001;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(**(int **)((int)this + 0xa0) + 0x48))(1,param_1);
    if (-1 < iVar1) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar1 = FUN_0074834e(this,unaff_ESI);
    }
  }
  return iVar1;
}

