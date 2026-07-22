#include "../../pseudocode_runtime.h"


void __cdecl
FUN_0057b990(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined2 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 local_40 [5];
  undefined4 *local_2c;
  undefined4 local_20 [3];
  undefined2 local_14;
  undefined2 local_12;

  if (param_3 != 0) {
    memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
    local_20[2] = param_1;
    local_20[0] = param_2;
    local_14 = param_5;
    local_12 = param_4;
    local_40[2] = *(undefined4 *)(param_3 + 8);
    local_20[1] = param_6;
    local_2c = local_20;
    local_40[3] = 2;
    local_40[4] = param_7;
    (*g_playSystem_00802A38->vtable->SendMessage)
              ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_40);
  }
  return;
}

