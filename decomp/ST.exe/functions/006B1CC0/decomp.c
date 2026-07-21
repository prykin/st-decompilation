
void FUN_006b1cc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if (param_2 < 0) {
    param_2 = 10;
  }
  *(undefined4 *)(param_1 + 0x1b4) = 1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(undefined4 *)(param_1 + 0x11c + param_2 * 8);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = *(undefined4 *)(param_1 + 0x120 + param_2 * 8);
  *(undefined4 *)(param_1 + 0x11c + param_2 * 8) = param_3;
  *(undefined4 *)(param_1 + 0x120 + param_2 * 8) = param_4;
  *(undefined4 *)(param_1 + 0x174 + param_2 * 4) = 1;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar1;
    param_5[1] = uVar2;
  }
  return;
}

