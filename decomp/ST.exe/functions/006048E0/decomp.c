#include "../../pseudocode_runtime.h"


int __fastcall FUN_006048e0(AnonShape_006048E0_C1705B76 *param_1)

{
  uint index;
  DArrayTy *pDVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  if ((param_1->field_0215 != (DArrayTy *)0x0) &&
     (index = param_1->field_0215->count, 0 < (int)index)) {
    while (index = index - 1, -1 < (int)index) {
      pDVar1 = param_1->field_0215;
      if (index < pDVar1->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, index) (runtime stride) */
        pvVar2 = (void *)(pDVar1->elementSize * index + (int)pDVar1->data);
      }
      else {
        pvVar2 = (void *)0x0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((*(int *)((int)pvVar2 + 0x10) == 10) &&
         (iVar3 = thunk_FUN_00604a00(param_1,*(int *)((int)pvVar2 + 0x14)), iVar3 != 0)) {
        iVar4 = iVar4 + 1;
      }
      DArrayRemoveAt(param_1->field_0215,index);
    }
  }
  return iVar4;
}

