#include "../../pseudocode_runtime.h"


int __thiscall FUN_006151e0(void *this,undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;

  iVar1 = thunk_FUN_00614ee0(this,(int)param_1,param_2,param_3,param_4);
  if (0 < iVar1) {
    if (((param_1 != (undefined4 *)(STField<int>(this,0x2d5) + -3)) || (iVar1 != 2)) &&
       ((param_1 != (undefined4 *)(STField<int>(this,0x2d5) + -2) || (iVar1 < 1)))) {
      return 0;
    }
    uVar2 = thunk_FUN_00614c80(this,(int)param_1,(int)STField<short>(this,0x25a),
                               (int)STField<short>(this,0x25c),(int)STField<short>(this,0x25e)
                               ,(int)STField<short>(this,0x2cb),
                               (int)STField<short>(this,0x2cd),(int)STField<short>(this,0x2cf)
                               ,0,0,0);
    if (uVar2 != 0) {
      STField<int>(this,0x27c) =
           (((int)STField<short>(this,0x2cb) - (int)STField<short>(this,0x25a)) * 10000) /
           (int)uVar2;
      STField<int>(this,0x280) =
           (((int)STField<short>(this,0x2cd) - (int)STField<short>(this,0x25c)) * 10000) /
           (int)uVar2;
      STField<int>(this,0x284) =
           (((int)STField<short>(this,0x2cf) - (int)STField<short>(this,0x25e)) * 10000) /
           (int)uVar2;
      *(uint *)(STField<int>(this,0x2dd) + 8 + (int)param_1 * 0x1c) = uVar2;
      *(undefined4 *)(STField<int>(this,0x2dd) + 0x18 + (int)param_1 * 0x1c) = 8;
      STField<undefined1>(this,0x2ea) = 1;
    }
  }
  return iVar1;
}

