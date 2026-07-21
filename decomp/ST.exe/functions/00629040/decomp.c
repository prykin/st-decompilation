#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_00629040(undefined4 *param_1)

{
  undefined4 *puVar2;

  puVar2 = param_1;
  memset(puVar2, 0, 0xd6); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0xd4);
  *(undefined1 *)((int)puVar2 + 2) = 0;
  *(undefined4 *)((int)param_1 + 0xc6) = 0xffffffff;
  return param_1;
}

