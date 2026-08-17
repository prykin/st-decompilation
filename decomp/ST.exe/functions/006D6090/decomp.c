#include "../../pseudocode_runtime.h"


void __fastcall FUN_006d6090(AnonShape_006D6090_8F63898D *param_1)

{
  int iVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;

  if (param_1 == nullptr) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)&param_1->field_0x10;
  }
  /* ST_CALLSITE[006D60A3]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  iVar1 = param_1->field_002C;
  while (iVar1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)(param_1->field_005C + 0x310) == 0) &&
       (piVar2 = (int *)param_1->field_0064, piVar2 != nullptr)) {
      /* ST_CALLSITE[006D60C3]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1->field_0064 = 0;
    }
    piVar2 = (int *)param_1->field_0028;
    if (piVar2 != nullptr) {
      param_1->field_0028 = piVar2[7];
      param_1->field_002C = param_1->field_002C + -1;
      /* ST_CALLSITE[006D60E1]: CALL dword ptr [EAX + 0x54] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar2 + 0x54))(1);
    }
    iVar1 = param_1->field_002C;
  }
  param_1->field_003C = 0;
  param_1->field_0064 = 0;
  param_1->field_006C = 0;
  param_1->field_0068 = 0;
  param_1->field_0070 = 0;
  /* ST_CALLSITE[006D60F9]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

