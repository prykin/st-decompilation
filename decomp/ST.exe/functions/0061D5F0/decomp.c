
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9DC>00405772

   [STObjectFactoryApplier] Central object factory for 0x014C (ST_OBJECT_TYPE_014C).
   Evidence: registry[87] at 007CA9D8 stores type 0x014C and executable pointer 00405772; allocation
   size 221 has no unique current class-layout match */

void * __cdecl FUN_0061d5f0(void)

{
  STLightC *pSVar1;

  pSVar1 = (STLightC *)FUN_006b04d0(0xdd);
  if (pSVar1 != (STLightC *)0x0) {
    pSVar1 = STLightC::STLightC(pSVar1);
    return pSVar1;
  }
  return (void *)0x0;
}

