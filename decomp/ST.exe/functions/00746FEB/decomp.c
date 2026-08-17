#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DB3C+0x20

   [STVTableApplier] Virtual slot 0079DDB0+0x20

   [STVTableApplier] Virtual slot 007A1390+0x20

   [STVTableApplier] Virtual slot 007A15A8+0x20 */

undefined4 FUN_00746feb(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  /* ST_CALLSITE[00746FF6]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  if (param_2 != nullptr) {
    /* ST_CALLSITE[00747007]: CALL dword ptr [EAX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_2 + 4))(param_2);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[00747014]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0xc) = param_2;
  /* ST_CALLSITE[0074701B]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

