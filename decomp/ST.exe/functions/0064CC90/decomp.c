#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_0064cc90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x21] = 0;
  *param_1 = &VTable_0079D67C;
  if (param_1 == nullptr) {
    puVar2 = nullptr;
  }
  else {
    puVar2 = param_1 + 0x23;
  }
  memset(puVar2, 0, 0x49f); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x49c);
  iVar1 = 0;
  thunk_FUN_006728f0((undefined4 *)&DAT_007d3f78);
  STField<undefined4>(param_1,0x5b3) = 0;
  memset((void *)((int)param_1 + 0x52f), 0, 0x84); /* compiler bulk-zero initialization */
  return param_1;
}

