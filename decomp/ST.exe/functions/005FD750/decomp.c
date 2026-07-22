#include "../../pseudocode_runtime.h"


void __cdecl
FUN_005fd750(uint param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,uint param_5,
            undefined4 param_6)

{
  STGameObjC *pSVar1;
  int iVar2;
  uint local_30 [5];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined4 local_16;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_30, 0, 0x2c); /* compiler bulk-zero initialization */
  local_1c = param_2;
  local_1a = param_3;
  local_18 = param_4;
  local_12 = (undefined2)param_5;
  local_30[3] = 1;
  local_30[2] = 1;
  local_30[1] = param_1;
  local_30[0] = 0x82;
  pSVar1 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)param_1,param_5,CASE_1);
  if (pSVar1 != (STGameObjC *)0x0) {
    iVar2 = (*pSVar1->vtable[1].vfunc_24)();
    if (iVar2 != 0) {
      local_16 = pSVar1->field_0018;
    }
  }
  local_10 = param_6;
  local_c = 0xb4;
  local_8 = 5;
  (*g_playSystem_00802A38->vtable->vfunc_08)(0x10a,0,0,local_30,0);
  return;
}

