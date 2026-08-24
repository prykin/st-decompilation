#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_00629040(undefined4 *param_1)

{
  uint *puVar2;
  puVar2 = param_1;
  memset(puVar2, 0, 0xd7); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0xd4);
  STField<undefined4>(param_1,0xc6) = 0xffffffff;
  return param_1;
}

