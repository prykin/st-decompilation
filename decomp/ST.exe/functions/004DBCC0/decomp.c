#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: incoming stack slot is read as a uint before its address is passed as a distinct output
   lifetime */

undefined4 __thiscall
FUN_004dbcc0(void *this,RecoveredRecordView_004DBCC0_6E09EFD2 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  RecoveredRecordView_004DBCC0_6E09EFD2 *pRVar3;
  int iVar3_mg0;
  int iVar3_mg2;

  pRVar3 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + (int)param_1 * 4 + 0x4d0) != 0) &&
     (*(int *)((int)this + (int)param_1 * 4 + 0x4e8) != 0)) {
    *(int *)((int)this + (int)param_1 * 4 + 0x4e0) = param_2;
    if (100 < param_2) {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e0) = 100;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)this + (int)param_1 * 4 + 0x4e0) < 0) {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e0) = 0;
    }

    iVar3_mg0 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,
                           *(RecoveredRecordView_005EFAE0_855D930D **)
                            ((int)this + (int)param_1 * 4 + 0x4d0),(int *)&param_1);
    if (iVar3_mg0 == 0) {
      iVar2 = STField<int>(this,0x18);
      param_1->field_04C0 = *(int *)((int)this + (int)pRVar3 * 4 + 0x4e0);
      param_1->field_04C4 = iVar2;
    }
    if (*(int *)((int)this + (0x135 - (int)pRVar3) * 4) != 0) {
      piVar1 = (int *)((int)this + (0x139 - (int)pRVar3) * 4);
      *piVar1 = 100 - *(int *)((int)this + (int)pRVar3 * 4 + 0x4e0);
      if (*(int *)((int)this + (0x13b - (int)pRVar3) * 4) != 0) {

        iVar3_mg2 = STPlaySystemC::sub_006E62D0
                              (g_playSystem_00802A38,
                               *(RecoveredRecordView_005EFAE0_855D930D **)
                                ((int)this + (0x135 - (int)pRVar3) * 4),(int *)&param_1);
        if ((iVar3_mg2 == 0) && (param_1->field_04C4 == STField<int>(this,0x18))) {
          param_1->field_04C0 = *piVar1;
        }
      }
    }
  }
  return 0;
}

