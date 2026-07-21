
uint FUN_006d8036(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_EAX;
  byte bVar4;
  ushort uVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  bool bVar6;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (*(char *)(unaff_EBP + -0x28) == '\0') {
    bVar6 = false;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if ((*(char *)(unaff_EBP + -0x29) == '\0') && (in_EAX = FUN_006d7fda(), bVar6)) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      return in_EAX;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    uVar1 = **(undefined1 **)(unaff_EBP + -0x2e);
    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
    in_EAX = CONCAT31((int3)(in_EAX >> 8),uVar1);
    *(undefined1 *)(unaff_EBP + -0x2a) = uVar1;
    *(undefined1 **)(unaff_EBP + -0x2e) = *(undefined1 **)(unaff_EBP + -0x2e) + 1;
    *(char *)(unaff_EBP + -0x29) = *(char *)(unaff_EBP + -0x29) + -1;
    *(undefined1 *)(unaff_EBP + -0x28) = 8;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  bVar2 = *(byte *)(unaff_EBP + -0xe);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar5 = (ushort)(*(byte *)(unaff_EBP + -0x2a) >> (8U - *(char *)(unaff_EBP + -0x28) & 0x1f));
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  bVar4 = *(byte *)(unaff_EBP + -0x28);
  while( true ) {
    if ((char)bVar2 <= (char)bVar4) {
      *(byte *)(unaff_EBP + -0x28) = bVar4 - bVar2;
      return (uint)(uVar5 & *(ushort *)(&DAT_006d801c + (uint)bVar2 * 2));
    }
    bVar6 = false;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if ((*(char *)(unaff_EBP + -0x29) == '\0') && (in_EAX = FUN_006d7fda(), bVar6)) break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    bVar3 = **(byte **)(unaff_EBP + -0x2e);
    *(byte *)(unaff_EBP + -0x2a) = bVar3;
    *(byte **)(unaff_EBP + -0x2e) = *(byte **)(unaff_EBP + -0x2e) + 1;
    *(char *)(unaff_EBP + -0x29) = *(char *)(unaff_EBP + -0x29) + -1;
    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),(ushort)bVar3) << (bVar4 & 0x1f);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    uVar5 = uVar5 | (ushort)in_EAX;
    bVar4 = bVar4 + 8;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  return in_EAX;
}

