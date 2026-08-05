
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E5950 returns return of SystemClassTy::SendMessage @ 006E5965 */

int FUN_006e5950(int param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  SystemClassTy *in_ECX;

  /* ST_PSEUDO[unresolved_register_input,raw_pointer_offset]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = SystemClassTy::SendMessage(in_ECX,*(uint *)(param_1 + 0xc),*(int *)(param_1 + 8),param_1);
  return iVar1;
}

