#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004DBF30 -> 006E62D0 @ 004DBF76 | 004DBF30 -> 006E62D0 @ 004DBFF3 | 004DBF30 ->
   006E62D0 @ 004DC042 | 004DBF30 -> 006E62D0 @ 004DC0AD */

undefined4 __thiscall FUN_004dbf30(void *this,int *param_1)

{
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar1;

  piVar3 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)this + (int)param_1 * 4 + 0x4d0) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)this + (int)param_1 * 4 + 0x4e8) == 0) {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e8) = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         *(AnonShape_005EFAE0_B406B78B **)((int)this + (int)param_1 * 4 + 0x4d0),
                         (int *)&param_1);
      if ((iVar4 == 0) && (param_1[0x131] == STField<int>(this,0x18))) {
        param_1[0x130] = *(int *)((int)this + (int)piVar3 * 4 + 0x4e0);
      }
      if ((*(int *)((int)this + (0x135 - (int)piVar3) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - (int)piVar3) * 4) != 0)) {
        piVar2 = (int *)((int)this + (0x139 - (int)piVar3) * 4);
        *piVar2 = 100 - *(int *)((int)this + (int)piVar3 * 4 + 0x4e0);
        iVar4 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,
                           *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - (int)piVar3) * 4),
                           (int *)&param_1);
        if ((iVar4 == 0) && (param_1[0x131] == STField<int>(this,0x18))) {
          param_1[0x130] = *piVar2;
        }
      }
    }
    else {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e8) = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         *(AnonShape_005EFAE0_B406B78B **)((int)this + (int)param_1 * 4 + 0x4d0),
                         (int *)&param_1);
      piVar1 = param_1;
      if (iVar4 == 0) {
        param_1[0x130] = 0;
        if (STField<int *>(param_1,0x61f) != nullptr) {
          thunk_FUN_00635fd0(STField<int *>(param_1,0x61f));
          Library::MSVCRT::FUN_0072e2b0(STField<HoloTy *>(piVar1,0x61f));
          STField<undefined4>(piVar1,0x61f) = 0;
        }
      }
      if ((*(int *)((int)this + (0x135 - (int)piVar3) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - (int)piVar3) * 4) != 0)) {
        piVar2 = (int *)((int)this + (0x139 - (int)piVar3) * 4);
        *piVar2 = 100;
        iVar4 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,
                           *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - (int)piVar3) * 4),
                           (int *)&param_1);
        if ((iVar4 == 0) && (param_1[0x131] == STField<int>(this,0x18))) {
          param_1[0x130] = *piVar2;
          return 0;
        }
      }
    }
  }
  return 0;
}

