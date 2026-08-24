#include "../../pseudocode_runtime.h"


undefined4 * __thiscall
RecoveredClass_0074A95F::FUN_0074a95f
          (RecoveredClass_0074A95F *this,int param_1,undefined4 param_2,short *param_3)

{
  FUN_0074857e(this,0,param_1,param_1 + 0x7c,param_2,param_3);
  this->field_00D8 = param_1;
  this->field_0000 = &VTable_007A1510;
  this->field_000C = &VTable_007A14C8;
  this->field_0010 = &VTable_007A14B0;
  this->field_0098 = &VTable_007A1488;
  return &this->field_0000;
}

