
int __fastcall FUN_00720de0(int param_1)

{
  AnonShape_00710790_4CBB90D4 *pAVar1;
  int iVar2;
  int local_8;

  iVar2 = 0;
  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x138) == 0) || (*(int *)(*(int *)(param_1 + 0x138) + 8) == 0)) {
    local_8 = 0;
    while( true ) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pAVar1 = *(AnonShape_00710790_4CBB90D4 **)(param_1 + 0x214);
      if (*(int *)(pAVar1 + 1) != 0) {
        FUN_00710790(pAVar1);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1 + 0x2c) < pAVar1->field_0086 + iVar2) break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pAVar1 = *(AnonShape_00710790_4CBB90D4 **)(param_1 + 0x214);
      if (*(int *)(pAVar1 + 1) != 0) {
        FUN_00710790(pAVar1);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = iVar2 + pAVar1->field_0086 + *(int *)(*(int *)(param_1 + 0x214) + 0x58);
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

