
void FUN_00754047(void)

{
  short *psVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char in_AL;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (in_AL != '\0') {
    *(ushort *)(unaff_EBP + 0x4e) = *(ushort *)(unaff_EBP + 0x4e) | *(ushort *)(unaff_EBP + 0x4c);
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  psVar1 = (short *)(unaff_EBP + 0x4c);
  *psVar1 = *psVar1 << 1;
  if (*psVar1 == 0) {
    FUN_00753ff7();
  }
  return;
}

