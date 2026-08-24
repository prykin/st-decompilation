#include "../../pseudocode_runtime.h"


int FUN_0074823a(int param_1,undefined4 *param_2)

{
  int iVar1;
  RecoveredClass_00747874 *this;
  uint *puVar2;
  if (param_2 == nullptr) {
    iVar1 = -0x7fffbffd;
  }
  else {
    this = (RecoveredClass_00747874 *)Library::MSVCRT::FUN_0072e530(0x14);
    if (this == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = RecoveredClass_00747874::FUN_00747874
                         (this,(AnonShape_00747874_535F3AAD *)(param_1 + -0xc));
    }
    *param_2 = puVar2;
    iVar1 = (-(uint)(puVar2 != nullptr) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}

