
void FUN_00753ff7(void)

{
  undefined1 *puVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;

  bVar6 = false;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if ((*(byte *)(unaff_EBP + 0x3f) & 0x80) == 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar2 = *(int *)(unaff_EBP + 0x24);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    puVar3 = (undefined1 *)(unaff_EBP + 0x4e);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    puVar4 = *(undefined1 **)(unaff_EBP + 0x1c);
    do {
      *(int *)(unaff_EBP + 0x40) = *(int *)(unaff_EBP + 0x40) + 1;
      puVar5 = puVar4 + 1;
      puVar1 = puVar3 + 1;
      *puVar4 = *puVar3;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EBP + 0x24) = 0;
        FUN_00753fa7();
        if (bVar6) {
          *(undefined4 *)(unaff_EBP + 0x3c) = 0xffffffcd;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        puVar5 = *(undefined1 **)(unaff_EBP + 0x1c);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        iVar2 = *(int *)(unaff_EBP + 0x24);
      }
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      bVar6 = puVar1 < *(undefined1 **)(unaff_EBP + 0x48);
      puVar3 = puVar1;
      puVar4 = puVar5;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    } while (puVar1 != *(undefined1 **)(unaff_EBP + 0x48));
    *(undefined1 **)(unaff_EBP + 0x1c) = puVar5;
    *(int *)(unaff_EBP + 0x24) = iVar2;
  }
  *(undefined2 *)(unaff_EBP + 0x4c) = 1;
  *(undefined2 *)(unaff_EBP + 0x4e) = 0;
  *(int *)(unaff_EBP + 0x48) = unaff_EBP + 0x50;
  return;
}

