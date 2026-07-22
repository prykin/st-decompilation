
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7B4>00405BB9

   [STObjectFactoryApplier] Central object factory for 0x010B (ST_OBJECT_ST_DC_RESOURC).
   Evidence: registry[18] at 007CA7B0 stores type 0x010B and executable pointer 00405BB9; allocation
   size 631 uniquely matches /STDcResourcC */

STDcResourcC * __cdecl CreateSTDcResourc(void)

{
  STDcResourcC *pSVar1;

  pSVar1 = (STDcResourcC *)FUN_006b04d0(0x277);
  if (pSVar1 != (STDcResourcC *)0x0) {
    pSVar1 = STDcResourcC::STDcResourcC(pSVar1);
    return pSVar1;
  }
  return (STDcResourcC *)0x0;
}

