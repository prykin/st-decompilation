#include "../../pseudocode_runtime.h"


int FUN_00747245(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;

  if (param_2 == nullptr) {
    iVar1 = -0x7fffbffd;
  }
  else {
    this = (void *)Library::MSVCRT::FUN_0072e530(0x30);
    if (this == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = FUN_0074756b(this,(AnonShape_0074756B_58F08DE7 *)(param_1 + -0xc));
    }
    *param_2 = puVar2;
    iVar1 = (-(uint)(puVar2 != nullptr) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}

