#include "../../pseudocode_runtime.h"


int __fastcall FUN_0065dc00(AiFltClassTy *param_1,undefined4 param_2,uint param_3,char param_4)

{
  char cVar1;
  DArrayTy *array;
  dword dVar2;
  ushort *puVar3;
  STGameObjC *this;
  int iVar4;
  IMAGE_DOS_HEADER *pIVar5;
  uint uVar6;
  int local_8;

  local_8 = 0;
  array = (DArrayTy *)AiFltClassTy::sub_0065DA10(param_1,param_2);
  if (array != (DArrayTy *)0x0) {
    cVar1 = param_1->field_0081;
    if ((cVar1 < '\0') || ('\a' < cVar1)) {
      cVar1 = (char)param_1->field_0024;
    }
    if ((param_4 != '\b') && ((param_4 < '\0' || (cVar1 = param_4, '\b' < param_4)))) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = -1;
      cVar1 = param_4;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = cVar1;
    dVar2 = array->count;
    uVar6 = 0;
    if (0 < (int)dVar2) {
      do {
        if (uVar6 < dVar2) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar6) (runtime stride) */
          puVar3 = (ushort *)(array->elementSize * uVar6 + (int)array->data);
        }
        else {
          puVar3 = (ushort *)0x0;
        }
        this = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&param_1->field_0024,*puVar3,CASE_1);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (((this != (STGameObjC *)0x0) && (iVar4 = this->vfunc_F8(), iVar4 != 0))
           && ((param_4 < '\0' || (iVar4 = this->vfunc_6C(), param_4 == iVar4)))) {
          iVar4 = (*this->vtable->vfunc_2C)();
          pIVar5 = thunk_FUN_00674fb0(iVar4);
          if ((param_3 & (uint)pIVar5) != 0) {
            local_8 = local_8 + 1;
          }
        }
        dVar2 = array->count;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar2);
    }
    DArrayDestroy(array);
    return local_8;
  }
  return 0;
}

