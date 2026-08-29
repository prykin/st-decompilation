#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00435858 MOVSX ESI,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/ushort Evidence:
   all resolved direct callers consume only AX or kill the result; narrow_uses=2, ignored=1, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=004455C0 @ 00445752 -> read as AX on every CFG path | 0054C740 @
   0054C8A3 -> killed on every CFG path | 00667D90 @ 00667E6B -> read as AX on every CFG path
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:0: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/char
   previous_type=/undefined4 Evidence: entry-use width=/char; unmasked_dword_reads=0;
   evidence=00435858 MOVSX ESI,byte ptr [EBP + 0x8] | 004358D8 address-of incoming slot passed to
   call; end entry lifetime */

ushort FUN_00435850(char param_1,int param_2,int *param_3)

{
  dword index;
  uint uVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  byte local_38 [4];
  int local_34;
  uint local_2c;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  int local_c;
  DArrayTy *local_8;

  iVar2 = (int)param_1;
  local_8 = g_packedRecords_A62x8[iVar2].field2_0x5;
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
  /* ST_CALLSITE[004358D8]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x10ff,&local_10,(int *)&param_1,(short)local_38,0);
  if (param_2 == 1) {
    thunk_FUN_00423360(_param_1);
  }
  if (param_3 != nullptr) {
    *param_3 = (int)_param_1;
  }
  return (ushort)uVar1;
}

