
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7DC>00403B84

   [STObjectFactoryApplier] Central object factory for 0x01FF (ST_OBJECT_TYPE_01FF).
   Evidence: registry[23] at 007CA7D8 stores type 0x01FF and executable pointer 00403B84; allocation
   size 1571 has no unique current class-layout match */

TLOBaseTy * __cdecl CreateTLOBase(void)

{
  TLOBaseTy *pTVar1;

  pTVar1 = (TLOBaseTy *)FUN_006b04d0(0x623);
  if (pTVar1 != (TLOBaseTy *)0x0) {
    pTVar1 = TLOBaseTy::TLOBaseTy(pTVar1);
    return pTVar1;
  }
  return (TLOBaseTy *)0x0;
}

