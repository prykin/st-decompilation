
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00719A60 -> EXTERNAL:000000D3 @ 00719AAF */

undefined4 __cdecl FUN_00719a60(DWORD_PTR dwParam2,byte param_2,MCIDEVICEID *param_3)

{
  MCIERROR mcierr;
  DWORD_PTR local_10;
  uint local_c;
  uint local_8;

  if (*param_3 == 0) {
    return 1;
  }
  local_10 = dwParam2;
  local_c = (uint)param_2;
  local_8 = (uint)(byte)(param_2 + 1);
  mcierr = mciSendCommandA(*param_3,0x806,0xd,(DWORD_PTR)&local_10);
  if (mcierr != 0) {
    FUN_00719c90(mcierr,param_3);
    return 1;
  }
  return 0;
}

