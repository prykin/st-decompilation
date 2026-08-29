#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00719790(undefined4 *param_1,MCIDEVICEID *param_2)

{
  MCIERROR mcierr;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  if (*param_2 == 0) {
    return 1;
  }
  local_18 = 0;
  local_14 = *param_1;
  local_10 = param_1[1];
  local_c = param_1[2];
  local_8 = param_1[3];
  /* ST_CALLSITE[007197E4]: CALL dword ptr [0x0085bec0] */
  mcierr = mciSendCommandA(*param_2,0x842,0x50002,(DWORD_PTR)&local_18);
  if (mcierr != 0) {
    FUN_00719c90(mcierr,param_2);
    return 1;
  }
  return 0;
}

