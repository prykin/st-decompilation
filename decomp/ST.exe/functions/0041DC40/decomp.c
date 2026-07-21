
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0041DC4C MOVSX EBX,word ptr [EBP + 0xc] | 0041DC87
   MOVSX EAX,word ptr [EBP + 0xc] */

void FUN_0041dc40(undefined4 *param_1,short param_2,undefined2 param_3,short param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000000a;
  undefined4 local_c;

  iVar3 = (int)param_4;
  iVar1 = FUN_006aff50(iVar3);
  iVar2 = FUN_006aff5b(iVar3);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = (iVar1 * param_2 - iVar2 * in_stack_0000000a) / DAT_007eda8c;
  iVar2 = FUN_006aff5b(iVar3);
  iVar3 = FUN_006aff50(iVar3);
  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  local_c = CONCAT22((short)((iVar3 * in_stack_0000000a + iVar2 * param_2) / DAT_007eda8c),
                     (short)iVar1);
  *param_1 = local_c;
  *(undefined2 *)(param_1 + 1) = param_3;
  return;
}

