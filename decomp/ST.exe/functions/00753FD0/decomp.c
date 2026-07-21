
undefined8 __fastcall FUN_00753fd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  unaff_EBP[6] = unaff_EBP[1];
  iVar1 = 0;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (((*(byte *)((int)unaff_EBP + 0x3f) & 0x80) == 0) && (*unaff_EBP != 0)) {
    /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (*(code *)*unaff_EBP)();
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  unaff_EBP[8] = iVar1 + 1;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT44(param_2,iVar1);
}

