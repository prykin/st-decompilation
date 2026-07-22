
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9EC>00402C89

   [STObjectFactoryApplier] Central object factory for 0x0150 (ST_OBJECT_STBHE_SHELL).
   Evidence: registry[89] at 007CA9E8 stores type 0x0150 and executable pointer 00402C89; allocation
   size 373 uniquely matches /STBHEShellC */

STBHEShellC * __cdecl CreateSTBHEShell(void)

{
  STBHEShellC *pSVar1;

  pSVar1 = (STBHEShellC *)FUN_006b04d0(0x175);
  if (pSVar1 != (STBHEShellC *)0x0) {
    pSVar1 = STBHEShellC::STBHEShellC(pSVar1);
    return pSVar1;
  }
  return (STBHEShellC *)0x0;
}

