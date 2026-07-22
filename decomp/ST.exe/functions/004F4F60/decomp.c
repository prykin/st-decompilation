
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA81C>004054B6

   [STObjectFactoryApplier] Central object factory for 0x0120 (ST_OBJECT_TYPE_0120).
   Evidence: registry[31] at 007CA818 stores type 0x0120 and executable pointer 004054B6; allocation
   size 3566 has no unique current class-layout match */

void * __cdecl FUN_004f4f60(void)

{
  AnonShape_004F4F90_2D6E0DDA *pAVar1;
  undefined4 *puVar2;

  pAVar1 = (AnonShape_004F4F90_2D6E0DDA *)FUN_006b04d0(0xdee);
  if (pAVar1 != (AnonShape_004F4F90_2D6E0DDA *)0x0) {
    puVar2 = thunk_FUN_004f4f90(pAVar1);
    return puVar2;
  }
  return (void *)0x0;
}

