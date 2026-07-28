
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007199F0 -> EXTERNAL:000000D3 @ 00719A33
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00719A1E MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 __cdecl FUN_007199f0(DWORD_PTR dwParam2,byte param_2,MCIDEVICEID *param_3)

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
  local_c = (uint)param_2;
  mcierr = mciSendCommandA(*param_3,0x806,5,(DWORD_PTR)&local_10);
  if (mcierr != 0) {
    FUN_00719c90(mcierr,param_3);
    return 1;
  }
  return 0;
}

