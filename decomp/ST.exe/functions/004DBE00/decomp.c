#include "../../pseudocode_runtime.h"


/* WARNING: Unable to use type for symbol piVar1 */
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004DBE00 -> 006E62D0 @ 004DBE3B | 004DBE00 -> 006E62D0 @ 004DBEC1 */

undefined4 __thiscall FUN_004dbe00(void *this,RecoveredRecord_004DBE00_6A369FCE *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  RecoveredRecord_004DBE00_6A369FCE *piVar1;

  iVar4 = 0;
  piVar2 = (int *)((int)this + 0x4d0);
  do {
    if ((RecoveredRecord_004DBE00_6A369FCE *)*piVar2 == param_1) {

      iVar3 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         *(RecoveredRecordView_005EFAE0_855D930D **)((int)this + iVar4 * 4 + 0x4d0),
                         (int *)&param_1);
      piVar1 = param_1;
      if (iVar3 == 0) {
        *(undefined4 *)&param_1->field_0x4c0 = 0;
        if ((RecoveredRecord_00635FD0_23FED72E *)param_1->field_061F !=
            nullptr) {
          thunk_FUN_00635fd0((RecoveredRecord_00635FD0_23FED72E *)param_1->field_061F);
          Library::MSVCRT::FUN_0072e2b0((HoloTy *)piVar1->field_061F);
          piVar1->field_061F = nullptr;
        }
      }
      *(undefined4 *)((int)this + iVar4 * 4 + 0x4d0) = 0;
      *(undefined4 *)((int)this + iVar4 * 4 + 0x4e0) = 0;
      if (*(int *)((int)this + (0x135 - iVar4) * 4) != 0) {
        puVar1 = (undefined4 *)((int)this + (0x139 - iVar4) * 4);
        *puVar1 = 100;
        if (*(int *)((int)this + (0x13b - iVar4) * 4) != 0) {

          iVar4 = STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,
                             *(RecoveredRecordView_005EFAE0_855D930D **)
                              ((int)this + (0x135 - iVar4) * 4),(int *)&param_1);
          if ((iVar4 == 0) && (*(int *)&param_1->field_0x4c4 == STField<int>(this,0x18))) {
            *(undefined4 *)&param_1->field_0x4c0 = *puVar1;
          }
        }
      }
      return 0;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 2);
  return 0;
}

