#include "../../pseudocode_runtime.h"


undefined4 __thiscall AiTactClassTy::FUN_0068e730(AiTactClassTy *this,int param_1)

{
  AiTactClassTy_field_00A5DArray *pAVar1;
  uint uVar2;
  AiTactClassTy_field_00A5Element *element_00a5;

  if (param_1 == 0) {
    return 0xfffffffc;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = thunk_FUN_0068e140(this,*(int *)(param_1 + 0x18));
  if ((int)uVar2 < 0) {
    return 0xfffffffc;
  }
  pAVar1 = this->field_00A5;
  if (uVar2 < pAVar1->count) {
    element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar1, uVar2);
  }
  else {
    element_00a5 = nullptr;
  }
  element_00a5->field_0004 = 0;
  element_00a5->field_0000 = 0;
  /* ST_CALLSITE[0068E78F]: CALL 0x00405957; direct=00405957 AiTactClassTy::BackFromRepair */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  BackFromRepair(this,*(short *)(param_1 + 0x7d));
  thunk_FUN_0065d590(param_1);
  return 0;
}

