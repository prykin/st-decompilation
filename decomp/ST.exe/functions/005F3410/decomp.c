
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9EC>00402C89

   [STObjectFactoryApplier] Central object factory for 0x0150 (ST_OBJECT_STBHE_SHELL).
   Evidence: registry[89] at 007CA9E8 stores type 0x0150 and executable pointer 00402C89; allocation
   size 373 uniquely matches /STBHEShellC */

AnonReceiver_005F35F0 * __cdecl CreateSTBHEShell(void)

{
  STBHEShellC *this;
  AnonReceiver_005F35F0 *pAVar1;

  this = (STBHEShellC *)FUN_006b04d0(0x175);
  if (this != (STBHEShellC *)0x0) {
    pAVar1 = (AnonReceiver_005F35F0 *)STBHEShellC::STBHEShellC(this);
    return pAVar1;
  }
  return (AnonReceiver_005F35F0 *)0x0;
}

