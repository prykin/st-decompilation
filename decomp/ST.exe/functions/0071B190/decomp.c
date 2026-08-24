#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0001 (ST_OBJECT_TYPE_0001).
   Evidence: exact registry pointer; create function first */

void * __cdecl FUN_0071b190(void)

{
  uint *puVar1;
  puVar1 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x90);
  if (puVar1 != nullptr) {
    puVar1 = FUN_0071b1b0(puVar1);
    return puVar1;
  }
  return nullptr;
}

