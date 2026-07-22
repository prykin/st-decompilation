
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA93C>00401172

   [STObjectFactoryApplier] Central object factory for 0x0134 (ST_OBJECT_TYPE_0134).
   Evidence: registry[67] at 007CA938 stores type 0x0134 and executable pointer 00401172; allocation
   size 600 has no unique current class-layout match */

void * __cdecl FUN_00609920(void)

{
  STGroupBoatC *pSVar1;
  undefined4 *puVar2;

  pSVar1 = (STGroupBoatC *)FUN_006b04d0(600);
  if (pSVar1 != (STGroupBoatC *)0x0) {
    puVar2 = thunk_FUN_00609950(pSVar1);
    return puVar2;
  }
  return (void *)0x0;
}

