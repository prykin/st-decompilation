#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: incoming stack slot is read as a uint before its address is passed as a distinct output
   lifetime */

undefined4 __thiscall FUN_004dbf30(void *this,RecoveredRecordView_004DBF30_6D6AEAAB *param_1)

{
  int *piVar2;
  RecoveredRecordView_004DBF30_6D6AEAAB *pRVar3;
  int iVar4;
  RecoveredRecordView_004DBF30_6D6AEAAB *piVar1;

  pRVar3 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)this + (int)param_1 * 4 + 0x4d0) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)this + (int)param_1 * 4 + 0x4e8) == 0) {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e8) = 1;

      iVar4 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         *(RecoveredRecordView_005EFAE0_855D930D **)
                          ((int)this + (int)param_1 * 4 + 0x4d0),(int *)&param_1);
      if ((iVar4 == 0) && (param_1->field_04C4 == STField<int>(this,0x18))) {
        param_1->field_04C0 = *(int *)((int)this + (int)pRVar3 * 4 + 0x4e0);
      }
      if ((*(int *)((int)this + (0x135 - (int)pRVar3) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - (int)pRVar3) * 4) != 0)) {
        piVar2 = (int *)((int)this + (0x139 - (int)pRVar3) * 4);
        *piVar2 = 100 - *(int *)((int)this + (int)pRVar3 * 4 + 0x4e0);

        iVar4 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,
                           *(RecoveredRecordView_005EFAE0_855D930D **)
                            ((int)this + (0x135 - (int)pRVar3) * 4),(int *)&param_1);
        if ((iVar4 == 0) && (param_1->field_04C4 == STField<int>(this,0x18))) {
          param_1->field_04C0 = *piVar2;
        }
      }
    }
    else {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e8) = 0;

      iVar4 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         *(RecoveredRecordView_005EFAE0_855D930D **)
                          ((int)this + (int)param_1 * 4 + 0x4d0),(int *)&param_1);
      piVar1 = param_1;
      if (iVar4 == 0) {
        param_1->field_04C0 = 0;
        if ((RecoveredRecord_00635FD0_23FED72E *)param_1->field_061F !=
            nullptr) {
          thunk_FUN_00635fd0((RecoveredRecord_00635FD0_23FED72E *)param_1->field_061F);
          Library::MSVCRT::FUN_0072e2b0((HoloTy *)piVar1->field_061F);
          piVar1->field_061F = nullptr;
        }
      }
      if ((*(int *)((int)this + (0x135 - (int)pRVar3) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - (int)pRVar3) * 4) != 0)) {
        piVar2 = (int *)((int)this + (0x139 - (int)pRVar3) * 4);
        *piVar2 = 100;

        iVar4 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,
                           *(RecoveredRecordView_005EFAE0_855D930D **)
                            ((int)this + (0x135 - (int)pRVar3) * 4),(int *)&param_1);
        if ((iVar4 == 0) && (param_1->field_04C4 == STField<int>(this,0x18))) {
          param_1->field_04C0 = *piVar2;
          return 0;
        }
      }
    }
  }
  return 0;
}

