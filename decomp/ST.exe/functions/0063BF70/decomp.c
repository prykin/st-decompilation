
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7C4>00405EED

   [STObjectFactoryApplier] Central object factory for 0x010D (ST_OBJECT_TYPE_010D).
   Evidence: registry[20] at 007CA7C0 stores type 0x010D and executable pointer 00405EED; allocation
   size 944 has no unique current class-layout match */

void * __cdecl FUN_0063bf70(void)

{
  AnonShape_0063BFA0_2C9DA96E *pAVar1;
  undefined4 *puVar2;

  pAVar1 = (AnonShape_0063BFA0_2C9DA96E *)FUN_006b04d0(0x3b0);
  if (pAVar1 != (AnonShape_0063BFA0_2C9DA96E *)0x0) {
    puVar2 = thunk_FUN_0063bfa0(pAVar1);
    return puVar2;
  }
  return (void *)0x0;
}

