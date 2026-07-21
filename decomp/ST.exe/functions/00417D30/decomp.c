
undefined4 __fastcall FUN_00417d30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x2c) == 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar1 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x47),*(short *)(param_1 + 0x49),
                               *(short *)(param_1 + 0x4b),
                               CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x8e)),
                               (AnonShape_00495FF0_59081BDD *)param_1);
    return uVar1;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar2 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x47),*(short *)(param_1 + 0x49),
                             *(short *)(param_1 + 0x4b),
                             CONCAT31((int3)((uint)*(int *)(param_1 + 0x2c) >> 8),
                                      *(undefined1 *)(param_1 + 0x8e)),
                             (AnonShape_00495FF0_59081BDD *)param_1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x47) + 1,*(short *)(param_1 + 0x49),
                             *(short *)(param_1 + 0x4b),
                             CONCAT31((int3)((uint)extraout_EDX >> 8),
                                      *(undefined1 *)(param_1 + 0x8e)),
                             (AnonShape_00495FF0_59081BDD *)param_1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x47),*(short *)(param_1 + 0x49) + 1,
                             *(short *)(param_1 + 0x4b),
                             CONCAT31((int3)((uint)extraout_ECX >> 8),
                                      *(undefined1 *)(param_1 + 0x8e)),
                             (AnonShape_00495FF0_59081BDD *)param_1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x47) + 1,*(short *)(param_1 + 0x49) + 1,
                             *(short *)(param_1 + 0x4b),(uint)*(byte *)(param_1 + 0x8e),
                             (AnonShape_00495FF0_59081BDD *)param_1);
  return uVar1;
}

