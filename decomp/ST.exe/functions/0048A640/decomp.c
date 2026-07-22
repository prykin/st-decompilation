
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA794>00401E1A

   [STObjectFactoryApplier] Central object factory for 0x0104 (ST_OBJECT_TYPE_0104).
   Evidence: registry[14] at 007CA790 stores type 0x0104 and executable pointer 00401E1A; allocation
   size 2142 has no unique current class-layout match */

void * __cdecl FUN_0048a640(void)

{
  STBoatC *pSVar1;

  pSVar1 = (STBoatC *)FUN_006b04d0(0x85e);
  if (pSVar1 != (STBoatC *)0x0) {
    pSVar1 = STBoatC::STBoatC(pSVar1);
    return pSVar1;
  }
  return (void *)0x0;
}

