
void FUN_006b1a50(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;

  if (-1 < param_2) {
    iVar1 = param_2 * 0x10 + param_1;
    *param_4 = *(undefined4 *)(iVar1 + 0x14);
    param_4[1] = *(undefined4 *)(iVar1 + 0x18);
    param_4[2] = *(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x14);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    param_4[3] = *(int *)((param_2 + 2) * 0x10 + param_1) - *(int *)(iVar1 + 0x18);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0xc4 + param_2 * 4);
    }
  }
  return;
}

