
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CAA04>00404E2B

   [STObjectFactoryApplier] Central object factory for 0x0158 (ST_OBJECT_ST_MINE_SET).
   Evidence: registry[92] at 007CAA00 stores type 0x0158 and executable pointer 00404E2B; allocation
   size 871 uniquely matches /STMineSetC */

STMineSetC * __cdecl CreateSTMineSet(void)

{
  STMineSetC *pSVar1;

  pSVar1 = (STMineSetC *)FUN_006b04d0(0x367);
  if (pSVar1 != (STMineSetC *)0x0) {
    pSVar1 = STMineSetC::STMineSetC(pSVar1);
    return pSVar1;
  }
  return (STMineSetC *)0x0;
}

