
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00752030 -> EXTERNAL:00000075 @ 00752042

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00752030 -> EXTERNAL:00000075 @ 00752042 */

UINT FUN_00752030(int param_1,LPVOID lpBuffer,UINT uBytes)

{
  UINT UVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  UVar1 = _lread(*(HFILE *)(param_1 + 0x32),lpBuffer,uBytes);
  if (UVar1 == 0xffffffff) {
    UVar1 = 0xfffffff4;
  }
  return UVar1;
}

