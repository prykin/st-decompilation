
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8E4>00404A98

   [STObjectFactoryApplier] Central object factory for 0x0129 (ST_OBJECT_ST_SHARK).
   Evidence: registry[56] at 007CA8E0 stores type 0x0129 and executable pointer 00404A98; allocation
   size 655 uniquely matches /STSharkC */

STSharkC * __cdecl CreateSTShark(void)

{
  STSharkC *pSVar1;

  pSVar1 = (STSharkC *)FUN_006b04d0(0x28f);
  if (pSVar1 != (STSharkC *)0x0) {
    pSVar1 = STSharkC::STSharkC(pSVar1);
    return pSVar1;
  }
  return (STSharkC *)0x0;
}

