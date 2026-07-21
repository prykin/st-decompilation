
void FUN_006b2800(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    puVar1[0xe] = param_3;
    puVar1[0xc] = param_3;
    puVar1[8] = param_3;
    puVar1[0xf] = param_4;
    puVar1[0xd] = param_4;
    puVar1[9] = param_4;
    FUN_006b23e0(param_1,puVar1);
  }
  return;
}

