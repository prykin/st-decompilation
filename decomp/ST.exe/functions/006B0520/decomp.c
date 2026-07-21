
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006B0A20 -> 006B0520 @ 006B0B2C */

undefined4 FUN_006b0520(int param_1,int param_2,UINT param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x24) == 0x10) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0x4c0) == 0) {
      puVar1 = FUN_006b04d0(0x200);
      *(undefined4 **)(param_1 + 0x4c0) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        return 0xfffffffe;
      }
    }
    if (0 < param_4) {
      iVar2 = param_3 * 2;
      pbVar3 = (byte *)(param_2 + 1);
      do {
        *(ushort *)(iVar2 + *(int *)(param_1 + 0x4c0)) =
             /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
             (ushort)((int)((uint)pbVar3[-1] << 8) >>
                     ((byte)*(undefined4 *)(param_1 + 0x4d0) & 0x1f)) & *(ushort *)(param_1 + 0x4c4)
             | (ushort)((int)((uint)pbVar3[1] << 8) >>
                       ((byte)*(undefined4 *)(param_1 + 0x4d8) & 0x1f)) &
               *(ushort *)(param_1 + 0x4cc) |
             (ushort)((int)((uint)*pbVar3 << 8) >> ((byte)*(undefined4 *)(param_1 + 0x4d4) & 0x1f))
             & *(ushort *)(param_1 + 0x4c8);
        param_4 = param_4 + -1;
        iVar2 = iVar2 + 2;
        pbVar3 = pbVar3 + 4;
      } while (param_4 != 0);
      return 0;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (0x10 < *(int *)(param_1 + 0x24)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0x4c0) == 0) {
      puVar1 = FUN_006b04d0(0x400);
      *(undefined4 **)(param_1 + 0x4c0) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        return 0xfffffffe;
      }
    }
    if (0 < param_4) {
      pbVar3 = (byte *)(param_2 + 1);
      iVar2 = param_3 << 2;
      do {
        *(uint *)(iVar2 + *(int *)(param_1 + 0x4c0)) =
             /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
             ((uint)pbVar3[-1] << 0x10) >> ((byte)*(undefined4 *)(param_1 + 0x4d0) & 0x1f) &
             *(uint *)(param_1 + 0x4c4) |
             ((uint)pbVar3[1] << 0x10) >> ((byte)*(undefined4 *)(param_1 + 0x4d8) & 0x1f) &
             *(uint *)(param_1 + 0x4cc) |
             ((uint)*pbVar3 << 0x10) >> ((byte)*(undefined4 *)(param_1 + 0x4d4) & 0x1f) &
             *(uint *)(param_1 + 0x4c8);
        param_4 = param_4 + -1;
        pbVar3 = pbVar3 + 4;
        iVar2 = iVar2 + 4;
      } while (param_4 != 0);
    }
  }
  return 0;
}

