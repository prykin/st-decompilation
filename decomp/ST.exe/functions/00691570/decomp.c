#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_00691570(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;

  puVar3 = param_1 + 0x654;
  memset(param_1, 0, 0x10e0); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(param_1 + 0x438, 0, 0x5a0); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(param_1 + 0x5a0, 0, 0x2d0); /* compiler bulk-zero initialization */
  iVar1 = 0;
  puVar2 = param_1 + 0x6c2;
  local_8 = 3;
  do {
    *puVar3 = 0;
    puVar2[-1] = 0;
    puVar3 = puVar3 + 0x92;
    memset(puVar2, 0, 0x90); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(puVar2 + -0x6d, 0, 0x120); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(puVar2 + -0x25, 0, 0x90); /* compiler bulk-zero initialization */
    iVar1 = 0;
    puVar2 = puVar2 + 0x92;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  memset(param_1 + 0x80a, 0, 0xb40); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(param_1 + 0xada, 0, 0xb40); /* compiler bulk-zero initialization */
  return param_1;
}

