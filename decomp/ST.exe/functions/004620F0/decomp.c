#include "../../pseudocode_runtime.h"


int __fastcall FUN_004620f0(STBoatC *param_1)

{
  STBoatC_field_082EState SVar1;
  int iVar1;
  int iVar2;

  if (param_1->field_047B != nullptr) {
    DArrayDestroy(param_1->field_047B);
    param_1->field_047B = nullptr;
  }
  SVar1 = param_1->field_082E;
  if (((SVar1 != CASE_FFFFFFFF) && (SVar1 != ~CASE_FFFFFFFF)) && (SVar1 != CASE_2)) {
    /* ST_CALLSITE[0046212A]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    iVar1 = STBoatC::sub_00460360(param_1);
    return iVar1;
  }
  /* ST_CALLSITE[00462138]: CALL dword ptr [EDX + 0xd8] */
  iVar2 = param_1->vfunc_D8();
  if (iVar2 != 0) {
    return -1;
  }
  return 0;
}

