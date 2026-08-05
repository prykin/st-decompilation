
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E3DB0 returns return of AppClassTy::SendMessage @ 006E3DC5 */

int FUN_006e3db0(int param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  AppClassTy *in_ECX;

  /* ST_PSEUDO[unresolved_register_input,raw_pointer_offset]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = AppClassTy::SendMessage(in_ECX,*(uint *)(param_1 + 0xc),*(int *)(param_1 + 8),param_1);
  return iVar1;
}

