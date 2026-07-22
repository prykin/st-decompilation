
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA94C>004023E2

   [STObjectFactoryApplier] Central object factory for 0x0136 (ST_OBJECT_ST_JUMP_MINE).
   Evidence: registry[69] at 007CA948 stores type 0x0136 and executable pointer 004023E2; allocation
   size 337 uniquely matches /STJumpMineC */

STJumpMineC * __cdecl CreateSTJumpMine(void)

{
  STJumpMineC *pSVar1;

  pSVar1 = (STJumpMineC *)FUN_006b04d0(0x151);
  if (pSVar1 != (STJumpMineC *)0x0) {
    pSVar1 = STJumpMineC::STJumpMineC(pSVar1);
    return pSVar1;
  }
  return (STJumpMineC *)0x0;
}

