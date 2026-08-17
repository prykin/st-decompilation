#include "../../pseudocode_runtime.h"


void __fastcall FUN_0067be20(int param_1,undefined4 param_2,DArrayTy *param_3)

{
  uint index;
  STGameObjC *objPtr;
  ushort *puVar1;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  ushort local_c;
  ushort local_a;
  int local_8;

  index = param_3->count;
  local_8 = param_1;
  while (index = index - 1, -1 < (int)index) {
    if ((index < param_3->count) &&
       (puVar1 = DArrayAt<ushort>(param_3, index),
       puVar1 != nullptr)) {
      /* ST_CALLSITE[0067BE5F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      objPtr = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,((char *)local_8)[0x640],*puVar1,CASE_1);
      if (objPtr == nullptr) {
        DArrayRemoveAt(param_3,index);
      }
      else {
        thunk_FUN_0067bda0((short *)&local_14,(STFishC *)objPtr);
        puVar1[2] = local_14;
        puVar1[3] = local_12;
        puVar1[4] = local_10;
        puVar1[5] = local_e;
        puVar1[6] = local_c;
        puVar1[7] = local_a;
      }
    }
  }
  return;
}

