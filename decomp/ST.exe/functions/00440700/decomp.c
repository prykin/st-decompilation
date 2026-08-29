

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_00440700(int param_1)

{
  byte local_24 [12];
  uint local_18;
  int local_14;

  local_18 = 0xf;
  local_14 = (param_1 != 0) + 0x112;
  /* ST_CALLSITE[0044072B]: CALL dword ptr [EDX + 0x18] */
  (*g_playSystem_00802A38->vtable->SendMessage)
            ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_24);
  return;
}

