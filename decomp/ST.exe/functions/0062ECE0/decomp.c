
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7D4>004054FC

   [STObjectFactoryApplier] Central object factory for 0x0132 (ST_OBJECT_ST_RUBBISH).
   Evidence: registry[22] at 007CA7D0 stores type 0x0132 and executable pointer 004054FC; allocation
   size 510 uniquely matches /STRubbishC */

STRubbishC * __cdecl CreateSTRubbish(void)

{
  STRubbishC *pSVar1;

  pSVar1 = (STRubbishC *)FUN_006b04d0(0x1fe);
  if (pSVar1 != (STRubbishC *)0x0) {
    pSVar1 = STRubbishC::STRubbishC(pSVar1);
    return pSVar1;
  }
  return (STRubbishC *)0x0;
}

