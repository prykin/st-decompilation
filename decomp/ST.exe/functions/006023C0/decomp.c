
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CAA14>00404124

   [STObjectFactoryApplier] Central object factory for 0x015A (ST_OBJECT_ST_DEST).
   Evidence: registry[94] at 007CAA10 stores type 0x015A and executable pointer 00404124; allocation
   size 943 uniquely matches /STDestC */

STDestC * __cdecl CreateSTDest(void)

{
  STDestC *pSVar1;

  pSVar1 = (STDestC *)FUN_006b04d0(0x3af);
  if (pSVar1 != (STDestC *)0x0) {
    pSVar1 = STDestC::STDestC(pSVar1);
    return pSVar1;
  }
  return (STDestC *)0x0;
}

