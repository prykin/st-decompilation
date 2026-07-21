
int FUN_006d822b(void)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(unaff_EBP + -4))
                    (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0xc),0x200);
  if ((iVar1 < 1) && (iVar1 == 0)) {
    iVar1 = -5;
  }
  return iVar1;
}

