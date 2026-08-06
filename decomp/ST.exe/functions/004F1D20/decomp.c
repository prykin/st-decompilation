#include "../../pseudocode_runtime.h"


void FUN_004f1d20(undefined1 *param_1)

{
  undefined1 local_3c [7];
  undefined1 local_35;
  undefined4 local_34;

  memset((void *)local_3c, 0, 0x36); /* compiler bulk-zero initialization */
  local_3c[1] = 1;
  local_3c[0] = *param_1;
  local_3c[2] = param_1[1];
  STPiece<3,4>(local_3c) = *(undefined4 *)(param_1 + 2);
  local_35 = param_1[6];
  local_34 = *(undefined4 *)(param_1 + 7);
  thunk_FUN_00526100(local_3c,0);
  return;
}

