#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_006a3840(int *param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  int iVar2;
  int iVar1;
  int local_EAX_119;
  int iVar3;
  int iVar4;
  RecoveredRecord_006A1370_30F34641 local_10;
  int *local_8;

  local_8 = &DAT_007dfb74;
  do {
    iVar3 = local_8[-1] + param_2;
    iVar4 = *local_8 + param_3;
    if ((((-1 < iVar3) && (iVar3 < *param_1)) && (-1 < iVar4)) &&
       (((iVar4 < param_1[1] && (-1 < param_4)) &&

        ((param_4 < 6 && (iVar2 = thunk_FUN_006a20e0(param_1,iVar3,iVar4,param_4,0xff), iVar2 != 0))
        )))) {

      iVar1 = thunk_FUN_006a1370(param_1,iVar3,iVar4,param_4,&local_10);

      local_EAX_119 = thunk_FUN_006a24e0((ushort *)&local_10,(short)iVar1,param_5,param_4,0xff);
      if (local_EAX_119 != 0) {
        thunk_FUN_006a3930(param_1,iVar3,iVar4,param_4,param_5,param_6,param_7);
      }
    }
    local_8 = local_8 + 2;
  } while ((int)local_8 < 0x7dfb94);
  return 1;
}

