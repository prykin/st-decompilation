#include "../../pseudocode_runtime.h"


int FUN_004b7240(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = &g_packedRecords_A62x8[(char)param_1].field1941_0x976;
  iVar2 = g_packedRecords_A62x8[(char)param_1].field1941_0x976 - param_2;
  *puVar1 = iVar2;
  if (iVar2 < 0) {
    *puVar1 = 0;
  }
  if (param_2 != 0) {
    thunk_FUN_004b7750(param_1);
  }
  return *puVar1;
}

