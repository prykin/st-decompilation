#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/MMsgTy.cpp

// 005B8F40 MMsgTy::FUN_005b8f40
#line 4 "decomp/ST.exe/functions/005B8F40/decomp.c"
void __thiscall st::fn_005B8F40(MMsgTy *this,undefined4 *param_1)

{
  if (param_1 != nullptr) {
    this->field_1C9C = *param_1;
    this->field_1CA0 = param_1[1];
    this->field_1CA4 = param_1[2];
    this->field_1CA8 = ((undefined1 *)param_1)[3];
    /* ST_CALLSITE[005B8F6D]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
    st::fn_00401FA5(this,1,0,0);
  }
  return;
}
