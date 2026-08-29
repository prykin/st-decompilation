#include "../../pseudocode_runtime.h"


int __thiscall FUN_004ce060(void *this,int param_1)

{
  int iVar1_mg1;
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *local_c;
  int local_8;

  iVar3 = 0;
  local_8 = 0;
  iVar1 = 0;
  if (0 < STField<int>(this,0x524)) {
    puVar2 = (undefined4 *)((int)this + 0x4d0);
    do {

      iVar1_mg1 = STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,(RecoveredRecordView_005EFAE0_855D930D *)*puVar2,
                             (int *)&local_c);
      if (((iVar1_mg1 == 0) && (local_c != nullptr)) &&
         /* ST_CALLSITE[004CE0A1]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
         (iVar1 = STStructuralVirtualCall<undefined4>(local_c, 0x2C), iVar1 == param_1)) {
        local_8 = local_8 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
      iVar1 = local_8;
    } while (iVar3 < STField<int>(this,0x524));
  }
  return iVar1;
}

