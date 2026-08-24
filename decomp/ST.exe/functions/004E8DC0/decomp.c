#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e8dc0(AnonShape_004E8DC0_1D60A929 *param_1)

{
  int iVar1_mg0;
  int iVar1;
  AnonShape_004E8DC0_1D60A929 *local_8;

  if ((*(int *)&param_1->field_0x4f8 == 0) &&
     ((AnonShape_005EFAE0_B406B78B *)param_1->field_05D3 != nullptr)) {
    local_8 = param_1;
    iVar1_mg0 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_05D3,
                           (int *)&local_8);
    if (iVar1_mg0 == 0) {
      /* ST_CALLSITE[004E8DF4]: CALL dword ptr [EDX + 0x2c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*(int *)local_8 + 0x2c))();
      if (iVar1 == 0x6c) {
        iVar1 = thunk_FUN_004e9b10(local_8,(int)param_1);
        if (iVar1 != 0) {
          *(int *)&param_1->field_0x4f8 = param_1->field_05D3;
          *(undefined4 *)&param_1->field_0x4fc = 1;
          param_1->field_061B = (int *)local_8;
        }
      }
    }
  }
  return 0;
}

