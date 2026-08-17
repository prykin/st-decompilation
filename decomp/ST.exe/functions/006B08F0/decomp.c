#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0042A860 -> 006B08F0 @ 0042A8D0 */

int FUN_006b08f0(AnonShape_GLOBAL_0080759C_9638EF10 *param_1,int param_2,UINT param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar3;
  LOGPALETTE local_40c [128];
  int local_8;

  iVar3 = 0;
  local_8 = 0;
  if ((param_1 != nullptr) && (param_1->field_0040 != 0)) {
    if (((*(uint *)&param_1->field_0x8 & 0x20000001) == 0) && (*(int *)&param_1->field_0x24 < 9)) {
      if ((int)param_3 < 10) {
        iVar3 = 10 - param_3;
        param_3 = 10;
        param_4 = param_4 - iVar3;
      }
      if (0xf6 < (int)(param_3 + param_4)) {
        param_4 = 0xf6 - param_3;
      }
    }
    if ((param_2 != 0) && (0 < param_4)) {
      if ((*(uint *)&param_1->field_0x8 & 0x4000000) != 0) {
        /* ST_CALLSITE[006B097F]: CALL dword ptr [0x0085bb8c] */
        EnterCriticalSection((LPCRITICAL_SECTION)&param_1[1].field_0x38);
      }
      bVar2 = FUN_006b06a0(param_1,local_40c,param_2 + iVar3 * 4,param_3,param_4);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,bVar2) == 0) {
        iVar3 = -0xfd;
      }
      else {
        piVar1 = (int *)param_1->field_003C;
        iVar3 = local_8;
        if (piVar1 != nullptr) {
          /* ST_CALLSITE[006B09C9]: CALL dword ptr [EDX + 0x18] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,0,0,0x100,local_40c[0].palPalEntry);
          local_8 = iVar3;
        }
      }
      if ((*(uint *)&param_1->field_0x8 & 0x4000000) != 0) {
        /* ST_CALLSITE[006B09E2]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[1].field_0x38);
      }
      if (((iVar3 != -0x7789fdc4) && (iVar3 != -0x7789fdb3)) && (iVar3 != -0x7fffbfff)) {
        return iVar3;
      }
    }
  }
  return 0;
}

