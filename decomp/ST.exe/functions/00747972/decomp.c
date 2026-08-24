#include "../../pseudocode_runtime.h"


undefined4 FUN_00747972(AnonShape_00747F3B_C97131D7 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  RecoveredClass_00747874 *this;
  uint *puVar3;
  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = 0;
    iVar2 = FUN_00747f3b((AnonShape_00747AA5_87CB4B56 *)param_1);
    if (iVar2 == 1) {
      *param_2 = 0;
      uVar1 = 0x80040203;
    }
    else {
      this = (RecoveredClass_00747874 *)Library::MSVCRT::FUN_0072e530(0x14);
      if (this == nullptr) {
        puVar3 = nullptr;
      }
      else {
        puVar3 = RecoveredClass_00747874::FUN_00747874
                           (this,(AnonShape_00747874_535F3AAD *)param_1->field_0008);
      }
      *param_2 = puVar3;
      if (puVar3 == nullptr) {
        uVar1 = 0x8007000e;
      }
    }
  }
  return uVar1;
}

