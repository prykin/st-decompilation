
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA964>00401834 | P:007CA9A4>00401834

   [STObjectFactoryApplier] Central object factory for 0x013F (ST_OBJECT_ST_CRAB_013F).
   Evidence: registry[72] at 007CA960 stores type 0x013F and executable pointer 00401834; allocation
   size 641 uniquely matches /STCrabC */

STCrabC * __cdecl CreateSTCrab(void)

{
  STCrabC *pSVar1;

  pSVar1 = (STCrabC *)FUN_006b04d0(0x281);
  if (pSVar1 != (STCrabC *)0x0) {
    pSVar1 = STCrabC::STCrabC(pSVar1);
    return pSVar1;
  }
  return (STCrabC *)0x0;
}

