#include "../../pseudocode_runtime.h"


void FUN_00555600(undefined4 param_1)

{
  CHAR local_108 [260];

  /* ST_CALLSITE[0055561E]: CALL dword ptr [0x0085bde8] */
  wsprintfA(local_108,"%s%s",&CHAR_00h_00807680,param_1);
  Library::MSVCRT::FUN_0072ea70(local_108,&DAT_007c8ff0);
  return;
}

