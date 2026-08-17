#include "../../pseudocode_runtime.h"


undefined4 __thiscall
STManRuinC::FUN_00631190
          (STManRuinC *this,uint param_1,short param_2,short param_3,short param_4,int param_5,
          undefined4 param_6,int param_7)

{
  STManRuinC_field_0038DArray *pSVar1;
  ushort *puVar2;
  STManRuinC_field_0038Element *element_0038;

  pSVar1 = this->field_0038;
  if (param_1 < pSVar1->count) {
    element_0038 = DArrayAt<STManRuinC_field_0038Element>(pSVar1, param_1);
  }
  else {
    element_0038 = nullptr;
  }
  /* ST_CALLSITE[006311CA]: CALL 0x00401d57; direct=00401D57 STManRuinC::sub_00630BB0 */
  sub_00630BB0(this,param_2,param_3,param_4,param_6,param_5,param_7);
  /* ST_CALLSITE[006311DE]: CALL 0x00405c9f; direct=00405C9F STManRuinC::sub_00630C50 */
  puVar2 = sub_00630C50(this,param_6,param_5,0,1,param_7);
  element_0038->field_0010 = puVar2;
  if (puVar2 != nullptr) {
    return 1;
  }
  return 0;
}

