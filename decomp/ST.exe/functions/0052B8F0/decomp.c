
void __fastcall FUN_0052b8f0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  FUN_006b5f80(DAT_008075a8,*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24),
               *(int *)(param_1 + 0x48),*(int *)(param_1 + 0x4c));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  PutDDX(*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24),'\x01',*(BITMAPINFO **)(param_1 + 0x76));
  return;
}

