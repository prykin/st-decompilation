#include "../../pseudocode_runtime.h"


int __fastcall FUN_004620f0(STBoatC *param_1)

{
  int iVar1;

  if (param_1->field_047B != nullptr) {
    DArrayDestroy(param_1->field_047B);
    param_1->field_047B = nullptr;
  }
  iVar1 = param_1->field_082E;
  if (((iVar1 != -1) && (iVar1 != 0)) && (iVar1 != 2)) {
    iVar1 = STBoatC::sub_00460360(param_1);
    return iVar1;
  }
  iVar1 = param_1->vfunc_D8();
  if (iVar1 != 0) {
    return -1;
  }
  return 0;
}

