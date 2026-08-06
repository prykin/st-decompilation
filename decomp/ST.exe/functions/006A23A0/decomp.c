#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_006a23a0(int *param_1,uint param_2,int param_3,int param_4,short *param_5,undefined *param_6,
            undefined4 param_7)

{
  int iVar2;
  int iVar1;
  int iVar3;
  undefined1 local_10 [8];
  int local_8;

  local_8 = 0xff;
  if (param_4 == 0) {
    if (param_5[1] == 0) {
      local_8 = 0xff;
      if ((*param_5 != 0) && (*param_5 != 1)) {
        local_8 = 0;
      }
    }
    else {
      local_8 = 1;
    }
  }
  iVar3 = param_4;
  if ((int)(param_4 - (((ushort)param_5[2] & 0xf00) >> 8)) < param_4) {
    do {
      iVar2 = thunk_FUN_006a20e0(param_1,param_2,param_3,iVar3,0xff);
      if ((((iVar2 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *param_1)) &&
         (((-1 < param_3 && (param_3 < param_1[1])) && ((-1 < iVar3 && (iVar3 < 6)))))) {
        iVar1 = thunk_FUN_006a1370(param_1,param_2,param_3,iVar3,(int)local_10);
        if ((short)iVar1 != 0) {
          local_8 = 0xff;
        }
        iVar2 = thunk_FUN_006a2920(param_1,param_2,param_3,iVar3,local_8,param_6,param_7);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar3 = iVar3 + -1;
    } while ((int)(param_4 - (((ushort)param_5[2] & 0xf00) >> 8)) < iVar3);
  }
  return 1;
}

