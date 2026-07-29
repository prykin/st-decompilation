#include "../../pseudocode_runtime.h"


undefined4 * FUN_006b04d0(uint param_1)

{
  undefined4 *puVar1;
  byte *puVar3;

  if (param_1 == 0) {
    param_1 = 1;
  }
  puVar1 = (undefined4 *)thunk_FUN_006a3be0(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (byte *)(puVar1);
    memset(puVar3, 0, param_1); /* compiler bulk-zero initialization */
    return puVar1;
  }
  return (undefined4 *)0x0;
}

