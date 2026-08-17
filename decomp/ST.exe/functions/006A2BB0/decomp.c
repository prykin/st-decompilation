#include "../../pseudocode_runtime.h"


undefined * __cdecl FUN_006a2bb0(uint param_1)

{
  /* ST_CALLSITE[006A2BCB]: CALL dword ptr [0x0085bde8] */
  wsprintfA(&DAT_00854084,"%s%03u","MAPTXTR",param_1 & 0x7fff);
  return &DAT_00854084;
}

