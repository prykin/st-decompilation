
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042B5B3 MOVSX EAX,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0042B7D0 @ 0042B821
   -> TEST TEST EAX,EAX | 0042E210 @ 0042E2B8 -> CMP CMP EAX,0x1 */

int FUN_0042b5b0(char param_1,uint param_2)

{
  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;

  uVar1 = (g_playerRuntime[param_1].objects)->count;
  if ((uVar1 != 0) && ((param_2 & 0xffff) < uVar1)) {
    DArrayGetElement(g_playerRuntime[param_1].objects,param_2 & 0xffff,&param_1);
    return (uint)(_param_1 != 0);
  }
  return 0;
}

