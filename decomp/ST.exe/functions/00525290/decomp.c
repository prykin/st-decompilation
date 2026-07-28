
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00525293 MOV EAX,dword ptr [EBP + 0x8];
   first-use mask */

int __cdecl FUN_00525290(byte param_1)

{
  return param_1 + 0x3714;
}

