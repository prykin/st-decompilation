#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004DBE00 -> 006E62D0 @ 004DBE3B | 004DBE00 -> 006E62D0 @ 004DBEC1 */

undefined4 __thiscall FUN_004dbe00(void *this,int *param_1)

{
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar1;

  iVar4 = 0;
  piVar2 = (int *)((int)this + 0x4d0);
  do {
    if ((int *)*piVar2 == param_1) {
      iVar3 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         *(AnonShape_005EFAE0_B406B78B **)((int)this + iVar4 * 4 + 0x4d0),
                         (int *)&param_1);
      piVar1 = param_1;
      if (iVar3 == 0) {
        param_1[0x130] = 0;
        if (STField<int *>(param_1,0x61f) != nullptr) {
          thunk_FUN_00635fd0(STField<int *>(param_1,0x61f));
          Library::MSVCRT::FUN_0072e2b0(STField<HoloTy *>(piVar1,0x61f));
          STField<undefined4>(piVar1,0x61f) = 0;
        }
      }
      *(undefined4 *)((int)this + iVar4 * 4 + 0x4d0) = 0;
      *(undefined4 *)((int)this + iVar4 * 4 + 0x4e0) = 0;
      if (*(int *)((int)this + (0x135 - iVar4) * 4) != 0) {
        piVar2 = (int *)((int)this + (0x139 - iVar4) * 4);
        *piVar2 = 100;
        if (*(int *)((int)this + (0x13b - iVar4) * 4) != 0) {
          iVar4 = STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,
                             *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - iVar4) * 4),
                             (int *)&param_1);
          if ((iVar4 == 0) && (param_1[0x131] == STField<int>(this,0x18))) {
            param_1[0x130] = *piVar2;
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

