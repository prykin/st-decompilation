
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00719560 -> EXTERNAL:000000D3 @ 00719588 */

undefined4 __cdecl FUN_00719560(DWORD_PTR dwParam2)

{
  MCIDEVICEID mciId;
  DWORD_PTR DVar1;
  MCIERROR mcierr;

  DVar1 = dwParam2;
  mciId = *(MCIDEVICEID *)dwParam2;
  if (mciId == 0) {
    return 1;
  }
  dwParam2 = 0;
  mcierr = mciSendCommandA(mciId,0x808,2,(DWORD_PTR)&dwParam2);
  if (mcierr != 0) {
    FUN_00719c90(mcierr,(MCIDEVICEID *)DVar1);
    return 1;
  }
  return 0;
}

