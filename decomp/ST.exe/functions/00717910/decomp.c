#include "../../pseudocode_runtime.h"


void __thiscall
FUN_00717910(void *this,byte *param_1,int param_2,int param_3,byte *param_4,int param_5,uint param_6
            ,uint param_7,uint param_8)

{
  if (*(int **)this != nullptr) {
    FUN_006b5f80(*(int **)this,STField<int>(this,0x20) + param_2,
                 STField<int>(this,0x24) + param_3,param_7,param_8);
  }
  FUN_006d2820(param_1,STField<RecoveredSourceFamily_dibcopy *>(this,0x28),param_4,param_5,param_6
               ,param_7,param_8,0,nullptr,0,0,nullptr);
  return;
}

