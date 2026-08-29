#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00697160(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  ulonglong local_c;
  thunk_FUN_006a1370(STField<int *>(this,8),param_1,param_2,param_3,
                     (RecoveredRecord_006A1370_30F34641 *)&local_c);
  if (((STPiece<4,4>(local_c) & 0x2000) == 0) || (uVar1 = 1, (STPiece<4,4>(local_c) & 0xf) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

