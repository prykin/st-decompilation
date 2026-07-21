
undefined4 FUN_006b30d0(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;

  uVar3 = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((param_2 < *(uint *)(param_1 + 0x1a0)) &&
      (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4),
      (*puVar1 & 0x4008000) == 0x4008000)) &&
     (uVar2 = *(uint *)(puVar1[0x34] + param_3 * 4), -1 < (int)uVar2)) {
    uVar3 = FUN_006b3040(param_1,uVar2);
  }
  return uVar3;
}

