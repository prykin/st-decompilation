#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DDB0+0x14 */

int FUN_0074c28a(AnonShape_007470E5_0A8F5E67 *param_1)

{
  uint *puVar1;
  AnonShape_007470E5_0A8F5E67 *pAVar2;
  AnonShape_007470E5_0A8F5E67 *pAVar3;

  pAVar3 = param_1;
  pAVar2 = param_1 + 1;
  /* ST_CALLSITE[0074C29C]: CALL EBX */
  EnterCriticalSection((LPCRITICAL_SECTION)&pAVar2->field_0x20);
  puVar1 = &param_1->field_0008;
  param_1 = nullptr;
  if (*puVar1 != 1) {
    if ((*(int *)&pAVar3[2].field_0x20 == 0) ||
       (*(int *)(*(int *)&pAVar3[2].field_0x20 + 0x18) == 0)) {
      if ((*(int **)&pAVar3[2].field_0x24 != nullptr) && (*(int *)&pAVar3[1].field_0x14 == 0)) {
        /* ST_CALLSITE[0074C30A]: CALL dword ptr [EAX + 0x4c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(**(int **)&pAVar3[2].field_0x24 + 0x4c))();
        *(undefined4 *)&pAVar3[1].field_0x14 = 1;
      }
    }
    else if (*(int *)(*(int *)&pAVar3[2].field_0x24 + 0x18) != 0) {
      if (*puVar1 == 0) {
        /* ST_CALLSITE[0074C2D0]: CALL EBX */
        EnterCriticalSection((LPCRITICAL_SECTION)&pAVar3[2].field_0008);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        param_1 = (AnonShape_007470E5_0A8F5E67 *)
                  /* ST_CALLSITE[0074C2D8]: CALL dword ptr [EAX + 0x38] */
                  (**(code **)(*(int *)&pAVar3[-1].field_0x24 + 0x38))();
        /* ST_CALLSITE[0074C2E0]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection((LPCRITICAL_SECTION)&pAVar3[2].field_0008);
      }
      if (-1 < (int)param_1) {
        param_1 = (AnonShape_007470E5_0A8F5E67 *)FUN_007470e5(pAVar3);
      }
      goto LAB_0074c313;
    }
    pAVar3->field_0008 = 1;
  }
LAB_0074c313:
  *(undefined4 *)&pAVar3[1].field_0x18 = 0;
  *(undefined4 *)&pAVar3[1].field_0x1c = 0;
  /* ST_CALLSITE[0074C31C]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)&pAVar2->field_0x20);
  return (int)param_1;
}

