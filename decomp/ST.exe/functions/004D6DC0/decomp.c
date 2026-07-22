
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7E4>00405498

   [STObjectFactoryApplier] Central object factory for 0x0200 (ST_OBJECT_TLO_EMBRYO).
   Evidence: registry[24] at 007CA7E0 stores type 0x0200 and executable pointer 00405498; allocation
   size 884 uniquely matches /TLOEmbryoTy */

TLOEmbryoTy * __cdecl CreateTLOEmbryo(void)

{
  STGroupBoatC *pSVar1;
  TLOEmbryoTy *pTVar2;

  pSVar1 = (STGroupBoatC *)FUN_006b04d0(0x374);
  if (pSVar1 != (STGroupBoatC *)0x0) {
    pTVar2 = (TLOEmbryoTy *)thunk_FUN_004d0fc0(pSVar1);
    return pTVar2;
  }
  return (TLOEmbryoTy *)0x0;
}

