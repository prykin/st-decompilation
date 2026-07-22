
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:0079DA58>006CF5FF | P:0079DA64>006CF54E */

int FUN_006cf415(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  int iVar5;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0xfffffffb;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar5 = *(int *)(unaff_EBP + -0x24);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (*(char *)(unaff_EBP + 0x34) == '\x02') {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    piVar2 = *(int **)(**(int **)(unaff_EBP + 8) + 0x44);
    iVar3 = *piVar2;
    *(undefined4 *)(iVar1 + -4) = 0;
    *(int **)(iVar1 + -8) = piVar2;
    pcVar4 = *(code **)(iVar3 + 0x80);
    *(undefined4 *)(iVar1 + -0xc) = 0x6cf446;
    (*pcVar4)();
  }
  else {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar5 = *(int *)(unaff_EBP + -0x24);
  }
  if ((iVar5 != -0x7789ff60) && (iVar5 != -0x7789fe52)) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return iVar5;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

