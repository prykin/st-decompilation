#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0041DC4C MOVSX EBX,word ptr [EBP + 0xc] | 0041DC87
   MOVSX EAX,word ptr [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0041DCA2 MOV CX,word ptr
   [EBP + 0x10]

   [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=60, ignored=0, unknown=0

   [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: the complete machine CFG returns incoming pointer parameter param_1 (ordinal=0);
   restore its exact formal pointer type after the obsolete void-pointer normalization */

uint * FUN_0041dc40(undefined4 *param_1,short param_2,ushort param_3,short param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000000a;
  uint local_c;
  iVar4 = (int)param_4;
  uVar1 = FUN_006aff50(iVar4);
  uVar2 = FUN_006aff5b(iVar4);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar3 = (int)(uVar1 * (int)param_2 - uVar2 * (int)in_stack_0000000a) / DAT_007eda8c;
  uVar1 = FUN_006aff5b(iVar4);
  uVar2 = FUN_006aff50(iVar4);
  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  local_c = CONCAT22((short)((int)(uVar2 * (int)in_stack_0000000a + uVar1 * (int)param_2) /
                            DAT_007eda8c),(short)iVar3);
  *param_1 = local_c;
  *(ushort *)(param_1 + 1) = param_3;
  return param_1;
}

