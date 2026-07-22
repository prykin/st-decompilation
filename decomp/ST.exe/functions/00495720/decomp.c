
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA76C>0040217B

   [STObjectFactoryApplier] Central object factory for 0x8100 (ST_OBJECT_TYPE_8100).
   Evidence: registry[9] at 007CA768 stores type 0x8100 and executable pointer 0040217B; allocation
   size 44 has no unique current class-layout match */

void * __cdecl FUN_00495720(void)

{
  undefined4 *puVar1;

  puVar1 = FUN_006b04d0(0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    _DAT_007fb224 = thunk_FUN_004956f0(puVar1);
    return _DAT_007fb224;
  }
  _DAT_007fb224 = (undefined4 *)0x0;
  return (void *)0x0;
}

