#include "../../pseudocode_runtime.h"


undefined4 * __cdecl FUN_006a40c0(int param_1,int param_2,uint param_3,char *param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  byte *puVar4;

  puVar1 = (undefined4 *)thunk_FUN_006a3c10(param_1 * param_2,param_3,param_4,param_5);
  if ((puVar1 != nullptr) &&
     (puVar4 = (undefined4 *)((int)puVar1 + param_1 * param_2), puVar1 < puVar4)) {
    uVar2 = (int)puVar4 - (int)puVar1;
    puVar4 = (byte *)(puVar1);
    memset(puVar4, 0, uVar2); /* compiler bulk-zero initialization */
    return puVar1;
  }
  return puVar1;
}

