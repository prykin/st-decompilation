#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_006a1eb0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  int iVar1;
  int local_EAX_102;
  int iVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  uint uVar6;
  RecoveredRecord_006A1370_30F34641 local_18;
  int *local_10;
  int local_c;
  int local_8;

  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {

    iVar1 = thunk_FUN_006a20e0(param_1,param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {

      local_EAX_102 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,&local_18);
      iVar1 = param_5;
      if ((short)local_EAX_102 != 0) {
        iVar1 = 0xff;
      }
      thunk_FUN_006a1410(param_1,param_2,param_3,(short)local_EAX_102,iVar1,param_7,param_8);
    }
    local_10 = &DAT_007df82c;
    do {
      uVar6 = local_10[-1] + param_2;
      iVar1 = *local_10 + param_3;
      local_8 = param_4;
      if ((int)(param_4 - ((param_6[2] & 0xf00) >> 8)) < param_4) {
        do {
          if (((-1 < (int)uVar6) && ((int)uVar6 < *param_1)) &&
             ((-1 < iVar1 && (((iVar1 < param_1[1] && (-1 < local_8)) && (local_8 < 6)))))) {

            iVar2 = thunk_FUN_006a1370(param_1,uVar6,iVar1,local_8,&local_18);
            local_c = (short)iVar2;
            iVar5 = param_5;
            if (local_c != 0) {
              iVar5 = 0xff;
            }

            iVar4 = thunk_FUN_006a20e0(param_1,uVar6,iVar1,local_8,iVar5);
            if (((iVar4 != 0) &&

                (iVar3 = thunk_FUN_006a24e0(param_6,param_4,(ushort *)&local_18,local_c,iVar5),
                iVar3 == 0)) &&
               (iVar5 = thunk_FUN_006a2920(param_1,uVar6,iVar1,local_c,iVar5,param_7,param_8),
               iVar5 == 0)) {
              return 0;
            }
          }
          local_8 = local_8 + -1;
        } while ((int)(param_4 - ((param_6[2] & 0xf00) >> 8)) < local_8);
      }
      local_10 = local_10 + 2;
    } while ((int)local_10 < 0x7df86c);
  }
  return 1;
}

