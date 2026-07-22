
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007199F0 -> EXTERNAL:000000D3 @ 00719A33 */

undefined4 __cdecl FUN_007199f0(DWORD_PTR dwParam2,uint param_2,MCIDEVICEID *param_3)

{
  MCIERROR mcierr;
  DWORD_PTR local_10;
  uint local_c;
  undefined4 local_8;

  if (*param_3 == 0) {
    return 1;
  }
  local_10 = dwParam2;
  local_8 = 0;
  local_c = param_2 & 0xff;
  mcierr = mciSendCommandA(*param_3,0x806,5,(DWORD_PTR)&local_10);
  if (mcierr != 0) {
    FUN_00719c90(mcierr,param_3);
    return 1;
  }
  return 0;
}

