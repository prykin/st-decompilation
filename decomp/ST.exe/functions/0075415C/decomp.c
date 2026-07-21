
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void FUN_0075415c(void)

{
  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_ESI;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar1 = (uint)*(ushort *)(unaff_EBP + 0x81d0 + unaff_ESI * 2);
  if (uVar1 != 0x4000) {
    *(undefined2 *)(unaff_EBP + 0x21ce + uVar1) = 0x4000;
    *(undefined2 *)(unaff_EBP + 0x81d0 + unaff_ESI * 2) = 0x4000;
  }
  return;
}

