
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7AC>00404FFC

   [STObjectFactoryApplier] Central object factory for 0x010A (ST_OBJECT_TYPE_010A).
   Evidence: registry[17] at 007CA7A8 stores type 0x010A and executable pointer 00404FFC; allocation
   size 579 has no unique current class-layout match */

void * __cdecl FUN_005fd6e0(void)

{
  undefined4 *puVar1;

  puVar1 = FUN_006b04d0(0x243);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = thunk_FUN_005fd710(puVar1);
    return puVar1;
  }
  return (void *)0x0;
}

