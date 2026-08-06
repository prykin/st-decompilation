#include "../../pseudocode_runtime.h"


void __thiscall FUN_005b6730(void *this,uint param_1,char param_2,int param_3)

{
  if ((STField<int>(this,0x18) != 0) && (param_1 == 3)) {
    STField<undefined4>(this,0x18) = 0;
    return;
  }
  if (param_1 == 4) {
    STField<undefined4>(this,0x18) = 1;
  }
  if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
    thunk_FUN_0056a130(&g_sound,param_1,param_2,param_3,nullptr);
  }
  return;
}

