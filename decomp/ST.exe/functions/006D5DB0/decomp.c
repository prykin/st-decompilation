#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_006d5db0(undefined4 *param_1)

{
  int *piVar1;

  *param_1 = &VTable_0079DD1C;
  param_1[3] = &VTable_0079DCF8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1[0x17] + 0x310) == 0) &&
     (piVar1 = (int *)param_1[0x19], piVar1 != nullptr)) {
    /* ST_CALLSITE[006D5DD7]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x19] = 0;
  }
  Library::Win32::COMSupport::FUN_00749091((int)param_1);
  return;
}

