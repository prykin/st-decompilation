
undefined4 __fastcall FUN_006646e0(int param_1)

{
  dword dVar1;
  uint *puVar2;
  DArrayTy *groupContent;
  uint uVar3;
  bool bVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  groupContent = *(DArrayTy **)(param_1 + 0x217);
  dVar1 = groupContent->count;
  if (dVar1 == 0) {
    return 0xffffffff;
  }
  uVar3 = 0;
  if (0 < (int)dVar1) {
    bVar4 = dVar1 != 0;
    do {
      if (bVar4) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(groupContent, uVar3) (runtime stride) */
        puVar2 = (uint *)(groupContent->elementSize * uVar3 + (int)groupContent->data);
      }
      else {
        puVar2 = (uint *)0x0;
      }
      if ((0x31 < *puVar2) && (*puVar2 < 100)) {
        FUN_006b0c70(groupContent,uVar3);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      groupContent = *(DArrayTy **)(param_1 + 0x217);
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < groupContent->count;
    } while ((int)uVar3 < (int)groupContent->count);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(*(int *)(param_1 + 0x217) + 0xc);
}

