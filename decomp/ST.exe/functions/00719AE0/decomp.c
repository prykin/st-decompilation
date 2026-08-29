#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00719ae0(uint param_1,MCIDEVICEID *param_2)

{
  MCIERROR mcierr;
  uint local_c;
  uint local_8;

  if (*param_2 != 0) {
    local_c = 0;
    if ((param_1 != 0) && (param_1 <= DAT_00857038)) {
      local_8 = param_1;
      /* ST_CALLSITE[00719B17]: CALL dword ptr [0x0085bec0] */
      mcierr = mciSendCommandA(*param_2,0x807,8,(DWORD_PTR)&local_c);
      if (mcierr == 0) {
        return 0;
      }
      FUN_00719c90(mcierr,param_2);
    }
  }
  return 1;
}

