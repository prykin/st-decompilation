
void FUN_0075fb50(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  iVar4 = 0;
  iVar1 = param_1[0x1a];
  if (0 < param_1[0x1c]) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar3 = (undefined4 *)(*(int *)((int)param_1 + 0x1ba) + 0x44);
    do {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar2 = (**(code **)(*param_1 + 4))(param_1,1,iVar1 * 2 + 4);
      *puVar3 = uVar2;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < param_1[0x1c]);
  }
  return;
}

