
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /WinDef.h/UINT; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=2,
   ignored=0, unknown=0

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006D07D0 -> EXTERNAL:000000B2 @ 006D0801 */

UINT FUN_006d07d0(int param_1,HPALETTE h,int param_3)

{
  UINT UVar1;

  /* ST_CALLSITE[006D0801]: CALL dword ptr [0x0085baa8] */
  UVar1 = GetNearestPaletteIndex
                    (h,(param_3 >> 3 & 0xfcU | (uint)(byte)((char)param_3 << 3) << 8) << 8 |
                       param_3 >> 8 & 0xf8U);
  *(char *)(param_1 + param_3) = (char)UVar1;
  return UVar1;
}

