#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004c5e60(int param_1)

{
  int iVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(AnonShape_005EFAE0_B406B78B **)(param_1 + 0x4d0) != nullptr) {
    local_8 = param_1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(param_1 + 0x4d0),
                       &local_8);
    if (iVar1 == 0) {
      thunk_FUN_00581b80(local_8);
    }
    *(undefined4 *)(param_1 + 0x4d0) = 0;
  }
  return 0;
}

