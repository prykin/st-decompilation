
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9F4>00405C09

   [STObjectFactoryApplier] Central object factory for 0x0152 (ST_OBJECT_TYPE_0152).
   Evidence: registry[90] at 007CA9F0 stores type 0x0152 and executable pointer 00405C09; allocation
   size 110 has no unique current class-layout match */

void * __cdecl FUN_00617810(void)

{
  JumpManagC *pJVar1;

  pJVar1 = (JumpManagC *)FUN_006b04d0(0x6e);
  if (pJVar1 != (JumpManagC *)0x0) {
    pJVar1 = JumpManagC::JumpManagC(pJVar1);
    return pJVar1;
  }
  return (void *)0x0;
}

