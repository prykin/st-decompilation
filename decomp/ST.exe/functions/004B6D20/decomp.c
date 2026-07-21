
undefined4 __fastcall FUN_004b6d20(int param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;

  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  thunk_FUN_004b7080(CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0x24)),0x28);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004d8b70((char)*(uint *)(param_1 + 0x24));
  }
  return 0;
}

