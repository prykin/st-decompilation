#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e1e30(int param_1)

{

  memset((void *)(param_1 + 0x4d0), 0, 0x50); /* compiler bulk-zero initialization */
  *(undefined4 *)(param_1 + 0x520) = 0;
  *(uint *)(param_1 + 0x524) = PTR_00802a38->field_00E4;
  return 0;
}

