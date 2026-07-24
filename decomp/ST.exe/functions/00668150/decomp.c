
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9B4>00401136

   [STObjectFactoryApplier] Central object factory for 0x0400 (ST_OBJECT_TYPE_0400).
   Evidence: registry[82] at 007CA9B0 stores type 0x0400 and executable pointer 00401136; allocation
   size 648 has no unique current class-layout match */

AiFltClassTy * __cdecl CreateAiFlt(void)

{
  AiFltClassTy *pAVar1;

  pAVar1 = (AiFltClassTy *)FUN_006b04d0(0x288);
  if (pAVar1 != (AiFltClassTy *)0x0) {
    pAVar1 = AiFltClassTy::AiFltClassTy(pAVar1);
    return pAVar1;
  }
  return (AiFltClassTy *)0x0;
}

