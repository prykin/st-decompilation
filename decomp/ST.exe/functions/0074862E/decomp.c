#include "../../pseudocode_runtime.h"


int FUN_0074862e(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  LPVOID *ppvVar2;

  if (param_2 == nullptr) {
    iVar1 = -0x7fffbffd;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x30);
    /* ST_CALLSITE[00748647]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection(lpCriticalSection);
    ppvVar2 = (LPVOID *)(param_1 + 4);
    if ((*ppvVar2 == (LPVOID)0x0) && (iVar1 = Library::MSVCRT::FUN_00746b90(ppvVar2), iVar1 < 0)) {
      /* ST_CALLSITE[00748662]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      return iVar1;
    }
    *param_2 = *ppvVar2;
    /* ST_CALLSITE[00748679]: CALL dword ptr [EAX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)*ppvVar2 + 4))(*ppvVar2);
    /* ST_CALLSITE[0074867D]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    iVar1 = 0;
  }
  return iVar1;
}

