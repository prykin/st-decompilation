#include "../../pseudocode_runtime.h"


undefined4 FUN_004d0f00(void)

{
  undefined4 local_20 [7];

  memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
  local_20[4] = 0;
  local_20[3] = 1;
  local_20[2] = 2;
  local_20[1] = 0xff;
  local_20[0] = 0x3ea;
  STPlaySystemC::CreateGameObject(PTR_00802a38,0x3ea,0,0,local_20,0);
  return 0;
}

