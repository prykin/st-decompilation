
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00435858 MOVSX ESI,byte ptr [EBP + 0x8] */

uint FUN_00435850(char param_1,int param_2,int *param_3)

{
  dword index;
  uint uVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_2c;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_10 [4];
  int local_c;
  DArrayTy *local_8;

  iVar2 = (int)param_1;
  local_8 = g_playerRuntime[iVar2].groups;
  index = local_8->count;
  uVar1 = index;
  while (index = index - 1, -1 < (int)index) {
    DArrayGetElement(local_8,index,&local_c);
    if (local_c == 0) {
      uVar1 = index;
    }
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_24 = uVar1 & 0xffff;
  local_2c = 1;
  local_34 = iVar2;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)PTR_00802a38->vtable->field_0008)(0x10ff,local_10,&param_1,local_38,0);
  if (param_2 == 1) {
    thunk_FUN_00423360(_param_1);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = _param_1;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT22((short)((uint)param_3 >> 0x10),(short)uVar1);
}

