#include "../../pseudocode_runtime.h"


/* WARNING: Unable to use type for symbol piVar1 */
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: incoming stack slot is read as a uint before its address is passed as a distinct output
   lifetime */

undefined4 __thiscall FUN_004dbf30(void *this,uint param_1)

{
  void *param_1_after_output = nullptr; /* compiler output-call stack-slot lifetime split */
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *piVar1;

  uVar3 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)this + param_1 * 4 + 0x4d0) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)this + param_1 * 4 + 0x4e8) == 0) {
      *(undefined4 *)((int)this + param_1 * 4 + 0x4e8) = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         *(AnonShape_005EFAE0_B406B78B **)((int)this + param_1 * 4 + 0x4d0),
                         (int *)&param_1_after_output);
      if ((iVar4 == 0) && (STField<int>(param_1_after_output,0x4c4) == STField<int>(this,0x18))) {
        STField<undefined4>(param_1_after_output,0x4c0) = *(undefined4 *)((int)this + uVar3 * 4 + 0x4e0);
      }
      if ((*(int *)((int)this + (0x135 - uVar3) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - uVar3) * 4) != 0)) {
        piVar2 = (int *)((int)this + (0x139 - uVar3) * 4);
        *piVar2 = 100 - *(int *)((int)this + uVar3 * 4 + 0x4e0);
        iVar4 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,
                           *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - uVar3) * 4),
                           (int *)&param_1_after_output);
        if ((iVar4 == 0) && (STField<int>(param_1_after_output,0x4c4) == STField<int>(this,0x18))) {
          STField<int>(param_1_after_output,0x4c0) = *piVar2;
        }
      }
    }
    else {
      *(undefined4 *)((int)this + param_1 * 4 + 0x4e8) = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         *(AnonShape_005EFAE0_B406B78B **)((int)this + param_1 * 4 + 0x4d0),
                         (int *)&param_1_after_output);
      piVar1 = param_1_after_output;
      if (iVar4 == 0) {
        STField<undefined4>(param_1_after_output,0x4c0) = 0;
        if (STField<int *>(param_1_after_output,0x61f) != nullptr) {
          thunk_FUN_00635fd0(STField<int *>(param_1_after_output,0x61f));
          Library::MSVCRT::FUN_0072e2b0(STField<HoloTy *>(piVar1,0x61f));
          STField<undefined4>(piVar1,0x61f) = 0;
        }
      }
      if ((*(int *)((int)this + (0x135 - uVar3) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - uVar3) * 4) != 0)) {
        puVar1 = (undefined4 *)((int)this + (0x139 - uVar3) * 4);
        *puVar1 = 100;
        iVar4 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,
                           *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - uVar3) * 4),
                           (int *)&param_1_after_output);
        if ((iVar4 == 0) && (STField<int>(param_1_after_output,0x4c4) == STField<int>(this,0x18))) {
          STField<undefined4>(param_1_after_output,0x4c0) = *puVar1;
          return 0;
        }
      }
    }
  }
  return 0;
}

