
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0064E618 MOVSX EAX,word ptr [EBP + 0xc] */

void __cdecl
FUN_0064e5c0(undefined1 param_1,short param_2,short param_3,undefined4 param_4,undefined4 param_5)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000a;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000e;
  undefined4 local_c;
  undefined4 local_8;

  local_c = _param_2;
  local_8 = _param_3;
  _param_3 = param_4;
  _param_2 = param_5;
  if ((short)param_4 < 1) {
    local_c = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _param_3 = g_worldGrid._0_4_;
  }
  if ((short)param_5 < 1) {
    local_8 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_stack_0000000a = (undefined2)((uint)param_5 >> 0x10);
    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
    _param_2 = CONCAT22(in_stack_0000000a,g_worldGrid.sizeY);
  }
  thunk_FUN_006756d0((short *)&local_c,(short *)&local_8,&param_3,&param_2);
  thunk_FUN_004d83d0(param_1,(int)(short)local_c,(int)(short)local_8,(int)param_3,(int)param_2);
  return;
}

