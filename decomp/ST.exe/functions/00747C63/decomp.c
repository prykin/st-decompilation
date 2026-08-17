#include "../../pseudocode_runtime.h"


int FUN_00747c63(AnonShape_00747C63_5B932397 *param_1,int *param_2,char *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;

  if (param_2 == nullptr) {
    iVar1 = -0x7fffbffd;
  }
  else {
    lpCriticalSection = param_1->field_005C;
    /* ST_CALLSITE[00747C7D]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection(lpCriticalSection);
    if (param_1->field_000C == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1->field_0064 + 0x14) == 0) {
        iVar1 = FUN_00747e65(&param_1[-1].field_005C,param_2,param_3);
        if (iVar1 < 0) {
          /* ST_CALLSITE[00747CC8]: CALL dword ptr [EAX + 0x2c] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (*(code *)param_1[-1].field_005C[1].SpinCount)();
          /* ST_CALLSITE[00747CCC]: CALL dword ptr [0x0085bb90] */
          LeaveCriticalSection(lpCriticalSection);
        }
        else {
          /* ST_CALLSITE[00747CD7]: CALL dword ptr [0x0085bb90] */
          LeaveCriticalSection(lpCriticalSection);
          iVar1 = 0;
        }
      }
      else {
        /* ST_CALLSITE[00747C9F]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection(lpCriticalSection);
        iVar1 = -0x7ffbfddc;
      }
    }
    else {
      /* ST_CALLSITE[00747C89]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      iVar1 = -0x7ffbfdfc;
    }
  }
  return iVar1;
}

