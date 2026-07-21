
int FUN_0074eb6b(int *param_1,undefined4 param_2)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1 + 0x50))(param_2,0);
  if (iVar1 < 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar1 = FUN_0074eb3c(param_1,&LAB_0075055c,unaff_retaddr);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

