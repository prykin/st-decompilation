#include "../../pseudocode_runtime.h"


int FUN_0069ac20(int param_1,int param_2,int param_3,DArrayTy *param_4)

{
  dword dVar1;
  int iVar3;
  short *psVar4;
  int iVar2;
  uint uVar5;
  int local_8;

  iVar3 = 0xff;
  local_8 = 0xff;
  if (param_4 != nullptr) {
    dVar1 = param_4->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      while( true ) {
        if (uVar5 < param_4->count) {
          psVar4 = DArrayAt<short>(param_4, uVar5);
        }
        else {
          psVar4 = nullptr;
        }
        iVar2 = FUN_006acf90((int)*psVar4,(int)psVar4[1],param_1,param_2);
        if (iVar2 < param_3) break;
        if (iVar2 < local_8) {
          local_8 = iVar2;
        }
        uVar5 = uVar5 + 1;
        if ((int)dVar1 <= (int)uVar5) {
          return local_8;
        }
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}

