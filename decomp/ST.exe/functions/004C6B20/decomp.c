
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7EC>00404D2C

   [STObjectFactoryApplier] Central object factory for 0x0201 (ST_OBJECT_TLO_BLD_MARK).
   Evidence: registry[25] at 007CA7E8 stores type 0x0201 and executable pointer 00404D2C; allocation
   size 60 uniquely matches /TLOBldMark */

TLOBldMark * __cdecl CreateTLOBldMark(void)

{
  TLOBldMark *pTVar1;

  pTVar1 = (TLOBldMark *)FUN_006b04d0(0x3c);
  if (pTVar1 != (TLOBldMark *)0x0) {
    pTVar1 = TLOBldMark::TLOBldMark(pTVar1);
    return pTVar1;
  }
  return (TLOBldMark *)0x0;
}

