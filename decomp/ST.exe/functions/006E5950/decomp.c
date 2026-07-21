
void FUN_006e5950(int param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  SystemClassTy *in_ECX;

  /* ST_PSEUDO[unresolved_register_input,raw_pointer_offset]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate structure field after proof; otherwise retain buffer arithmetic */
  SystemClassTy::SendMessage(in_ECX,*(uint *)(param_1 + 0xc),*(int *)(param_1 + 8),param_1);
  return;
}

