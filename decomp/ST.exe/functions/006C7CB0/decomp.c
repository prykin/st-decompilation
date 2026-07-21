
uint FUN_006c7cb0(int param_1,undefined4 *param_2,uint param_3)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 *puVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  BVar1 = IsBadHugeReadPtr(*(void **)(param_1 + 0x2a),param_3);
  if (BVar1 != 0) {
    return 0xfffffffb;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar3 = *(undefined4 **)(param_1 + 0x2a);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  *(uint *)(param_1 + 0x2a) = *(int *)(param_1 + 0x2a) + param_3;
  return param_3;
}

