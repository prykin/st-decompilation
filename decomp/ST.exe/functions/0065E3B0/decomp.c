#include "../../pseudocode_runtime.h"


int __fastcall FUN_0065e3b0(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;
  ushort *puVar1;
  STGameObjC *this;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int local_8;

  uVar3 = 0;
  local_8 = 0;
  array = (DArrayTy *)AiFltClassTy::sub_0065DA10((AiFltClassTy *)param_1,param_2);
  if (array != nullptr) {
    if (0 < (int)array->count) {
      bVar4 = array->count != 0;
      do {
        if (bVar4) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar3) (runtime stride) */
          puVar1 = (ushort *)(array->elementSize * uVar3 + (int)array->data);
        }
        else {
          puVar1 = nullptr;
        }
        this = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,param_1->field_0024,*puVar1,CASE_1);
        if (this != nullptr) {
          iVar2 = this->vfunc_D4();
          local_8 = local_8 + iVar2;
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < array->count;
      } while ((int)uVar3 < (int)array->count);
    }
    DArrayDestroy(array);
    return local_8;
  }
  return 0;
}

