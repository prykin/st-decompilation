
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E4290 returns return of AppClassTy::AddDecodeMessage @ 006E42BA */

int FUN_006e4290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  AppClassTy *in_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_c = param_3;
  local_10 = param_2;
  local_8 = param_4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = AppClassTy::AddDecodeMessage(in_ECX,&local_14);
  return iVar1;
}

