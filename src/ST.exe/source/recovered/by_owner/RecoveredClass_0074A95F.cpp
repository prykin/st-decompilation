#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/RecoveredClass_0074A95F.cpp

// 0074A95F RecoveredClass_0074A95F::FUN_0074a95f
#line 4 "decomp/ST.exe/functions/0074A95F/decomp.c"
undefined4 * __thiscall
st::fn_0074A95F
          (RecoveredClass_0074A95F *this,int param_1,undefined4 param_2,short *param_3)

{
  st::fn_0074857E(this,0,param_1,param_1 + 0x7c,param_2,param_3);
  this->field_00D8 = param_1;
  this->field_0000 = &st_global_007A1510;
  this->field_000C = st::machine_word_boundary_cast<undefined4>(&st_global_007A14C8);
  this->field_0010 = st::machine_word_boundary_cast<undefined4>(&st_global_007A14B0);
  this->field_0098 = st::machine_word_boundary_cast<undefined4>(&st_global_007A1488);
  return (undefined4 *)&this->field_0000;
}

