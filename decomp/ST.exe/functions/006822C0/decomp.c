#include "../../pseudocode_runtime.h"


undefined4 FUN_006822c0(char *param_1)

{
  uint uVar1;
  if (*param_1 == '\x01') {
    return *(undefined4 *)(param_1 + 1);
  }
  uVar1 = thunk_FUN_0067f4b0((int)*(short *)(param_1 + 1));
  return uVar1;
}

