#include "../../pseudocode_runtime.h"


void FUN_006b0060(uint *param_1,uint *param_2)

{
  DArrayTy *pDVar1;
  uint uVar2;
  uint *puVar4;
  uint *puVar5;

  pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)param_1,param_2[4],param_2[2],param_2[5]);
  if (pDVar1 == (DArrayTy *)0x0) {
    return;
  }
  pDVar1->flags = pDVar1->flags | *param_2;
  uVar2 = pDVar1->elementSize * param_2[3];
  pDVar1->count = param_2[3];
  puVar4 = param_2 + 7;
  puVar5 = pDVar1->data;
  memmove(puVar5, puVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

