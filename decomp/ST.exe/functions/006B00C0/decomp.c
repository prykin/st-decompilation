#include "../../pseudocode_runtime.h"


uint * FUN_006b00c0(uint *param_1,uint *param_2,undefined *param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar4;
  uint *puVar5;
  uint *puVar6;

  pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)param_1,param_2[4],param_2[2],param_2[5]);
  if (pDVar1 == nullptr) {
    return nullptr;
  }
  pDVar1->flags = pDVar1->flags | *param_2 | 0x100;
  pDVar1->count = param_2[3];
  uVar2 = pDVar1->elementSize * pDVar1->count;
  pDVar1->growCallback = param_3;
  puVar5 = param_2 + 7;
  puVar6 = pDVar1->data;
  memmove(puVar6, puVar5, uVar2); /* compiler REP MOVS byte copy */
  iVar4 = pDVar1->capacity - pDVar1->count;
  if (iVar4 != 0) {
    /* ST_CALLSITE[006B012D]: CALL EDX */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)param_3)(pDVar1->data,pDVar1->count,iVar4);
  }
  return &pDVar1->flags;
}

