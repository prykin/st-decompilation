
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_0064a580(void)

{
  if (HANDLE_008118f8 != (HANDLE)0x0) {
    /* ST_CALLSITE[0064A58A]: CALL dword ptr [0x0085bbc8] */
    CloseHandle(HANDLE_008118f8);
  }
  HANDLE_008118f8 = (HANDLE)0x0;
  return;
}

