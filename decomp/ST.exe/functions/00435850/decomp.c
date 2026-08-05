
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00435858 MOVSX ESI,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/ushort Evidence:
   all resolved direct callers consume only AX or kill the result; narrow_uses=2, ignored=1, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=004455C0 @ 00445752 -> read as AX on every CFG path | 0054C740 @
   0054C8A3 -> killed on every CFG path | 00667D90 @ 00667E6B -> read as AX on every CFG path */

ushort FUN_00435850(char param_1,int param_2,int *param_3)

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
  local_8 = (DArrayTy *)g_packedRecords_A62x8[iVar2].field2_0x5;
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
  g_playSystem_00802A38->vfunc_08(0x10ff,(short)local_10,(short)&param_1,(short)local_38,0);
  if (param_2 == 1) {
    thunk_FUN_00423360(_param_1);
  }
  if (param_3 != nullptr) {
    *param_3 = _param_1;
  }
  return (ushort)uVar1;
}

