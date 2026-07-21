
void FUN_00446a70(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    STAllPlayersC::DeletePGPairs(in_ECX,(char)iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

