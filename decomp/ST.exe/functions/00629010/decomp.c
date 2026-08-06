#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] pointer_return_element_width target=return:-1: return=/uint *32
   Evidence: generic returned address is dereferenced with one consistent machine width across
   callers; width=4, sites=006041A0 @ 006041EA MOV dword ptr [EAX + 0xce],EBX | 00604EE0 @ 00604F2E
   MOV dword ptr [EAX + 0xce],EBX */

uint * FUN_00629010(void)

{
  undefined4 *puVar1;
  uint *puVar2;

  puVar1 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x108);
  if (puVar1 != nullptr) {
    puVar2 = thunk_FUN_00629040(puVar1);
    return puVar2;
  }
  return nullptr;
}

