#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00719880(MCIDEVICEID *param_1,int param_2)

{
  MCIERROR mcierr;
  MCIDEVICEID mciId;
  DWORD_PTR dwParam1;
  uint local_10;
  uint local_c;
  uint local_8;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (param_2 == 0) {
    dwParam1 = 0x4802;
    mciId = *param_1;
  }
  else {
    dwParam1 = 0x2802;
    mciId = *param_1;
  }
  /* ST_CALLSITE[007198C3]: CALL dword ptr [0x0085bec0] */
  mcierr = mciSendCommandA(mciId,0x80d,dwParam1,(DWORD_PTR)&local_10);
  if (mcierr != 0) {
    FUN_00719c90(mcierr,param_1);
    return 1;
  }
  return 0;
}

