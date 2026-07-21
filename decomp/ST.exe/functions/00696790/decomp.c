
void __fastcall FUN_00696790(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;

  iVar3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x582f)) {
    do {
      uVar1 = Library::MSVCRT::FUN_0072e6c0();
      iVar4 = iVar3 + 1;
      *(char *)(iVar3 + *(int *)(param_1 + 0x584b)) =
           /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
           (char)((int)uVar1 % *(int *)(param_1 + 0x583b));
      iVar3 = iVar4;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar4 < *(int *)(param_1 + 0x582f));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(param_1 + 0x582f);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar5 = *(undefined4 **)(param_1 + 0x584f);
  for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = (uVar1 & 1) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = 0xff;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}

