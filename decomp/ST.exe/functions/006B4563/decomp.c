
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:0079D8C8>006B4447 | P:0079D8D4>006B449D */

int FUN_006b4563(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar1 = *(undefined1 **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xfffffffb;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(puVar1 + -4) = iVar2;
  *(undefined4 *)(puVar1 + -8) = 0x6b457d;
  FUN_006bb980(*(AnonShape_006BB980_E41494A1 **)(puVar1 + -4));
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if ((*(int *)(unaff_EBP + -0x1c) == -0x7789ff60) || (*(int *)(unaff_EBP + -0x1c) == -0x7789fe52))
  {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  puVar3 = puVar1;
  if ((*(uint *)(iVar2 + 8) & 0x4000000) != 0) {
    *(int *)(puVar1 + -4) = iVar2 + 0x4f0;
    puVar3 = puVar1 + -8;
    *(undefined4 *)(puVar1 + -8) = 0x6b45ab;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar1 + -4));
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  if (iVar2 != 0) {
    *(undefined4 *)(puVar3 + -4) = 0x84;
    *(char **)(puVar3 + -8) = "E:\\DKW\\DDX\\C\\dddibpus.c";
    *(int *)(puVar3 + -0xc) = g_overwriteContext_007ED77C;
    *(int *)(puVar3 + -0x10) = iVar2;
    *(undefined4 *)(puVar3 + -0x14) = 0x6b4609;
    RaiseInternalException
              (*(int *)(puVar3 + -0x10),*(int *)(puVar3 + -0xc),*(char **)(puVar3 + -8),
               *(int *)(puVar3 + -4));
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return iVar2;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

