
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA92C>004038CD

   [STObjectFactoryApplier] Central object factory for 0x0130 (ST_OBJECT_TYPE_0130).
   Evidence: registry[65] at 007CA928 stores type 0x0130 and executable pointer 004038CD; allocation
   size 650 has no unique current class-layout match */

void * __cdecl FUN_005861a0(void)

{
  STLBombC *pSVar1;

  pSVar1 = (STLBombC *)FUN_006b04d0(0x28a);
  if (pSVar1 != (STLBombC *)0x0) {
    pSVar1 = STLBombC::STLBombC(pSVar1);
    return pSVar1;
  }
  return (void *)0x0;
}

