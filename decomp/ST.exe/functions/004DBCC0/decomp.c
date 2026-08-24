#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: incoming stack slot is read as a uint before its address is passed as a distinct output
   lifetime */

undefined4 __thiscall FUN_004dbcc0(void *this,uint param_1,int param_2)

{
  void *param_1_after_output = nullptr; /* compiler output-call stack-slot lifetime split */
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar3_mg0;
  int iVar3_mg2;

  uVar3 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + param_1 * 4 + 0x4d0) != 0) &&
     (*(int *)((int)this + param_1 * 4 + 0x4e8) != 0)) {
    *(int *)((int)this + param_1 * 4 + 0x4e0) = param_2;
    if (100 < param_2) {
      *(undefined4 *)((int)this + param_1 * 4 + 0x4e0) = 100;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)this + param_1 * 4 + 0x4e0) < 0) {
      *(undefined4 *)((int)this + param_1 * 4 + 0x4e0) = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3_mg0 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,
                           *(AnonShape_005EFAE0_B406B78B **)((int)this + param_1 * 4 + 0x4d0),
                           (int *)&param_1_after_output);
    if (iVar3_mg0 == 0) {
      uVar2 = STField<undefined4>(this,0x18);
      STField<undefined4>(param_1_after_output,0x4c0) = *(undefined4 *)((int)this + uVar3 * 4 + 0x4e0);
      STField<undefined4>(param_1_after_output,0x4c4) = uVar2;
    }
    if (*(int *)((int)this + (0x135 - uVar3) * 4) != 0) {
      piVar1 = (int *)((int)this + (0x139 - uVar3) * 4);
      *piVar1 = 100 - *(int *)((int)this + uVar3 * 4 + 0x4e0);
      if (*(int *)((int)this + (0x13b - uVar3) * 4) != 0) {
        iVar3_mg2 = STPlaySystemC::sub_006E62D0
                              (g_playSystem_00802A38,
                               *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - uVar3) * 4),
                               (int *)&param_1_after_output);
        if ((iVar3_mg2 == 0) && (STField<int>(param_1_after_output,0x4c4) == STField<int>(this,0x18))) {
          STField<int>(param_1_after_output,0x4c0) = *piVar1;
        }
      }
    }
  }
  return 0;
}

