
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:0079D9B8>006C55B6 | P:0079D9C4>006C56EB */

int FUN_006c5951(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  int iVar3;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar1 = *(undefined1 **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x28) = 0xfffffffb;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar3 = *(int *)(unaff_EBP + 8);
  *(int *)(puVar1 + -4) = iVar3;
  *(undefined4 *)(puVar1 + -8) = 0x6c596b;
  FUN_006bb980(*(AnonShape_006BB980_E41494A1 **)(puVar1 + -4));
  puVar2 = puVar1;
  if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
    *(int *)(puVar1 + -4) = iVar3 + 0x4f0;
    puVar2 = puVar1 + -8;
    *(undefined4 *)(puVar1 + -8) = 0x6c5981;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar1 + -4));
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar3 = *(int *)(unaff_EBP + -0x28);
  if ((iVar3 == -0x7789ff60) || (iVar3 == -0x7789fe52)) {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    *(undefined4 *)(puVar2 + -4) = 0x2ff;
    *(char **)(puVar2 + -8) = "E:\\DKW\\DDX\\C\\ddline.c";
    *(int *)(puVar2 + -0xc) = g_overwriteContext_007ED77C;
    *(int *)(puVar2 + -0x10) = iVar3;
    *(undefined4 *)(puVar2 + -0x14) = 0x6c59b1;
    RaiseInternalException
              (*(int *)(puVar2 + -0x10),*(int *)(puVar2 + -0xc),*(char **)(puVar2 + -8),
               *(int *)(puVar2 + -4));
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return iVar3;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

