#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DDB0+0x10 */

int FUN_0074c1f9(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;

  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
  /* ST_CALLSITE[0074C20F]: CALL EBP */
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar1 = *(int **)(param_1 + 0x80);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((piVar1 != nullptr) && (piVar1[6] != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x84) + 0x18) != 0)) {
      /* ST_CALLSITE[0074C23A]: CALL dword ptr [EAX + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 0x18))();
      /* ST_CALLSITE[0074C241]: CALL EBP */
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      /* ST_CALLSITE[0074C247]: CALL dword ptr [EAX + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(**(int **)(param_1 + 0x84) + 0x18))();
      /* ST_CALLSITE[0074C250]: CALL dword ptr [EAX + 0x3c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0x3c))();
      if (-1 < iVar2) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      /* ST_CALLSITE[0074C268]: CALL ESI */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      /* ST_CALLSITE[0074C26E]: CALL ESI */
      LeaveCriticalSection(lpCriticalSection);
      return iVar2;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  /* ST_CALLSITE[0074C27B]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

