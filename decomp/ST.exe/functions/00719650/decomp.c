#include "../../pseudocode_runtime.h"


bool __cdecl FUN_00719650(MCIDEVICEID *param_1)

{
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  if (*param_1 == 0) {
    return false;
  }
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_c = 4;
  /* ST_CALLSITE[00719687]: CALL dword ptr [0x0085bec0] */
  mciSendCommandA(*param_1,0x814,0x102,(DWORD_PTR)&local_14);
  return local_10 == 0x20e;
}

