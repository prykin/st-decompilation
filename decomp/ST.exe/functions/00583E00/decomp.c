
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA954>00405858

   [STObjectFactoryApplier] Central object factory for 0x0137 (ST_OBJECT_TYPE_0137).
   Evidence: registry[70] at 007CA950 stores type 0x0137 and executable pointer 00405858; allocation
   size 660 has no unique current class-layout match */

void * __cdecl FUN_00583e00(void)

{
  STJellyGunC *pSVar1;

  pSVar1 = (STJellyGunC *)FUN_006b04d0(0x294);
  if (pSVar1 != (STJellyGunC *)0x0) {
    pSVar1 = STJellyGunC::STJellyGunC(pSVar1);
    return pSVar1;
  }
  return (void *)0x0;
}

