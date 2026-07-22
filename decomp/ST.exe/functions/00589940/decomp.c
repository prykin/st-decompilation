
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA934>00403D2D

   [STObjectFactoryApplier] Central object factory for 0x0131 (ST_OBJECT_TYPE_0131).
   Evidence: registry[66] at 007CA930 stores type 0x0131 and executable pointer 00403D2D; allocation
   size 678 has no unique current class-layout match */

void * __cdecl FUN_00589940(void)

{
  STMBombC *pSVar1;

  pSVar1 = (STMBombC *)FUN_006b04d0(0x2a6);
  if (pSVar1 != (STMBombC *)0x0) {
    pSVar1 = STMBombC::STMBombC(pSVar1);
    return pSVar1;
  }
  return (void *)0x0;
}

