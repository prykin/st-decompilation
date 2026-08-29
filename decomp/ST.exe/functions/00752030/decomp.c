
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00752030 -> EXTERNAL:00000075 @ 00752042

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00752030 -> EXTERNAL:00000075 @ 00752042 */

UINT FUN_00752030(RecoveredRecord_00752030_828E6372 *param_1,LPVOID lpBuffer,UINT uBytes)

{
  UINT UVar1;

  /* ST_CALLSITE[00752042]: CALL dword ptr [0x0085bd00] */
  UVar1 = _lread(param_1->field_0032,lpBuffer,uBytes);
  if (UVar1 == 0xffffffff) {
    UVar1 = 0xfffffff4;
  }
  return UVar1;
}

