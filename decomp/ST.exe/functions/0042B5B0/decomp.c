
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042B5B3 MOVSX EAX,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0042B7D0 @ 0042B821
   -> TEST TEST EAX,EAX | 0042E210 @ 0042E2B8 -> CMP CMP EAX,0x1
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0042B5D3 MOV EDX,dword ptr [EBP + 0xc];
   first-use mask */

int FUN_0042b5b0(char param_1,ushort param_2)

{
  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000a;

  uVar1 = ((DArrayTy *)g_packedRecords_A62x8[param_1].field3_0x9)->count;
  if ((uVar1 != 0) && (param_2 < uVar1)) {
    DArrayGetElement((DArrayTy *)g_packedRecords_A62x8[param_1].field3_0x9,(uint)param_2,&param_1);
    return (uint)(_param_1 != 0);
  }
  return 0;
}

