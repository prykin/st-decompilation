#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_0069ffb0(undefined4 *param_1)

{
  int iVar1;

  thunk_FUN_00693910((AnonShape_00693910_1CC6632C *)((int)param_1 + 0x24e));
  thunk_FUN_00694590((undefined4 *)((int)param_1 + 0x1bef));
  thunk_FUN_00691570((undefined4 *)((int)param_1 + 0x1c03));
  *(undefined4 *)((int)param_1 + 0x53ef) = 0;
  *(undefined4 *)((int)param_1 + 0x53eb) = 0;
  memset((void *)((int)param_1 + 0x53f3), 0, 0x104); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset((void *)((int)param_1 + 0x54f7), 0, 0x104); /* compiler bulk-zero initialization */
  iVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  memset((void *)((int)param_1 + 0x582f), 0, 0x28); /* compiler bulk-zero initialization */
  iVar1 = 0;
  param_1[6] = 0;
  *(undefined4 *)((int)param_1 + 0x56ff) = 0;
  memset((void *)((int)param_1 + 0x55fb), 0, 0x104); /* compiler bulk-zero initialization */
  *(undefined4 *)((int)param_1 + 0x570b) = 0x32;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}

