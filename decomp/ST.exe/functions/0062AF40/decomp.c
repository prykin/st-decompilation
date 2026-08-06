#include "../../pseudocode_runtime.h"


void __thiscall FUN_0062af40(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;

  puVar1 = Library::DKW::LIB::MemAlloc(0xd7);
  *param_1 = 0;
  if (puVar1 != nullptr) {
    puVar3 = puVar1;
    for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *(undefined4 *)this;
      this = (undefined4 *)((int)this + 4);
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = *(undefined2 *)this;
    STField<undefined1>(puVar3,2) = STField<undefined1>(this,2);
    puVar1[3] = 2;
    *param_1 = 0xd7;
  }
  return;
}

