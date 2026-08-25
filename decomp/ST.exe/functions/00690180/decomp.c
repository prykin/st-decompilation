#include "../../pseudocode_runtime.h"


int __thiscall FUN_00690180(void *this,uint param_1,uint *param_2)

{
  int iVar2;
  int iVar1;

  iVar2 = STField<int>(this,0xa5);
  if (((iVar2 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)STField<uint>(iVar2,0xC))) {
    if (param_1 < STField<uint>(iVar2,0xC)) {
      iVar2 = STField<int>(iVar2,0x8) * param_1 + STField<int>(iVar2,0x1C);
    }
    else {
      iVar2 = 0;
    }
    if (*(AiFltClassTy **)(iVar2 + 4) != nullptr) {
      /* ST_CALLSITE[006901B7]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
      iVar1 = AiFltClassTy::GetAiMess(*(AiFltClassTy **)(iVar2 + 4),param_2);
      return iVar1;
    }
  }
  return -4;
}

