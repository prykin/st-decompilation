
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA98C>00401F82

   [STObjectFactoryApplier] Central object factory for 0x0144 (ST_OBJECT_ST_COLL3).
   Evidence: registry[77] at 007CA988 stores type 0x0144 and executable pointer 00401F82; allocation
   size 755 uniquely matches /STColl3C */

STColl3C * __cdecl CreateSTColl3(void)

{
  STColl3C *pSVar1;

  pSVar1 = (STColl3C *)FUN_006b04d0(0x2f3);
  if (pSVar1 != (STColl3C *)0x0) {
    pSVar1 = STColl3C::STColl3C(pSVar1);
    return pSVar1;
  }
  return (STColl3C *)0x0;
}

