
/* [STVTableApplier] Virtual slot 0079DD34+0x44

   [STVTableApplier] Virtual slot 007A1148+0x44 */

undefined4 FUN_00748c8e(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;

  if ((*(byte *)(param_1 + 4) & 0x20) == 0) {
    uVar4 = 0x80040251;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x30);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    param_2[1] = *(undefined4 *)(param_1 + 0x34);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(uint *)(param_1 + 0x38);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = *(uint *)(param_1 + 0x30);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(param_1 + 0x34);
    *param_3 = uVar1 + *(uint *)(param_1 + 0x30);
    param_3[1] = ((int)uVar1 >> 0x1f) + iVar3 + (uint)CARRY4(uVar1,uVar2);
    uVar4 = 0;
  }
  return uVar4;
}

