#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=13,
   ignored=33, unknown=0 */

void FUN_006cec40(AnonShape_006CEC40_BB23E716 *param_1)

{
  int *piVar1;
  int iVar2;

  if (param_1 != nullptr) {
    piVar1 = param_1->field_0034;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006CEC55]: CALL dword ptr [ECX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 0x6c))(piVar1);
    }
    piVar1 = param_1->field_0040;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006CEC62]: CALL dword ptr [EDX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
      if (iVar2 == -0x7789fdb5) {

        FUN_006cecb0((AnonShape_006CECB0_97249119 *)param_1,1);
      }
    }
    piVar1 = param_1->field_0044;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006CEC7E]: CALL dword ptr [ECX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
      if (iVar2 == -0x7789fdb5) {

        FUN_006cecb0((AnonShape_006CECB0_97249119 *)param_1,0);
      }
    }
    piVar1 = param_1->field_0048;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006CEC9A]: CALL dword ptr [EDX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 0x6c))(piVar1);
    }
  }
  return;
}

