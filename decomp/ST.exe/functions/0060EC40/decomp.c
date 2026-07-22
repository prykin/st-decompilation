
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9AC>00404755

   [STObjectFactoryApplier] Central object factory for 0x0147 (ST_OBJECT_TYPE_0147).
   Evidence: registry[81] at 007CA9A8 stores type 0x0147 and executable pointer 00404755; allocation
   size 792 has no unique current class-layout match */

void * __cdecl FUN_0060ec40(void)

{
  undefined4 *puVar1;

  puVar1 = FUN_006b04d0(0x318);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = thunk_FUN_0060ec70(puVar1);
    return puVar1;
  }
  return (void *)0x0;
}

