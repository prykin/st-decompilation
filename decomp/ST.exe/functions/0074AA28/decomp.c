#include "../../pseudocode_runtime.h"


undefined4 FUN_0074aa28(int param_1)

{
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  /* ST_CALLSITE[0074AA40]: CALL EBP */
  EnterCriticalSection(lpCriticalSection_00);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  /* ST_CALLSITE[0074AA4F]: CALL EBP */
  EnterCriticalSection(lpCriticalSection);
  FUN_00748946(param_1);
  /* ST_CALLSITE[0074AA5F]: CALL dword ptr [EAX + 0x84] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x84))();
  /* ST_CALLSITE[0074AA6C]: CALL EBX */
  LeaveCriticalSection(lpCriticalSection);
  /* ST_CALLSITE[0074AA76]: CALL dword ptr [EAX + 0x64] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 100))();
  /* ST_CALLSITE[0074AA7C]: CALL EBX */
  LeaveCriticalSection(lpCriticalSection_00);
  return uVar1;
}

