
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA80C>004025A9

   [STObjectFactoryApplier] Central object factory for 0x0109 (ST_OBJECT_TRAKS).
   Evidence: registry[29] at 007CA808 stores type 0x0109 and executable pointer 004025A9; allocation
   size 2092 uniquely matches /TraksClassTy */

TraksClassTy * __cdecl CreateTraks(void)

{
  TraksClassTy *pTVar1;

  pTVar1 = (TraksClassTy *)FUN_006b04d0(0x82c);
  if (pTVar1 != (TraksClassTy *)0x0) {
    pTVar1 = TraksClassTy::TraksClassTy(pTVar1);
    return pTVar1;
  }
  return (TraksClassTy *)0x0;
}

