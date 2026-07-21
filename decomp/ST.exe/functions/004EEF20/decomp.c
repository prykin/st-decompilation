
void __fastcall FUN_004eef20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(uint **)(param_1 + 0x28a) != (uint *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    ccFntTy::operator((ccFntTy *)param_1,*(uint **)(param_1 + 0x28a));
    *(undefined4 *)(param_1 + 0x28a) = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(uint *)(param_1 + 0x292) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    StartSystemTy::sub_006E56B0(*(StartSystemTy **)(param_1 + 0xc),*(uint *)(param_1 + 0x292));
  }
  *(undefined4 *)(param_1 + 0x292) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x27a);
  iVar2 = 4;
  do {
    if ((DArrayTy *)*puVar1 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  g_prodPanel_0080167C = (ProdPanelTy *)0x0;
  return;
}

