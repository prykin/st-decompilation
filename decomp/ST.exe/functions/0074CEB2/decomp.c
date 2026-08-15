#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006D7330 -> 0074CEB2 @ 006D733D | 0074CEB2 -> EXTERNAL:00000019 @ 0074CF11 | 0074CEB2
   -> EXTERNAL:00000019 @ 0074CF1E */

int FUN_0074ceb2(AnonShape_0074CEB2_D881A5E3 *param_1,int *lpCriticalSection,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection_00;
  int *piVar1;
  void *this;
  int iVar3;
  int iVar2;

  if (lpCriticalSection == nullptr) {
    iVar3 = -0x7fffbffd;
  }
  else {
    param_1->field_004C = param_3;
    lpCriticalSection_00 = *(LPCRITICAL_SECTION *)&param_1[-1].field_0x20;
    EnterCriticalSection(lpCriticalSection_00);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*lpCriticalSection + 4))(lpCriticalSection);
    piVar1 = param_1->field_0004;
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    param_1->field_0004 = lpCriticalSection;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this = *(void **)(param_1->field_0048 + 0x90);
    if ((STField<int>(this,0x18) != 0) &&
       (iVar2 = FUN_0074d156(this,lpCriticalSection,param_3), iVar2 < 0)) {
      LeaveCriticalSection(lpCriticalSection_00);
      return iVar2;
    }
    LeaveCriticalSection(lpCriticalSection_00);
    iVar3 = 0;
  }
  return iVar3;
}

