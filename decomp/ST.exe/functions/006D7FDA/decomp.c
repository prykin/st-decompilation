
uint FUN_006d7fda(void)

{
  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  *(int *)(unaff_EBP + -0x2e) = *(int *)(unaff_EBP + -4) + 0x4000;
  /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(unaff_EBP + -0x46))(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x29,1);
  /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
  if ((uVar1 == 1) &&
     (uVar1 = (**(code **)(unaff_EBP + -0x46))
                        (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x2e),
                         *(undefined1 *)(unaff_EBP + -0x29)), uVar1 == *(byte *)(unaff_EBP + -0x29))
     ) {
    return uVar1;
  }
  if (-1 < (int)uVar1) {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

