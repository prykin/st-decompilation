
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7FC>0040111D

   [STObjectFactoryApplier] Central object factory for 0x10FF (ST_OBJECT_TYPE_10FF).
   Evidence: registry[27] at 007CA7F8 stores type 0x10FF and executable pointer 0040111D; allocation
   size 786 has no unique current class-layout match */

void * __cdecl FUN_004a8890(void)

{
  STGroupBoatC *pSVar1;

  pSVar1 = (STGroupBoatC *)FUN_006b04d0(0x312);
  if (pSVar1 != (STGroupBoatC *)0x0) {
    pSVar1 = STGroupBoatC::STGroupBoatC(pSVar1);
    return pSVar1;
  }
  return (void *)0x0;
}

