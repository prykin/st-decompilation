#include "../../pseudocode_runtime.h"


int __cdecl FUN_00709990(AnonShape_00709990_0FAEF1E0 *param_1,int param_2,uint *param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  byte local_34 [41];
  int local_b;

  *param_3 = 0xffffffff;
  param_1->field_0004->iteratorIndex = 0;
  uVar2 = DArrayGetNext(param_1->field_0004,local_34);
  while( true ) {
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (local_b == param_2) break;
    uVar2 = DArrayGetNext(param_1->field_0004,local_34);
  }
  *param_3 = uVar2;
  pDVar1 = param_1->field_0004;
  if (uVar2 < pDVar1->count) {
    return (int)DArrayAt<void>(pDVar1, uVar2);
  }
  return 0;
}

