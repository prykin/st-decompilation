
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7CC>00405079

   [STObjectFactoryApplier] Central object factory for 0x0124 (ST_OBJECT_ST_EXPLOSION).
   Evidence: registry[21] at 007CA7C8 stores type 0x0124 and executable pointer 00405079; allocation
   size 703 uniquely matches /STExplosion */

STExplosion * __cdecl CreateSTExplosion(void)

{
  STExplosion *pSVar1;

  pSVar1 = (STExplosion *)FUN_006b04d0(0x2bf);
  if (pSVar1 != (STExplosion *)0x0) {
    pSVar1 = STExplosion::STExplosion(pSVar1);
    return pSVar1;
  }
  return (STExplosion *)0x0;
}

