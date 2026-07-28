
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005293C3 MOV EAX,dword ptr [EBP + 0x8];
   first-use mask */

undefined4 __cdecl FUN_005293c0(byte param_1)

{
  return *(undefined4 *)(&DAT_007e4534 + (uint)param_1 * 4);
}

