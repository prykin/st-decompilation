#include "../../pseudocode_runtime.h"


undefined4
FUN_00497850(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7,
            int *param_8,int *param_9,int *param_10)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;

  if (-1 < (int)param_7) {
    if ((((int)param_7 < (int)g_array_007FB270->count) && (param_7 < g_array_007FB270->count)) &&
       (pvVar3 = DArrayAt<void>(g_array_007FB270, param_7),
       pvVar3 != nullptr)) {
      iVar1 = STField<int>(pvVar3,0x14);
      uVar2 = thunk_FUN_0060e470(param_1,param_2,param_3,param_4,param_5,param_6,
                                 STField<int>(iVar1,0x1E9) + 100,STField<int>(iVar1,0x1ED) + 100,
                                 STField<undefined4>(iVar1,0x1F1),param_8,param_9,param_10);
      return uVar2;
    }
  }
  *param_8 = param_4;
  *param_9 = param_5;
  *param_10 = param_6;
  return 0;
}

