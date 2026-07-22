
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7A4>00401492

   [STObjectFactoryApplier] Central object factory for 0x0107 (ST_OBJECT_ST_FISH).
   Evidence: registry[16] at 007CA7A0 stores type 0x0107 and executable pointer 00401492; allocation
   size 619 uniquely matches /STFishC */

STFishC * __cdecl CreateSTFish(void)

{
  STFishC *pSVar1;

  pSVar1 = (STFishC *)FUN_006b04d0(0x26b);
  if (pSVar1 != (STFishC *)0x0) {
    pSVar1 = STFishC::STFishC(pSVar1);
    return pSVar1;
  }
  return (STFishC *)0x0;
}

