#include "../../pseudocode_runtime.h"


void __thiscall FUN_0062e3a0(void *this,int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  iVar1 = param_3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)((int)this + (int)param_1 * 4 + 0x50);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0xc))) &&
     (iVar2 = *(int *)(iVar2 + 8) * param_2 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) {
    puVar4 = (undefined4 *)(iVar2 + 0x10);
    iVar2 = 3;
    do {
      if (((AnonShape_005EFAE0_B406B78B *)*puVar4 != nullptr) &&
         (iVar3 = STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar4,
                             (int *)&param_1), iVar3 != -4)) {
        if (iVar1 == 0) {
          thunk_FUN_005fb030((AnonShape_005FB030_9C7404C6 *)param_1);
        }
        else if (iVar1 == 1) {
          thunk_FUN_005fb170((STColl3C *)param_1);
        }
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

