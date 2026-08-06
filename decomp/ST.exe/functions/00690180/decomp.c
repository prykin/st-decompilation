#include "../../pseudocode_runtime.h"


int __thiscall FUN_00690180(void *this,uint param_1,uint *param_2)

{
  int iVar2;
  int iVar1;

  iVar2 = STField<int>(this,0xa5);
  if (((iVar2 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)*(uint *)(iVar2 + 0xc))) {
    if (param_1 < *(uint *)(iVar2 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(iVar2 + 8) * param_1 + *(int *)(iVar2 + 0x1c);
    }
    else {
      iVar2 = 0;
    }
    if (*(AiFltClassTy **)(iVar2 + 4) != nullptr) {
      iVar1 = AiFltClassTy::GetAiMess(*(AiFltClassTy **)(iVar2 + 4),param_2);
      return iVar1;
    }
  }
  return -4;
}

